#include<cmath>
using namespace std;
namespace SHAH
{
    int shark(int a ,int b)
    {
        return a+b;
    }
    int GCD_recursive(int a,int b)
    {
        if(a%b==0)
        {
            return b;
        }
        else
        {
            return GCD_recursive(b,a%b);
        }
    }
    int GCD_iterative(int a,int b)
    {
        int m;
        while(a%b!=0)
        {
            m=b;
            b=a%b;
            a=m;
        }
        return b;
    }
    int LCM(int a ,int b)
    {
        return (a*b)/GCD_iterative(a,b);
    }

    double bisection(double a, double b, int root, double num) {
        double mid;
        double epsilon = 0.000001;
        while (abs(b - a) >= epsilon) { // Use std::abs to get the absolute value
            mid = (a + b) / 2;
            if (pow(a, root) - num > 0 && pow(mid, root) - num > 0 ||
                pow(a, root) - num < 0 && pow(mid, root) - num < 0) {
                a = mid;
            } else {
                b = mid;
            }
        }
        return b;
    }


}