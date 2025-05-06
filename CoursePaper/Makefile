# Определение компилятора
CC = gcc

# Флаги компиляции
CFLAGS = -Wall -Wextra -std=c11

# Имя исполняемого файла
TARGET = program

# Исходные файлы
SRCS = temp_functions.c

# Сборка программы
all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)

# Очистка (удаление скомпилированного файла)
clean:
	rm -f $(TARGET)

# Установка (если нужно)
install: $(TARGET)
	cp $(TARGET) /usr/local/bin/

# Справка по целям Makefile
help:
	@echo "Доступные команды:"
	@echo "  make       - собрать программу"
	@echo "  make clean - удалить скомпилированную программу"
	@echo "  make help  - показать эту справку"