#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

bool answer_status(int question[], int qNum);

int main()
{

    int userQuestion; // the question the user picks
    string answer; // answer of the user per question
    int totalPoints = 0; // total points gained from correct answers

    int question_status[5]; // status of the question being answered

    // Questions
    string q1 = "Who was the famous leader of Germany from 1933-1945?";
    string q2 = "In which year did the Cold War end?";
    string q3 = "What is the name of the tallest climbable mountain in the world?";
    string q4 = "What is the name of the deepest ocean trench?";
    string q5 = "What is 200 / 8 + 7 * 2 - 1?";

    // While it's more efficient to directly put the questions in the array, variables are used
    // to ensure that it looks organised, and allows a practice of using arrays.
    string questions[] = {q1, q2, q3, q4, q5}; 

    do {

        cout << "Welcome to the CPP Quiz! \n";
        cout << "Which question (1 - 5) would you like to answer first? Enter 6 to quit. \n";
        cin >> userQuestion;

        switch (userQuestion) {
            case 1:
                if (answer_status(question_status, 1)) {
                    cout << "You've answered this question already! \n"; // Checks if the question is answered, and breaks out if true
                    break; 
                } else {
                    cout << questions[0] << "\n";
                    cin.ignore();
                    std::getline(cin, answer);

                    if (answer == "Adolf Hitler" || "adolf hitler") {
                        cout << "Your answer is correct! \n";
                        cout << "You have obtained 100 points. \n"; // awards the user for getting a correct answer
                        totalPoints += 100;
                        question_status[0] = 1;
                        break;
                    } else {
                        cout << "Your answer is incorrect! \n"; // gives no marks, but still marks the question as done
                        question_status[0] = 1;
                        break;
                    }
                }

            case 2:
                if (answer_status(question_status, 2)) {
                    cout << "You've answered this question already! \n";
                    break;
                } else {
                    cout << questions[1] << "\n";
                    cin.ignore();
                    std::getline(cin, answer);

                    if (answer == "1991") {
                        cout << "Your answer is correct! \n";
                        cout << "You have obtained 100 points. \n";
                        totalPoints += 100;
                        question_status[1] = 2;
                        break;
                    } else {
                        cout << "Your answer is incorrect! \n";
                        question_status[1] = 2;
                        break;
                    }
                }
            case 3:
                if (answer_status(question_status, 3)) {
                    cout << "You've answered this question already! \n";
                    break;
                } else {
                    cout << questions[2] << "\n";
                    cin.ignore();
                    std::getline(cin, answer);

                    if (answer == "Mount Everest" || answer == "mount everest") {
                        cout << "Your answer is correct! \n";
                        cout << "You have obtained 100 points. \n";
                        totalPoints += 100;
                        question_status[2] = 3;
                        break;
                    } else {
                        cout << "Your answer is incorrect! \n";
                        question_status[2] = 3;
                        break;
                    }
                }
            case 4:
                if (answer_status(question_status, 4)) {
                    cout << "You've answered this question already! \n";
                    break;
                } else {
                    cout << questions[3] << "\n";
                    cin.ignore();
                    std::getline(cin, answer);

                    if (answer == "Mariana Trench" || answer == "mariana trench") {
                        cout << "Your answer is correct! \n";
                        cout << "You have obtained 100 points. \n";
                        totalPoints += 100;
                        question_status[3] = 4;
                        break;
                    } else {
                        cout << "Your answer is incorrect! \n";
                        question_status[3] = 4;
                        break;
                    }
                }
            case 5:
                if (answer_status(question_status, 5)) {
                    cout << "You've answered this question already! \n";
                    break;
                } else {
                    cout << questions[4] << "\n";
                    cin.ignore();
                    std::getline(cin, answer);

                    if (answer == "38" || answer == "38") {
                        cout << "Your answer is correct! \n";
                        cout << "You have obtained 100 points. \n";
                        totalPoints += 100;
                        question_status[4] = 5;
                        break;
                    } else {
                        cout << "Your answer is incorrect! \n";
                        question_status[4] = 5;
                        break;
                    }
                }
            case 6: // Quit the test
                cout << "You have decided to quit the test! \n";
                cout << "You have obtained " << totalPoints << " out of 500 points! \n";
                return 0;
            default:
                cout << "Invalid number! Please try again. \n"; // Asks the user for another valid input
        }

    } while (true);

}

// Function that returns a true/false based on the question's answer status (whether the array has the relevant data)
bool answer_status(int question[], int qNum) {
    if (question[qNum - 1] == qNum) {
        return true;
    } else {
        return false;
    }
}
