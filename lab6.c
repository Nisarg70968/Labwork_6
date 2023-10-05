#include <stdio.h>

int main()
{
    /*Answer : 6.1 : (a + b)^2

    = a2 + b2 + 2ab
    = (a * a) + (b * b) + (2 * a * b)

    */
    double a, b, c;

    printf("Enter the value of a: ");
    scanf("%lf", &a);

    printf("Enter the value of b: ");
    scanf("%lf", &b);

    c = (a+b) * (a+b);
    ;

    printf("The Ans of (a+b)2 is: %lf\n", c);

    printf("___________________________________________________________________\n");

    /*Answer : 6.2 : (a - b)^2

    = a2 + b2 - 2ab
    = (a * a) + (b * b) - (2 * a * b)

    */

    double a1, b1, c1;

    printf("Enter the value of a1: ");
    scanf("%lf", &a1);

    printf("Enter the value of b1: ");
    scanf("%lf", &b1);

    c1 = (a1-b1) * (a1-b1);

    printf("The Ans of (a-b)2 is: %lf\n", c1);

    printf("___________________________________________________________________\n");

    //Answer : 6.3 :(a+b)^3

    double a2, b2, c2;

    printf("Enter the value of a2: ");
    scanf("%lf", &a2);

    printf("Enter the value of b2: ");
    scanf("%lf", &b2);

    c2 = (a2+b2)*(a2+b2)*(a2+b2);
    printf("The Ans of (a+b)3 is: %lf\n", c2);

    printf("___________________________________________________________________\n");

    //Answer : 6.4 : (a-b)^3

    double a3, b3, c3;

    printf("Enter the value of a3: ");
    scanf("%lf", &a3);

    printf("Enter the value of b3: ");
    scanf("%lf", &b3);

    c3 = (a3-b3)*(a3-b3)*(a3-b3);

    printf("The Ans of (a-b)3 is: %lf\n", c3);

    printf("___________________________________________________________________\n");

    //Answer : 6.5 : (a+b+c)^3

    double a4, b4, c4, d;

    printf("Enter the value of a4: ");
    scanf("%lf", &a4);

    printf("Enter the value of b4: ");
    scanf("%lf", &b4);

    printf("Enter the value of c4: ");
    scanf("%lf", &c4);

    d = (a4+b4+c4)*(a4+b4+c4)*(a4+b4+c4);

    printf("The Ans of (a+b+c)3 is: %lf\n", d);

    printf("___________________________________________________________________\n");

    //Answer : 6.6 : (a-b-c)^3

    double a5, b5, c5, d1;

    printf("Enter the value of a5: ");
    scanf("%lf", &a5);

    printf("Enter the value of b5: ");
    scanf("%lf", &b5);

    printf("Enter the value of c5: ");
    scanf("%lf", &c5);

    d1 = (a5-b5-c5)*(a5-b5-c5)*(a5-b5-c5);

    printf("The Ans of (a-b-c)3 is: %lf\n", d1);

    printf("___________________________________________________________________\n");

    //Answer : 6.7 : (a+b+c)^2

 double a6, b6, c6, d2;

    printf("Enter the value of a6: ");
    scanf("%lf", &a6);

    printf("Enter the value of b6: ");
    scanf("%lf", &b6);

    printf("Enter the value of c6: ");
    scanf("%lf", &c6);

    d2 = (a6+b6+c6)*(a6+b6+c6);

    printf("The Ans of (a+b+c)2 is: %lf\n", d2);

    printf("___________________________________________________________________\n");


    return 0;
}


/*

Output:

Enter the value of a: 2
Enter the value of b: 8
The Ans of (a+b)2 is: 100.000000
___________________________________________________________________
Enter the value of a1: 2
Enter the value of b1: 8
The Ans of (a-b)2 is: 36.000000
___________________________________________________________________
Enter the value of a2: 2
Enter the value of b2: 8
The Ans of (a+b)3 is: 1000.000000
___________________________________________________________________
Enter the value of a3: 2
Enter the value of b3: 8
The Ans of (a-b)3 is: -216.000000
___________________________________________________________________
Enter the value of a4: 2
Enter the value of b4: 5
Enter the value of c4: 8
The Ans of (a+b+c)3 is: 3375.000000
___________________________________________________________________
Enter the value of a5: 2
Enter the value of b5: 5
Enter the value of c5: 8
The Ans of (a-b-c)3 is: -1331.000000
___________________________________________________________________
Enter the value of a6: 2
Enter the value of b6: 5
Enter the value of c6: 8
The Ans of (a+b+c)2 is: 225.000000
___________________________________________________________________

*/