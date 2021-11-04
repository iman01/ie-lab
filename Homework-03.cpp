/*
 * 03 - Conditionals and loop structures
 * Homework
 * by Iman Esfandiyar
 */


#include <cmath>
#include <iostream>
#include <limits>
#include<climits>
using namespace std;

int main() {

    int use_choice;
    std::cout << "Choose an option: \n 1 – Exercise 1 \n 2 – Exercise 2 \n 3 – Exercise 3 " << endl;
    std::cout << " 4 – Homework 1 \n 5 – Homework 2 \n 6 – Homework 3 \n 7 – Homework 4 \n x – Exit " << endl;
    std::cin >> use_choice;
    double pi = 0.0;


    switch(use_choice)
    {
        case 1:
        {
            std::cout << "Welcome to Exercise 1, calculating pi value!" << std::endl;

            int impl_choice;
            std::cout << "Choose an methods: \n 1 – Leibniz \n 2 – Wallis" << endl;
            std::cin >> impl_choice;

            switch(impl_choice)
            {
                case 1:
                    pi = 0.0;
                    std::cout << "Leibniz method!" << std::endl;
                    for(int n = 0; n < 50000; n++) //loop iterating up to 99
                    {
                        pi = pi + ( pow(-1,n) / (2*n+1) );
                    }
                    std::cout << "pi is equal to: " << (pi*4) << std::endl;
                    break;


                case 2:
                    std::cout << "Wallis method!" << std::endl;
                    pi = 1.0;
                    for (int n = 1; n < 50000; n++)
                    {
                        double num = (2.0 * n) * (2.0 * n); //numerator
                        pi *= num / ((2.0*n - 1) * (2.0*n + 1)); // (numerator / Denominator)
                    }
                    std::cout << "pi is equal to: " << (pi*2) << std::endl;
                    break;



                default:
                    std::cout << "Sorry, your choice doesn't exist!" << std::endl;
                    break;
            }
            break;
        }


        case 2:
        {
            std::cout << "Welcome to Exercise 2" << std::endl;

            for(int i = 1; i < 256; i++) //1 -> 255
            {

                if (i % 40  == 0.0)
                {
                   std::cout << "press any key to continue" << std::endl;
                   char any_key;
                   cin >> any_key;
                }
                std::cout << "char of " << i << " is: "  << char(i) << std::endl;

            }
            break;
        }


        case 3:
        {
            //determine maximal n for which program will provide correct result (int type will not overflow)
            int fact_so_far = 1;
            int fact_max = 1;

            while (INT_MAX / fact_so_far >= fact_max) //
            {
                fact_so_far *= fact_max;
                fact_max++;
            }
            fact_max = fact_max -1;
            //-------------------------------

            std::cout << "Welcome to Exercise 3" << std::endl;
            std::cout << "please enter a number to calculate factorial (smaller than " << fact_max <<")" << std::endl;
            int fac_answer = 1;
            int fac_in;
            cin >> fac_in;

            while (fac_in > fact_max) //check if integer won't overflow
            {
                std::cout << "over integer limit, try again" << std::endl;
                cin >> fac_in;
            }

            if(fac_in == 0)     //check if 0
                std::cout << "factorial of " << fac_in << " is equal to: 1"  <<  std::endl; //no need for curly bruckets if one line below if
            else if(fac_in < 0) //check if smaller than zero
                std::cout << "factorial of " << fac_in << " is not defined"  <<  std::endl;
            else                // calculate factorial
            {
                for(int i = 1; i <= fac_in; ++i)
                {
                    fac_answer *= i;
                }
                std::cout << "factorial of " << fac_in << " is equal to: " << fac_answer <<  std::endl;
            }

            break;
        }

        case 4:
        {
            std::cout << "Welcome to Homework 1" << std::endl;
            std::cout << "Let's calculate prime numbers!" << std::endl;
            std::cout << "please enter a minimum" << std::endl;
            int pri_min;
            cin >> pri_min;
            std::cout << "please enter a maximum" << std::endl;
            int pri_max;
            cin >> pri_max;
            cout << "Prime numbers between " << pri_min << " and " << pri_max << " are: " << endl;
            bool prime_check = true;

            while (pri_min < pri_max) {
                    prime_check = true;
                    if (pri_min == 0 || pri_min == 1) {
                        prime_check = false;
                    }
                    else {
                        for (int i = 2; i <= pri_min / 2; ++i) {
                            if (pri_min % i == 0) {
                                prime_check = false;
                                break;
                            }
                        }
                    }

                    if (prime_check)
                        cout << pri_min << " ";

                    ++pri_min;
                }



            break;
        } //The extra level of curly braces allows you to do things you can't do otherwise.


        case 5:
        {
            std::cout << "Welcome to Homework 2" << std::endl;
            std::cout << "maximal value of the factorial argument" << std::endl;

            int fact_so_far = 1;
            int fact_param = 1;
            /* USHRT_MAX  unsigned short int.
             * UINT_MAX   unsigned int.
             * ULONG_MAX  unsigned long.
             * ULLONG_MAX unsigned long long.
             * INT_MAX    int
             * in the while loop change the max of type you wish to calculate for
             */

            while (USHRT_MAX / fact_so_far >= fact_param)
            {
                fact_so_far *= fact_param;
                fact_param++;
            }
            std::cout << fact_param - 1 << " is maximal value of the factorial argument" << std::endl;
            break;
        }

        case 6:
        {
            std::cout << "Welcome to Homework 3" << std::endl;
            int num_1, num_2;
            std::cout << "please enter two numbers to calculate their least common multiple" << std::endl;
            cin >> num_1 >> num_2;
            int lcm = 0;

            int num_1_in = num_1;
            int num_2_in = num_2;

            while(num_1 != num_2)  // calculating gcd
            {
                if(num_1 > num_2)
                    num_1 -= num_2;
                else
                    num_2 -= num_1;
            }

            lcm = (num_1_in / num_1) * num_2_in; //calculating lcm

            cout <<"LCM of " << num_1_in << " and " << num_2_in << " is " << lcm << endl;


            break;
        }
        case 7:
        {

            std::cout << "Welcome to Homework 4" << std::endl;
            std::cout << "ops, it seems Howework 4 is empty, good luck!" << std::endl;
            break;

        }
        default:
            std::cout << "Unkown choice, exiting." << std::endl;
            break;
    }
    return 0;

}
