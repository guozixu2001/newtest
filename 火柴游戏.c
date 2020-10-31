#include <stdio.h>
#include <string.h>

int main()
{
    int sum = 23;
    printf("这里是23根火柴游戏！！\n");
    printf("注意：最大移动火柴数目为三根\n");
    int i_move;
    int win = 0;
    while (1)
    {
        
        do
        {printf("请输入移动的火柴数目：\n");
            scanf("%d", &i_move);
            if (i_move > 3)
                printf("对不起！您输入了不合适的数目，请重新输入！\n");
        }while (!(i_move > 0 && i_move < 4));
        printf("您移动的火柴数目为：%d\n", i_move );
        sum -= i_move;
        printf("您移动后剩下的火柴数目为：%d\n", sum);
        if (sum <= 0)
        {
            win = 0;
            break;
        }

        int r_move = (sum - 1) % 4;
        if (r_move == 0)
            r_move = 1;
        sum -= r_move;
        printf("计算机移动的火柴数目为：%d\n", r_move);
        printf("计算机移动后剩下的火柴数目为：%d\n", sum);
        if (sum < 1)
        {
            win = 1;
            break;
        }

    }
    if (win)
        {
            printf("恭喜您！您赢了！ \n");
        }
        else
            printf("对不起！您输了！ \n");

}