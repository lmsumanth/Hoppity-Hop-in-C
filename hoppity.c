/*
 *	Hoppity Hop!
 *	Sumanth Lingala - lmsumanth@gmail.com
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
        int number, i;
        fopen(argv[1], "r", stdin);
        scanf("%d", &number);
        for(i = 1; i <= number; ++i) {
                if(i % 3 == 0 && i % 5 == 0)
					printf("Hop\n");
                else if(i % 3 == 0)
					printf("Hoppity\n");
                else if(i % 5 == 0)
					printf("Hophop\n");
        }
        return 0;
}