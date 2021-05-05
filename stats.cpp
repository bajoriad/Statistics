//
//  stats.cpp
//  EECS280Project1
//
//  Created by DIVYANGA on 04/05/21.
//

//#include <stdio.h>
#include "stats.h"
#include "p1_library.h"
#include <cassert>
#include <vector>
using namespace std;

vector<vector<double> > summarize(vector<double> v) {
    vector<double> summary;
    double element = 0.0;
    int count = 0;
    sort(v);
    for (int i = 0; i < v.size(); i = i + count)
    {
        count = 1;
        element = v[i];
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[j] == element)
            {
                count++;
            }
        }
        summary.push_back(count);
    }
    assert(false);
}

int count(vector<double> v) {
  assert(false);
}

double sum(vector<double> v) {
assert(false);
}

double mean(vector<double> v) {
  assert(false);
}

double median(vector<double> v) {
  assert(false);
}

double mode(vector<double> v) {
  assert(false);
}

double min(vector<double> v) {
  assert(false);
}

double max(vector<double> v) {
  assert(false);
}

double stdev(vector<double> v) {
  assert(false);
}

double percentile(vector<double> v, double p) {
  assert(false);
}
