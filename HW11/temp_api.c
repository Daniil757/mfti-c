/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - Курсовая -
 * @file temp_api.c
 * --------------------------------------
 */

#include "temp_api.h"

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    print_stat_month();
    print_stat_year();
}

/**
 * @brief Статистика за требуемый месяц
 */
void print_stat_month()
{
    printf("####################################\n");
    printf("#  Статистика за 2021 год 1 месяц  #\n");
    printf("####################################\n");

    printf("Среднемесяная температура:  1°C\n");
    printf("Минимальная температура:    -6°C\n");
    printf("Максимальная температура:   7°C\n");
}

/**
 * @brief Статистика за требуемый год
 */
void print_stat_year()
{
    printf("############################\n");
    printf("#  Статистика за 2021 год  #\n");
    printf("############################\n");

    printf("Среднегодовая температура:  -2°C\n");
    printf("Минимальная температура:    -10°C\n");
    printf("Максимальная температура:   12°C\n");
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