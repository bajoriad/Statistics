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
#include <cmath>
using namespace std;

vector<vector<double> > summarize(vector<double> v)
{
    vector<double> individual;
    vector<vector<double> > summary;
    double element = 0.0;
    int count = 0;
    sort(v);
    for (int i = 0; i < static_cast<int>(v.size()); i = i + count)
    {
        count = 1;
        element = v[i];
        for (int j = i + 1; j < static_cast<int>(v.size()); j++)
        {
            if (v[j] == element)
            {
                count++;
            }
        }
        individual.push_back(element);
        individual.push_back(count);
        summary.push_back(individual);
        individual.pop_back();
        individual.pop_back();
    }
    return summary;
    assert(false);
}

int count(vector<double> v)
{
    int count = 0;
    count = static_cast<int>(v.size());
    return count;
    assert(false);
}

double sum(vector<double> v)
{
    double total = 0.0;
    for (int i = 0; i < static_cast<int>(v.size()); i++)
    {
        total = total + v[i];
    }
    return total;
    assert(false);
}

double mean(vector<double> v)
{
    double mean = 0.0;
    double total = 0.0;
    int count1 = static_cast<int>(v.size());
    for (int i = 0; i < count1; i++)
    {
        total = total + v[i];
    }
    mean = total/count1;
    return mean;
    assert(false);
    double sumcopy = sum(v);
    int countcopy = count(v);
    mean = sumcopy/countcopy;
}

double median(vector<double> v)
{
    double median = 0.0;
    int index = 0;
    int index1 = 0;
    int index2 = 0;
    int count = static_cast<int>(v.size());
    if(count%2 != 0)
    {
        index = ((count + 1)/2) - 1;
        median = v[index];
    }
    else
    {
        index1 = (count/2) - 1;
        index2 = (count/2);
        median = (v[index1] + v[index2])/2;
    }
    return median;
  assert(false);
}

double mode(vector<double> v)
{
    double element = 0.0;
    int count = 0;
    int greatestcount = 0;
    sort(v);
    double mode = 0.0;
    for (int i = 0; i < static_cast<int>(v.size()); i = i + count)
    {
        count = 1;
        element = v[i];
        for (int j = i + 1; j < static_cast<int>(v.size()); j++)
        {
            if (v[j] == element)
            {
                count++;
            }
            if (count > greatestcount)
            {
                greatestcount = count;
                mode = v[i];
            }
            else if (count == greatestcount)
            {
                greatestcount = count;
            }
        }
    }
    return mode;
    assert(false);
}

double min(vector<double> v)
{
    double min = v[0];
    for (int i = 0; i < static_cast<int>(v.size()); i++)
    {
        if (v[i] <= min)
        {
            min = v[i];
        }
    }
    return min;
    assert(false);
}

double max(vector<double> v)
{
    double max = v[0];
    for (int i = 0; i < static_cast<int>(v.size()); i++)
    {
        if (v[i] >= max)
        {
            max = v[i];
        }
    }
    return max;
    assert(false);
}

double stdev(vector<double> v)
{
    double standarddev;
    double meancopy = mean(v);
    double countcopy = count(v);
    double element = 0.0;
    double total = 0.0;
    for (int i = 0; i < countcopy; i++)
    {
        element = ((v[i] - meancopy) * (v[i] - meancopy));
        total = total + element;
    }
    double variance = total/countcopy;
    standarddev = sqrt(variance);
    return standarddev;
    assert(false);
}

double percentile(vector<double> v, double p)
{
    double percentile = 0.0;
    double rank = 0.0;
    double fractpart = 0.0;
    double integpart = 0.0;
    int size = count(v);
    rank = ((p/100) * (size - 1)) + 1;
    fractpart = modf(rank, &integpart);
    percentile = (v[integpart - 1]) + (fractpart * ((v[integpart]) - (v[integpart - 1])));
    return percentile;
    assert(false);
}
