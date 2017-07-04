#include <iostream>

using namespace std;

class Adder
{
public:

  Adder( int a, int b );
  int getA( ) const;
  int getB( ) const;
  int RecursiveAPlusB( ) const;
  int recursive(int myValueofA, int myValueofB)const;
  int IterativeAPlusB( ) const;
  int interative(int myValueofA,int myValueofB)const;

private:
  int myValueofA;
  int myValueofB;

};
Adder::Adder(int a,int b)
{
    myValueofA=a;
    myValueofB=b;
}

int Adder::IterativeAPlusB()const
{
    return interative(myValueofA, myValueofB);
}

int Adder::interative(int myValueofA, int myValueofB)const
{
    int count=0;

    while(myValueofA>0 || myValueofB>0)
    {
        if(myValueofA>0)
        {
           myValueofA--;
           count++;
        }
        if(myValueofB>0)
        {
           myValueofB--;
           count++;
        }
    }
    while(myValueofA<0 || myValueofB<0)
    {
        if(myValueofA!=0)
        {
           myValueofA++;
           count--;
        }
        if(myValueofB!=0)
        {
           myValueofB++;
           count--;
        }

    }

    return count;
}

int Adder::RecursiveAPlusB( ) const
{
    return recursive(myValueofA, myValueofB);
}
int Adder::recursive(int myValueofA, int myValueofB)const
{
    if ( myValueofA == 0 )
        return( myValueofB );
     if ( myValueofB == 0 )
        return(myValueofA);
     else
        return( recursive( myValueofA - 1, myValueofB - 1 ) + 2 );
}

int Adder::getA()const
{
    return myValueofA;
}

int Adder::getB()const
{
    return myValueofB;
}

int main()
{
   Adder ten( 4, 3 );

   cout << ten.RecursiveAPlusB( ) << endl;
   cout << ten.IterativeAPlusB( ) << endl;
   cout << ten.RecursiveAPlusB( ) << endl;

   Adder tenagain( 2, 8 );
   cout << tenagain.RecursiveAPlusB( ) << endl;
   cout << tenagain.IterativeAPlusB( ) << endl;
   cout << tenagain.RecursiveAPlusB( ) << endl;

   return 0;
}
