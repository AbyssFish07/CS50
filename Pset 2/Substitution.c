#include<stdio.h>
#include<stdbool.h>
#include<string.h>
bool isLetter(char a);
int main()
{
    char plaintext[1000];
    char key[100];
    int diff[50];
    printf("key: ");
    scanf("%s",key);
    if(strlen(key) != 26){
        printf("Key must contain 26 characters. ");
        return 1;
    }
    for(int i=0;key[i]!='\0';i++)
    {
        if(isLetter(key[i] == false)){
            printf("Invalid key.");
            return 1;
        }
    }
    getchar();
    printf("plaintext:  ");
    fgets(plaintext,sizeof(plaintext),stdin);
    for(int i=0;key[i]!='\0';i++){
        if(key[i] >= 'A' && key[i] <= 'Z'){
            diff[i] = key[i] - 'A' - i;
        }
        else if(key[i] >= 'a' && key[i] <= 'z'){
            diff[i] = key[i] -'a' -i;
        }
    }
    printf("ciphertext: ");
    for(int i=0;plaintext[i]!='\0';i++){
        if(plaintext[i] >= 'a' && plaintext[i] <= 'z'){
            plaintext[i] = plaintext[i] - 'a';
            plaintext[i] = (plaintext[i] + diff[plaintext[i]]) % 26 + 'a'; 
        }
        else if(plaintext[i] >= 'A' && plaintext[i] <= 'Z'){
            plaintext[i] = plaintext[i] - 'A';
            plaintext[i] = (plaintext[i] + diff[plaintext[i]]) % 26 + 'A'; 
        }
        printf("%c",plaintext[i]);
    }
}
bool isLetter(char a)
{
    if(a >= 'a' && a <= 'z'){
        return true;
    }
    else if(a >= 'A' && a <= 'Z'){
        return true;
    }
    else{
        return false;
    }
}