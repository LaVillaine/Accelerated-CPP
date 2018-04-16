#include "stdafx.h"   // to get the pre-compiled headers
#include <algorithm>  // to get the declaration of sort
#include <stdexcept>  // to get the declaration of domain_error
#include <vector>     // to get the declaration of vector

using std::domain_error; using std::sort; using std::vector;

// compute the median of a vector<double>
// copy the vector so that the sort only affects the local copy
double median(vector<double> vec)
{
	typedef vector<double>::size_type vec_sz;

	vec_sz size = vec.size();
	if (size == 0)
		throw domain_error("cannot compute median of an empty vector");
	sort(vec.begin(), vec.end());
	vec_sz mid = size / 2;
	return size % 2 == 0 ?
		(vec[mid] + vec[mid - 1]) / 2 : vec[mid];
}