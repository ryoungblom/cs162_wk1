//
//  main.cpp
//  Lab1
//
//  Created by reuben on 10/1/16.
//  Copyright (c) 2016 reuben. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {

    int user_matrix;
    
    cout << "hello! please choose a matrix size. It can be 2x2 or 3x3. Please choose 2 (for a 2x2 matrix) or 3 (for a 3x3 matrix):" << endl;
    
    cin >> user_matrix;
    
    //if statement, maybe.
    
    cout << "thanks! your matrix is now " << user_matrix << "x" << user_matrix << "." << endl;
    
    int hold = user_matrix;
    
    cout << "please fill your matrix." << endl;
    
    
    if (hold == 2) {
        cout << "you can choose four numbers. Please type them in here, pressing enter after each:" << endl;
        
        int a = 0;
        int b = 0;
        int c = 0;
        int d = 0;
        
        cin >> a;
        cin >> b;
        cin >> c;
        cin >> d;
        
        cout << "thanks!" << endl;
    
   /*    int matrix[2][2] = {{1, 2},
                            {3, 4}
        };  */
        
    }
    
    else {
        cout << "you can choose nine numbers. Please type them in here, pressing enter after each:" << endl;
        
        int e, f, g, h, i, j, k, l, m;
        
        cin >> e;
        cin >> f;
        cin >> g;
        cin >> h;
        cin >> i;
        cin >> j;
        cin >> k;
        cin >> l;
        cin >> m;
        
        cout << "thanks!" << endl;
    
      /*  int matrix[3][3] = {{e, f, g},
                            {h, i, j},
                            {k, l, m}
        };  */

    }
    
    
    int matrix [hold]= {2, 3};
    
    
  /*  matrix[1][1]=9;
    
    cout << matrix[2][1] << endl;
    cout << matrix[2][2] << endl;
   
   */
    
    return 0;
    }
