#include <iostream>
using namespace std;

template<class T>
T average (T x, T y ,T z)
{
    T total,ave;
    total=x+y+z;
    ave=total/3;
    
    return ave;
}


class computations
{ private :
double number;
public:
computations(double);
double operator+ (computations);
double operator/ (computations);
friend ostream & operator <<(ostream& , computations);
};



computations::computations(double number)
{this->number=number;}


double computations::operator+ (computations b)
{
double total,x,y;
   total=x+y+b.number;
   
   return total;
    
}


double computations::operator / (computations b)
{
    
    double ave,total,x,y;
    total=x+y+b.number;
    ave=total/3;
    
    
    return ave;
}



ostream& operator<< (ostream & out ,computations z)
{
    out<<"average :"<<z.number<<endl;
 return out ;   
}



  int main()
{
  double a =average<double>(45.9,98.9,89.0);
  cout<<a<<endl;
  
 computations b (56.8);
 computations d (345.9);
 computations e (34.6);
 computations z(0);
 
 
 z = average(b,d,e);
cout<<z ;
    return 0;
    


}





