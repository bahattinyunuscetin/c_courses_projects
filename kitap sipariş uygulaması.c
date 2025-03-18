#include <stdio.h>
#include <stdlib.h>

int main()
{
  int bookprice,orderquantity;
  float discountrate,nodiscountprice,discountprice,sum;
  bookprice=20;
  orderquantity=0; //sipariþ miktarý

  printf("do you want to order how much books:");
  scanf("%d",&orderquantity);
  if(orderquantity>=60){
    discountrate=0.30;

  }else{
  if(orderquantity>=30 && orderquantity <60){
    discountrate=0.20;

  }else if(orderquantity>=10 && orderquantity<30){
  discountrate=0.12;

  }else{
  discountrate=0.01;
  }
  }
    nodiscountprice=orderquantity*bookprice;
    discountprice=orderquantity*bookprice*discountrate;
    sum=nodiscountprice-discountprice;
    printf("your books is nodiscountprice:%f \n",nodiscountprice);

    printf("your discount amount:%f\n",discountprice);
    printf("your discount price:%2f",sum);
    return 0;
}
