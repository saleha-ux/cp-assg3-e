/*
Roll No.-12
Student Name - Shaikh Kamran Qamaralam
program title - Wap for basic quiz competition

Task given by:
- Roll no. of Assignee-27
- Name of the Assignee- Siraj Khan 

*/

#include <stdio.h>
#include <ctype.h> // For toupper()

// Function to display a question
void showQuestion(char *question, char *options[], char correctOption, int *score) {
    char answer;

    // Display the question and options
    printf("\n%s\n", question);
    for (int i = 0; i < 4; i++) {
        printf("%c. %s\n", 'A' + i, options[i]);
    }

    // Input the user's answer
    printf("Your answer: ");
    scanf(" %c", &answer); // The space before %c ignores any trailing newline

    // Check if the answer is correct
    if (toupper(answer) == correctOption) {
        printf("Correct!\n");
        (*score)++;
    } else {
        printf("Wrong. The correct answer is %c.\n", correctOption);
    }
}

int main() {
    int score = 0;

    // Question 1
    char *q1 = "What is the capital of France?";
    char *options1[] = {"Berlin", "Madrid", "Paris", "Rome"};
    char correct1 = 'C';

    // Question 2
    char *q2 = "Which planet is known as the Red Planet?";
    char *options2[] = {"Earth", "Mars", "Jupiter", "Venus"};
    char correct2 = 'B';

    // Question 3
    char *q3 = "What is the largest ocean on Earth?";
    char *options3[] = {"Atlantic", "Indian", "Pacific", "Arctic"};
    char correct3 = 'C';

    // Show questions
    showQuestion(q1, options1, correct1, &score);
    showQuestion(q2, options2, correct2, &score);
    showQuestion(q3, options3, correct3, &score);

    // Display the final score
    printf("\nQuiz Over! Your final score is: %d/3\n", score);

    return 0;
}

/*
Here questions can be modified according to your preference 

OUTPUT


What is the capital of France?
A. Berlin
B. Madrid
C. Paris
D. Rome
Your answer: c
Correct!

Which planet is known as the Red Planet?
A. Earth
B. Mars
C. Jupiter
D. Venus
Your answer: b
Correct!

What is the largest ocean on Earth?
A. Atlantic
B. Indian
C. Pacific
D. Arctic
Your answer: c
Correct!

Quiz Over! Your final score is: 3/3


*/