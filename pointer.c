#include<stdio.h>
int main()
{
    int a=50,*p,**q;
    p=&a;
     q = &p;

    printf(" value of a id ;%d\n",a);
       printf("addres of a iis  ;%u\n",&a);
          printf(" address of  a using p  is;%d\n",p);
             printf(" address of p is ;%d\n",p);
                printf(" value is a using p ;%d\n",*p);
                   printf(" value of a using q is  ;%d\n",**q);
    return 0;

}