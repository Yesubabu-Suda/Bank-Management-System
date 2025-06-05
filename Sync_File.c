#include"my_header.h"
BANK * Sync_File(BANK *head)
{
        int size=sizeof(BANK)-sizeof(BANK*);
        BANK var,*node,*temp;
        int i;
        FILE*fp;
        fp=fopen("MY_BANK.txt","r");
        if(fp)
        {
        while(fread(&var,size,1,fp))
        {
                node=calloc(1,sizeof(BANK));
                node->Account_number = var.Account_number;
        strcpy(node->Account_name, var.Account_name);
        node->Account_balance = var.Account_balance;
        for(i=0;i<var.Transaction_count;i++)
        {
        node->Ac_Trans[i].transaction_id = var.Ac_Trans[i].transaction_id;
        node->Ac_Trans[i].Transaction_Amount = var.Ac_Trans[i].Transaction_Amount;
        strcpy(node->Ac_Trans[i].type, var.Ac_Trans[i].type);
        Tran_id=++var.Ac_Trans[i].transaction_id;
        }
        node->Transaction_count = var.Transaction_count;
        node->Contact_num = var.Contact_num;
        node->pin=var.pin;
        node->Aadhar_Num=var.Aadhar_Num;
        strcpy(node->Pancard,var.Pancard);
        AC_NUM=++var.Account_number;
        if(head==NULL)
        {
                head=node;
        }
        else
        {
                temp=head;
                while(temp->next)
                {
                        temp=temp->next;
                }
                temp->next=node;
                }
        }
        fclose(fp);
        }

        return head;

}