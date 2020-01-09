#include<conio.h>
#include<stdio.h>
#include<string.h>
int main(){
	char k;
    char str[100];
    int i, length;
    do{
        printf("nhap chuoi : ");
        gets(str);
        printf("The old string:%s \n",str);
        printf("The reversed string:");
        length= strlen(str);
        for(i=length; i>=0; i--){
			if(str[i]==' '){
            	str[i]='\0';
            	printf("%s ",&str[i]+1);
			}
        } 
        printf("%s\n",str);
        printf("Press enter to continue \n");
        k=getch();
	} while ( k != 27);
	 getchar();
	 return 0;
}

