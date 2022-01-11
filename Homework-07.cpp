//Written by: Robel Massebo

#include <iostream>

#include <vector>

#include <list>

#include <cstdlib>

#include <ctime>

#include <chrono>

#include<functional>

#include<numeric>

#include<algorithm>


void mean (std::vector<float>const &v)

 {

    int val;


    std::cout << " Put the number AGAIN to calculate the mean  "<<std::endl;

    std::cin>>val;


    int sum=std::accumulate(v.begin(),v.end(),0);

    double mean=1.0*sum/val;

    std::cout<< " SUM: " << sum << '\n';

    std::cout<< " Mean : " << mean << '\n';


}

void div (std::vector<int>&v)

{


    //std::cout << " length " << v.size() << std::endl;

     std::cout<<" The numbers divisible from the given values: ";

    for (auto k:v)

    {


         if (k%5==0)

         {


        std::cout<< k << " ";

         }

    }

    std::cout << std:: endl;

    int count_div5=std::count_if(v.begin(),v.end(),[](int i){return i%5==0;});

    std::cout << "Numbers divisible by five :" << count_div5 << "\n";

}




int main ()

{

    int key;

    do{

        std::cout << "Please select task " << std::endl;

        std::cout << " 1- Final assignment 1" << " 2- Final assignment 2 " << " 3- Final assignment 3 "

                  << " 4- Home-work 1 " << " 5- Home-work 2 " << std::endl;

        std::cin >> key;



        switch (key)


        {

                      //FINAL ASSIGNMENT 1

        case 1:

        {

                     //ONE

            std::vector<int>a;


            auto start=std::chrono::steady_clock::now();


        for (int k=0;k<100000;k++)

        {


            int v=rand();

            a.emplace_back(v);


        }


            auto end=std::chrono::steady_clock::now();


            auto diff=end-start;


            std::cout << std::chrono::duration<double,std::milli>(diff).count()<<"ms"<<std::endl;



                  //TWO

            std::list<int>a1;


            auto start1=std::chrono::steady_clock::now();


        for (int k=0;k<100000;k++)

        {


            int v=rand();

            a1.emplace_back(v);


        }


            auto end1=std::chrono::steady_clock::now();


            auto diff1=end1-start1;


            std::cout << std::chrono::duration<double,std::milli>(diff1).count()<<"ms"<<std::endl;




            //THREE

        std::vector<int>c;


        auto start2=std::chrono::steady_clock::now();


    for (int k=0;k<100000;k++)

    {


        int v=rand();

        c.insert(c.begin(),v);


    }


        auto end2=std::chrono::steady_clock::now();


        auto diff2=end2-start2;


        std::cout << std::chrono::duration<double,std::milli>(diff2).count()<<"ms"<<std::endl;


        //FOUR

      std::list<int>d;


      auto start3=std::chrono::steady_clock::now();


  for (int k=0;k<100000;k++)

  {


      int v=rand();

      d.emplace_front(v);


  }


      auto end3=std::chrono::steady_clock::now();


      auto diff3=end3-start3;

      std::cout << std::chrono::duration<double,std::milli>(diff3).count()<<"ms"<<std::endl;


      break;

       }


             //FINAL ASSIGNMENT 2

        case 2:

        {

           std::vector<float>v;

           int val;

           double x;

           std::cout << " How many numbers you want to use ? "<<std::endl;


           std::cin>>val;


           for (int i=0;i<val;i++)

           {

               x=rand()%10-5;

               v.emplace_back(x);

           }


           for (auto p:v)

               std::cout << p << " ";

           std::cout << std:: endl;


            mean(v);


           break;


        }


             //FINAL ASSIGNMENT 3

        case 3:

        {

            std::vector<int>v{1,23,12,44,15,80,7,14,20,5};

            div(v);


            break;

        }


            // HOME-WORK 1

        case 4:

        {

           std::vector<int>v{1,2,3,4,5,6,7,8,9,10};

           v.erase(v.begin()+1);

           v.erase(v.begin()+1);

           v.erase(v.begin()+2);

           v.erase(v.begin()+3);

           for (auto i:v)

           {

             std::cout << i << " ";

           }

           std:: cout << std::endl;


         break;

        }

             // HOME-WORK 2


        case 5:

        {

                     //first one

            std::vector<int>v;



          auto start=std::chrono::steady_clock::now();


              for (int i=0;i<100;i++)

            {

                int x=rand();;

                v.push_back(x);

            }



              std::sort(v.begin(),v.end(),[](int a,int b)

           {

               return a<b;


           });




           auto end=std::chrono::steady_clock::now();


           auto diff=end-start;

           std::cout << std::chrono::duration<double,std::milli>(diff).count()<<"ms"<<std::endl;


                 // second one


           std::vector<int>vr;


           auto start1=std::chrono::steady_clock::now();


          for (int i=0;i<1000;i++)

        {

            int x=rand();

            vr.push_back(x);

        }





          std::sort(vr.begin(),vr.end(),[](int a,int b)

       {

           return a<b;


       });




            auto end1=std::chrono::steady_clock::now();


        auto diff1=end1-start1;

        std::cout << std::chrono::duration<double,std::milli>(diff1).count()<<"ms"<<std::endl;




        // Third one


      std::vector<int>vo;


      auto start2=std::chrono::steady_clock::now();


      for (int i=0;i<10000;i++)

       {

         int x=rand();

         vo.push_back(x);

       }



      std::sort(vo.begin(),vo.end(),[](int a,int b)

       {

         return a<b;


       });




    auto end2=std::chrono::steady_clock::now();


     auto diff2=end2-start2;

     std::cout << std::chrono::duration<double,std::milli>(diff2).count()<<"ms"<<std::endl;




     // fourth one


   std::vector<int>vk;


   auto start3=std::chrono::steady_clock::now();


   for (int i=0;i<100000;i++)

    {

      int x=rand();

      vk.push_back(x);

    }



   std::sort(vk.begin(),vk.end(),[](int a,int b)

    {

      return a<b;


    });




 auto end3=std::chrono::steady_clock::now();


  auto diff3=end3-start3;

  std::cout << std::chrono::duration<double,std::milli>(diff3).count()<<"ms"<<std::endl;



     break;

    }


  }



    }while(key);



return 0;

}
