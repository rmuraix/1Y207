#include <stdio.h>
#define XMAX 9
#define YMAX 9

int main(void){
    int m[ XMAX ][ YMAX ];
    int a = 1;
    int i = 1;
    
    for( int y = 0; y < YMAX; y++)
    {
        for( int x = 0; x < XMAX; x++ )
        {
            m[ x ][ y ] = a * i;
            a++;
        }
        a = 1;
        i++;
    }
    for( int y = 0; y < YMAX; y++)
    {
        for( int x = 0; x < XMAX; x++)
        {
            printf("%3d ", m[ x ][ y ]);
        }
        printf("\n");
    }
}