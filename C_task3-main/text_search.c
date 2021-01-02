#include <stdio.h>
#include <string.h>
#include "text_search.h"

int flag;
int getlines(char s[]){
        if(!flag){
    int c, i;
    int j = 0;
    for (int i = 0; (c = getchar()) != EOF && c != '\n' && c != '\r' ; ++i){
        if (i < LINE){
                 s[j++] = c;
        }
                }
    s[j] = '\0';
     if (c == EOF){
                        flag =1;
                }
               else{
                      flag =0;  
               } 
                return i;
        }
        else {
                return -1;
        }
}


int flag;
int getword(char w[]){
        if(!flag){
    int c, i;
    int j = 0;
    for (int i = 0; (c = getchar()) != EOF && c != '\n' && c != '\t' && c != ' ' && c != '\r' ; ++i)  {
        if (i < WORD){
                 w[j++] = c;
        } 
        else{
                break; 
        }   
    }
    w[j] = '\0';
     if (c == EOF){
                        flag =1;
               }
               else{
                  flag =0;     
               }
                
                return i;
        }
        else
        {
                return -1;
        }
}

/**
 * This function takes two str1 and str2 strings and checks if str2 is contained in s
 * **/
int substring(char *str1, char *str2){

        // Check if str2 is a substring of str

        if (!*str2) // empty string
                return 1;

        char *p1, *p2, *p3;
        int i=0,j=0;
        p1 = str1;
        p2 = str2;

        for(i = 0; i < strlen(str1); i++) {
                if(*p1 == *p2)   {
             
                        p3 = p1;
                        for(j = 0; j < strlen(str2); j++) {
                      
                                if(*p3 == *p2) {
                               
                                        p3++; p2++;
                                }
                                else
                                        break;
                        }
                        p2 = str2; // return to index 0 of str2
                        if(j == strlen(str2)){
                        
                                return 1;
                        }
                }
                p1++;
        }
        return 0; // Substring Not Founded
}

/**
 * This function prints the lines in which the recorded string is located
 **/
void print_lines(char* str){
        char line[LINE];
        while(getlines(line) != -1) {
                if(substring(line, str)) {
                        printf("%s\n",line);
                }
        }
}


/**
 * The function will get two strings t s and a number n. 
 * The function will check if it is possible to get from the string:
 *  S to the string t by omitting n characters.
**/
int similar(char *s, char *t, int n){
        while(*t && *s){
                // if s and t unequal
		if(*s != *t){ 
                // If we got to the amount of characters 
			if(n == 0){ 
				break;
			}
			else{ 
				--n;
			}
		}
                 // if s and t are equal
		else{
			++s;
		}
		++t;
	}
	if(!(*t) && !(*s)){
        //returns if the amount of characters n is equal to the length of t
		return n == strlen(t);
	}
	else if(*t){
		if(n > 0){
			//if t has not yet ended and the number of characters is greater than 0
			while(*t && 0 < n ){
				++t;
				--n;
			}
			return !(*t) && n == strlen(t);
		}
		else{ 
			return 0;
		}
	}
	else{ 
		return 0;
	}
}

/**
 * This function prints the words similar to a string captured by omitting 0 or 1 characters
 **/
void print_similar_words(char *str){
        char s_word[WORD];
        while(getword(s_word) !=-1) {
                if(similar(str,s_word,1) || similar(str,s_word,0)) {
                       printf("%s\n",s_word);     
                }
        }
                            

}

