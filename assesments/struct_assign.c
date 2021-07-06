#include <stdio.h>
typedef struct complex {
    float real;
    float imag;
} complex;
complex add(complex n1, complex n2);
complex diff(complex n1, complex n2);
complex pro(complex n1, complex n2);


int main()
 {
    complex n1=6, n2=4, add_res,diff_res,product_res;
    add_res = add(n1, n2);
    diff_res = diff(n1,n2);
    product_res = pro(n1,n2);

    printf("Sum = %.1f + %.1fi", add_res.real, add_res.imag);
    printf("Diff = %.1f + %.1fi", add_res.real, add_res.imag);
    printf("pro = %.1f + %.1fi", add_res.real, add_res.imag);

    return 0;
 }
 complex add(complex n1, complex n2) 
 {
    complex temp1;
    temp1.real = n1.real + n2.real;
    temp1.imag = n1.imag + n2.imag;
    return (temp1);
}
complex diff(complex n1, complex n2)
{
    complex temp2;
    temp2.real = n1.real - n2.real;
    temp2.imag = n1.imag - n2.imag;
    return (temp2);
}
complex pro(complex n1, complex n2)
{
    complex temp3;
    temp3.real = n1.real * n2.real;
    temp3.imag = n1.imag * n2.imag;
    return (temp3);
}
