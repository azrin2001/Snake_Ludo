#include<stdio.h>
#include<stdlib.h>


struct PLAYER       //structure
{
    char color[10];     //string
    int rolling_num;
    int sum;

};

int check_sum(int x)       //function
{
    int bar=1;

    if(x==0)
    {
        bar=0;
    }
    return bar;
}

int check(int y)        //function
{
    int flag=0;

    if(y==1)
    {
        flag=1;
    }
    return flag;
}

int check_z(int w)
{
   int mark=0;

   if(w==1)
   {
       mark=1;
   }
   return mark;
}

int check6(int *a)     //pointers
{
    if(*a==6)
    {
        printf("\nGREAT!! YOU'VE MOVED UPWORD THROUGH STAIR.");
       *a=16;
    }
    return a;
}

int check8(int *b)
{
    if(*b==8)
    {
        printf("\nGREAT!! YOU'VE MOVED UPWORD THROUGH STAIR.");
       *b=41;
    }
    return b;
}
int check26(int *c)
{
    if(*c==26)
    {
        printf("\nGREAT!! YOU'VE MOVED UPWORD THROUGH STAIR.");
       *c=29;
    }
    return c;
}
int check50(int *d)
{
    if(*d==50)
    {
        printf("\nGREAT!! YOU'VE MOVED UPWORD THROUGH STAIR.");
       *d=93;
    }
    return d;
}
int check55(int *e)
{
    if(*e==55)
    {
        printf("\nGREAT!! YOU'VE MOVED UPWORD THROUGH STAIR.");
       *e=80;
    }
    return e;
}
int check59(int *f)
{
    if(*f==59)
    {
        printf("\nGREAT!! YOU'VE MOVED UPWORD THROUGH STAIR.");
       *f=84;
    }
    return f;
}
int check32(int *g)
{
    if(*g==32)
    {
       printf("\nOOOPS... YOU'VE BEEN BEATEN BY SNAKE");
       *g=13;
    }
    return g;
}
int check60(int *h)
{
    if(*h==60)
    {
        printf("\nOOOPS... YOU'VE BEEN BEATEN BY SNAKE");
       *h=38;
    }
    return h;
}
int check63(int *i)
{
    if(*i==63)
    {
        printf("\nOOOPS... YOU'VE BEEN BEATEN BY SNAKE");
       *i=3;
    }
    return i;
}
int check70(int *o)
{
    if(*o==70)
    {
        printf("\nOOOPS... YOU'VE BEEN BEATEN BY SNAKE");
       *o=25;
    }
    return o;
}
int check73(int *j)
{
    if(*j==73)
    {
        printf("\nOOOPS... YOU'VE BEEN BEATEN BY SNAKE");
       *j=47;
    }
    return j;
}
int check82(int *k)
{
    if(*k==82)
    {
        printf("\nOOOPS... YOU'VE BEEN BEATEN BY SNAKE");
       *k=43;
    }
    return k;
}
int check89(int *l)
{
    if(*l==89)
    {
        printf("\nOOOPS... YOU'VE BEEN BEATEN BY SNAKE");
       *l=53;
    }
    return l;
}
int check97(int *n)
{
    if(*n==97)
    {
        printf("\nOOOPS... YOU'VE BEEN BEATEN BY SNAKE");
       *n=12;
    }
    return n;
}
int check100(int q, int *r)
{
    if(*r>100)
    {
        *r = *r - q;
    }
    return r;
}

int main()
{
    struct PLAYER plr1  , plr2;

    plr1.sum=0;
    plr2.sum=0;

    printf("\t\t\t\t\tWelcome to the SNAKE LUDO Game!!!");
    printf("\n\t\t\tA double player game");
    printf("\n\t\t\tPlay it with your friend and try your luck by rolling the dice");
    printf("\n\n\t\t\t\t\t!!RED!!\t\t!!BLUE!!");
    printf("\n\n\t\t\t\t\t!!GREEN!!\t!!YELLOW!!");

    printf("\n\nChoose a colour from this 4 colours for player1 and type here:");
    gets(plr1.color);
    printf("\nChoose a colour from another 3 colours for player2 and type here:");
    gets(plr2.color);

    printf("\n\nPress 1 for rolling the dice for %s player", plr1.color);
    printf("\nPress 2 for rolling the dice for %s player", plr2.color);


    srand(time(NULL));

    while(1)                //loop
    {
        int N;
        printf("\n\nTurn of player : ");
        scanf("%d", &N);

        if(N==1)               //conditional_logic
        {
            int m;

            for (m=0; m<1; m++)     //loop

               {
                   plr1.rolling_num = rand() % 6;
                   plr1.rolling_num++;

               }

               printf("\nRolling !! And the number on the dice is : %d", plr1.rolling_num);

               check_sum(plr1.sum);
               check(plr1.rolling_num);

               if(check_sum(plr1.sum)==0 && check(plr1.rolling_num)==1 ||
                  check_sum(plr1.sum)==1 && check(plr1.rolling_num)==1)
               {
                   int z;
                   printf("\nIs it your third '1' in this turn?(Press 1 for yes/0 for no)");
                   scanf("%d", &z);

                   check_z(z);

                   if(check_z(z)==0)
                   {
                        plr1.sum = plr1.sum + plr1.rolling_num;

                        check6(&plr1.sum);
                        check8(&plr1.sum);
                        check26(&plr1.sum);
                        check50(&plr1.sum);
                        check55(&plr1.sum);
                        check59(&plr1.sum);
                        check32(&plr1.sum);
                        check60(&plr1.sum);
                        check63(&plr1.sum);
                        check70(&plr1.sum);
                        check73(&plr1.sum);
                        check82(&plr1.sum);
                        check97(&plr1.sum);
                        check100(plr1.rolling_num, &plr1.sum);

                        printf("\nSo %s player's square position is %d", plr1.color , plr1.sum);
                        printf("\n%s player roll the dice again.", plr1.color);

                   }
                   else if(check_z(z)==1)
                   {
                        printf("\nThird 1 is a wasted run.\nPass the dice to %s player.", plr2.color);
                   }
               }
               else if(check_sum(plr1.sum)==1 && check(plr1.rolling_num)==0)
               {
                   plr1.sum = plr1.sum + plr1.rolling_num;

                   check6(&plr1.sum);
                   check8(&plr1.sum);
                   check26(&plr1.sum);
                   check50(&plr1.sum);
                   check55(&plr1.sum);
                   check59(&plr1.sum);
                   check32(&plr1.sum);
                   check60(&plr1.sum);
                   check63(&plr1.sum);
                   check70(&plr1.sum);
                   check73(&plr1.sum);
                   check82(&plr1.sum);
                   check97(&plr1.sum);
                   check100(plr1.rolling_num, &plr1.sum);

                   printf("\nSo %s player's square position is %d", plr1.color , plr1.sum);
                   printf("\nPass the dice to %s player.", plr2.color);
               }
               else if(check_sum(plr1.sum)==0 && check(plr1.rolling_num)==0)
               {
                   printf("\nGain '1' to enter into the SNAKE board.");
                   printf("\nPass the dice to %s player.", plr2.color);
               }

        }
        if(N==2)
        {
           int m;

            for (m=0; m<1; m++)
               {
                  plr2.rolling_num = rand() % 6;
                  plr2.rolling_num++;
               }

               printf("\nRolling !! And the number on the dice is : %d", plr2.rolling_num);

               check_sum(plr2.sum);
               check(plr2.rolling_num);

               if(check_sum(plr2.sum)==0 && check(plr2.rolling_num)==1 ||
                  check_sum(plr2.sum)==1 && check(plr2.rolling_num)==1)
               {
                   int s;
                   printf("\nIs it your third '1' in this turn?(Press 1 for yes/0 for no)");
                   scanf("%d", &s);

                   check_z(s);

                   if(check_z(s)==0)
                   {
                       plr2.sum = plr2.sum + plr2.rolling_num;

                       check6(&plr2.sum);
                       check8(&plr2.sum);
                       check26(&plr2.sum);
                       check50(&plr2.sum);
                       check55(&plr2.sum);
                       check59(&plr2.sum);
                       check32(&plr2.sum);
                       check60(&plr2.sum);
                       check63(&plr2.sum);
                       check70(&plr2.sum);
                       check73(&plr2.sum);
                       check82(&plr2.sum);
                       check97(&plr2.sum);
                       check100(plr2.rolling_num, &plr2.sum);

                       printf("\nSo %s player's square position is %d", plr2.color,plr2.sum);
                       printf("\n%s player roll the dice again.", plr2.color);
                   }
                   else if(check_z(s)==1)
                   {
                        printf("\nThird 1 is a wasted run.\nPass the dice to %s player.", plr1.color);
                   }
               }

               else if(check_sum(plr2.sum)==1 && check(plr2.rolling_num)==0)
               {
                   plr2.sum = plr2.sum + plr2.rolling_num;

                    check6(&plr2.sum);
                   check8(&plr2.sum);
                   check26(&plr2.sum);
                   check50(&plr2.sum);
                   check55(&plr2.sum);
                   check59(&plr2.sum);
                   check32(&plr2.sum);
                   check60(&plr2.sum);
                   check63(&plr2.sum);
                   check70(&plr2.sum);
                   check73(&plr2.sum);
                   check82(&plr2.sum);
                   check97(&plr2.sum);
                   check100(plr2.rolling_num, &plr2.sum);

                   printf("\nSo %s player's square position is %d", plr2.color,plr2.sum);
                   printf("\nPass the dice to %s player.", plr1.color);

               }
               else if(check_sum(plr2.sum)==0 && check(plr2.rolling_num)==0)
               {
                   printf("\nGain a '1' to enter the SNAKE board.");
                   printf("\nPass the dice to %s player.", plr1.color);

               }

        }

        if(plr1.sum==100)
        {
            printf("\nCONGRATULATIONS %s!!!You've reached at the 100th square before. Now no one have to roll the dice.\n%s player SORRY.. Better luck next time.", plr1.color,plr2.color,plr2.color);

            break;
        }
        else if(plr2.sum==100)
        {
            printf("\nCONGRATULATIONS %s!!!You've reached at the 100th square before. Now no one have to roll the dice.\n%s player SORRY.. Better luck next time.", plr2.color,plr1.color,plr1.color);

            break;
        }


    }

}

