#include <stdlib.h>
#include <stdio.h>

/*
#############################################################
#                                                           #
#         ---== Operators I Arithmetic ==---                #
#                                                           #
#                                                           #
#               Coder: Andika Sagala                        #
#               Date: March, 2020                           #
#############################################################
*/


int main ()
{
int Arithmetic_Addition_Var1=1;
int Arithmetic_Addition_Var2=1;
int Arithmetic_Addition_VarResult;

int Arithmetic_Subtraction_Var1=10;
int Arithmetic_Subtraction_Var2=3;
int Arithmetic_Subtraction_VarResult;

int Arithmetic_Multiplication_Var1=2;
int Arithmetic_Multiplication_Var2=4;
int Arithmetic_Multiplication_VarResult;

int Arithmetic_Division_Var1=8;
int Arithmetic_Division_Var2=4;
int Arithmetic_Division_VarResult;

int Arithmetic_Module_Operator_Var1=16;
int Arithmetic_Module_Operator_Var2=3;
int Arithmetic_Module_Operator_VarResult;

Arithmetic_Addition_VarResult= Arithmetic_Addition_Var1 + Arithmetic_Addition_Var2;
Arithmetic_Subtraction_VarResult= Arithmetic_Subtraction_Var1 - Arithmetic_Subtraction_Var2;
Arithmetic_Multiplication_VarResult= Arithmetic_Multiplication_Var1 * Arithmetic_Multiplication_Var2;
Arithmetic_Division_VarResult= Arithmetic_Division_Var1 / Arithmetic_Division_Var2;
Arithmetic_Module_Operator_VarResult= Arithmetic_Module_Operator_Var1 % Arithmetic_Module_Operator_Var2;

printf("Operator Arithmetic Addition ( + ) with result value: %d \n" , Arithmetic_Addition_VarResult);
printf("Operator Arithmetic Subtraction ( - ) with result value: %d \n" , Arithmetic_Subtraction_VarResult);
printf("Operator Arithmetic Multiplication ( * ) with result value: %d \n" , Arithmetic_Multiplication_VarResult);
printf("Operator Arithmetic Division ( / ) with result value: %d \n" , Arithmetic_Division_VarResult);
printf("Operator Arithmetic Module Operator ( % ) with result value: %d \n" , Arithmetic_Module_Operator_VarResult);





return 0;   
}
