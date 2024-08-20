//library that includes basic commands c++
#include <iostream>
//library that allows bynary conversion
#include <bitset>
//library that allows data output in columns
#include <iomanip>


int main (){

    const int COLUMN_WIDTH {20};
    std::cout <<std::endl;
    std::cout<<"Compound bitwise assigment operators"<<std::endl;

    unsigned char sandbox_var{0b00110100};

    //Print out initial value
    std::cout<<std::endl;
    std::cout<<"Initial Value: "<<std::endl;
    std::cout<<std::setw(COLUMN_WIDTH)<<"Sandbox_var: "<<std::setw(COLUMN_WIDTH)<<std::bitset<8>(sandbox_var)<<std::endl;
    std::cout<<std::endl;

    //Compound left shift
    std::cout<< std::endl;
    std::cout<<"Shift left 2 bit positions in place: "<<std::endl;
    sandbox_var <<=2;
    std::cout<<std::setw(COLUMN_WIDTH)<<"Sandbox_var: "<<std::setw(COLUMN_WIDTH)<<std::bitset<8>(sandbox_var)<<std::endl;

    //Compound Right shift
    std::cout<< std::endl;
    std::cout<<"Shift Right 4 bit positions in place: "<<std::endl;
    sandbox_var >>=4;
    std::cout<<std::setw(COLUMN_WIDTH)<<"Sandbox_var: "<<std::setw(COLUMN_WIDTH)<<std::bitset<8>(sandbox_var)<<std::endl;

     //Compound OR with 0000 0010 to have all lower 4 bit turned on
    std::cout<< std::endl;
    std::cout<<"Compound OR with 0000 0010: "<<std::endl;
    sandbox_var |= 0b00001111;
    std::cout<<std::setw(COLUMN_WIDTH)<<"Sandbox_var: "<<std::setw(COLUMN_WIDTH)<<std::bitset<8>(sandbox_var)<<std::endl;

    //Compound and with 0000 1100 to have all lower 4 bit turned on
    std::cout<< std::endl;
    std::cout<<"Compound AND with 0000 1100: "<<std::endl;
    sandbox_var &= 0b00000000;
    std::cout<<std::setw(COLUMN_WIDTH)<<"Sandbox_var: "<<std::setw(COLUMN_WIDTH)<<std::bitset<8>(sandbox_var)<<std::endl;

    //Compound XOR with 0000 0011  to have all lower 4 bit turned on
    std::cout<< std::endl;
    std::cout<<"Compound OR with 0000 0011: "<<std::endl;
    sandbox_var ^= 0b00000011;
    std::cout<<std::setw(COLUMN_WIDTH)<<"Sandbox_var: "<<std::setw(COLUMN_WIDTH)<<std::bitset<8>(sandbox_var)<<std::endl;

    return 0;
}
