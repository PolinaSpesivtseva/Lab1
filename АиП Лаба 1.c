/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main(void)
{
    int x, y; 
    float z,a,b;
    printf("Hello!\n"); //приветствие
    printf("Made by Spesivtseva Polina Eduardovna, 224\n"); //ссылка на автора программы
    printf("Enter the value of x->"); //просьба ввести переменную х
    scanf("%d",&x); //ввод переменной х
    printf("Enter the value of y->");//просьба ввести переменную y
    scanf("%d",&y); //ввод переменной у
    printf("Enter the value of z->"); //просьба ввести переменную z
    scanf("%f",&z); //ввод переменной z
    printf("The value of x ->%d\n",x); //вывод переменной х
    printf("The value of y ->%d\n",y); //вывод переменной у
    printf("The value of z ->%.5e\n",z); //вывод переменной z в экспоненциальной форме
    a= (cbrt(y+2*x)/(sqrt(cos(x*x*x+7))+3)); //вычисление значения переменной а
    b=(atan(x/(fabsf(z-1)+3))); //вычисление значения переменной b
    printf("a=%f,b=%f\n",a,b); //вывод значений переменных а,b
    printf("The value of x in octal number sistem=%o\n", x); //вывод значения переменной х в восьмеричной СС
    printf("The value of y in hexadecimal number sistem=%x\n", y); //вывод значения переменной y в шестнадцатеричной СС
    return 0;
    
    
}
