/*
 * 02 - Basics.html
 * Homework
 * by Iman Esfandiyar
 */

#include <iostream>
#include <cstdlib>              // Header with rand() and srand() functions
#include <ctime>                // Header with time() function
#include <cmath>                // Header with sin() function
#include <iomanip>

int main()
{

    // <cmath> assignments

    //Random integer
    srand(time(nullptr));                   // Initialize pseudo-random generator with current time
    int random_degree = rand() % 181 - 90;  // Generate random number in range 50..149
    std::cout << "random angle: " << random_degree << " degrees" << std::endl;  // print out the

    //compute its cosine
    const double pi = 3.14159265359;                            // Constant value of Pi number
    double cosine_value = cos(random_degree * pi / 180.0);      // Convert degrees to radian and calculate Cos
    std::cout << "cosine of " << random_degree << " degrees: " << cosine_value <<  std::endl;  // print out the cosine value

    //5th-root
    double fifth_root = pow(cosine_value, 1.0/5.0);   // IMPORTANT: To gnerate 0.2 from 1/5 flout format must be used = 1.0/5.0
    std::cout << "5th root of " << cosine_value << " is: " << fifth_root <<  std::endl;  // print out the 5th root of cosine
    std::cout << "- - - - - - - - - - - - - - - - - - - - " << std::endl;

    //Final assignments

    //Exercise 1
    //Rectangle
    std::cout << "Enter length and width of a rectangle, please. (2 numbers)" << std::endl;
    double rec_lengths, rec_width;  //Declear 3 variables for length of each triangle side
    std::cin >> rec_lengths >> rec_width;

    //calculate Rectangle circumference
    double rec_circumference = (rec_lengths + rec_width) * 2; //Rectangle circumference
    std::cout << "Rectangle circumference is: " << rec_circumference << std::endl;

    //calculate Rectangle area
    double rec_area = rec_lengths * rec_width; //Rectangle circumference
    std::cout << "Rectangle area is: " << rec_area << std::endl;
    std::cout << "- - - - - - - - - - - - - - - - - - - - " << std::endl;

    //Triangle circumference and area
    std::cout << "Enter lengths of triangle sides (3 numbers)" << std::endl;
    double rec_side_1, rec_side_2, rec_side_3;  //Declear 3 variables for length of each triangle side
    std::cin >> rec_side_1 >> rec_side_2 >> rec_side_3;

    //calculate Triangle circumference
    double triangle_circumference = rec_side_1 + rec_side_2 + rec_side_3;
    std::cout << "triangle circumference is: " << triangle_circumference << std::endl;

    //calculate Triangle area
    double triangle_s = 0.5 * triangle_circumference; //calculate semiperimeter (https://en.wikipedia.org/wiki/Heron%27s_formula)
    double triangle_area =  sqrt(triangle_s * (triangle_s - rec_side_1) * (triangle_s - rec_side_2) * (triangle_s - rec_side_2) );
    std::cout << "Triangle area is: " << triangle_area << std::endl;
    std::cout << "- - - - - - - - - - - - - - - - - - - - " << std::endl;

    //Triangle angles
    std::cout << "Enter lengths of triangle sides (3 numbers)" << std::endl;
    std::cin >> rec_side_1 >> rec_side_2 >> rec_side_3; //You can use the already decleared variables and assign them with new values!

    double rec_angle_1_rad, rec_angle_2_rad;  //Declear 3 variables for triangle in radian
    double rec_angle_1_deg, rec_angle_2_deg, rec_angle_3_deg;  //Declear 3 variables for triangle in degrees,

    //calculate first angle
    rec_angle_1_rad = acos( (pow(rec_side_1, 2) + pow(rec_side_2, 2) - pow(rec_side_3, 2) ) / (2 * rec_side_1 * rec_side_2) );
    rec_angle_1_deg = rec_angle_1_rad * (180 / pi);
    std::cout << "Triangle first angle  is: " << rec_angle_1_deg << " degrees" << std::endl;

    //calculate second angle
    rec_angle_2_rad = acos( (pow(rec_side_1, 2) + pow(rec_side_3, 2) - pow(rec_side_2, 2) ) / (2 * rec_side_1 * rec_side_3) );
    rec_angle_2_deg = rec_angle_2_rad * (180 / pi);
    std::cout << "Triangle second angle  is: " << rec_angle_2_deg << " degrees" << std::endl;

    //calculate third angle
    rec_angle_3_deg = 180 - rec_angle_1_deg - rec_angle_2_deg; // triangle angles formulation: angle1 + angle2 + angle3 = 180
    std::cout << "Triangle third angle  is: " << rec_angle_3_deg << " degrees" << std::endl;
    std::cout << "- - - - - - - - - - - - - - - - - - - - " << std::endl;



    //Exercise 2
    std::cout << "Enter two integer numbers" << std::endl;
    int var_int_1, var_int_2;
    std::cin >> var_int_1 >> var_int_2;
    std::cout << "add function: " << (var_int_1 + var_int_2) << std::endl;
    std::cout << "multiply function: : " << (var_int_1 * var_int_2) << std::endl;
    std::cout << "subtract function: : " << (var_int_1 - var_int_2) << std::endl;
    std::cout << "divide function: : " << (var_int_1 / var_int_2) << std::endl;
    std::cout << "- - - - - - - - - - - - - - - - - - - - " << std::endl;

    std::cout << "Enter two float numbers" << std::endl;
    double var_float_1, var_float_2;
    std::cin >> var_float_1 >> var_float_2;
    std::cout << "add function: " << (var_float_1 + var_float_2) << std::endl;
    std::cout << "multiply function: : " << (var_float_1 * var_float_2) << std::endl;
    std::cout << "subtract function: : " << (var_float_1 - var_float_2) << std::endl;
    std::cout << "divide function: : " << (var_float_1 / var_float_2) << std::endl;
    std::cout << "- - - - - - - - - - - - - - - - - - - - " << std::endl;

    //Exercise 3
    std::cout << "Enter one float number (i)" << std::endl;
    double var_float_3;
    std::cin >> var_float_3;
    double i;
    double y;

    // Increment operators
    // Pre-increment: i is incremented by 1, then y is assigned the value of i
    i = var_float_3;
    y = ++i;    // i is now 2, y is also 2
    std::cout << "y = ++i  , y= " << y << ", i= " << i << std::endl;

    // Post-increment: y is assigned the value of i, then i is incremented by 1
    i = var_float_3;
    y = i++;    // y is 1, i is now 2
    std::cout << "y = i++  , y= " << y << ", i= " << i << std::endl;

    // Decrement operators
    // Pre-decrement: i is decremented by 1, then y is assigned the value of i
    i = var_float_3;
    y = --i;    // i is now 0, y is also 0
    std::cout << "y = --i  , y= " << y << ", i= " << i << std::endl;

    // Post-decrement: y is assigned the value of i, then i is decremented by 1
    i = var_float_3;
    y = i--;    // y is 1, i is now 0
    std::cout << "y = i--  , y= " << y << ", i= " << i << std::endl;
    std::cout << "- - - - - - - - - - - - - - - - - - - - " << std::endl;


    //Exercise 4
    char first_name[20], second_name[20], father_name[20], mother_name[20], mother_family[20], birth_place[20];
    int father_age, mother_age, birth_year, birth_month, birth_day;

    std::cout << "First name: ";
    std::cin >> first_name;

    std::cout << "Second name: ";
    std::cin >> second_name;

    std::cout << "Father's first name: ";
    std::cin >> father_name;

    std::cout << "Father’s age: ";
    std::cin >> father_age;

    std::cout << "Mother’s first name: ";
    std::cin >> mother_name;

    std::cout << "Mother’s age: ";
    std::cin >> mother_age;

    std::cout << "Mother’s family name: ";
    std::cin >> mother_family;

    std::cout << "Birth place: ";
    std::cin >> birth_place;

    std::cout << "Birth year:  ";
    std::cin >> birth_year;

    std::cout << "Birth month: ";
    std::cin >> birth_month;

    std::cout << "Birth day: ";
    std::cin >> birth_day;
    std::cout << "- - - - - - - - - - - - - - - - - - - - " << std::endl;

    std::cout << "Citizen " << first_name << " " << second_name << " was born in " << birth_place << " " << (2021 - birth_year) << " years ago. His mother, mrs " << mother_name
              << " (of a " << mother_family << "), was " << (mother_age - (2021 - birth_year)) << " years old then and his father " << (father_age - (2021 - birth_year)) << " years old." << std::endl;

    std::cout << "- - - - - - - - - - - - - - - - - - - - " << std::endl;

    std::cout << second_name << " " << first_name << " till " << birth_day << "." << birth_month << "." << birth_year
              << " lived approximately " << ((2021 - birth_year)*365 + ((10 - birth_month)*31) + (25 - birth_day))  << " days" << std::endl; //Today is 25/10/2021

    std::cout << "- - - - - - - - - - - - - - - - - - - - " << std::endl;
    double father_relative_age = static_cast<double>(father_age) /(2021 - birth_year); // need to cast int to float
    double mother_relative_age = static_cast<double>(mother_age) /(2021 - birth_year);
    std::cout << "His father is  " << std::fixed << std::setprecision(2) << father_relative_age << " times older than him and mother "
              <<  std::fixed << std::setprecision(2) << mother_relative_age << " times."<< std::endl << std::endl;

    std::cout << "- - - - - - - - - - - - - - - - - - - - " << std::endl;
    std::cout << "It is and old family, because together they have " << ((2021 - birth_year) + mother_age + father_age) <<std::endl;;


    return 0;
}
