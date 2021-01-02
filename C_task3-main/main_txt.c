#include <stdio.h>
#include "text_search.h"

int main() {
    char word[WORD] = {};
    int option = 'a';
    getword(word);
    option = getchar();
    switch(option){
        case 'a':
            print_lines(word);
            break;
        case 'b':
            print_similar_words(word);
            break;
        default:
          printf("Invaild option\n");
            break;
    }
    return 0;
}
