#include<stdio.h>
#include<string.h>

void Next(char* T, int* next) {
    next[1] = 0;
    next[2] = 1;
    int i = 2;
    int j = 1;
    while (i < strlen(T)) {
        if (j == 0 || T[i - 1] == T[j - 1]) {
            i++;
            j++;
            if (T[i - 1] != T[j - 1]) {
                next[i] = j;
            }
            else {
                next[i] = next[j];
            }
        }
        else {
            j = next[j];
        }
    }
}

int KMP(char* S, char* T) {
    int next[10];
    Next(T, next);
    int i = 1;
    int j = 1;
    while (i <= strlen(S) && j <= strlen(T)) 
    {
        if (j == 0 || S[i - 1] == T[j - 1]) {
            i++;
            j++;
        }
        else {
            j = next[j];
        }
    }
    if (j > strlen(T)) 
    {
        return i - (int)strlen(T);
    }
    return -1;
}

int main() {
    char str1[] = "ababcabcacbab";
    char str2[] = "abcac";
    int i = KMP(str1,str2);
    printf("%d", i);
    return 0;
}