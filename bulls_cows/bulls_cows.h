#ifndef BULLS_COWS_H
#define BULLS_COWS_H

#include <string>

using namespace std;

// Генерация секретного числа из 4 различных цифр
string generateSecret();

// Проверка корректности ввода (4 цифры, все разные)
bool isValidGuess(const string& guess);

// Подсчет быков (цифра на своем месте)
int countBulls(const string& secret, const string& guess);

// Подсчет коров (цифра есть, но не на своем месте)
int countCows(const string& secret, const string& guess);

// Основная функция игры
void playGame();

#endif
