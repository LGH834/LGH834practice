#include <stdio.h>
int main(){
	FILE* fp = fopen("data.txt","w");
	if (fp == NULL){
		printf("open failed");
		return 1;
	}
	fprintf(fp,"%d %s\n",100,"Hello");
	fprintf(fp,"%d %s\n",200,"World");
	fclose(fp);
	fp =fopen("data.txt","r");
if(fp == NULL){
	printf("open failed");
	return 1;

	
}
int num;
char str[50];
while (fscanf(fp,"%d %s",&num,str)!=EOF){
	printf("%d %s\n",num,str);

}
fclose(fp);
return 0;
}
