/*
 * 04 - Arrays and text
 * Lab assignments (This is not home work)
 * by Iman Esfandiyar
 */


#include <iostream>
#include <limits>

using namespace std;

int main()
{




    //---------------------------------------------------------------------------------------------


   int user_arr[5] = {};

//    cout << "Please enter five integer values! " << endl;

//    for (int i = 0; i < 5; i++)
//    {
//        std::cin >> user_arr[i];
//    }



//    cout << "Thank you, your values are:  " << endl;


//    for (int i = 0; i < 5; i++)
//    {
//        std::cout << "array index[" << i << "] = " << user_arr[i] << std::endl;
//    }



    //---------------------------------------------------------------------------------------------

//    int arr_sum = 0;
//    int arr_product = 1; //important


//    cout << "Please enter five integer values! " << endl;

//    for (int i = 0; i < 5; i++)
//    {
//        std::cin >> user_arr[i];
//    }

//    cout << "Thank you, your values are:  " << endl;



//    for (int i = 0; i < 5; i++)
//    {

//        arr_sum += user_arr[i]; //sum

//        arr_product *=  user_arr[i]; //product

//    }

//    std::cout << "final sum = " << arr_sum << std::endl;
//    std::cout << "final product = " << arr_product << std::endl;

    //---------------------------------------------------------------------------------------------




    cout << "Please enter your surname! " << endl;

    char surname[20];
    std::cin >> surname;


    cout << "Thanks, let me spell it for you! "<< surname << endl;


    int i = 0;

    while(surname[i] != '\0')      // '\0' == NULL
    {
        std::cout << "Letter[" << i << "] = " << char( surname[i] -32)  << std::endl;
        i++;
    }


    //---------------------------------------------------------------------------------------------

//    cout << "Please enter your surname! " << endl;

//    char surname[20];
//    std::cin >> surname;

//    cout << "Thanks, let me spell it for you! " << endl;

//    int i_iterator = 0;


//    while(surname[i_iterator] != '\0')      // '\0' == NULL
//    {


//        std::cout << "Big letter for " << surname[i_iterator]   << " is " << char(surname[i_iterator] - 32) << std::endl;

//        //std::cout << "ASCII value of " << surname[i_iterator]  << " is " << int(surname[i_iterator]) << std::endl;
//        i_iterator++;
//    }

    //---------------------------------------------------------------------------------------------

//    std::cout << "Enter an integer number: ";
//      int number;

//      while(true)
//      {
//          std::cin >> number;
//          if(std::cin.fail())
//          {
//              std::cin.clear(); // Clears error state of the buffer
//              std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignores rest of the line
//              std::cout << "You have entered wrong input" << std::endl;
//          }else
//          {
//              break;
//          }
//      }
//      std::cout << "The number is: " << number << std::endl;


    //---------------------------------------------------------------------------------------------






    return 0;
}
