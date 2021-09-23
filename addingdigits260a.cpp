// Vasya has got two number: a and b. However, Vasya finds number a too short.
// So he decided to repeat the operation of lengthening number a n times.
// One operation of lengthening a number means adding exactly one digit to
// the number (in the decimal notation) to the right provided that the resulting
// number is divisible by Vasya's number b. If it is impossible to obtain the number
// which is divisible by b, then the lengthening operation cannot be performed.
// Your task is to help Vasya and print the number he can get after applying the lengthening operation to number a n times.

// Input
// The first line contains three integers: a, b, n (1 ≤ a, b, n ≤ 105).

// Output
// In a single line print the integer without leading zeros, which Vasya can get when he applies the lengthening operations to number a n times. If no such number exists, then print number -1. If there are multiple possible answers, print any of them.


//my try



// #include <iostream>
// #include <string>

// using namespace std;

// int main()
// {
//     int a, b, n;
//     cin >> a >> b >> n;
//     int num = a;
//     int flag = 0;
//     int breaker = 0;
//     while (flag < n)
//     {
//         breaker++;
//         for (int i = 1; i < 10; i++)
//         {

//             if ((num * 10 + i) % b == 0 && flag < n)
//             {
//                 num = num * 10 + i;
//                 flag++;
//                 breaker = 0;
//             }
//         }
//         if (breaker == 2)
//         {
//             return -1;
//             break;
//         }
//     }
//     cout << num;
//     //return 0;
// }