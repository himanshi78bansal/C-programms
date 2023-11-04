// // Students Marks Sum
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// //Complete the following function.

// int marks_summation(int* marks, int number_of_students, char gender);


// int main() {
//     int number_of_students;
//     char gender;
//     int sum;

//     scanf("%d", &number_of_students);
//     int *marks = (int *) malloc(number_of_students * sizeof (int));

//     for (int student = 0; student < number_of_students; student++) {
//         scanf("%d", (marks + student));
//     }
    
//     scanf(" %c", &gender);
//     sum = marks_summation(marks, number_of_students, gender);
//     printf("%d", sum);
//     free(marks);

//     return 0;
// }

// int marks_summation(int* marks, int number_of_students, char gender) {
// int sum = 0;
// if (gender == 'b')
// {
//     for (int i = 0; i < number_of_students; i+=2)
//     {
//         sum += *(marks + i);
//     }
//         return sum;
// }
// else if (gender == 'g')
// {
//     for (int i = 1; i < number_of_students; i+=2)
//     {
//         sum += *(marks + i);
//     }
//         return sum;
// }
// } 





// // Calculate the Nth term
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
// //Complete the following function.

// int find_nth_term(int n, int a, int b, int c) 
// {
//     if (n == 1)
//     return a;
//     if (n == 2)
//     return b;
//     if (n == 3)
//     return c;

//     int sumnm1 = find_nth_term(n-1,a,b,c);
//     int sumnm2 = find_nth_term(n-2,a,b,c);
//     int sumnm3 = find_nth_term(n-3,a,b,c);

//     int sumn =  sumnm1 + sumnm2 + sumnm3;
//     return sumn;
    
// }

// int main() {
//     int n, a, b, c;

//     scanf("%d %d %d %d", &n, &a, &b, &c);
//     int ans = find_nth_term(n, a, b, c);

//     printf("%d", ans); 
//     return 0;
// }