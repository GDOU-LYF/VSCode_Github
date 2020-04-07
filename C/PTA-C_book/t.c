#include <stdio.h>
int main()
{
    int a[101][2], b[101][2];
    int i, j;

    /*输入*/
    for (i = 0; i < 101; i++)
    {
        scanf("%d %d", &a[i][0], &a[i][1]);
        if (a[i][0] == 0)    /*遇0结束*/
            break;
    }
    int na = i + 1;    /*a项数*/
    
    for (i = 0; i < 101; i++)
    {
        scanf("%d %d", &b[i][0], &b[i][1]);
        if (b[i][0] == 0)
            break;
    }
    int nb = i + 1;    /*b项数*/

    //printf("\n输入调试：\n");

    //printf("na=%d,nb=%d\n", na, nb);
    //for (i = 0; i < na; i++)
    //{
    //    printf("%d %d\n", a[i][0], a[i][1]);
    //}

    //for (i = 0; i < nb; i++)
    //{
    //    printf("%d %d\n", b[i][0], b[i][1]);
    //}

    /*比较，求和*/
    int c[101 * 2][2];    /*和数组*/
    for (i = 0; i < na; i++)
    {
        c[i][0] = a[i][0];
        c[i][1] = a[i][1];
    }

    int nc = na;    /*c项数*/
    int ch;    /*判断用*/
    for (j = 0, ch = 1; j < nb; j++, ch = 1)
    {
        for (i = 0; i < na; i++)
        {
            if (b[j][0] == c[i][0])    /*幂次相同，系数相加*/
            {
                c[i][1] += b[j][1];
                ch = 0;
                break;
            }
        }
        if (ch)    /*ch=0，有相同幂次。ch=1,没有相同幂次，加到数组后面*/
        {
            nc++;
            c[nc - 1][0] = b[j][0];
            c[nc - 1][1] = b[j][1];
        }
    }

    //printf("\n求和调试：\n");

    //printf("nc=%d\n", nc);
    //for (i = 0; i < nc; i++)
    //{
    //    printf("%d %d\n", c[i][0], c[i][1]);
    //}

    /*排序*/
    int t;
    for (j = 0; j < nc - 1; j++)
        for (i = 0; i < nc - 1 - j; i++)
            if (c[i][0] < c[i + 1][0])
            {
                t = c[i][0];
                c[i][0] = c[i + 1][0];
                c[i + 1][0] = t;

                t = c[i][1];
                c[i][1] = c[i + 1][1];
                c[i + 1][1] = t;
            }

    //printf("\n排序调试：\n");

    //printf("c=%d\n", nc);
    //for (i = 0; i < nc; i++)
    //{
    //    printf("%d %d\n", c[i][0], c[i][1]);
    //}

    /*输出*/

    /*输出第一项*/
    for (i = 0; i < nc; i++)    /*第一个系数不为0的项*/
        if (c[i][1] != 0)
        {
            if (c[i][0] == 0)
                printf("%d", c[i][1]);
            else if (c[i][0] == 1 && c[i][1] == 1)
                printf("x");
            else if (c[i][0] == 1 && c[i][1] == -1)
                printf("-x");
            else if (c[i][0] == 1)
                printf("%dx", c[i][1]);
            else if (c[i][1] == -1)
                printf("-x%d", c[i][0]);
            else
                printf("%dx%d", c[i][1], c[i][0]);
            break;
        }

    int first = i;    /*第一项数组位置行标*/
    if (i == nc)    /*全为0*/
        printf("0");

    /*输出第二项之后*/
    for (i = first + 1; i < nc; i++)
        if (c[i][1] != 0)
        {
            if (c[i][0] == 0)
                printf("%+d", c[i][1]);
            else if (c[i][0] == 1 && c[i][1] == 1)
                printf("+x");
            else if (c[i][0] == 1 && c[i][1] == -1)
                printf("-x");
            else if (c[i][0] == 1)
                printf("%+dx", c[i][1]);
            else if (c[i][1] == -1)
                printf("-x%d", c[i][0]);
            else
                printf("%+dx%d", c[i][1], c[i][0]);
        }

    return 0;
}