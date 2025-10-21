//改程序忽略了判断输入是否为英文字母，只将小写字母转为了大写字母。
#include<stdio.h>
#include <string.h>
int main()
{
    char Player_1[50];
    char Player_2[50];
    printf("Player 1:");
    scanf("%s",Player_1);
    printf("Player 2:");
    scanf("%s",Player_2);
    int sum_1=0,sum_2=0;
    int scores[26] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    
   for(int i=0;i<strlen(Player_1);i++)
    {
        //小写转为大写
        if (Player_1[i]>=97&&Player_1[i]<=122)
        {
            Player_1[i]-=32;
        }
        sum_1+=scores[Player_1[i]-65];
    }
     for(int j=0;j<strlen(Player_2);j++)
    {
        //小写转为大写
        if (Player_2[j]>=97&&Player_2[j]<=122)
        {
            Player_2[j]-=32;
        }
  
        sum_2+=scores[Player_2[j]-65];
    }
    if(sum_1>sum_2)
    {
        printf("Player 1 win!");
    }
    else if (sum_1<sum_2)
    {
        printf("Player 2 win!");
    }
    else
    {
        printf("Tie!");
    }
    
}