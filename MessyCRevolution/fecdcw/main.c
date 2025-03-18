#include <stdio.h>
#include <stdlib.h>
int showme(int x){
return 5+x;

}
int sumnumbers(int x, int y){
int sum=0;
sum=x+y;
return sum;
}
int main()
{
 int mynumber=sumnumbers(12,5);
 printf("result is %d\n",mynumber);

 return 0;
}
