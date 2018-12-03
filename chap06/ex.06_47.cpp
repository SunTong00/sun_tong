a) float cube(float);
   float cube(float number)
   {
       return number*number*number;
   }
b) int randomNumber;
   randomNumber = srand();
c) double y=123.45678;
   double x;
   x=y;
   cout << static_cast<float>(x) <<endl;
d) double square(double number)
   {
       return number*number;
   }
e) int sum(int n)
   {
       if (n==0)
        return 0;
       else
        return n + sum(n-1);
   }
