#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    // the number of temperatures to analyse
    int n;
    int valNeg = -6000;
    int  valPos = 6000;
    int  valFinal = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        // a temperature expressed as an integer ranging from -273 to 5526
        int t;
        scanf("%d", &t);
    /*for i in inputs.split_whitespace() {
        let t = parse_input!(i, i32);*/
        fprintf(stderr, "%d\n", t);
     //   eprintln!("Debug message...{}", t);
        

        if (t < 0 && t > valNeg )
        {
            valNeg = t;
        }
        if (t > 0 && t < valPos )
        {
            valPos = t;
        }
        if(valPos == -valNeg || valPos < -valNeg)
        {
            valFinal = valPos;
        }
        else
        {
            valFinal = valNeg;
        }
        fprintf(stderr, "Debug message...%d %d %d\n", valNeg, valPos, valFinal);
   // }

    // Write an answer using println!("message...");
    // To debug: eprintln!("Debug message...");
//println!("{}", valFinal);
    }

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    printf("%d\n",valFinal);

    return 0;
}