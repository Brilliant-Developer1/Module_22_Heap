// #include<bits/stdc++.h>
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <complex>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <random>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <strstream>
#include <tuple>
#include <typeinfo>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <vector>

using namespace std;

int main()
{

    vector<int> array;
    int input;
    cin >> input;
    for (int i = 0; i < input; i++)
    {
        int x;
        cin >> x;
        // insert maxHeap
        array.push_back(x);
        int cur_indx = array.size() - 1;

        while (cur_indx != 0)
        {
            int parent_indx = (cur_indx - 1) / 2;
            if (array[parent_indx] < array[cur_indx])
            {
                swap(array[parent_indx], array[cur_indx]);
            }
            else
                break;
            cur_indx = parent_indx;
        }
    }

    for (int value : array)
        cout << value << " ";
    return 0;
}