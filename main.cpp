#include <iostream>
#include <vector>

/*
Author: Aman Arabzadeh
Date: 2023-06-29

Code Description:
I have written this code to explore and test various recursive functions.
By studying these functions, I aim to deepen my understanding of recursion and broaden my programming skills.

Function Explanation:
1. factorial(int n):
   - Computes the factorial of a given integer.
   - Usage: int result = factorial(n);

2. fibonacci(int n):
   - Generates the nth number in the Fibonacci sequence.
   - Usage: int result = fibonacci(n);

3. binarySearch(int arr[], int start, int end, int target):
   - Performs binary search on a sorted array to find the index of a target element.
   - Usage: int index = binarySearch(arr, start, end, target);

4. sumOfDigits(int n):
   - Calculates the sum of the digits of a positive integer.
   - Usage: int sum = sumOfDigits(n);

5. reverseString(std::string& str, int start, int end):
   - Reverses the characters in a string.
   - Usage: reverseString(str, start, end);

6. power(double base, int exponent):
   - Computes the power of a number.
   - Usage: double result = power(base, exponent);

7. gcd(int a, int b):
   - Computes the Greatest Common Divisor of two positive integers.
   - Usage: int result = gcd(a, b);

8. sumOfArray(int arr[], int size):
   - Calculates the sum of elements in an array.
   - Usage: int sum = sumOfArray(arr, size);

9. binaryRepresentation(int n):
   - Converts a decimal number to binary representation.
   - Usage: binaryRepresentation(n);

10. towerOfHanoi(int n, char source, char auxiliary, char destination):
    - Solves the Tower of Hanoi problem.
    - Usage: towerOfHanoi(n, source, auxiliary, destination);

11. isPalindrome(const std::string& str, int start, int end):
    - Checks if a string is a palindrome.
    - Usage: bool isPal = isPalindrome(str, start, end);

12. sumOfNaturalNumbers(int n):
    - Calculates the sum of natural numbers up to a given value.
    - Usage: int sum = sumOfNaturalNumbers(n);

13. findMax(int arr[], int size):
    - Finds the maximum element in an array.
    - Usage: int maxVal = findMax(arr, size);

14. mergeSort(std::vector<T>& container):
    - Sorts the elements in a vector using the Merge Sort algorithm.
    - Usage: mergeSort(container);

15. decimalToBinary1(int n):
    - Converts a decimal number to binary representation.
    - Usage: decimalToBinary1(n);

16. countOccurrences(int arr[], int size, int target):
    - Counts the occurrences of a target number in an array.
    - Usage: int count = countOccurrences(arr, size, target);

17. towerOfAnoih(int n, char source, char auxiliary, char destination):
    - Solves the Tower of Hanoi problem.
    - Usage: towerOfAnoih(n, source, auxiliary, destination);

18. stringLength(const std::string& str):
    - Calculates the length of a string.
    - Usage: int length = stringLength(str);

19. sumOfEvenNumbers(int arr[], int size):
    - Calculates the sum of even numbers in an array.
    - Usage: int sum = sumOfEvenNumbers(arr, size);

20. powerExpo(double base, int exponent):
    - Computes the power of a number (optimized version).
    - Usage: double result = powerExpo(base, exponent);

21. decimalToBinary(int n):
    - Converts a decimal number to binary representation (string).
    - Usage: std::string binary = decimalToBinary(n);

22. printRange(int start, int end):
    - Prints numbers in a given range.
    - Usage: printRange(start, end);

23. isPrime(int n, int divisor = 2):
    - Checks if a number is prime.
    - Usage: bool isPrimeNum = isPrime(n);

24. isPalindromeNoneAlphanumeric(const std::string& str, int start, int end):
    - Checks if a string is a valid palindrome, ignoring non-alphanumeric characters.
    - Usage: bool isPal = isPalindromeNoneAlphanumeric(str, start, end);

25. countVowels(const std::string& str, int index = 0):
    - Counts the number of vowels in a string.
    - Usage: int vowelCount = countVowels(str);

*/

//// Factorial:
int factorial(std::size_t n) {
    // Base case: If n is 0, factorial is 1
    if (n == 0) {
        return 1;
    }
    // Recursive case: Multiply n with factorial of (n-1)
    return n * factorial(n - 1);
}

//// Fibonacci sequence:
int fibonacci(std::size_t n) {
    // Base case: If n is 0 or 1, fibonacci number is n itself
    if (n <= 1) {
        return n;
    }
    // Recursive case: Sum of previous two fibonacci numbers
    return fibonacci(n - 1) + fibonacci(n - 2);
}

//// Binary search:
int binarySearch(int arr[], int start, int end, int target) {
    // Base case: If start is greater than end, target is not found
    if (start > end) {
        return -1;
    }
    int mid = start + (end - start) / 2;
    // Base case: If middle element is equal to target, return its index
    if (arr[mid] == target) {
        return mid;
    }
    // Recursive case: Search in the left or right half based on target's value
    if (arr[mid] < target) {
        return binarySearch(arr, mid + 1, end, target);
    }
    return binarySearch(arr, start, mid - 1, target);
}

//// Sum of digits:
int sumOfDigits(std::size_t n) {
    // Base case: If n is 0, sum is 0
    if (n == 0) {
        return 0;
    }
    // Recursive case: Add last digit to sumOfDigits of remaining digits
    return n % 10 + sumOfDigits(n / 10);
}

//// String reversal:
void reverseString(std::string& str, int start, int end) {
    // Base case: If start is greater than or equal to end, string is reversed
    if (start >= end) {
        return;
    }
    // Swap characters at start and end indices and recurse on the remaining substring
    std::swap(str[start], str[end]);
    reverseString(str, start + 1, end - 1);
}

//// Power of a number:
double power(double base, int exponent) {
    // Base case: If exponent is 0, power is 1
    if (exponent == 0) {
        return 1;
    }
    // Recursive case: Multiply base with power of (exponent-1)
    return base * power(base, exponent - 1);
}

//// GCD (Greatest Common Divisor):
int gcd(int a, int b) {
    // Base case: If b is 0, gcd is a
    if (b == 0) {
        return a;
    }
    // Recursive case: Compute gcd of b and remainder of a divided by b
    return gcd(b, a % b);
}

//// Sum of an array:
int sumOfArray(int arr[], int size) {
    // Base case: If size is 0, sum is 0
    if (size == 0) {
        return 0;
    }
    // Recursive case: Add last element to sumOfArray of remaining elements
    return arr[size - 1] + sumOfArray(arr, size - 1);
}

//// Binary representation:
void binaryRepresentation(std::size_t n) {
    // Base case: If n is greater than 1, convert n/2 to binary first
    if (n > 1) {
        binaryRepresentation(n / 2);
    }
    // Print the remainder when n is divided by 2 (binary digit)
    std::cout << n % 2;
}

//// Tower of Hanoi:
void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    // Base case: If there is only one disk, move it from source to destination
    if (n == 1) {
        std::cout << "Move disk 1 from " << source << " to " << destination << std::endl;
        return;
    }
    // Recursive case: Move n-1 disks from source to auxiliary, then move the largest disk to destination,
    // and finally move the n-1 disks from auxiliary to destination
    towerOfHanoi(n - 1, source, destination, auxiliary);
    std::cout << "Move disk " << n << " from " << source << " to " << destination << std::endl;
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

//// Palindrome checking:
bool isPalindrome(const std::string& str, int start, int end) {
    // Base case: If start is greater than or equal to end, string is a palindrome
    if (start >= end) {
        return true;
    }
    // Base case: If characters at start and end indices are not equal, string is not a palindrome
    if (str[start] != str[end]) {
        return false;
    }
    // Recursive case: Check for palindrome property in the remaining substring
    return isPalindrome(str, start + 1, end - 1);
}

//// Sum of natural numbers:
int sumOfNaturalNumbers(std::size_t n) {
    // Base case: If n is 0, sum is 0
    if (n == 0) {
        return 0;
    }
    // Recursive case: Add n to sumOfNaturalNumbers of (n-1)
    return n + sumOfNaturalNumbers(n - 1);
}

//// Maximum element in an array:
int findMax(int arr[], int size) {
    // Base case: If size is 1, maximum element is arr[0]
    if (size == 1) {
        return arr[0];
    }
    // Recursive case: Find maximum element between arr[size-1] and maximum element of remaining elements
    return std::max(arr[size - 1], findMax(arr, size - 1));
}

/// Merge Sort:
template <typename T>
void merge(std::vector<T>& container, std::size_t left, std::size_t mid, std::size_t right) {
    // Helper function to merge two sorted halves of the container

    // Create a temporary container to store the merged elements
    std::vector<T> help_container(container.size());

    std::size_t i = left;
    std::size_t j = mid + 1;
    std::size_t k = left;

    // Merge the two halves into the temporary container
    while (i <= mid && j <= right) {
        if (container[i] <= container[j]) {
            help_container[k] = container[i];
            ++i;
        } else {
            help_container[k] = container[j];
            ++j;
        }
        ++k;
    }

    // Copy the remaining elements from the first half, if any
    while (i <= mid) {
        help_container[k] = container[i];
        ++i;
        ++k;
    }

    // Copy the remaining elements from the second half, if any
    while (j <= right) {
        help_container[k] = container[j];
        ++j;
        ++k;
    }

    // Copy the merged elements from the temporary container back to the original container
    for (std::size_t pos = left; pos <= right; ++pos) {
        container[pos] = help_container[pos];
    }
}

template <typename T>
void mergeSortRecursive(std::vector<T>& container, std::size_t left, std::size_t right) {
    // Recursive function to perform merge sort on the container

    // Base case: If left index is less than right index, divide the container and sort recursively
    if (left < right) {
        std::size_t mid = (left + right) / 2;

        mergeSortRecursive(container, left, mid);
        mergeSortRecursive(container, mid + 1, right);

        // Merge the two sorted halves
        merge(container, left, mid, right);
    }
}

template <typename T>
void mergeSort(std::vector<T>& container) {
    // Wrapper function for mergeSortRecursive

    // Perform merge sort on the entire container
    mergeSortRecursive(container, 0, container.size() - 1);
}

//// Decimal to binary conversion (using string):
std::string decimalToBinary(std::size_t n) {
    // Base case: If n is 0, binary representation is "0"
    if (n == 0) {
        return "0";
    }
    // Base case: If n is 1, binary representation is "1"
    if (n == 1) {
        return "1";
    }
    // Recursive case: Convert the quotient (n / 2) to binary and concatenate the remainder (n % 2)
    return decimalToBinary(n / 2) + std::to_string(n % 2);
}

//// Counting occurrences in an array:
int countOccurrences(int arr[], int size, int target) {
    // Base case: If size is 0, no occurrences of target in the array
    if (size == 0) {
        return 0;
    }
    // Recursive case: Count occurrences of target in the remaining elements of the array
    if (arr[size - 1] == target) {
        return 1 + countOccurrences(arr, size - 1, target);
    }
    return countOccurrences(arr, size - 1, target);
}

//// Check if a number is prime:
bool isPrime(std::size_t n, int divisor = 2) {
    // Base case: If n is less than or equal to 2, it is prime if and only if it is equal to 2
    if (n <= 2) {
        return n == 2;
    }
    // Base case: If n is divisible by the current divisor, it is not prime
    if (n % divisor == 0) {
        return false;
    }
    // Base case: If the square of the current divisor is greater than n, n is prime
    if (divisor * divisor > n) {
        return true;
    }
    // Recursive case: Check divisibility of n with the next divisor
    return isPrime(n, divisor + 1);
}

//// Check if a string is a valid palindrome (ignoring non-alphanumeric characters):
bool isPalindromeNoneAlphanumeric(const std::string& str, int start, int end) {
    // Base case: If start is greater than or equal to end, string is a palindrome
    if (start >= end) {
        return true;
    }
    // Base case: If character at start index is non-alphanumeric, move to the next index
    if (!isalnum(str[start])) {
        return isPalindromeNoneAlphanumeric(str, start + 1, end);
    }
    // Base case: If character at end index is non-alphanumeric, move to the previous index
    if (!isalnum(str[end])) {
        return isPalindromeNoneAlphanumeric(str, start, end - 1);
    }
    // Base case: If characters at start and end indices are not equal, string is not a palindrome
    if (tolower(str[start]) != tolower(str[end])) {
        return false;
    }
    // Recursive case: Check for palindrome property in the remaining substring
    return isPalindromeNoneAlphanumeric(str, start + 1, end - 1);
}


//// Decimal to binary conversion:
// Function to convert a decimal number to binary using recursion
void decimalToBinary1(std::size_t n) {
    if (n > 1) {
        decimalToBinary1(n / 2);
    }
    // Print the remainder (binary digit) in reverse order
    std::cout << n % 2;
}



// towerOfAnoih
//// Tower of Hanoi using recursion:
// Function to solve the Tower of Hanoi puzzle using recursion
void towerOfAnoih(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        // Base case: If there is only one disk, move it from the source to the destination
        std::cout << "Move disk 1 from " << source << " to " << destination << std::endl;
        return;
    }
    // Recursive case:
    // 1. Move n-1 disks from the source to the auxiliary peg using the destination peg
    towerOfHanoi(n - 1, source, destination, auxiliary);
    // 2. Move the nth disk from the source to the destination peg
    std::cout << "Move disk " << n << " from " << source << " to " << destination << std::endl;
    // 3. Move the n-1 disks from the auxiliary peg to the destination peg using the source peg
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

//// String length:
// Function to calculate the length of a string using recursion
int stringLength(const std::string& str) {
    if (str.empty()) {
        // Base case: If the string is empty, its length is 0
        return 0;
    }
    // Recursive case:
    // Add 1 to the length of the substring obtained by excluding the first character
    return 1 + stringLength(str.substr(1));
}

//// Sum of even numbers in an array:
// Function to calculate the sum of even numbers in an array using recursion
int sumOfEvenNumbers(int arr[], int size) {
    if (size == 0) {
        // Base case: If the size of the array is 0, the sum is 0
        return 0;
    }
    if (arr[size - 1] % 2 == 0) {
        // If the last element of the array is even, add it to the sum
        // and recursively calculate the sum of the remaining elements
        return arr[size - 1] + sumOfEvenNumbers(arr, size - 1);
    }
    // If the last element is odd, exclude it and recursively calculate the sum
    return sumOfEvenNumbers(arr, size - 1);
}

//// Exponential power: Improved version.
// Function to calculate the exponentiation of a base number using recursion
double powerExpo(double base, int exponent) {
    if (exponent == 0) {
        // Base case: If the exponent is 0, the result is 1
        return 1;
    }
    if (exponent % 2 == 0) {
        // If the exponent is even, divide it by 2 and square the result
        double result = powerExpo(base, exponent / 2);
        return result * result;
    }
    // If the exponent is odd, subtract 1 from it and recursively calculate the power
    return base * powerExpo(base, exponent - 1);
}

//// Print numbers in a range:
// Function to print numbers in a given range using recursion
void printRange(int start, int end) {
    if (start > end) {
        // Base case: If the start value exceeds the end value, return
        return;
    }
    // Print the current number and recursively print the remaining numbers
    std::cout << start << " ";
    printRange(start + 1, end);
}

//// Count the number of vowels in a string:
// Function to count the number of vowels in a string using recursion
int countVowels(const std::string& str, int index = 0) {
    if (index == str.length()) {
        // Base case: If the index reaches the end of the string, return 0
        return 0;
    }
    char ch = std::tolower(str[index]);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        // If the current character is a vowel, increment the count by 1
        // and recursively count the vowels in the remaining string
        return 1 + countVowels(str, index + 1);
    }
    // If the current character is not a vowel, skip it and recursively count the vowels
    return countVowels(str, index + 1);
}
// Function to calculate the nth term of the Taylor Series
double taylorSeries(int x, int n) {
    if (n == 0) {
        return 1; // Base case: When n reaches 0, return 1 (first term of the series) 1 + x^0/1!+x^2/2! so on
    }
    double term = power(x, n) / factorial(n); // Calculate the current term using power and factorial functions
    return term + taylorSeries(x, n - 1); // Recursively calculate the next term (n-1) and sum it with the current term
}


// Utility functions:

// Function to print the elements of a vector
template <typename T>
void printVector(const std::vector<T>& vec) {
    for (const auto& num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

// Function to print an integer result with a label
void printIntResult(const std::string& label, int result) {
    std::cout << label << ": " << result << std::endl;
}

// Function to print a boolean result with a label
void printBoolResult(const std::string& label, bool result) {
    std::cout << label << ": " << std::boolalpha << result << std::endl;
}

// Function to print a generic result with a label
template <typename T>
void printResult(const std::string& label, T result) {
    std::cout << label << ": " << result << std::endl;
}

int main() {
// Enable boolalpha to print boolean values as "true" or "false"
    std::cout << std::boolalpha;

// Calculate factorial of 5 and print the result
    int factorialResult = factorial(5);
    printIntResult("Factorial", factorialResult); // 120

// Calculate the 6th Fibonacci number and print the result
    int fibonacciResult = fibonacci(6);
    printIntResult("Fibonacci", fibonacciResult); // result = 8

// Initialize an array and find the position of target value using binary search
    int arr[11] = {0, 1, 2, 3, 4, 5, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(int);
    int target = 6;
    int binarySearchResult = binarySearch(arr, 0, size - 1, target);
    printResult("Binary Search", binarySearchResult);  // 7 (position of target)

// Calculate the sum of digits of the number 1234
    int sumOfDigitsResult = sumOfDigits(1234);
    printResult("Sum of Digits", sumOfDigitsResult); // 10

// Reverse the string "Hello, world!"
    std::string str = "Hello, world!";
    reverseString(str, 0, str.length() - 1);
    std::cout << "Reversed String: " << str << std::endl;  // Reversed String: !dlrow ,olleH

// Calculate 2^3 and print the result
    double powerResult = power(2.0, 3);
    printResult("Power", powerResult); // 8

// Calculate the greatest common divisor (GCD) of 12 and 18
    int gcdResult = gcd(12, 18);
    printResult("GCD", gcdResult); // 6

// Calculate the sum of all elements in the array
    int sumOfArrayResult = sumOfArray(arr, size);
    printResult("Sum of Array", sumOfArrayResult);  // 45

// Convert the decimal number 10 to binary representation and print it
    std::cout << "Binary Representation: ";
    binaryRepresentation(10); // 1010
    std::cout << std::endl;

// Solve the Tower of Hanoi puzzle with 3 disks
    std::cout << "Tower of Hanoi: " << std::endl;
    towerOfHanoi(3, 'A', 'B', 'C');

// Check if the string "madam" is a palindrome
    bool isPalindromeResult = isPalindrome("madam", 0, 4);
    printResult("Is Palindrome", isPalindromeResult); // 1 (true)

// Calculate the sum of natural numbers up to 10
    int sumOfNaturalNumbersResult = sumOfNaturalNumbers(10);
    printResult("Sum of Natural Numbers", sumOfNaturalNumbersResult);  // 55 (10*(10+1)/2)

// Find the maximum element in the array
    int findMaxResult = findMax(arr, size);
    printResult("Maximum Element in Array", findMaxResult); // 9

// Perform merge sort on a vector of numbers
    std::vector<int> container = {1, 2, 3, -3, 4, 5, -44, 6, 1, 2, 3, 4, 5, 6, 12, 4, 56, 77, 0};
    mergeSort(container);
    std::cout << "Merge Sort: ";
    printVector(container); // -44 -3 0 1 1 2 2 3 3 4 4 4 5 5 6 6 12 56 77

// Convert the decimal number 10 to binary representation and print it
    std::cout << "Decimal to Binary: ";
    decimalToBinary1(10);
    std::cout << std::endl;

// Count the occurrences of the value 5 in the array
    int countOccurrencesResult = countOccurrences(arr, size, 5);
    printResult("Count Occurrences", countOccurrencesResult); // 2

// Solve the Tower of Hanoi puzzle with 3 disks
    std::cout << "Tower of Anoih: " << std::endl;
    towerOfAnoih(3, 'A', 'B', 'C');

// Calculate the length of the string "Hello"
    int stringLengthResult = stringLength("Hello");
    printResult("String Length", stringLengthResult); // 5

// Calculate the sum of even numbers in the array
    int sumOfEvenNumbersResult = sumOfEvenNumbers(arr, size);
    printResult("Sum of Even Numbers", sumOfEvenNumbersResult); // 20 (2+4+6+8)

// Calculate the exponential power of 2^3 and print the result
    double powerExpoResult = powerExpo(2.0, 3);
    printResult("Exponential Power", powerExpoResult); // 8

// Convert the decimal number 255 to binary representation (string) and print it
    std::string binary = decimalToBinary(255);
    printResult("Decimal to Binary (string)", binary); // 11111111

// Print numbers in the range from 1 to 10
    std::cout << "Print Range: ";
    printRange(1, 10); // 1 2 3 4 5 6 7 8 9 10
    std::cout << std::endl;

// Check if the number 231 is prime
    bool isPrimeResult = isPrime(231);
    printResult("Is Prime", isPrimeResult); // false

// Check if the string "A man, a plan, a canal: Panama!" is a palindrome (ignoring non-alphanumeric characters)
    bool isPalindromeNoneAlphanumericResult = isPalindromeNoneAlphanumeric("A man, a plan, a canal: Panama!", 0, 21);
    printResult("Is Palindrome (ignoring non-alphanumeric)", isPalindromeNoneAlphanumericResult); // false

// Count the number of vowels in the string "Hello"
    int countVowelsResult = countVowels("Hello");
    printResult("Count Vowels", countVowelsResult); // 2



    /// Calling Tylor Series e^x
    int x = 2; // The value of x for which we want to calculate the Taylor Series
    int n = 5; // The number of terms in the Taylor Series

    double result = taylorSeries(x, n);
    std::cout << "Result: " << result << std::endl;


    return 0;
}