//�Ӽ����������ַ�����1���ֱ�ͳ��һ��������ĸ�����֣������ַ��ĸ����� ��2����ͳ�Ƶ���ĸ�����֣������ַ��ĸ�������״ͼ����ʽ��ӡ������
//
//  5
//
//*****
//
//*****     3
//
//*****   *****     2
//
//*****   *****   *****
//
//*****   *****   *****
//
// alp     num     oth

#include<stdio.h>
#include<stdlib.h>

void print_Column(char*str){
       //������ĸ�����֣������ַ�����
       int alpN = 0, numN = 0, othN = 0;
       //hMaxΪ��������������h1,2,3�ֱ�Ϊ����hMax��ֵ
       int hMax = 0, h1 = 0, h2 = 0, h3 = 0;
      //ָʾ��־��0��ʾû�д�ӡ����������֣�1��ʾ�Ѿ���ӡ������
       int flag1 = 0, flag2 = 0, flag3 = 0;
       int i = 0;
      for (i = 0; str[i] != '\0'; i++)
      {
         if (('a' <= str[i] && str[i] <= 'z') || ('A' <= str[i] && str[i] <= 'Z'))
          {
             alpN++;
          }
          else if ('0' <= str[i] && str[i] <= '9')
          {
              numN++;
          }
          else
         {
              othN++;
          }
      }
      printf("alpN=%d,numN=%d,othN=%d", alpN, numN, othN);
  
      //����hMax
     hMax = othN > (alpN > numN ? alpN : numN) ? othN : (alpN > numN ? alpN : numN);
      //��������ֵ
      h1 = abs(alpN - hMax);
      h2 = abs(numN - hMax);
      h3 = abs(othN - hMax);
      printf("\nprint column.....\n"); 
     //��ʼ��ӡ
     //��ӡ�����������
    if (h1 == 0)
      {
          printf("  %d  ", alpN);
          flag1 = 1;
      }
      else
      {
          printf("      ");
     }
     printf("\t");
      if (h2 == 0)
      {
          printf("  %d  ", numN);
          flag2 = 1;
      }
      else
      {
          printf("      ");
      }
      printf("\t");
      if (h3 == 0)
      {
          printf("  %d  ", othN);
          flag3 = 1;
     }
      else
      {
          printf("      ");
      }
      printf("\n");
  
      //��ʼѭ�����ܹ��� hMax ��
      for (i = 1; i <= hMax; i++)
      {
          //���alp�Ĵ�ӡ
          if (flag1)
          {
              printf("*****");
          }
          else
          {
             h1--;
             if (h1 == 0)  //��ʾҪ��ӡ������
              {
                  printf("  %d  ", alpN);
                  flag1 = 1;
              }
              else
              {
                  printf("     ");
              }
          }
          printf("\t");
  
          //���num�Ĵ�ӡ
          if (flag2)
          {
              printf("*****");
         }
         else
         {
             h2--;
             if (h2 == 0)  //��ʾҪ��ӡ������
             {
                 printf("  %d  ", numN);
                 flag2 = 1;
             }
             else
             {
                 printf("     ");
             }
         }
         printf("\t");

         //���oth�Ĵ�ӡ
         if (flag3)
         {
             printf("*****");
         }
         else
         {
            h3--;
             if (h3 == 0)  //��ʾҪ��ӡ������
             {
                printf("  %d  ", othN);
               flag3 = 1;
           }
             else
            {
                 printf("     ");
             }
        }
        //��ӡ��һ�оͻ���
        printf("\n");
     }
     printf("  alp  \t");
     printf("  num  \t");
     printf("  oth  \t");
     printf("\n");
 
 }
 int main(){
  char str[81];
     printf("input a string:");
     gets(str);
     print_Column(str);
	 system("pause");
 }
