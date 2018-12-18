a) int main()
   {
       array < array < int,3 > 2 > t;
   }
b) 2
c) 3
d) 6
e) for(size_t column=0;column<t.size();++column)
   cout << "t[1][" << column << "]";
f) for(size_t row=0;row<t.size();++row)
   cout << "t[" << row << "][2]";
g) array < array < int , 3 > 2 > t={0,0};
h) array < array < int , 3 > 2 > t={0,0,0,0,0,0};
i) for(int row=0;row<=2;++row)
      for(int column=0;column<=3;++column)
        t[row][column]=0;
j) for(int row : rows)
      for(int column : columns)
      t[row][column]=0;
k) for(size_t row=0;row<t.size();++row)
      for(size_t column=0;column<t.size();++column)
                cin >> t[row][column];
l) int minumn=t[1][1];
   for(size_t row=0;row<t.size();++row)
      for(size_t column=0;column<t.size();++column)
       minumn-t[row][column]<=0?minumn=minumn:minumn=t[row][column];
    cout << "The min is: " << minumn <<endl;
m) for(size_t column=0;column<t.size();++column)
   cout << t[1][column];
n) int a=0;
   for(size_t column=0;column<=2;++column)
     for(size_t row=0;row<t.size();++row)
     a+=t[row][column];
     cout << a;
o) cout << "\tcolumn1" << "\tcolumn2" << "\tcolumn3";
   for(size_t row=0;row<t.size();++row)
    cout << "\nrow" << row;
      for(size_t column=0;column<t.size();++column)
        cout << "\t" << t[row][column];

