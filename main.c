#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=100;
    int m =55;
    int d=n+m;
    float f= 22+5.322;
    printf(" my favorite %s is %d and %d also %d \n","number",n, m,d);

    /* allways try to put as many as comment as possible but don't be stupid*/

    printf("why the fuck bro %f and %f\n",f,m);
    printf("power %f \n",pow(2,9));
    printf("square %f \n",sqrt(49));
    printf("round off %f\n",ceil(4.75));
    printf("round off part2 %f\n" ,floor(7.1616));

    /* yo this is comment*/

    /* learning about constant*/

    const int num=5;

    /*this basically changes the int to string*/

    printf("print %d \n",num);
    int numy=8;
    printf("print again %d",numy);

    int age;
    printf("enter your age:");
    scanf("%d",&age);
    printf("your are %d years old\n", age);

    double r;
    printf("enter you phone number \n");
    scanf("%lf",&r);
    printf("so!! your phone number is : %lf\n", r );

    char grade;
    printf("\n enter your class \n");
    scanf("%c",&grade);
    printf("your class is : %c \n",grade);


    /* this is for taking string input very important*/

    char line[25];
    printf("enter your full name : \n");
    gets(line);
    printf("your name is : %s \n",line);

    /* ARRAY */

    int numbers[] = {1,65,55,67,8,6,47,4,88};
    printf("%d", numbers[5]);

    int  num[10];
    num[1]=170;
    printf(" \nprint %d",num[1]);*/

    char line[20]={"giraffe academy"};
    printf("%s", line[0]);*/

    sayhi("ram\n",57);
    sayhi("sam", 50);*/

   int a , b;
    prinf("Enter two numbers");
    scanf("%d %d",a,b);
    if(a>b)
    {
        printf("%d",number(54));
    }
    else{
        printf("%d",number(88));
    }



int num;
printf("enter option");
scanf("%d",&num);

switch( num)
{
case 1:
    {
        printf("1");
        break;
    }
case 2:
    {
        printf("2");
        break;
    }
default:
    {
        printf("def");
    }
}

for(int i=0;i<5;i++)
{
    printf("hfwsebhwsi\n");
}

return 0;

}

/*FGUNTIONS*/

void sayhi(char name[],int age)
{
    printf("hi %s and you age %d",name, age);
}

int number(int num)
{
    int result = num*num*num;
    return result;
}
