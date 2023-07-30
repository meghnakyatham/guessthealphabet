# guessthealphabet
Guess the Alphabet Game (C Programming)

Introduction
This is a simple "Guess the Alphabet" game written in the C programming language. The program randomly selects an uppercase alphabet ('A' to 'Z') and prompts the user to guess the chosen alphabet. The user keeps guessing until they guess it correctly. The program provides feedback on whether the guessed alphabet comes before or after the chosen alphabet, helping the user make better guesses.

Requirements
To run this program, you need a C compiler installed on your system.

How to Run
Open a C compiler or an integrated development environment (IDE) that supports C programming.

Copy the source code from this README or the attached C file.

Create a new C file and paste the code into it.

Save the file with an appropriate name, e.g., "guess_alphabet.c".

Compile the code using the C compiler. For example, using GCC, you can run the following command in the terminal:
gcc -o guess_alphabet guess_alphabet.c
After successful compilation, an executable file will be generated. Run the program:
./guess_alphabet

How to Play
The game will display a welcome message and let you know that an alphabet has been chosen randomly between 'A' and 'Z'.

The program will ask you to enter your guess.

Enter an uppercase alphabet ('A' to 'Z') as your guess.

The program will provide feedback based on your guess:

If your guess is correct, it will congratulate you, reveal the chosen alphabet, and display the number of attempts you made before guessing correctly. The game ends here.

If your guess is incorrect and not an uppercase alphabet, it will inform you of the invalid input and prompt you to enter a valid uppercase alphabet.

If your guess is incorrect and a valid uppercase alphabet, the program will tell you whether the chosen alphabet comes before or after your guess, giving you a hint to make better guesses.

Continue guessing until you find the correct alphabet.

After guessing correctly, the program will display the number of attempts you made to guess the alphabet.

The game ends, and you can rerun the program to play again.

Code Overview
The C code is well-commented to help you understand each part of the program. It starts by including necessary header files for standard input/output, standard library, string manipulation, and time functions. The main() function is the entry point for the program.

The program generates a random alphabet using the rand() function and the current time as a seed (srand(time(0))). Then, it enters a while loop that continues until the user guesses the correct alphabet (while(1)).

Within the loop, the program asks the user for their guess, validates the input, and provides appropriate feedback based on the guess. If the user guesses correctly, the loop breaks, and the game ends.

Have Fun!
Enjoy playing the "Guess the Alphabet" game and challenge yourself to guess the chosen alphabet in the least number of attempts! Feel free to modify or expand the code to add more features or improve the user experience. Happy coding!




