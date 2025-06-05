#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio_ext.h>
typedef unsigned int UINT32_t;
typedef unsigned long long int ULLINT32_t;
#define MAX 10
extern int cnt;
extern ULLINT32_t AC_NUM;
extern UINT32_t Tran_id;
typedef struct Ac_trasactions
{
        UINT32_t transaction_id;
        UINT32_t Transaction_Amount;
        char type[20];
}Ac_transactions;
typedef struct Account
{
        ULLINT32_t Account_number;
        char Account_name[100];
        UINT32_t Account_balance;
        Ac_transactions Ac_Trans[MAX];
        UINT32_t Transaction_count;
        ULLINT32_t Contact_num;
        ULLINT32_t Aadhar_Num;
        char Pancard[20];
        UINT32_t pin;
        struct Account *next;

}BANK;
void Print_menu(void);
BANK * Create_Account(BANK *);
void Balance_Enquiry(BANK*);
BANK* Sync_File(BANK*);
void Deposite_Amount(BANK*);
void Transfer_Money(BANK*);
void Save_File(BANK*);
void Finding_specific(BANK*);
void Display_Ac(BANK*);
void Transaction_history(BANK*);
void* Delete_Account(BANK*);
void Update_Account(BANK *);
void Withdraw_Amount(BANK*);