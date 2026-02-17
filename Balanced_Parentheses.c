#include <stdio.h>
#include <string.h>

#define MAX 100

int isbalanced(char expr[]);   // function declaration

int main() {
    char expr[MAX];

    scanf("%s", expr);   // removed &

    if(isbalanced(expr)){
        printf("Balanced");
    }
    else{
        printf("Imbalanced");
    }

    return 0;
}

int isbalanced(char expr[]){
    char stack[MAX];
    int top = -1;

    for(int i = 0; i < strlen(expr); i++){
        char ch = expr[i];

        if(ch=='(' || ch=='[' || ch=='{'){
            stack[++top] = ch;
        }
        else if(ch==')' || ch==']' || ch=='}'){
            if(top == -1){
                return 0;
            }

            if((ch==')' && stack[top]=='(') || 
               (ch==']' && stack[top]=='[') ||
               (ch=='}' && stack[top]=='{')){
                top--;
            }
            else{
                return 0;
            }
        }
    }

    return (top == -1);
}
