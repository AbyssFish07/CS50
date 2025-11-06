#include<stdio.h>
int main()
{
    char plaintext[1000];
    int key;
    printf("key: ");
    if (scanf("%d", &key) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;  // 输入无效，退出程序
    }
    getchar();
    printf("plaintext:  ");
    fgets(plaintext,sizeof(plaintext),stdin);
    printf("ciphertext: ");
    for(int i=0;plaintext[i]!='\0';i++){  
        if(plaintext[i] >= 'a' && plaintext[i] <= 'z'){  //处理并输出小写字母
            plaintext[i] = (plaintext[i] - 'a' + key) % 26 + 'a';
        }
        else if(plaintext[i] >= 'A' && plaintext[i] <= 'Z'){   //处理并输出大写字母
            plaintext[i] = (plaintext[i] - 'A' + key) % 26 + 'A';
        }
        printf("%c",plaintext[i]);
        }        
    return 0;
}
