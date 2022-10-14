#include <stdio.h>
void reverseSentence(){
    char c;
    scanf("%c",&c);
    if(c != '\n' && c != '0'){ 
    reverseSentence();
        printf("%c",c);
    }
}
int main() {
reverseSentence();
    return 0;
}