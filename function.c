#include <stdio.h>

#define MAX_NUM 100

typedef struct {
    int x;
    int y;
} Point;

void print_point(Point *p)
{
    printf("Point coordinates: (%d, %d)\n", p->x, p->y);
}

int main(void)
{
    int i;
    Point points[MAX_NUM];

    for (i = 0; i < MAX_NUM; i++) {
        points[i].x = i;
        points[i].y = i * i;
    }

    for (i = 0; i < MAX_NUM; i++) {
        print_point(&points[i]);
    }

    return 0;
}

