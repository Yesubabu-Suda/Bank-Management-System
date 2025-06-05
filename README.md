Bank Management System - Mini Project in C
==========================================

Declaration:
------------
I hereby declare that the project titled "Bank Management System" is a result of my own work and has been developed as part of my academic curriculum.

I have followed all the ethical guidelines for software development and acknowledge any references.

Submitted by:
[SUDA.YESUBABU]
[V24HE6S6]

Description:
------------
The Bank Management System that allows users to perform basic banking operations such as account creation, deposits,withdrawals, fund transfers, balance enquiries, and more. The system stores data persistently using file handling   and utilizes structured programming principles.


About Project:
--------------
In this application if you want to create a bank account it will ask for set a password for security purpose.
it is a pin type password.

Duplication password implementation means if any account holder password match with your password.
it will not set a password for you.And ask once again please set a new password.

if you want transfer/balance Enquiry must enter your password what do you set in the create account.

if you forget your password then choose update account option it will ask reset password.
in creation of account Aadhar is mandatory to create an account for duplication purpose.
In creation of bank account your and pan is not mandatory.if you want to update update it.
if your finding specific account you enter account number.

Features:
---------
- Create a new account
- View last 5 transactions
- Withdraw money
- Deposit money
- Balance enquiry
- Transfer funds between accounts
- Display all account details
- Update account details
- Delete an account
- Search for a specific account
- Save account data to a file
- Persistent data storage across sessions

Compilation:
------------
Use the Makefile provided for compilation.

To compile the project:
$ make

To clean object files and the executable:
$ make clean

Execution:
----------
To run the application:
$ ./bank

Menu Options:
-------------
c/C : Create account
h/H : Transaction history
w/W : Withdraw amount
d/D : Deposit amount
b/B : Balance enquiry
t/T : Transfer money
e/E : Display all accounts
u/U : Update account details
s/S : Save the accounts into a file
r/R : Delete account
f/F : Search for a specific account
q/Q : Quit the application

File Structure:
---------------
- Main.c                : Entry point, menu loop.
- Create_Account.c      : Account creation logic.
- Deposit_Account.c     : Deposit function.
- Withdraw_Ammount.c    : Withdraw function.
- Transfer_Money.c      : Transfer function.
- Balance_Enquiry.c     : Balance enquiry.
- Update_Account.c      : Update account info.
- Delete_Account.c      : Delete account.
- Display_Ac.c          : Display all accounts.
- Finding_apecific.c    : Search for an account.
- Transaction_history.c : Transaction history.
- globals.c             : Global variable.
- Print_menu.c          : Printing Menu.
- Save_File.c           : File handling (save/load).
- my_header.h           : Structure and typedef definitions.
- my_header.h           : Function prototypes.
- makefile              : Build automation.
- MY_BANK.txt           : Saved informaion.

Persistence:
------------
All account details and transaction history are saved to a file.
On re-launching the application, previously stored data is reloaded automatically.
