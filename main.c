#include<stdio.h>
#include<stdlib.h>
int main(){

    printf("                  Welcome To Mr.Lock System ^_^");

    int password;
    int FakeInput;
    printf("\n\nPlease type your password..");
    scanf("%d", &password);
    if (password <= 2004 && password >=2004)
    {
        printf("\n               ( The password is correct :)");
           printf("\n            (  Welocme to Our Home :)");
        printf("\n               ( Hello How are you :)");

    }
    else {
        printf("\n               The password is wrong -_-");
        printf("\n               You still have two times");

        printf("try again..");
        scanf("%d", &password);
        printf("\n\nPlease type your password..");
      

         if (password <= 2004 && password >=2004)
    {
        printf("\n\nPlease type your password..");
        printf("\n              ( The password is correct :)");
        printf("\n              ( Welocme to Our Home :)");
        printf("\n              ( Hello How are you :)");

    }
    else {
        printf("\n               The password is wrong -_-");
        printf("\n               You still have one times");

         printf("try again..");
        scanf("%d", &password);
        

         if (password <= 2004 && password >=2004)
    {
        printf("\n              ( The password is correct :)");
          printf("\n            ( Welocme to Our Home :)");
        printf("\n              ( Hello How are you :)");

    }
    else {
        printf("\n                wrong -_-");
        printf("\n                wrong -_-");
        printf("\n                wrong -_-");
        printf("\n                wrong -_-");
        printf("\n                wrong -_-");
        printf("\n                wrong -_-");
        printf("\n                wrong -_-");
        printf("\n                wrong -_-");

        }
      }
    } 
    scanf("\n%D",FakeInput);
return 0;
}