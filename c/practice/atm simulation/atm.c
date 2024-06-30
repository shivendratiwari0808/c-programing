#include <stdio.h>

#define MAX_USERS 10
#define MAX_TRANSACTIONS 100
#define p printf
#define s scanf

// Arrays to store user data and transactions
int accountNumbers[MAX_USERS]={9876};
int pins[MAX_USERS]={5678};
float balances[MAX_USERS]={500};
int numUsers = 0;

int transactionAccountNumbers[MAX_TRANSACTIONS];
char transactionTypes[MAX_TRANSACTIONS]; // 'W' for withdrawal, 'D' for deposit
float transactionAmounts[MAX_TRANSACTIONS];
int numTransactions = 0;

int main() {
    int ac,pn,op,a;
    tiwari :
        p("1.login\n");
        p("2.exit\n");
        p("select your option :");
        s("%d",&op);
        if(op==1){
    p("enter the account number :");
    s ("%d",&ac);
    p("enter PIN :");
    s("%d",&pn);
    if(ac==accountNumbers[0]&&pn==pins[0]){
        shivendra:
        p("Welcome, User %d\n",accountNumbers[0]);
        p("1.Check Balance\n");
        p("2. Withdraw\n");
        p("3. Deposit\n");
        p("4. Logout\n");
        p("Enter your choice: ");
        s("%d",&op);
       switch(op){
           case 1 : { p("your balance :%.2f\n ",balances[0]);
                        p("\n");
                        goto shivendra;
                        break;
                    }
           case 2 : { p("Enter withdrawal amount: ");
                      s("%d",&a);
                      balances[0]=balances[0]-a;
                      p("Withdrawal successful");
                      goto shivendra;
                      break ;
                    }
           case 3 : { p("Enter Deposit amount: ");
                      s("%d",&a);
                      balances[0]=balances[0]+a;
                      p("Deposit successful");
                      goto shivendra;
                      break ;
                    }  
           case 4 : goto tiwari;            
       }
    }
    else p("Invalid account number or PIN");
        }
        else p("Exiting ATM simulation");
		return 0;
}
