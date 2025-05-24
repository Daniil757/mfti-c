/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - Курсовая
 * @file temp_functions.h
 * --------------------------------------
 */

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"
#include "locale.h"

// структура данных одной строки из csv (кроме id)
typedef struct
{
    int id;     //--> Идентификатор записи
    int year;   //--> Год 
    int month;  //--> Месяц
    int day;    //--> День
    int hour;   //--> Час
    int minute; //--> Минуты
    int temp;   //--> Температура
} StructCSV;

// структура данных для вывода статистики по году/месяцу
typedef struct
{
    int avgTemp;    //--> Средняя температура в периоде
    int minTemp;    //--> Минимальная температура в периоде
    int maxTemp;    //--> Максимальная температура в периоде
} TempStatRecord;


/**
 * @brief Функция по обработке CSV файла
 * @param month_filter - по какому месяцу фильтровать (-1 - все месяцы)
 */
void process_csv(int month_filter);

/**
 * @brief Статистика за требуемый месяц
 * @param year - требуемый год
 * @param month - требуемый месяц
 * @param records - массив данных из csv типа StructCSV
 * @param rec_count - кол-во записей в records
 */
void print_stat_month(const int year, const int month, StructCSV *records, const int *rec_count);

/**
 * @brief Статистика за требуемый год
 * @param year - требуемый год
 * @param records - массив данных из csv типа StructCSV
 * @param rec_count - кол-во записей в records
 */
void print_stat_year(const int year, StructCSV *records, const int *rec_count);

/**
 * @brief Парсинг 1 строки из csv
 * @param line - массив из char для чтения
 * @param record - указатель на i элемент массива, в который надо будет записать строку
 */
int parse_csv_line(const char* line, StructCSV* record);

/**
 * @brief Вывод справки по программе
 */
void print_help();