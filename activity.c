#include <stdio.h>

int array(int hi[3][2],int id, int pin)
{
int jj = 0;

 for(int x = 0; x<3; x++)
{
 if(id == hi[x][0] && pin == hi[x][1])
{
    jj = 1;
}
}
    return jj;
}
 int main()
{
 int hi[3][2] = {{111222,2468},{222333,1357},{333444,4321}};

 int id,pin;
    printf("Welcome!\n");
    printf("Please Enter Your ID Number: ");
    scanf("%d",&id);
    printf("Please Enter Your PIN: ");
    scanf("%d",&pin);

    if(array(hi,id,pin))
{
    printf("\nYou Have Successfully Logged In\nID#:%d",id);
}
    else
{
    printf("Invalid ID/PIN!");
}


return 0;
}