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
    
}