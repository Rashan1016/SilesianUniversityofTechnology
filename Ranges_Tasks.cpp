#include <iostream>
#include <random>
#include <ranges>
#include <vector>
#include <algorithm>
#include <string>


int main()
{
    // TASK 1
    // 
    // You are given a vector (vecTask1) filled with randomly generated integers. Using C++ ranges, perform the following operations on the vector:
    //      - Filter the elements such that there are only even and non-negative numbers.
    //      - Transform the values such that each number is replaced with its square.
    //      - Sort the resulting values in ascending order.
    //      - Print only the three smallest values from the final result.

    std::vector<int> vecTask1;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(-20, 20);
    for (int i = 0; i < 40; i++) {
        int randomNumber = dist(gen);
        if (randomNumber != 0)
            vecTask1.push_back(randomNumber);
    }
    std::vector<int> filtered;
    for (int x : vecTask1) {
        if (x % 2 == 0 && x >= 0) {
            filtered.push_back(x);
        }
    }
    std::sort(filtered.begin(), filtered.end());
    std::cout << "Task 1 | Expected output: " << std::endl;
    for (int i = 0; i < 3 && i < filtered.size(); ++i) {
        std::cout << filtered[i] * filtered[i] << " ";
    }

    // Your code for Task 1 starts here:
    




    // TASK 2
    //
    // You are given a sentence as a single string (strTask2). Using C++ ranges, perform the following operations:
    //      - Split the entire string into words.
    //      - Filter out words that have more than 3 characters.
    //      - Transform each word to uppercase (it's recommended to use std::toupper()).
    //      - Sort the words alphabetically.
    //      - Print the first 3 words from the sorted result.

    std::string strTask2 = "a quick brown fox jumps over the lazy dog";
    std::cout << "\n\nTask 2 | Expected output: \nBROWN JUMPS LAZY" << std::endl;

    // Your code for Task 2 starts here:
    




    // TASK 3
    // 
    // You are given two vectors:
    //  - names (std::string)
    //  - scores (int)
    //
    // Perform the following:
    //      - Combine them into pairs (name, score).
    //      - Filter students with score > 50.
    //      - Sort by score, descending.
    //      - Print the top 3 students (name + score).

    std::vector<std::string> names = { "Alice", "Bob", "Charlie", "Dave", "Eve" };
    std::vector<int> scores = { 45, 78, 60, 30, 90 };
    std::cout << "\n\nTask 3 | Expected output: \nEve 90\nBob 78\nCharlie 60" << std::endl;

    // Your code for Task 3 starts here:
    




    return 0;
}