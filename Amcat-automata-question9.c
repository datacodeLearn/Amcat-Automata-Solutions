/*A Pythagorean triplet is a set of three integers a, b and c such that a2 + b2 = c2. Given a limit, 
generate all Pythagorean Triples with values smaller than given limit.

Input:-20
output:-
3 4 5
8 6 10
5 12 13
15 8 17
12 16 20*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   
  
int a,b,c = 0,m=2,limit; 
  scanf("%d",&limit);
     while (c < limit) { 
        for (int n = 1; n < m; ++n) { 
              a = m * m - n * n; 
            b = 2 * m * n; 
            c = m * m + n * n; 
  
            if (c > limit) 
                break; 
  
            printf("%d %d %d\n", a, b, c); 
        } 
        m++; 
    }  
    return 0;
}

