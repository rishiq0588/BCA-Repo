#include <stdio.h>
int main() {
  int choice;
  int amount;
  int useraccount;
  float balance=500;
  int accountno =1000;
  printf("Welcome to my bank");
  printf("1. Deposit");
  printf("2. Withdraw");
  printf("3. show account");
  printf("enter your choice: ");
  scanf("%d",&choice);
  switch(choice) {
    case 1:
    printf("enter your accountno");
    scanf("%d",&useraccount);
    if(useraccount==accountno){
        printf("valid accountno: ");
        printf("Enter deposit amount");
        scanf("%d",&amount);
        balance=balance+amount;
        printf("account updated your balance is %2f",balance);
    }
    else{
        printf("invalid account");
    }
    break;
    case 2:
     printf("enter your accountno");
    scanf("%d",&useraccount);
    if(useraccount==accountno){
        printf("valid accountno: ");
        printf("Enter withdraw amount");
        scanf("%d",&amount);
        if(amount<=balance){
         balance=balance-amount;
        printf("account updated your balance is %2f",balance);
        }
        else{
            printf("invalid account");
    }
        }
        break;
        case 3:
        printf(" account no \t|\tbalance\n");
        printf("%d\n\n|%f\n",accountno,balance);

  }

}



