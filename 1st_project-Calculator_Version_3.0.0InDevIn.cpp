#include <iostream>
#include <string>

// C++ Fif3x Math Calculator!!!
// This is my first project in C++
// COPYRIGHT by fif3x

void addition() {
    double firstInput, secondInput;
    std::cout << "Put the first input:" << std::endl;
    std::cin >> firstInput;
    std::cout << "Put the second input:" << std::endl;
    std::cin >> secondInput;
    double answer = firstInput + secondInput;
    std::cout << "The answer of your addition is: " << answer << std::endl;
}

void subtraction() {
    double firstInput, secondInput;
    std::cout << "What is the first digit?" << std::endl;
    std::cin >> firstInput;
    std::cout << "What is the second digit?" << std::endl;
    std::cin >> secondInput;
    double answer = firstInput - secondInput;
    std::cout << "The answer of your subtraction is: " << answer << std::endl;
}

void multiplication() {
    double firstDigit, secondDigit;
    std::cout << "What is your first digit?" << std::endl;
    std::cin >> firstDigit;
    std::cout << "What is your second digit?" << std::endl;
    std::cin >> secondDigit;
    double answer = firstDigit * secondDigit;
    std::cout << "The answer of your multiplication is: " << answer << std::endl;
}

void division() {
    double firstDigit, secondDigit;
    std::cout << "What is your first digit?" << std::endl;
    std::cin >> firstDigit;
    std::cout << "What is your second digit?" << std::endl;
    std::cin >> secondDigit;
    if (secondDigit != 0) {
        double answer = firstDigit / secondDigit;
        std::cout << "The answer for your division is: " << answer << std::endl;
    } else {
        std::cout << "Error: Division by zero!" << std::endl;
    }
}

void passwordQuestion(int& password) {
    std::cout << "Connected! Please enter the correct password: (4-Number password)" << std::endl;
    std::cin >> password;
}

void developerMode() {
    int devModeOperation;
    std::cout << "Looks like you found the secret mode heh!" << std::endl;
    std::cout << "What do you want to do?" << std::endl;
    std::cout << "1) Open this program again" << std::endl;
    std::cout << "2) See the code behind this exe file" << std::endl;
    std::cout << "3) Print the sentence 'I am a coder'" << std::endl;
    std::cin >> devModeOperation;

    switch (devModeOperation) {
        case 1:
            std::cout << "Restarting the program..." << std::endl;
            // In a real application, you might call a function to restart or exit
            break;
        case 2:
            std::cout << "This is the code that I have worked on while writing this, by the way:" << std::endl;
            std::cout << "Blah Blah Blah" << std::endl; // Placeholder for actual code display logic
            break;
        case 3:
            std::cout << "I am a coder" << std::endl;
            break;
        default:
            std::cout << "Invalid option!" << std::endl;
            break;
    }
}

int mapToOperation(const std::string& input) {
    if (input == "Addition") return 1;
    if (input == "Subtraction") return 2;
    if (input == "Multiplication") return 3;
    if (input == "Division") return 4;
    return 0;
}

int main() {
    double π = 3.14;
    std::string response, answer1;
    int password = 0;

    std::cout << "Starting up." << std::endl;
    std::cout << "Welcome!!! You have started the Calculator! Do you wish to continue? (Yes/No)" << std::endl;
    std::cin >> response;

    if (response == "Yes") {
        passwordQuestion(password);

        if (password == 3010) {
            std::cout << "Correct!" << std::endl;
            std::cout << "What would you like to do? (Addition, Subtraction, Multiplication, Division, Developer_Mode)" << std::endl;
            std::cin >> answer1;

            // Move this check here for correct flow
            if (answer1 == "Developer_Mode") {
                developerMode();
            } else {
                int operation = mapToOperation(answer1);

                switch (operation) {
                    case 1: addition(); break;
                    case 2: subtraction(); break;
                    case 3: multiplication(); break;
                    case 4: division(); break;
                    default: std::cout << "Invalid operation! Program Ends." << std::endl; break;
                }
            }
        } else {
            std::cout << "Password is Incorrect." << std::endl;
        }
    } else {
        std::cout << "=== Program Ended; Negative Input ===" << std::endl;
    }

    std::cout << "Press Enter to exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}
