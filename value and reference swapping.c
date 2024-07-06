#include<stdio.h>
void value(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapping by value:\n");
    printf("Number 1: %d\n",a);
    printf("Number 2: %d\n",b);
}
void reference(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int n1,n2,ch;
    printf("Enter two numbers:\n");
    scanf("%d %d",&n1,&n2);
    printf("\nEnter:\n1-For pass by value\n2-For pass by reference.\n");
    scanf("%d",&ch);
    switch(ch){
    	case 1:{
    		value(n1,n2);
			break;
		}
    	case 2:{
    		reference(&n1,&n2);
    		printf("\nAfter swapping by reference:\n");
    		printf("Number 1: %d\n",n1);
    		printf("Number 2: %d\n",n2);
			break;
		}
		default:{
			printf("Invalid choice.");
			break;
		}
	}
    return 0;
}

