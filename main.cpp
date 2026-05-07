#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14159265359;
int addition (int x,int y){
return x+y;
}
//(1)addition function
int subtraction (int x,int y){
return x-y;
}
//(2)subtraction function
int multiplication (int x,int y){
    return x*y;
}
//(3)multiplication function
double division(int x, int y){
    return (double)x / y;
}
//(4)division function
double power(int x, int y){
    return pow(x, y);
}
//(5)power(x^y) function
double square_root(double x){
    return sqrt(x);
}
//(6)square root function
int factorial(int x){
    int result = 1;
    for(int i = 1; i <= x; i++)
    {
        result *= i;
    }
    return result;
}
//(7)factorial function
int absolute (int x){
    return abs(x);
    }
//(8)absolute value function

double sine(double degree){
    double radian = degree * PI / 180;
    return sin(radian);
}
//(9)Sine (degrees) function
double cosine(double degree){
    double radian = degree * PI / 180;
    return cos(radian);
}
//(10)Cosine (degrees) function
int find_max(int arr[], int size){
    int max = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}
//(11)find Max in a list function
int find_min(int arr[], int size){
    int min = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}
//(12)find Min in a list function
double average(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return (double)sum / size;
}
//(13)Calculate average of a list function
int sum_list(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
//(14)Calculate sum of a list function
int main()
{
int choice;
int x, y;
int size;
int arr[100];
double d;
    while(true){
{
    cout << "\n-----------------------------------------\n";
    cout << "             Ahmed Calculator            \n";
    cout << "-----------------------------------------\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Power (x^y)\n";
    cout << "6. Square Root\n";
    cout << "7. Factorial\n";
    cout << "8. Absolute Value\n";
    cout << "9. Sine\n";
    cout << "10. Cosine\n";
    cout << "11. Find Max in List\n";
    cout << "12. Find Min in List\n";
    cout << "13. Average of List\n";
    cout << "14. Sum of List\n";
    cout << "0. Exit\n";
    cout << "-----------------------------------------\n";
}


        cout << "Enter your choice: ";
        cin >> choice;

if(choice == 0){
            cout << "Goodbye...\n";
            break;
        }

if(choice == 1){
cout << "Enter first number: ";
cin >> x;

cout << "Enter second number: ";
cin >> y;

    cout << "Result = " << addition(x,y) << endl;
}

else if(choice == 2){
cout << "Enter first number: ";
cin >> x;

cout << "Enter second number: ";
cin >> y;

    cout << "Result = " << subtraction(x,y) << endl;
}

else if(choice == 3){
cout << "Enter first number: ";
cin >> x;

cout << "Enter second number: ";
cin >> y;

    cout << "Result = " << multiplication(x,y) << endl;
}

else if(choice == 4){
cout << "Enter first number: ";
cin >> x;

cout << "Enter second number: ";
cin >> y;

    if(y == 0)
        cout << "Error: Division by Zero!" << endl;
    else
        cout << "Result = " << division(x,y) << endl;
}

else if(choice == 5){
    cout << "Enter base and power: ";
    cin >> x >> y;
    cout << "Result = " << power(x,y) << endl;
}

else if(choice == 6){

    cout << "Enter number: ";
    cin >> d;

    if(d < 0){

        cout << "Square root of negative number is impossible!\n";
    }

    else{

        cout << "Result = " << square_root(d) << endl;
    }
}

else if(choice == 7){

    cout << "Enter number: ";
    cin >> x;

    if(x < 0){

        cout << "Factorial of negative number is impossible!\n";
    }

    else{

        cout << "Result = " << factorial(x) << endl;
    }
}

else if(choice == 8){
    cout << "Enter number: ";
    cin >> x;
    cout << "Result = " << absolute(x) << endl;
}

else if(choice == 9){
    cout << "Enter angle (degrees): ";
    cin >> d;
    cout << "sin(" << d << ") = " << sine(d) << endl;
}

else if(choice == 10){
    cout << "Enter angle (degrees): ";
    cin >> d;
    cout << "cos(" << d << ") = " << cosine(d) << endl;
}

else if(choice == 11){

    cout << "Enter size of array: ";
    cin >> size;

    if(size <= 0 || size > 100){

        cout << "Invalid size!\n";
        continue;
    }

    cout << "Enter numbers one by one:\n";

    for(int i = 0; i < size; i++)
    {
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    cout << "Max value = "
         << find_max(arr,size) << endl;
}

else if(choice == 12){
cout << "Enter size of array: ";
cin >> size;
  if(size <= 0 || size > 100){

        cout << "Invalid size!\n";
        continue;
    }
cout << "Enter numbers one by one:\n";
for(int i = 0; i < size; i++)
{
    cout << "Enter element " << i+1 << ": ";
    cin >> arr[i];
}
    cout << "Min value = " << find_min(arr,size) << endl;
}

else if(choice == 13){
cout << "Enter size of array: ";
cin >> size;
  if(size <= 0 || size > 100){

        cout << "Invalid size!\n";
        continue;
    }
cout << "Enter numbers one by one:\n";
for(int i = 0; i < size; i++)
{
    cout << "Enter element " << i+1 << ": ";
    cin >> arr[i];
}
    cout << "Average = " << average(arr,size) << endl;
}

else if(choice == 14){
cout << "Enter size of array: ";
cin >> size;
  if(size <= 0 || size > 100){

        cout << "Invalid size!\n";
        continue;
    }
cout << "Enter numbers one by one:\n";
for(int i = 0; i < size; i++)
{
    cout << "Enter element " << i+1 << ": ";
    cin >> arr[i];
}
    cout << "Sum = " << sum_list(arr,size) << endl;
}

else{
cout << "Invalid choice - Please try again!" << endl;
}
    }
    return 0;
}
