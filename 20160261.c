Enter file contents here#include <stdio.h>
int main (void) {
        int i=1;
        int total=0;
        int strike_point=0,spare_point;
        int a,b,c,d,e;
        int left_pin;
        int flag;
        while ( i <= 10 ) {
                if (i < 10){
                        if ( spare_point == 1)
                        {
                                printf("%d 번째 프레임 1 번째 처리 핀 수 : ",i);
                                scanf("%d",&a);
                                total += a*2;
                                left_pin = 10 - a;
                                printf("**** 현재까지 점수 : %d \n",total);
                                spare_point = 0;
                                flag = 0;
                        }
                        else
                        {
                                if (strike_point == 1)
                                {
                                printf("%d 번째 프레임 1 번째 처리 핀 수 : ",i);
                                scanf("%d",&a);
                                total += a*(strike_point+1);
                                left_pin = 10 - a;
                                printf("**** 현재까지 점수 : %d \n",total);
                                flag = 1;
                                }
                                else
                                {
                                        if (strike_point == 2)
                                        {
                                        printf("%d 번째 프레임 1 번째 처리 핀 수 : ",i);
                                        scanf("%d",&a);
                                        total += a*(strike_point+1);
                                        left_pin = 10 - a;
                                        printf("**** 현재까지 점수 : %d \n",total);
                                        }
                                        else
                                                {
                                                printf("%d 번째 프레임 1 번째 처리 핀 수 : ",i);
                                                scanf("%d",&a);
                                                total += a;
                                                left_pin = 10 - a;
                                                printf("**** 현재까지 점수 : %d \n",total);
                                                flag -= 1;
                                                }
                                }
                }
                                                if ( left_pin == 0)//strike 를 친 경우
                                                {
                                                        strike_point += 1;
                                                        strike_point = ( strike_point > 2) ? 2 : strike_point;
                                                        flag = 2;
                                                }
                                                else
                                                {
                                                        printf("%d 번째 프레임 2 번째 처리 핀 수 : ",i);
                                                        scanf("%d",&b);
                                                        total += b;
                                                        left_pin -= b;
                                                        if (flag == 1)
                                                        {
                                                                total += b*(strike_point);
                                                                printf("**** 현재까지 점수 : %d \n",total);
                                                                flag = 0;
                                                        }
                                                        else
                                                        {
                                                                printf("**** 현재까지 점수 : %d \n",total);
                                                                flag = 0;
                                                        }
                                                        if ( left_pin == 0) //spare 를 친경우
                                                        {
                                                                spare_point = 1;
                                                                flag = 0;
                                                        }
                                                        else
                                                                ;
                                                }
                                                        if (  flag == 2)
                                                                ;
                                                        else
                                                        {
                                                                strike_point = 0;
                                                        }
                        i++;
                }
                else
                {
                        printf("%d 번째 프레임 1 번째 처리 핀 수 : ",i);
                        scanf("%d",&c);
                        total += c;
                        printf("**** 현재까지 점수 : %d \n",total);
                        printf("%d 번째 프레임 2 번째 처리 핀 수 : ",i);
                        scanf("%d",&d);
                        total += d;
                        if(c == 10 || c+d == 10)
                        {
                                printf("**** 현재까지 점수 : %d \n",total);
                                printf("%d 번째 프레임 3 번째 처리 핀 수 : ",i);
                                scanf("%d",&e);
                                total += e;
                        }
                        printf("**** 최종 점수 : %d \n",total);
                        ++i;
                }
        }
        return 0;
}
