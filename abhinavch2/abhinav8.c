#include<stdio.h>
#include<math.h>
void main()
{
    int ch;
    printf("ENTER THE CHARACTER");
    scanf("%c",&ch);
    if(ch == 'a'||ch == 'A'||ch == 'e'||ch == 'E'||ch == 'i'||ch  == 'I'||ch =='o'||ch == 'o'||ch == 'u'||ch == 'U')
    printf(" VOWEL ");
    else
        printf(" CONSONANT ");

}
