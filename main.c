#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int read_int(const char *prompt,int min,int max)
{
    char line[64];

    for(;;){




        char *end = NULL;
        long value;
        int ch;
        printf("%s",prompt);
        fflush(stdout);

        if(fgets(line,sizeof(line),stdin) == NULL){
            printf("\n输入结束。\n");
            exit(0);
        }
        if(strchr(line,'\n') == NULL){
            while ((ch = getchar()) != '\n' && ch != EOF){

            }
        }
        line[strcspn(line,"\r\n")] = '\0';

        value = strtol(line,&end,10);

        while (*end == ' ' || *end == 't'){
            end++;

        }
        if(end != line && *end == '\0' && value >= min &&value <= max){\
        return (int)value;
        }
        printf("输入无效,请输入 %d 到 %d 之间的数字。\n",min,max);



        }


}
int main(void)
{
   int choice = -1;
   system("chcp 65001 > nul");
   do{
   printf("=====Student Score System =====\n");
   printf("1.登录Login\n");
   printf("2.帮助help\n");
   printf("0.Exit\n");
   printf("请选择 Please choose : ");

   scanf("%d",&choice);

   switch(choice){
    case 1:
    printf("登录请点击在这里。\n");
    break;
    case 2:
    printf("帮助请点击这里。\n");
    break;
    case 0:
    printf("再见。\n");
    break;
    default:
    printf("无效的选择。\n");
    break;
   }
}
while (choice != 0);

    return 0;
}