#include <iostream>

#include <fstream>

using namespace std;

int main()


{

    std::fstream file;

    file.open("grades.txt", std::ios::out | std::ios::in | std::ios::trunc );

    if (file.is_open()) {

        std::cout << "File was correctly opened!" << std::endl;

        file << "Mysha,Vinson,10,10,9,8,10,10,10\n";

        file << "Mercy,Tillman,7,2,10,5,6,1,5\n";

        file << "Habibah,Ramsey,3,1,9,0,1,1,10\n";

        file << "Luciana,Hartman,2,1,7,3,2,7,6\n";

        file << "Anabia,Khan,10,9,9,6,4,10,5\n";

        file << "Esa,Mccabe,2,9,1,1,3,6,2\n";

        file << "Cecil,Bannister,2,0,5,3,2,5,10\n";

        file << "Jay-Jay,French,3,10,6,6,4,1,5\n";

        file << "Shakira,Lugo,2,3,4,7,7,4,8\n";

        file << "Steve,Maldonado,6,2,1,8,4,7,8\n";

        file << "Vladimir,Davies,3,1,8,6,5,9,0\n";

        file << "Santiago,Mclellan,9,7,10,1,0,4,2\n";

        file << "Leroy,Mcgee,7,2,7,5,8,2,6\n";

        file << "Emily-Jane,Read,3,1,3,2,2,1,8\n";

        file << "Maxime,Sherman,7,4,4,6,3,7,7\n";

        file << "Aronas,Roth,0,5,6,10,2,0,2\n";

        file << "Mylee,Wagstaff,8,3,7,1,5,0,10\n";

        file << "Paisley,Gilmour,4,0,6,3,5,2,1\n";

        file << "Gruffydd,Andrade,3,6,1,3,1,3,5\n";

        file << "Yu,Hebert,0,3,0,6,10,9,8";

        std::cout << "Writing to file ended!" << std::endl;

    }

    file.close();

    return 0;

}
