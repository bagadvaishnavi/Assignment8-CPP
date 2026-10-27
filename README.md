# Assignment 8: Implementation of Exception Handling in C++

## 1. Practical Details

- **Course:** SY B.Tech. Artificial Intelligence and Machine Learning
- **Practical Number:** 8
- **Practical Title:** Implementation of Exception Handling in C++
- **Programming Language:** C++
- **IDE:** Dev-C++
- **Library Used:** iostream

## 2. Problem Statement

Write a C++ program to implement exception handling using the `try`, `throw`, and `catch` keywords. The program handles division by zero, uses multiple catch blocks for different exception types, validates age, and uses a catch-all handler `catch(...)` for other exceptions.

## 3. Objectives

1. To understand exceptions and the need for exception handling.
2. To use the `try`, `throw`, and `catch` keywords.
3. To handle different exception types using multiple catch blocks.
4. To use `catch(...)` to handle any type of exception.
5. To prevent the program from stopping unexpectedly when a handled error occurs.

## 4. Theory

An exception is an error or unusual condition that occurs during program execution. Exception handling allows a program to handle such conditions appropriately.

### Try

The `try` block contains statements that may throw an exception.

### Throw

The `throw` statement raises an exception when an error condition is detected.

### Catch

The `catch` block receives and handles an exception thrown from a corresponding `try` block.

### Multiple Catch Blocks

Multiple catch blocks allow different exception types to be handled separately. In this program, an integer exception handles an age below 18, while a text exception handles division by zero and an invalid age.

### Catch-All Handler

The `catch(...)` block catches exceptions of any type that are not handled by a preceding matching catch block.

## 5. Algorithm

1. Start the program.
2. Read two numbers and the user's age.
3. Check for division by zero using a try block.
4. Throw an exception if the divisor is zero; otherwise, display the result.
5. Validate the age using another try block.
6. Throw a text exception if the age exceeds 100.
7. Throw an integer exception if the age is less than 18.
8. Handle the exceptions using appropriate catch blocks.
9. Throw a double value in a separate try block.
10. Handle it using `catch(...)`.
11. Display the program completion message.
12. Stop the program.

## 6. Test Cases

| Test Case | Input | Expected Behaviour |
|---|---|---|
| 1 | `10 2`, age `25` | Result is 5; age is eligible |
| 2 | `10 0`, age `15` | Division-by-zero and underage errors are handled |
| 3 | `8 4`, age `150` | Result is 2; invalid-age error is handled |

All test cases also demonstrate the catch-all handler and display `Program ended normally`.

## 7. How to Run

1. Open `main.cpp` in Dev-C++.
2. Compile and run the program.
3. Enter two numbers when prompted.
4. Enter the age when prompted.
5. Check the displayed results and exception messages.

## 8. Result

The program demonstrates exception handling in C++ using `try`, `throw`, and `catch`. It handles division by zero, validates age using different exception types, and uses `catch(...)` to handle a double value.

## 9. Conclusion

The practical successfully demonstrates exception handling in C++. Multiple catch blocks handle different exception types, and the catch-all handler handles an exception without a dedicated matching catch block. Exception handling separates error-handling code from normal program logic and allows the program to continue after handled exceptions.

## 10. Student Details

Fill in your own details before submission.

- **Student Name:** Your Name
- **PRN:** Your PRN
- **Division:** Your Division
- **Batch:** Your Batch
- **Date of Submission:** Your Submission Date
