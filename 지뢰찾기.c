#include<stdio.h>
#include<stdlib.h>
#include<time.h>
# define p 10
char mine[p][p] = { 0 };
void add_mine(int n)
{
    int x, y;
    srand((unsigned)time(NULL));
    int i = 0;
    for (i = 0; i < n; i++)
    {
        x = rand() % p;
        y = rand() % p;
        if (mine[y][x] == 0)
            mine[y][x] = 'M';
        else
            n--;
    }
}
void draw_map()
{
    int i, j;
    int cnt = 0;
    char str[10] = { 0 };
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < p; j++)
        {
            if (mine[i][j] == 0)
            {
                cnt = 0;
                if ((i - 1) >= 0)
                {
                    if ((j - 1) >= 0 && mine[i - 1][j - 1] == 'M')
                        cnt++;
                    if (mine[i - 1][j] == 'M')
                        cnt++;
                    if ((j + 1) < p && mine[i - 1][j + 1] == 'M')
                        cnt++;
                }
                if ((j - 1) >= 0 && mine[i][j - 1] == 'M')
                    cnt++;
                if ((j + 1) < p && mine[i][j + 1] == 'M')
                    cnt++;
                if ((i + 1) < p)
                {
                    if ((j - 1) >= 0 && mine[i + 1][j - 1] == 'M')
                        cnt++;
                    if (mine[i + 1][j] == 'M')
                        cnt++;
                    if ((j + 1) < p && mine[i + 1][j + 1] == "M")
                        cnt++;
                }
                mine[i][j] = cnt + 48; //아스키코드로 48이 숫자 0
            }
        }
    }
}
void print_map()
{
    int l, k;
    printf("\n");
    for (l = 0; l < p; l++)
    {
        for (k = 0; k < p; k++)
        {
            printf("%c", mine[l][k]);
            printf(" ");
        }
        printf("\n");
    }
}
int main()
{
    add_mine(10);
    draw_map();
    print_map();
}