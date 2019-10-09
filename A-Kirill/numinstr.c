#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    typedef const char* string;
    int n = 9999;
    string res1 = "", res2 = "", res3 = "", res4 = "", res5 = "";
    string chiliad = "";
    
    string units[] = {"", "один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять"};
    string decades[] = {"", "", "двадцать", "тридцать", "сорок", "пятьдесят", "шестьдесят", "семьдесят", "восемьдесят", "девяносто"};
    string hundred[] = {"", "сто", "двести", "триста", "четыреста", "пятьсот", "шестьсот", "семьсот", "восемьсот", "девятьсот"};
    string chiliads[] = {"", "одна", "две", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять"};
    string exceptions[] = {"десять", "одиннадцать", "двеннадцать", "триннадцать", "четырданцать", "пятнадцать", "шестнадцать", "семнадцать",
    "восемнадцать", "девятнадцать"};
    
    if (n < 1) {
        res1 = "ноль";
    } else
    
    if (n < 10) {
        res1 = units[n];
    } else
    
    if (n < 100) {
        if (n < 20 && n >= 10) {
            res1 = exceptions[n];
        } else {
            res1 = units[n % 10];
            res2 = decades[n / 10]; 
        }
    } else 
    
    if (n < 1000) {
        res3 = hundred[n / 100];
        n = n % 100;
        
        if (n < 20 && n >= 10) {
            res1 = exceptions[n];
        } else {
            res1 = units[n % 10];
            res2 = decades[n / 10]; 
        }
    } else
    
    if (n < 10000) {
        if (n / 1000 == 1) chiliad = "тысяча";
        if (n / 1000 > 1 && n / 1000 < 5) chiliad = "тысячи";
        if (n / 1000 > 4 && n / 1000 < 10) chiliad = "тысяч";
        
        res4 = chiliads[n / 1000];
        n = n % 1000;
        
        res3 = hundred[n / 100];
        n = n % 100;
        if (n < 20 && n >= 10) {
            res1 = exceptions[n];
        } else {
            res1 = units[n % 10];
            res2 = decades[n / 10]; 
        }
    }
    
    printf("%s %s %s %s %s", res4, chiliad, res3, res2, res1);

    _getche;
}
