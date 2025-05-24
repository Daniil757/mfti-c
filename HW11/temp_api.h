/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - Курсовая
 * @file temp_api.h
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

/**
 * @brief Статистика за требуемый месяц
 */
void print_stat_month();

/**
 * @brief Статистика за требуемый год
 */
void print_stat_year();
