#include <stdio.h>
int main()
{
    int n1, n2 ;
	char choice;
	
	while (1){
    
    
	printf("\n\n\t .............MENU...................\n\n");
	printf(" Press 1 for Addition.\n\n");
	printf(" Press 2 for Subtraction.\n\n");
	printf(" Press 3 for Multiplication.\n\n");
	printf(" Press 4 for Division.\n\n");
	printf("\n\n\t .............MENU...................\n\n");
	printf(" \n\nEnter your choice : ");
	scanf(" %c",&choice);


	printf("\n\n Enter first number : ");
	scanf("%d",&n1);
	printf("\n\nEnter Second number : ");
	scanf("%d",&n2);

    printf("\n\n");

    if (choice=='1')
    {
        printf("Addition :%d",n1+n2);
    } else if (choice=='2')
    {
        printf("Substraction :%d",n1-n2);
    } else if (choice=='3')
    {
        printf("Multiplication :%d",n1*n2);
    } else if (choice=='4')
    {
        printf("Division :%d",n1%n2);
    } else{
        printf("Invalid choice!!!");
    }
}
    return 0;
}