#include<stdio.h>
int main(){
	int a[100],n,i,p=1;
	int *b=a;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
		p*= *(b+i);
	printf("%d",p);
}
