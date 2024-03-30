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