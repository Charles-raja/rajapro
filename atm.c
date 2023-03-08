#include<stdio.h>
int main()
{
  char a[2];
  long int pin;
  long int amount,temp = 0;
  printf("are you insert your atm card(y/n)\n");
  scanf("%s",&a[0]);
 reenter:
  if (a[0] == 'y')
  {
  	printf("enter your pin number\n");
  	scanf("%d",&pin);

  	if (pin == 1000)
  	  {

  	  	printf("enter amount:\n");
  	  	scanf("%ld",&amount);
  	  	temp+=amount;
        printf("your debited amount is:%ld \n",amount);
        printf("do you want to continue(y/n):");
        scanf("%s",&a[1]);
        if(a[1]=='y')
        {
          if(temp<10000)
            goto reenter;
          else
            printf("maximum limit reached\n");
        }
        printf("\n exit");
        }

  	else
        {
     	printf("%d is wrong pin number\n",pin);
     	printf("reenter your pin");
      printf("\n");
      goto reenter;


       }
  }
  else
  {
  	printf("atm card is not inserted\n");
  	printf("reinsert ypur atm card");
  	 }
  return 0;
}
