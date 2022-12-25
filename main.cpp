#include <iostream>
#include <cmath>
#include <array>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

//problem 14
//void printvec(vector<int> marks){
//    for(int elem : marks){
//        cout << elem << " ";
//    }
//}

//problem 17
//void swapping(int &a, int &b){
//    a=a+b;
//    b=a-b;
//    a=a-b;
//}

//problem 18
//void s(int *a, int *b){
//    *a = *a + *b;
//    *b = *a - *b;
//    *a = *a - *b;
//}

//problem 19
//void loc(int p){
//    cout << &p << endl;
//}

//problem 20
//int &max_byref(int &a, int &b){
//    return a < b ? b : a;
//}

//problem 21
int *square(int *a){
    for(int i = 0; i < 5; i++){
        *(a+i) = *(a+i) * *(a+i);
    }
    return a;
}


int main(){
  
//    Problem 1. ---------------------------------------------|
    
//    int x;
//    cin >> x;
//
//    int *ptr = &x;
//
//    cout << ptr << endl;

//    Problem 2. ---------------------------------------------|
    
//    int x;
//
//    cin >> x;
//
//    int *ptr = &x;
//
//    cout << ptr << endl;
//    cout << &ptr << endl;
    
//    Problem 3. ---------------------------------------------|

//    int a, b;
//
//    cin >> a >> b;
//
//    int *ptrA = &a;
//    int *ptrB = &b;
//
//    cout << *ptrA << endl;
//    cout << *ptrB << endl;
    
//    Problem 4. ---------------------------------------------|
    
//    int a;
//    cin >> a;
//
//    int *ptr = &a;
//
//    cout << *ptr << endl;
    
//    Problem 5. ---------------------------------------------|

//    int x;
//    cin >> x;
//    cout << *(&x) << endl;
    
    

//    Problem 7. ---------------------------------------------|
    
//    int a, b;
//    cin >> a >> b;
//
//    int *ptra = &a;
//    int *ptrb = &b;
//
//    cout << *ptra * *ptrb << endl;
    
//    Problem 8. ---------------------------------------------|
    
//    int a, b, c;
//    cin >> a >> b >> c;
//
//    int *ptra = &a;
//    int *ptrb = &b;
//    int *ptrc = &c;
//
//    if((*ptra > *ptrb) && (*ptra > *ptrc)){
//        cout << *ptra << endl;
//    } else if((*ptrb > *ptra) && (*ptrb > *ptrc)){
//        cout << *ptrb << endl;
//    } else {
//        cout << *ptrc << endl;
//    }
    
//Vectors
//    Problem 10. ---------------------------------------------|
    
//    vector<int> marks{10, 20, 30, 40, 50};
//    marks.pop_back();
//
//    for(int element : marks){
//        cout << element << " ";
//    }
//    cout << endl;
    
//    Problem 14. ---------------------------------------------|
    
//    vector<int> marks{1,2,3,4,5};
//
//    printvec(marks);
//    cout << endl;
  
//    Problem 15. ---------------------------------------------|
    
//    int row = 4;
//    int column = 2;
//    int temp;
//
//    vector<vector<int>> matrix; // = {
////        {1,2},
////        {3,4},
////        {5,6},
////        {7,8}
////    };
//
//    for(int r = 0; r < row; r++){
//        vector<int> row;
//        for(int c = 0; c < column; c++){
//            cin >> temp;
//            row.push_back(temp);
//        }
//        matrix.push_back(row);
//    }
//
//    for(int r = 0; r < row; r++){
//        for(int c = 0; c < column; c++){
//            cout << matrix[r][c] << " ";
//        }
//        cout << endl;
//    }
    

    
//    Problem 15. ---------------------------------------------|

//    int n = 0;
//    int m = n;
    
//    cout << &n << endl << &m << endl;
//
//    m++;
//
//    cout << n << endl << m << endl;
//
//    int &r = n;
//
//    cout << &r << endl << &n << endl;
//
//    r++;
//
//    cout << n << endl << r << endl;
  
//    Problem 16. ---------------------------------------------|

//    int a = 5;
//
//    cout << &a << endl;
//
////    cin >> a;
//
//    cout << &a << endl;
//
//    int *p = &a;
//
//    cout << *p << endl;
//
//    cout << p << endl;
//
//    a++;
//
//    cout << *p << endl;
//
//    (*p)++;
//
//    cout << a << endl;
  
//    Problem 17. ---------------------------------------------|
    
//    int a, b;
//
//    cin >> a >> b;
//
//    swapping(a, b);
//    cout << a << " " << b << endl;
    
//    Problem 18. ---------------------------------------------|
    
//    int x, y;
//    cin >> x >> y;
//
//    int *p1 = &x;
//    int *p2 = &y;
//
//    s(p1, p2);
//    cout << x << " " << y << endl;
   
//    Problem 19. ---------------------------------------------|
    
//    int x = 0, y = 0;
//    cin >> x >> y;
//
//    max_byref(x, y) = 100;
//    cout << "x = " << x << "; y = " << y << endl;
    
//    Problem 20. ---------------------------------------------|
    
//    int a[5];
//    int *p = a;
//
//    for(int i = 0; i < 5; i++){
//        cin >> a[i];
//        cout << "Reference " << i << ": " << &a[i] << endl;
//        cout << "Pointer " << i << ": " << (p+i) << endl;
//    }

//    Problem 21. ---------------------------------------------|
    
//    int arr[5] = {1,2,3,4,5};
//
//    square(arr);
//    for(int i = 0; i < 5; i++){
//        cout << arr[i] << endl;
//    }

//    Problem 21. ---------------------------------------------|
    
//    const int size = 6;
//    array<int, size> arr;
//
//    for(int i = 0; i < size; i++){
//        cin >> arr[i];
//    }
//
//
//    for(int i = 0; i < size; i++){
//        for(int j = i+1; j < size; j++){
//            if(arr[i] > arr[j]){
//                int temp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = temp;
//            }
//        }
//    }
//
//    for(int elem : arr){
//        cout << elem << " ";
//    }
 
//    Problem 22. ---------------------------------------------|

//    vector<int> vec;
//    int temp;
//    int size;
//    cin >> size;
//
//    for(int i = 0; i < size; i++){
//        cin >> temp;
//        vec.push_back(temp);
//    }
//
//    for(int x = 0; x < size; x++){
//        vec[x] = pow(vec[x], 3);
//        cout << vec[x] << " ";
//    }
    
    vector<int> myVec;
    int val, size;
    cin >> size;
    
    for(int i = 0; i < size; i++){
        cin >> val;
        myVec.push_back(val);
    }
    
    for(int a = 0; a < size; a++){
        if(myVec[a] <= 0){
            myVec.erase(myVec.begin()+a);
        }
      
    }
    
    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(myVec[i] > myVec[j]){
                int temp = myVec[i];
                myVec[i] = myVec[j];
                myVec[j] = temp;
            }
        }
    }
    
    for(int elem : myVec){
        cout << elem << " ";
    }
    
    
    
     
    
    return 0;
}

