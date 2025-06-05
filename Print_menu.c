#include"my_header.h"
void Print_menu()
{
printf("\033[1;34m");
printf("------------WELCOME TO BANK--------------\n");
printf("\033[1;31m");
printf("-----------------MENU---------------------\n");
printf("\033[1;32m");
printf("c/C :Create account.\nh/H :Transaction history.\nw/W :Withdraw amount.\nd/D :Deposite amount.\nb/B :Balance enquiry.\nt/T :Transfer money.\ne/E :Display all accounts details.\nu/U: Update Account details\ns/S :Save the accounts into a file.\nr/R :Delete Account.\nf/F :Finding/Searching for specific account.\nq/Q :Quit from app.\n");printf("Enter choice:");
printf("\033[0;m");
}