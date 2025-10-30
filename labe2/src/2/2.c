#include <stdio.h>
#include <stdlib.h>
// TODO: Add appropriate headers


// TODO: Write the encryption() function

void encryption(char* message, int key)
{char* ptr =message;
while(ptr!=NULL)
	{if(((64<*ptr)&&(*ptr<91))||((97<*ptr)&&(*ptr<123)))
	{if (*ptr+key>90)
	*ptr=*ptr+key-26;
	else{*ptr=*ptr-key;}}
	ptr+=1;
	}

}



// TODO: Write the decryption() function

void decryption(char* message, int key){
char* ptr= message;

while(ptr!=NULL)
	{if(*ptr-key<65)
	*ptr=*ptr-key+26;
	else{*ptr=*ptr-key;}
	ptr+=1;}
}

int main()
{int n,k;
char* s;
char* op=NULL;
        // TODO Complete the code below
	scanf("%d ",&n);
	s=malloc(sizeof(char)*n);
	scanf("%s %d %c",s, &k, op);
	switch(*op){
	case 'e':
		encryption(s,k);
		break;
	case 'd':
		decryption(s,k);
		break;
	default:
		printf("Invalid Operation");
		break;}
	//TODO: prevent memory leaks
	while(s!=NULL)
	{printf("%c",*s);
	s+=1;}
	free(s);
        // Do not modify any line below
	return 0;
}
