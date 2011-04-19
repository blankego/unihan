#ifndef BUTIL_H_INCLUDEDB
#define BUTIL_H_INCLUDED
#include <cstdlib>
#include <string>
#include <boost/foreach.hpp>
#include <vector>
#define foreach BOOST_FOREACH
#define rforeach BOOST_REVERSE_FOREACH
using namespace std;

typedef char16_t uni;
typedef char32_t u32;
typedef unsigned char uchar;
typedef wchar_t wchar;
typedef signed char schar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef long long llong;
typedef unsigned long long ullong;

typedef vector<int> intVector;
typedef vector<string> strVector;

#define arrlen(a) (sizeof(a)/sizeof(a[0]))

#define mnew(struct_type) ((struct_type*)malloc(sizeof(struct_type)))
#define cnew(struct_type,cnt) ((struct_type*)calloc(cnt,sizeof(struct_type)))
#endif // BUTIL_H_INCLUDED
