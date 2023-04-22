#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		char array[101];
		scanf("%s",array);
		int len=strlen(array);
		if (len<=10)
		{
			printf("%s\n",array);
		}
		else
		{
			printf("%c",array[0]);
			printf("%d",len-2);
			printf("%c\n",array[len-1]);
		}
	}
	return 0;
}