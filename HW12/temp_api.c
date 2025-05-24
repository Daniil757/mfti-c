/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - Курсовая -
 * @file temp_functions.c
 * --------------------------------------
 */

#include "temp_api.h"

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int month = -1; // -1 = все месяцы

    for (int i = 1; i < argc; i++)
    {
        // ищем среди аргументов -h
        if (strcmp(argv[i], "-h") == 0)
        {
            print_help();
            return 0; // заканчиваем программу
        }
        // ищем среди аргументов -h
        else if (strcmp(argv[i], "-f") == 0)
        {
            // след аргумент после -f должен существовать, там должно быть имя
            if (i + 1 < argc)
            {
                i++; // пропускаем имя файла в цикле - уже вытащили
            }
            else
            {
                printf("Ожидалось имя файла");
                return 1; // нету имени файла - ошибка
            }
        }
        // ищем среди аргументов -m
        else if (strcmp(argv[i], "-m") == 0)
        {
            // след аргумент после -m должен существовать, там должен быть месяц
            if (i + 1 < argc)
            {
                month = atoi(argv[i + 1]);
                if (month < 1 || month > 12)
                {
                    printf("Неправильный месяц");
                    return 1;
                }
                i++; // пропускаем число месяца - уже обработали
            }
            else
            {
                printf("Ожидалось число месяца");
                return 1;
            }
        }
    }

    process_csv(month);
}

/**
 * @brief Функция по обработке CSV файла
 * @param month_filter - по какому месяцу фильтровать (-1 - все месяцы)
 */
void process_csv(int month_filter)
{
    int rec_count = 3;

    if (month_filter != -1)
    {
        printf("Фильтрация по месяцу: %d\n", month_filter);
    }

    char line[256];                                            // размер одной строки
    int capacity = 3;                                          // кол-во строк для начала
    StructCSV records[capacity]; 

    records[0].id = 1;
    records[0].year = 2021;
    records[0].month = 1;
    records[0].day = 16;
    records[0].hour = 1;
    records[0].minute = 23;
    records[0].temp = 12;

    records[1].id = 2;
    records[1].year = 2021;
    records[1].month = 2;
    records[1].day = 11;
    records[1].hour = 3;
    records[1].minute = 23;
    records[1].temp = -5;

    records[2].id = 3;
    records[2].year = 2021;
    records[2].month = 3;
    records[2].day = 11;
    records[2].hour = 3;
    records[2].minute = 23;
    records[2].temp = -9;

    if (month_filter != -1 && rec_count > 0)
    {
        print_stat_month(records[0].year, month_filter, records, &rec_count);
    }
    else
    {
        int min_year = records[0].year;
        int max_year = records[rec_count - 1].year;
        for (int i = 0; i < (max_year - min_year + 1); i++)
        {
            print_stat_year(min_year + i, records, &rec_count);
            for (int j = 1; j < 13; j++)
            {
                print_stat_month(min_year + i, j, records, &rec_count);
            }
        }
    }
}

/**
 * @brief Статистика за требуемый месяц
 * @param year - требуемый год
 * @param month - требуемый месяц
 * @param records - массив данных из csv типа StructCSV
 * @param rec_count - кол-во записей в records
 */
void print_stat_month(const int year, const int month, StructCSV *records, const int *rec_count)
{
    int capacity = 5;
    int filter_rec_count = 0;
    StructCSV *filter_rec = malloc(capacity * sizeof(StructCSV));
    TempStatRecord temp_stat = {0};

    for (int i = 0; i < *rec_count; i++)
    {
        if (records[i].year == year && records[i].month == month)
        {
            // проверяем память
            if (filter_rec_count >= capacity)
            {
                capacity *= 2;
                StructCSV *temp = realloc(filter_rec, capacity * sizeof(StructCSV));
                if (!temp)
                {
                    free(records);
                    fprintf(stderr, "Ошибка выделения памяти для filter_rec \n");
                    return;
                }
                filter_rec = temp;
            }
            filter_rec[filter_rec_count] = records[i];
            filter_rec_count++;
        }
    }
    if (filter_rec_count > 0)
    {
        printf("####################################\n");
        printf("#  Статистика за %d год %d месяц  #\n", year, month);
        printf("####################################\n");
        temp_stat.maxTemp = temp_stat.minTemp = filter_rec[0].temp;
        long long int sumTemp = 0;
        for (int i = 0; i < filter_rec_count; i++)
        {
            sumTemp += filter_rec[i].temp;
            temp_stat.minTemp = temp_stat.minTemp > filter_rec[i].temp ? filter_rec[i].temp : temp_stat.minTemp;
            temp_stat.maxTemp = temp_stat.maxTemp < filter_rec[i].temp ? filter_rec[i].temp : temp_stat.maxTemp;
        }
        temp_stat.avgTemp = (int)(sumTemp / filter_rec_count);
        printf("Среднемесяная температура:  %d°C\n", temp_stat.avgTemp);
        printf("Минимальная температура:    %d°C\n", temp_stat.minTemp);
        printf("Максимальная температура:   %d°C\n", temp_stat.maxTemp);
    }

    free(filter_rec);
}

/**
 * @brief Статистика за требуемый год
 * @param year - требуемый год
 * @param records - массив данных из csv типа StructCSV
 * @param rec_count - кол-во записей в records
 */
void print_stat_year(const int year, StructCSV *records, const int *rec_count)
{
    int capacity = 5;
    int filter_rec_count = 0;
    StructCSV *filter_rec = malloc(capacity * sizeof(StructCSV));
    TempStatRecord temp_stat = {0};

    for (int i = 0; i < *rec_count; i++)
    {
        if (records[i].year == year)
        {
            // проверяем память
            if (filter_rec_count >= capacity)
            {
                capacity *= 2;
                StructCSV *temp = realloc(filter_rec, capacity * sizeof(StructCSV));
                if (!temp)
                {
                    free(records);
                    fprintf(stderr, "Ошибка выделения памяти для filter_rec \n");
                    return;
                }
                filter_rec = temp;
            }
            filter_rec[filter_rec_count] = records[i];
            filter_rec_count++;
        }
    }

    printf("############################\n");
    printf("#  Статистика за %d год  #\n", year);
    printf("############################\n");
    temp_stat.maxTemp = temp_stat.minTemp = filter_rec[0].temp;
    for (int i = 0; i < filter_rec_count; i++)
    {
        temp_stat.avgTemp += filter_rec[i].temp;
        temp_stat.minTemp = temp_stat.minTemp > filter_rec[i].temp ? filter_rec[i].temp : temp_stat.minTemp;
        temp_stat.maxTemp = temp_stat.maxTemp < filter_rec[i].temp ? filter_rec[i].temp : temp_stat.maxTemp;
    }
    temp_stat.avgTemp = temp_stat.avgTemp / filter_rec_count;
    printf("Среднегодовая температура:  %d°C\n", temp_stat.avgTemp);
    printf("Минимальная температура:    %d°C\n", temp_stat.minTemp);
    printf("Максимальная температура:   %d°C\n", temp_stat.maxTemp);

    free(filter_rec);
}

/**
 * @brief Парсинг 1 строки из csv
 * @param line - массив из char для чтения
 * @param record - указатель на i элемент массива, в который надо будет записать строку
 */
int parse_csv_line(const char *line, StructCSV *record)
{
    return sscanf(line, "%d;%d;%d;%d;%d;%d",
                  &record->year,
                  &record->month,
                  &record->day,
                  &record->hour,
                  &record->minute,
                  &record->temp) == 6;
}

/**
 * @brief Вывод справки по программе
 */
void print_help()
{
    printf("Использование: program [options]\n");
    printf("Аргументы:\n");
    printf("  -h              Посмотреть текущее сообщение\n");
    printf("  -f <filename>   Выбор CSV файла для обработки\n");
    printf("  -m <month>      Выбор месяца для обработки (1-12)\n");
}