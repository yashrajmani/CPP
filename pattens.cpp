//PATTERN SOLVING USING C++
IMPORTANT POINTS:
- i-row, j - col
- derive some formula after getting relation n,i,j
- for alphabets use int ch='A'
- space separete, nums separate
- use count if pattern is serialized
- break into parts and solve
//-----------------------YASHRAJMANI--------------------------------

// 5
// *****
// *****
// *****
// *****
// *****
/*
#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;

    }

return 0;
}
*/

//-----------------------------------------------------------
// 5
// 11111
// 22222
// 33333
// 44444
// 55555

/*
#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<i;
        }
        cout<<endl;

    }

return 0;
}
*/
//----------------------------------------------------------------
// 5
// 12345
// 12345
// 12345
// 12345
// 12345
/*
#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<j;
        }
        cout<<endl;

    }

return 0;
}
*/
//----------------------------------------------------------------
// 5
// 54321
// 54321
// 54321
// 54321
// 54321
/*
#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<n-j+1;
        }
        cout<<endl;

    }

return 0;
}
*/
//----------------------------------------------------------------
// 5
// 0 1 2 3 4
// 5 6 7 8 9
// 10 11 12 13 14
// 15 16 17 18 19
// 20 21 22 23 24
/*
#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int count=0;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;

    }

return 0;
}
*/

//----------------------------------------------------------------
// 5
// *
// **
// ***
// ****
// *****

/*

#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;


    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;

    }

return 0;
}
*/
//----------------------------------------------------------------
// 5
// 1
// 22
// 333
// 4444
// 55555
/*
#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;


    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;

    }

return 0;
}
*/
//----------------------------------------------------------------
// 5
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
/*
#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int count=1;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;

    }

return 0;
}
*/
//----------------------------------------------------------------
// 5
// 1
// 2 3
// 3 4 5
// 4 5 6 7
// 5 6 7 8 9
/*
#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;


    for(int i=1;i<=n;i++)
    {
            int count=i;

        for(int j=1;j<=i;j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;

    }

return 0;
}
*/
//----------------------------------------------------------------
// 5
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1
/*
#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;


    for(int i=1;i<=n;i++)
    {
        for (int j = i; j >=  1; j--)
        {
            cout<<j<<" ";

        }
        cout<<endl;

    }
return 0;
}
*/
//----------------------------------------------------------------
// 5
// A A A A A
// B B B B B
// C C C C C
// D D D D D
// E E E E E
/*
#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int ch='A';

    for(int i=1;i<=n;i++)

    {
        for (int j = 1; j <=n ; j++)
        {
            cout<<char(ch)<<" ";

        }
        ch++;
        cout<<endl;

    }
return 0;
}
*/
//----------------------------------------------------------------
// 5
// A B C D E
// A B C D E
// A B C D E
// A B C D E
// A B C D E
/*
#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;


    for(int i=1;i<=n;i++)

    {
    int ch='A';

        for (int j = 1; j <=n ; j++)
        {
            cout<<char(ch+j-1)<<" ";

        }
        ch++;
        cout<<endl;

    }
return 0;
}
*/
//----------------------------------------------------------------
// 5
// A B C D E
// F G H I J
// K L M N O
// P Q R S T
// U V W X Y
/*

#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

  int ch='A';
    for(int i=1;i<=n;i++)

    {


        for (int j = 1; j <=n ; j++)
        {
            cout<<char(ch)<<" ";
            ch++;



        }
        cout<<endl;

    }
return 0;
}
*/
//----------------------------------------------------------------
// 5
// A B C D E
// B C D E F
// C D E F G
// D E F G H
// E F G H I
/*
#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int ch='A';

    for(int i=1;i<=n;i++)

    {


        for (int j = 1; j <=n ; j++)
        {
            cout<<char(ch+j+i-2)<<" ";

        }

        cout<<endl;

    }
return 0;
}
*/
//----------------------------------------------------------------
// 5
// A
// B B
// C C C
// D D D D
// E E E E E
/*
#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int ch='A';

    for(int i=1;i<=n;i++)

    {

        for (int j = 1; j <=i ; j++)
        {
            cout<<char(ch+i-1)<<" ";

        }

        cout<<endl;

    }
return 0;
}
*/
//----------------------------------------------------------------
// 5
// A
// B C
// D E F
// G H I J
// K L M N O
/*
#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int count='A';

    for(int i=1;i<=n;i++)

    {

        for (int j = 1; j <=i ; j++)
        {
            cout<<char(count)<<" ";
            count++;

        }

        cout<<endl;

    }
return 0;
}
*/
//----------------------------------------------------------------
// 5
// A
// B C
// C D E
// D E F G
// E F G H I
/*
#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;


    for(int i=1;i<=n;i++)

    {
    int ch='A'+i-1;

        for (int j = 1; j <=i ; j++)
        {
            cout<<char(ch)<<" ";
            ch++;

        }

        cout<<endl;

    }
return 0;
}
*/
//----------------------------------------------------------------
// 5
// E
// D E
// C D E
// B C D E
// A B C D E
/*
#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;


    for(int i=1;i<=n;i++)

    {
        int ch='A'+n-i-1;

        for (int j = 1; j <=i ; j++)
        {

            cout<<char(ch+j)<<" ";

        }

        cout<<endl;

    }
return 0;
}
*/
//----------------------------------------------------------------
// 5
//     *
//    **
//   ***
//  ****
// *****
/*
#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)

    {
        int space=n-i;

        for(int j =space; j > 0; j--)
        {
            cout<<" ";
        }

        for (int j = 1; j <= i; j++)
        {

            cout << "*" ;
        }

        cout << endl;
    }
    return 0;
}
*/
//----------------------------------------------------------------
// 5
// *****
// ****
// ***
// **
// *
/*
#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)

    {

        for (int j = n; j >= i; j--)
        {

            cout << "*" ;
        }

        cout << endl;
    }
    return 0;
}
*/
//----------------------------------------------------------------
// 5
// *****
//  ****
//   ***
//    **
//     *
/*
#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)

    {
        int space=0;
        for(int j=space;j<i-1;j++)
        {
            cout<<" ";
        }

        for (int j = n; j > i-1; j--)
        {

            cout << "*" ;
        }

        cout << endl;
    }
    return 0;
}
*/
//----------------------------------------------------------------
// 5
// 11111
//  2222
//   333
//    44
//     5
/*
#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)

    {
        int space=0;
        for(int j=space;j<i-1;j++)
        {
            cout<<" ";
        }

        for (int j = n; j > i-1; j--)
        {

            cout << i ;
        }

        cout << endl;
    }
    return 0;
}
*/
//----------------------------------------------------------------
// 5
//     1
//    22
//   333
//  4444
// 55555
/*
#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)

    {
        int space=n-i;
        for(int j=space;j>0;j--)
        {
            cout<<" ";
        }

        for (int x = 1; x <=i; x++)
        {

            cout << i ;
        }

        cout << endl;
    }
    return 0;
}
*/
//----------------------------------------------------------------
// 5
// 12345
//  2345
//   345
//    45
//     5
/*
#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)

    {
        int space=0;
        for(int j=0;j<space+i-1;j++)
        {
            cout<<" ";
        }

        for (int x = i; x <=n; x++)
        {

            cout << x ;
        }

        cout << endl;
    }
    return 0;
}
*/
//----------------------------------------------------------------
// 5
//     1
//    23
//   456
//  78910
// 1112131415
/*
#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int count=1;

    for (int i = 1; i <= n; i++)

    {
        int space=n-i;
        for(int j=space;j>0;j--)
        {
            cout<<" ";
        }

        for (int x = 0; x <i; x++)
        {

            cout << count;
            count++;
        }

        cout << endl;
    }
    return 0;
}
*/
//----------------------------------------------------------------
// 5
//     1
//    121
//   12321
//  1234321
// 123454321
/*
#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)

    {
        int space=n-i;
        for(int j=space;j>0;j--)
        {
            cout<<" ";
        }

        for (int x = 1; x <=i; x++)
        {
            cout << x;
        }

        for (int y = i-1; y > 0; y--)
        {
            cout << y;
        }

        cout << endl;
    }
    return 0;
}
*/
//----------------------------------------------------------------
// 5
// 1234554321
// 1234__4321
// 123____321
// 12______21
// 1________1
/*
#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)

    {
        for (int x = 1; x <= n-i+1; x++)
        {
            cout << x;
        }

        int space=0;
        for(int j=0;j< space+i-1;j++)
        {
            cout<<"_";

        }
         space=0;
        for(int j=0;j< space+i-1;j++)
        {
            cout<<"_";

        }



        for (int y = n-i+1 ; y > 0; y--)
        {
            cout << y;
        }

        cout << endl;
    }
    return 0;
}
*/

//----------------------------------------------------------------
