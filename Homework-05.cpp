#include <iostream>
using namespace std;


double harmonic_mean(double var[3]) //you can pass the whole array to a function, and [3] is the size here
{
    double denominator = 1.0/var[0] + 1.0/var[1] + 1.0/var[2];
    if (denominator == 0.0)
        return 0.0;
    else {
        return 3.0/denominator;
    }
}

int gcd(int input1, int input2)
{
    if (input1 == 0 || input2 == 0)
        return 0;
    else if (input1 == input2)
        return input1;
    else if (input1 > input2)
        return gcd(input1-input2, input2);
    else
        return gcd(input1, input2-input1);
}



int gcd3(int input1, int input2, int input3)
{
    return gcd(gcd(input1,input2), input3);
}

char ciphers(char letter) //there might be easier solution for this, it's late night and my solution works, so gonna keep it this way :)
{
    int gap;
    if (int(letter) <= 77) //capital letter from A to N
    {
        gap = 77 - int(letter);
        return char(int(letter) + (gap*2) + 1);

    }else if (int(letter) <= 90)  //capital letter from M to Z
    {
        gap = int(letter) - 77;
        return char(int(letter) - (gap*2) +1);

    }else if (int(letter) <= 109)  //small letter from a to n
    {
        gap = 109 - int(letter);
        return char(int(letter) + (gap*2) + 1);
    }else                         //small letter from n to z
    {
        gap = int(letter) - 109;
        return char(int(letter) - (gap*2) +1 );
    }
}



int main() {

    bool end = false; //flag holder, if the program should exit or not!

    do{     //as long as user didn't exit repeat the homeworks, using do while

        int use_choice;
        std::cout << "Welcome to homework-05" << endl;
        std::cout << "Choose an option:\n 1 – Homework 1 \n 2 – Homework 2 \n 3 – Homework 3 \n 4 – Homework 4 \n Everything else – Exit " << endl;
        std::cin >> use_choice;


        switch(use_choice)
        {
            case 1:
            {

                double user_value[3] = {}; //let's define an array instead of three separated variables
                std::cout << "Welcome to homework 1, calculating harmonic mean!" << std::endl;
                std::cout << "Please provide three values!" << std::endl;

                std::cin >> user_value[0] >> user_value[1] >> user_value[2];
                std::cout << "harmonic mean is equal to: " << harmonic_mean(user_value) <<  std::endl; //calling function and passing array of 3 values as parameters
                break;
            }
            case 2:
            {
                int var1, var2;
                std::cout << "Welcome to homework 2, greatest common divisor" << std::endl;
                std::cout << "Please provide two positive values!" << std::endl;

                std::cin >> var1 >> var2;
                std::cout << "GCD is equal to: " << gcd(var1, var2) <<  std::endl;
                break;
            }

            case 3:
            {
            int var1, var2, var3;
            std::cout << "Welcome to homework 3, greatest common divisor of three" << std::endl;
            std::cout << "Please provide three positive values!" << std::endl;

            std::cin >> var1 >> var2 >> var3;
            std::cout << "GCD of three given integer is equal to: " << gcd3(var1, var2, var3) <<  std::endl;
            break;

            }

            case 4:
            {
            char letter;
            std::cout << "Welcome to homework 4" << std::endl;
            std::cout << "Please provide one character, capital or small!" << std::endl;

            std::cin >> letter;
            std::cout << "ciphers/deciphers of the given char: " << ciphers(letter) <<  std::endl;
            break;
            }

            default:
            {
                std::cout << "Exiting homeworks" << std::endl;
                std::cout << "\n \n \n" << std::endl;
                end = true;

            }

        }
    }while(!end);

}
