# Assignment 5: Implementation of Lambda Function

## Overview

In this assignment, a lambda expression named `printMsgFileNotFound` has been implemented in the `Reader.cpp` file. The purpose of this lambda expression is to provide a message indicating that the file was not found.

## Implementation Steps

1. **Implemented a lambda expression in `Ex5\src\Reader.cpp`**.

   ```cpp
   auto printMsgFileNotFound = []() {
       std::string msg = "File not found";
       return msg;
   };

2. **This expression returns string to print `File not found` on the console.**



