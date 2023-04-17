#include <stdio.h>
#include <string.h>
#include<stdlib.h>
void bubble(int n, int i, int j, char name, char temp);
void main()
{
 	char name[25][50],temp[25];
  	int n,i,j;
  	printf("Input number of strings :");
 	scanf("%d",&n);
	printf("Input string %d :\n",n);
  	for(i=0;i<=n;i++)
  	{   
    	fgets(name[i], sizeof name, stdin);
	}bubble(n,i,j,name,temp);
}
void bubble(int n, int i, int j, char name, char temp)
{
  	for(i=1;i<=n;i++){
		for(j=0;j<=n-i;j++){
			if(strcmp(name[j],name[j+1])>0)
	  		{	 
        		strcpy(temp,name[j]);
	    		strcpy(name[j],name[j+1]);
	    		strcpy(name[j+1],temp);
	  		}
		}
	}
   	printf("The strings appears after sorting :\n");
	for(i=0;i<=n;i++){
		printf("%s\n",name);
	}
} 
