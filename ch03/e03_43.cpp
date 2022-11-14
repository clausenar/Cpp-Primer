#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int main()
{
int ia[3][4]={0,1,2,3,4,5,6,7,8,9,10,11};

//using range
constexpr size_t row_count=3,col_count=4;
for (size_t i=0;i!=row_count;++i){
    for (size_t j=0;j!=col_count;++j)
        cout << ia[i][j];
}

//using for loop 
for (const int(&row)[4]:ia)
    for (int col: row)
        cout << col;

//using pointer
for (int (*row)[4]=ia; row!=ia+3;++row)
    for (int(*col)=*row;col!=*row+4;++col)
        cout << *col << " ";

}



