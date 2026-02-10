// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int n;
  scanf("%d",&n);
  int flag=1;
  
  for(int i=2;i<=n/2;i++){
      if(n%i==0){
          flag=0;
          break;
      }
  }
  if(flag==1){
      printf("%s","Prime");
  }
  else{
      printf("%s","Composite");
  }

    return 0;
}
