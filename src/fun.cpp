// Copyright 2022 UNN-IASR
#include "fun.h"
#include <math.h>
#include <iostream>
#include <cstring>

unsigned int faStr1(const char *str) {
  int countofwords = 0;
    bool number = false;
    bool symbol = false;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ' ' && !symbol) {
            symbol = true;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            number = true;
        }
        if (str[i] == ' ' && symbol && !number) {
            symbol = false;
            countofwords++;
        }
        else if (str[i] == ' ' && symbol) {
            symbol = false;
            number = false;
        }
    }
    if (symbol && !number) {
        countofwords++;
    }
    return countofwords;
}

unsigned int faStr2(const char *str) {
    return 0;
}

unsigned int faStr3(const char *str) {
    return 0;
}
