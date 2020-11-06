// RUN: %check_clang_tidy %s readability-identifier-naming %t -- \
// RUN:   -config='{CheckOptions: [ \
// RUN:     {key: readability-identifier-naming.ParameterCase, value: CamelCase}, \
// RUN:     {key: readability-identifier-naming.ClassCase, value: CamelCase}, \
// RUN:     {key: readability-identifier-naming.ShortNameThreshold, value: 2} \
// RUN:  ]}'

int testFunc(int a, char **b);
int testFunc(int ab, char **ba);
int testFunc(int abc, char **cba);
// CHECK-MESSAGES: :[[@LINE-1]]:18: warning: invalid case style for parameter 'abc'
// CHECK-MESSAGES: :[[@LINE-2]]:30: warning: invalid case style for parameter 'cba'
// CHECK-FIXES: {{^}}int testFunc(int Abc, char **Cba);{{$}}
int testFunc(int Abc, char **Cba);

class fo {
};

class foo {
// CHECK-MESSAGES: :[[@LINE-1]]:7: warning: invalid case style for class 'foo'
// CHECK-FIXES: {{^}}class Foo {{{$}}
};
