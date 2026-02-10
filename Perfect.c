// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int n;
  scanf("%d",&n);
  int sum=0;
  for(int i=1;i<=n/2;i++){
      if(n%i==0){
      sum=sum+i;
      }
  }
if(sum==n && n!=0){
    printf("Perfect");
}
else{
    printf("Not perfect ");
}
    return 0;
}
