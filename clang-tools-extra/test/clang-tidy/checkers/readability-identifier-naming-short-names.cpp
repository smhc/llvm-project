// RUN: %check_clang_tidy %s readability-identifier-naming %t -- \
// RUN:   -config='{CheckOptions: [ \
// RUN:     {key: readability-identifier-naming.ParameterCase, value: CamelCase}, \
// RUN:     {key: readability-identifier-naming.ClassCase, value: CamelCase}, \
// RUN:     {key: readability-identifier-naming.ShortNameThreshold, value: 2} \
// RUN:  ]}'

int testFunc(int a, char **b);
int testFunc(int ab, char **ba);
// CHECK-MESSAGES: :[[@LINE-1]]:18: warning: invalid case style for parameter 'abc'
// CHECK-MESSAGES: :[[@LINE-2]]:30: warning: invalid case style for parameter 'cba'
int testFunc(int abc, char **cba);
int testFunc(int Abc, char **Cba);

class fo {
};

// CHECK-MESSAGES: :[[@LINE-1]]:7: warning: invalid case style for class 'foo'
class foo {
};
