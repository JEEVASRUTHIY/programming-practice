#include <stdio.h>
#include <string.h>
int main(){
    int n;
    char s[100];
    fgets(s,sizeof(s),stdin);
    n=strlen(s);
    for(int i=n-1;i>=0;i--){
        printf("%c",s[i]);
    }
    return 0;
}
