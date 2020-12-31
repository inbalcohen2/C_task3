

#ifndef TEXT_SEARCH_H
#define TEXT_SEARCH_H
#define LINE 256
#define WORD 30

int getlines(char s[]);
int getword(char w[]);
int substring(char *str1, char *str2);
int similar(char *s, char *t, int n);
void print_lines(char *str);
void print_similar_words(char *str);

#endif //HW3_TEXT_SEARCH_H
