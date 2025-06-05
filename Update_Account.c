#include"my_header.h"
void Update_Account(BANK *head)
{
        BANK *temp;
        char ch;
        if(head==NULL)
        {
                printf("Data is empty:\n");
                return;
        }
        ULLINT32_t Ac_num;
        printf("Enter Account Number to update your details:");
        scanf("%lld",&Ac_num);
        temp=head;
        while(temp)
        {
                if(temp->Account_number==Ac_num)
                {
                        break;
                }
                temp=temp->next;
        }
        if(temp==NULL)
        {
                printf("Account not found:\n");
                return ;
        }
        else
        {
                printf("Enter choice a/A:Add Aadhar p/P:Add Pancard Number m/M:contact number n/N:Account_name R/r:reset your password:");
                __fpurge(stdin);
                scanf("%c",&ch);
                switch(ch)
                {
                        case 'n':case 'N':printf("Enter a name to modify:");
                                                __fpurge(stdin);
                                                fgets(temp->Account_name,100,stdin);
                                                if(temp->Account_name[strlen(temp->Account_name)-1]=='\n')
                                                {
                                                        temp->Account_name[strlen(temp->Account_name)-1]='\0';
                                                }
                                                break;
                        case 'm':case 'M':printf("Enter new contact number to modify:");
                                        scanf("%lld",&temp->Contact_num);
                                        break;
                        case 'r':case 'R':printf("Enter new password:");
                                        scanf("%u",&temp->pin);
                                        break;
                        case 'A':case 'a':printf("Enter your Aadhar Number:");
                                        scanf("%lld",&temp->Aadhar_Num);
                                        break;
                        case 'p':case 'P':printf("Enter pan card Number:");
                                        __fpurge(stdin);
                                        fgets(temp->Pancard,20,stdin);
                                        if(temp->Pancard[strlen(temp->Pancard)-1]=='\n')
                                        {
                                                temp->Pancard[strlen(temp->Pancard)-1]='\0';
                                        }
                                        break;
                }
        }
}