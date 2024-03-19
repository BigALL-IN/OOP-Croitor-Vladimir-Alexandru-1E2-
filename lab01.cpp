/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    FILE* isread;
    char number[100];
    int new_numb = 0, S = 0;

    isread = fopen("in.txt", "r");
    if (isread == NULL)
    {
        cout << "Can't open the file.";
        return 1;
    }

    while (fgets(number, sizeof(number), isread) != NULL)
    {
        new_numb = 0;
        for (int i = 0; i < strlen(number); i++)
        {
            if (number[i] >= '0' && number[i] <= '9')
            {
                if (number[i] == '0') new_numb = new_numb * 10;
                if (number[i] == '1') new_numb = new_numb * 10 + 1;
                if (number[i] == '2') new_numb = new_numb * 10 + 2;
                if (number[i] == '3') new_numb = new_numb * 10 + 3;
                if (number[i] == '4') new_numb = new_numb * 10 + 4;
                if (number[i] == '5') new_numb = new_numb * 10 + 5;
                if (number[i] == '6') new_numb = new_numb * 10 + 6;
                if (number[i] == '7') new_numb = new_numb * 10 + 7;
                if (number[i] == '8') new_numb = new_numb * 10 + 8;
                if (number[i] == '9') new_numb = new_numb * 10 + 9;
            }
        }

        S += new_numb;
    }

    printf("%d", S);
    fclose(isread);

    return 0;
}*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS


int compare(const void* a, const void* b) {
    const char* word1 = *(const char**)a;
    const char* word2 = *(const char**)b;

    int diff = strlen(word2) - strlen(word1);
    if (diff == 0) {
        return strcmp(word1, word2);
    }
    return diff;
}

int main() {
    char sentence[1000];
    printf("Enter a sentence: ");
    scanf(" %[^\n]", sentence);

    char* words[100];
    char* token = strtok(sentence, " ");
    int num_words = 0;
    while (token != NULL) {
        words[num_words] = (char*)malloc(strlen(token) + 1);
        strcpy(words[num_words], token);
        token = strtok(NULL, " ");
        num_words++;
    }

    qsort(words, num_words, sizeof(char*), compare);

    printf("Sorted words (from longest to shortest):\n");
    for (int i = 0; i < num_words; i++) {
        printf("%s\n", words[i]);
        free(words[i]);
    }

    return 0;
}