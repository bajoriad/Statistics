//
//  main.cpp
//  EECS280Project1
//
//  Created by DIVYANGA on 04/05/21.
//

#include <stdio.h>
#include "stats.h"
#include "p1_library.h"
#include <iostream>
using namespace std;

int main()
{
    vector<double> v;
    string filename = "";
    string column = "";
    cout << "enter a filename" << endl;
    cin >> filename;
    cout << "enter a column name" << endl;
    cin >> column;
    cout << "reading column " << column << " from " << filename;
    v = extract_column(filename, column);
    summarise(v);
    cout << endl;
    
    
}
