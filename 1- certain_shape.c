#include <stdio.h>

int eq_circle(int x, int y, int radius)
{
        return x*x+y*y - radius;
}

int eq_parabol(int x, int y)
{
	
        return x*x-y;
}

void draw_circle(int radius)
{
        int x, y;
        for (x=-5; x<=5; x++) {
                for (y=-10; y<=10; y++) {
                        if (eq_circle(x, y, radius) < 0) printf("  ");
                        else printf("**");
                }
                printf("\n");
        }
}

void draw_parabol()
{
        int x, y;
        for (x=-5; x<=5; x++) {
                for (y=-10; y<=10; y++) {
                        if (eq_parabol(x, y) < 0) printf(" ");
                        else printf("*");
                }
                printf("\n");
        }
}

int main()
{
        draw_circle(8);
        printf("\n");
        draw_parabol();
}