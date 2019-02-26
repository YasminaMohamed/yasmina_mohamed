//* #mohamed youbacar yasmina

#include<stdio.h>
#include<cs50.h>
#include<string.h>
int main (void)

{
    int y=0;
int fivehu=500;
int twohuf=250;
int twohu=200;
int hundred=100;
int fifty=50;
int tfive=25;
int ten=10;
int five=5;
int one=1;

int sum=0;
do
{
    y= get_int ("cash : " );
}
while (y<0);
while (y>=fivehu)
{
    sum++;
    y=y-fivehu;
}

  while (y>=twohuf)
  {
    sum++;
    y=y-twohuf;
  }

 while (y>=twohu)
  {
    sum++;
    y=y-twohu;
  }

  while (y>=hundred)
  {
    sum++;
    y=y-hundred;
  }

   while (y>=fifty)
  {
    sum++;
    y=y-fifty;
  }

  while (y>=tfive)
  {
    sum++;
    y=y-tfive;
  }

  while (y>=ten)
  {
    sum++;
    y=y-ten;
  }

  while (y>=five)
  {
    sum++;
    y=y-five;
  }

  while (y>=one)
  {
    sum++;
    y=y-one;
  }

  printf("the max coins is %i :", sum);

}