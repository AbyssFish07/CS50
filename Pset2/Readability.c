#include<stdio.h>
int main()
{
    char text[1000];
    printf("Text: ");
   fgets(text,sizeof(text),stdin);
    int letters=0,sentences=0,words=0;
    for(int i=0;text[i] != '\0';i++)
    {
        if((text[i]>='A'&&text[i]<='Z')||(text[i]>='a'&&text[i]<='z'))
        {
            letters++;
        }
        if(text[i]=='.'||text[i]=='!'||text[i]=='?')
        {
            sentences++;
        }
        if(text[i]==' ')
        {
            words++;
        }

    }
    words++;
    double index,l,s;
    l = 100.0 * letters / words;
    s = 100.0 * sentences / words;
    index = 0.0588 * l - 0.296 * s - 15.8;
    // 上面是Coleman–Liau 公式,用于估算文本的可读性等级（对应美国的年级水平） 
    // 它根据平均每100个单词中的字母数(L)和句子数(S)计算出理解该文本所需的年级
    int grade = (int)(index + 0.5); // This line is used to 四舍五入.
    if(grade<1)
    {
        printf("Before Grade 1");
    }
    else if(grade>=1&&grade<16)
    {
        printf("Grade %i\n",grade);
    }
    else
    {
        printf("Grade 16+");
    }
    return 0;
}