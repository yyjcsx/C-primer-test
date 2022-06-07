#include "stable_sort.h"
bool stable_sort::operator()(const string& a, const string& b) const {
	return (a.size() < b.size());
}