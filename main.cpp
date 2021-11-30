#include <iostream>



void capitals(char* array, int arr_size){
    for(int i=0;i<arr_size;i++){
        if(array[i] == '\0'){
            break;
        }
        std::cout << char(array[i]-('a'-'A'));
    }
}

// swap - reference version ( It is advised to use references instead of pointers when possible, as it is easier to avoid problems with memory management.)
void swap_elements(int &a, int &b){
    int temp = b;
    b = a;
    a = temp;
}

// swap - pointers version (you have to pass addresses to variables in function)
/*
void swap_elements(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
*/
void bubb_sort(int array[], int arr_size){
    int iterations=0;
    bool swapped = false;
    int k = arr_size-1;
    for(int i=0;i<arr_size;i++){
        swapped = false;
        for(int j=0;j<k;j++){
            if(array[j]>array[j+1]){
                swap_elements(array[j],array[j+1]);
                swapped = true;
            }
            iterations++;
        }
        if(swapped == false){
            break;
        }
        k--;
    }
    std::cout <<"There was " << iterations << " iterations." << std::endl;

}

void bubble_sort_dowhile(int* arr, int arr_size){
    bool changed = false;
    int iter_num =0;
    int k = arr_size - 1;
    do{
        changed = false;
        for(int i = 0; i<k; i++){
            if(arr[i] > arr[i+1]){
                swap_elements(arr[i], arr[i+1]);
                changed = true;
            }
            iter_num++;
        }
        k--;
    }while(changed);
    std::cout << "Number of iterations: " << iter_num << std::endl;
}

void text_statistic(char* arr, int arr_size){
    int n = 1;
    for(int i=1; i<arr_size; i++){
        if(arr[i-1] == '\0'){ //break for end of text
            break;
        }
        if(arr[i-1] != ' '){
            if(arr[i] == arr[i-1]){
                n++;
            }
            else{
                std::cout << char(arr[i-1]) << " : " << n << std::endl;
                n = 1;
            }
        }
    }
}

double harmonic_mean(double arr[], int size){
   double sum = 0;
   for (int i = 0; i < size; i++)
      sum = sum + double(1)/arr[i];
   return double(size)/sum;
}


int main()
{


    int key;
    do{
        std::cout << "Please select a task." << std::endl;
        std::cout << "1 - Exercise 1" << std::endl << "2 - Exercise 2" << std::endl << "3 - Exercise 3" << std::endl
                  << "4 - Homework 1" << std::endl << "5 - Homework 2" << std::endl << "0 - Exit"<< std::endl;
        std::cin >> key;
        switch (key) {
        case 1:{
            char arr[]="informationengineering";
            capitals(arr,sizeof(arr)/sizeof(char));
            std::cout << std::endl;
            break;
        }
        case 2:{
            // Check above two bubble sort implementations and description in below links:
            // https://www.geeksforgeeks.org/bubble-sort/
            // http://www.mathcs.emory.edu/~cheung/Courses/171/Syllabus/7-Sort/bubble-sort.html
            int array[]={9,1,5,4,3};
            int arr_size = sizeof(array)/sizeof(int);
            bubb_sort(array,arr_size);
            for(int i=0; i<arr_size;i++){
                std::cout << array[i]<< std::endl;
            }
            break;
        }
        case 3:{
            //Exercise 3
            char str[100];
            std::cin >> str;
            text_statistic(str, sizeof(str)/sizeof(char));

            break;
        }
        case 4:{
            //Homework 1
           double arr[] = {2.0, 3.4, 5.3, 2.1};
           int size = sizeof(arr) / sizeof(arr[0]);
           std::cout<<"Harmonic mean is : "<<harmonic_mean(arr, size)<<std::endl;
           break;
        }
        case 5:{
            //Homework 2
            std::cout << "Similar task was done in Homweork 4 of 05 - Functions " <<std::endl;
            break;
        }

        case 0:{
            std::cout << "Exitting" << std::endl;
            break;
        }
        default:{
            std::cout << "Please input different number" <<std::endl;
            break;
        }

        }
    }while(key);

    return 0;
}
