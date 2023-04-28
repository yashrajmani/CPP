// BITWISE_OPERATION--------------------------------------------
/*
IMPORTANT POINTS: 
- &and |or ~not ^xor
- always covert into bits and perform operations
- AND - 1 & 1 = 1 , 0 & 0 = 0 , 0 & 1 = 0 , 1 & 0 = 0
- OR - 1 | 1 = 1 , 0 | 0 = 0 , 0 | 1 = 1 , 1 | 0 = 1
- NOT - ~1 = 0 , ~0 = 1 
- XOR - 1 ^ 1 = 0 , 0 ^ 0 = 0 , 0 ^ 1 = 1 , 1 ^ 0 = 1
- BINARY - 1-001, 2-010,3-011,4-100,5-101,6-110,7-111

- LEFT SHIFT- MULTIPLY by 2 for one (small number)
- RIGHT SHIFT- DIVIDE by 2 for one (small number)
- Default - padding 0 
- Negative - padding depends on compiler.
*/

#include <iostream>
    using namespace std;
int main()
{
    int a=2;
    int b=3;
    cout<<"a & b = "<<(a&b)<<endl;
            // 010 & 011 = 010  //2
    cout<<"a | b = "<<(a|b)<<endl;
            // 010 | 011 = 011  //3
    cout<<"~a = "<<(~a)<<endl;
            //~000000....010 = 111111111....101 (2s complement)= 0000000...010 +1= 0000...011// ANS (-3) 
    cout<<"a ^ b = "<<(a^b)<<endl;
            // 010 ^ 011 = 001 //1
    
    cout<<"RIGHT SHIFT : "<<(5>>1)<<endl;   
            // 5/2=2 
    cout<<"RIGHT SHIFT : "<<(5>>2)<<endl; 
            // 5/2 = 2 , 2/2 =1  

    cout<<"LEFT SHIFT : "<<(5<<1)<<endl;
            //5*2=10
    cout<<"LEFT SHIFT : "<<(5<<2)<<endl;
            //5*2=10 , 10*2=20

            

    return 0;
}