.. title:: clang-tidy - readability-identifier-naming

readability-identifier-naming
=============================

Checks for identifiers naming style mismatch.

This check will try to enforce coding guidelines on the identifiers naming. It
supports one of the following casing types and tries to convert from one to
another if a mismatch is detected

Casing types include:

 - ``lower_case``,
 - ``UPPER_CASE``,
 - ``camelBack``,
 - ``CamelCase``,
 - ``camel_Snake_Back``,
 - ``Camel_Snake_Case``,
 - ``aNy_CasE``.

It also supports a fixed prefix and suffix that will be prepended or appended
to the identifiers, regardless of the casing. A threshold for the length of
the identifer may be specified to suppress the checks for short names.

Many configuration options are available, in order to be able to create
different rules for different kinds of identifiers. In general, the rules are
falling back to a more generic rule if the specific case is not configured.

The naming of virtual methods is reported where they occur in the base class,
but not where they are overridden, as it can't be fixed locally there.
This also applies for pseudo-override patterns like CRTP.

Options
-------

The following options are describe below:

 - :option:`AbstractClassCase`, :option:`AbstractClassPrefix`, :option:`AbstractClassSuffix`, :option:`AbstractClassShortSizeThreshold`
 - :option:`AggressiveDependentMemberLookup`
 - :option:`ClassCase`, :option:`ClassPrefix`, :option:`ClassSuffix`, :option:`ClassShortSizeThreshold`
 - :option:`ClassConstantCase`, :option:`ClassConstantPrefix`, :option:`ClassConstantSuffix`, :option:`ClassConstantShortSizeThreshold`
 - :option:`ClassMemberCase`, :option:`ClassMemberPrefix`, :option:`ClassMemberSuffix`, :option:`ClassMemberShortSizeThreshold`
 - :option:`ClassMethodCase`, :option:`ClassMethodPrefix`, :option:`ClassMethodSuffix`, :option:`ClassMethodShortSizeThreshold`
 - :option:`ConstantCase`, :option:`ConstantPrefix`, :option:`ConstantSuffix`, :option:`ConstantShortSizeThreshold`
 - :option:`ConstantMemberCase`, :option:`ConstantMemberPrefix`, :option:`ConstantMemberSuffix`, :option:`ConstantMemberShortSizeThreshold`
 - :option:`ConstantParameterCase`, :option:`ConstantParameterPrefix`, :option:`ConstantParameterSuffix`, :option:`ConstantParameterShortSizeThreshold`
 - :option:`ConstantPointerParameterCase`, :option:`ConstantPointerParameterPrefix`, :option:`ConstantPointerParameterSuffix`, :option:`ConstantPointerParameterShortSizeThreshold`
 - :option:`ConstexprFunctionCase`, :option:`ConstexprFunctionPrefix`, :option:`ConstexprFunctionSuffix`, :option:`ConstexprFunctionShortSizeThreshold`
 - :option:`ConstexprMethodCase`, :option:`ConstexprMethodPrefix`, :option:`ConstexprMethodSuffix`, :option:`ConstexprMethodShortSizeThreshold`
 - :option:`ConstexprVariableCase`, :option:`ConstexprVariablePrefix`, :option:`ConstexprVariableSuffix`, :option:`ConstexprVariableShortSizeThreshold`
 - :option:`EnumCase`, :option:`EnumPrefix`, :option:`EnumSuffix`, :option:`EnumShortSizeThreshold`
 - :option:`EnumConstantCase`, :option:`EnumConstantPrefix`, :option:`EnumConstantSuffix`, :option:`EnumConstantShortSizeThreshold`
 - :option:`FunctionCase`, :option:`FunctionPrefix`, :option:`FunctionSuffix`, :option:`FunctionShortSizeThreshold`
 - :option:`GetConfigPerFile`
 - :option:`GlobalConstantCase`, :option:`GlobalConstantPrefix`, :option:`GlobalConstantSuffix`, :option:`GlobalConstantShortSizeThreshold`
 - :option:`GlobalConstantPointerCase`, :option:`GlobalConstantPointerPrefix`, :option:`GlobalConstantPointerSuffix`, :option:`GlobalConstantPointerShortSizeThreshold`
 - :option:`GlobalFunctionCase`, :option:`GlobalFunctionPrefix`, :option:`GlobalFunctionSuffix`, :option:`GlobalFunctionShortSizeThreshold`
 - :option:`GlobalPointerCase`, :option:`GlobalPointerPrefix`, :option:`GlobalPointerSuffix`, :option:`GlobalPointerShortSizeThreshold`
 - :option:`GlobalVariableCase`, :option:`GlobalVariablePrefix`, :option:`GlobalVariableSuffix`, :option:`GlobalVariableShortSizeThreshold`
 - :option:`IgnoreMainLikeFunctions`
 - :option:`InlineNamespaceCase`, :option:`InlineNamespacePrefix`, :option:`InlineNamespaceSuffix`, :option:`InlineNamespaceShortSizeThreshold`
 - :option:`LocalConstantCase`, :option:`LocalConstantPrefix`, :option:`LocalConstantSuffix`, :option:`LocalConstantShortSizeThreshold`
 - :option:`LocalConstantPointerCase`, :option:`LocalConstantPointerPrefix`, :option:`LocalConstantPointerSuffix`, :option:`LocalConstantPointerShortSizeThreshold`
 - :option:`LocalPointerCase`, :option:`LocalPointerPrefix`, :option:`LocalPointerSuffix`, :option:`LocalPointerShortSizeThreshold`
 - :option:`LocalVariableCase`, :option:`LocalVariablePrefix`, :option:`LocalVariableSuffix`, :option:`LocalVariableShortSizeThreshold`
 - :option:`MacroDefinitionCase`, :option:`MacroDefinitionPrefix`, :option:`MacroDefinitionSuffix`, :option:`MacroDefinitionShortSizeThreshold`
 - :option:`MemberCase`, :option:`MemberPrefix`, :option:`MemberSuffix`, :option:`MemberShortSizeThreshold`
 - :option:`MethodCase`, :option:`MethodPrefix`, :option:`MethodSuffix`, :option:`MethodShortSizeThreshold`
 - :option:`NamespaceCase`, :option:`NamespacePrefix`, :option:`NamespaceSuffix`, :option:`NamespaceShortSizeThreshold`
 - :option:`ParameterCase`, :option:`ParameterPrefix`, :option:`ParameterSuffix`, :option:`ParameterShortSizeThreshold`
 - :option:`ParameterPackCase`, :option:`ParameterPackPrefix`, :option:`ParameterPackSuffix`, :option:`ParameterPackShortSizeThreshold`
 - :option:`PointerParameterCase`, :option:`PointerParameterPrefix`, :option:`PointerParameterSuffix`, :option:`PointerParameterShortSizeThreshold`
 - :option:`PrivateMemberCase`, :option:`PrivateMemberPrefix`, :option:`PrivateMemberSuffix`, :option:`PrivateMemberShortSizeThreshold`
 - :option:`PrivateMethodCase`, :option:`PrivateMethodPrefix`, :option:`PrivateMethodSuffix`, :option:`PrivateMethodShortSizeThreshold`
 - :option:`ProtectedMemberCase`, :option:`ProtectedMemberPrefix`, :option:`ProtectedMemberSuffix`, :option:`ProtectedMemberShortSizeThreshold`
 - :option:`ProtectedMethodCase`, :option:`ProtectedMethodPrefix`, :option:`ProtectedMethodSuffix`, :option:`ProtectedMethodShortSizeThreshold`
 - :option:`PublicMemberCase`, :option:`PublicMemberPrefix`, :option:`PublicMemberSuffix`, :option:`PublicMemberShortSizeThreshold`
 - :option:`PublicMethodCase`, :option:`PublicMethodPrefix`, :option:`PublicMethodSuffix`, :option:`PublicMethodShortSizeThreshold`
 - :option:`ScopedEnumConstantCase`, :option:`ScopedEnumConstantPrefix`, :option:`ScopedEnumConstantSuffix`, :option:`ScopedEnumConstantShortSizeThreshold`
 - :option:`StaticConstantCase`, :option:`StaticConstantPrefix`, :option:`StaticConstantSuffix`, :option:`StaticConstantShortSizeThreshold`
 - :option:`StaticVariableCase`, :option:`StaticVariablePrefix`, :option:`StaticVariableSuffix`, :option:`StaticVariableShortSizeThreshold`
 - :option:`StructCase`, :option:`StructPrefix`, :option:`StructSuffix`, :option:`StructShortSizeThreshold`
 - :option:`TemplateParameterCase`, :option:`TemplateParameterPrefix`, :option:`TemplateParameterSuffix`, :option:`TemplateParameterShortSizeThreshold`
 - :option:`TemplateTemplateParameterCase`, :option:`TemplateTemplateParameterPrefix`, :option:`TemplateTemplateParameterSuffix`, :option:`TemplateTemplateParameterShortSizeThreshold`
 - :option:`TypeAliasCase`, :option:`TypeAliasPrefix`, :option:`TypeAliasSuffix`, :option:`TypeAliasShortSizeThreshold`
 - :option:`TypedefCase`, :option:`TypedefPrefix`, :option:`TypedefSuffix`, :option:`TypedefShortSizeThreshold`
 - :option:`TypeTemplateParameterCase`, :option:`TypeTemplateParameterPrefix`, :option:`TypeTemplateParameterSuffix`, :option:`TypeTemplateParameterShortSizeThreshold`
 - :option:`UnionCase`, :option:`UnionPrefix`, :option:`UnionSuffix`, :option:`UnionShortSizeThreshold`
 - :option:`ValueTemplateParameterCase`, :option:`ValueTemplateParameterPrefix`, :option:`ValueTemplateParameterSuffix`, :option:`ValueTemplateParameterShortSizeThreshold`
 - :option:`VariableCase`, :option:`VariablePrefix`, :option:`VariableSuffix`, :option:`VariableShortSizeThreshold`
 - :option:`VirtualMethodCase`, :option:`VirtualMethodPrefix`, :option:`VirtualMethodSuffix`, :option:`VirtualMethodShortSizeThreshold`

.. option:: AbstractClassCase

    When defined, the check will ensure abstract class names conform to the
    selected casing.

.. option:: AbstractClassPrefix

    When defined, the check will ensure abstract class names will add the
    prefixed with the given value (regardless of casing).

.. option:: AbstractClassShortSizeThreshold

    Identifier naming checks won't be enforced for abstract class names having
    a length less than or equal to this setting.

.. option:: AbstractClassSuffix

    When defined, the check will ensure abstract class names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - AbstractClassCase of ``lower_case``
   - AbstractClassPrefix of ``pre_``
   - AbstractClassSuffix of ``_post``

Identifies and/or transforms abstract class names as follows:

Before:

.. code-block:: c++

    class ABSTRACT_CLASS {
    public:
      ABSTRACT_CLASS();
    };

After:

.. code-block:: c++

    class pre_abstract_class_post {
    public:
      pre_abstract_class_post();
    };

.. option:: AggressiveDependentMemberLookup

    When set to `1` the check will look in dependent base classes for dependent
    member references that need changing. This can lead to errors with template
    specializations so the default value is `0`.

For example using values of:

   - ClassMemberCase of ``lower_case``

Before:

.. code-block:: c++

    template <typename T>
    struct Base {
      T BadNamedMember;
    };

    template <typename T>
    struct Derived : Base<T> {
      void reset() {
        this->BadNamedMember = 0;
      }
    };

After if AggressiveDependentMemberLookup is ``0``:

.. code-block:: c++

    template <typename T>
    struct Base {
      T bad_named_member;
    };

    template <typename T>
    struct Derived : Base<T> {
      void reset() {
        this->BadNamedMember = 0;
      }
    };

After if AggressiveDependentMemberLookup is ``1``:

.. code-block:: c++

    template <typename T>
    struct Base {
      T bad_named_member;
    };

    template <typename T>
    struct Derived : Base<T> {
      void reset() {
        this->bad_named_member = 0;
      }
    };

.. option:: ClassCase

    When defined, the check will ensure class names conform to the
    selected casing.

.. option:: ClassPrefix

    When defined, the check will ensure class names will add the
    prefixed with the given value (regardless of casing).

.. option:: ClassShortSizeThreshold

    Identifier naming checks won't be enforced for class names having a length
    less than or equal to this setting.

.. option:: ClassSuffix

    When defined, the check will ensure class names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - ClassCase of ``lower_case``
   - ClassPrefix of ``pre_``
   - ClassSuffix of ``_post``

Identifies and/or transforms class names as follows:

Before:

.. code-block:: c++

    class FOO {
    public:
      FOO();
      ~FOO();
    };

After:

.. code-block:: c++

    class pre_foo_post {
    public:
      pre_foo_post();
      ~pre_foo_post();
    };

.. option:: ClassConstantCase

    When defined, the check will ensure class constant names conform to the
    selected casing.

.. option:: ClassConstantPrefix

    When defined, the check will ensure class constant names will add the
    prefixed with the given value (regardless of casing).

.. option:: ClassConstantShortSizeThreshold

    Identifier naming checks won't be enforced for class constant names having
    a length less than or equal to this setting.

.. option:: ClassConstantSuffix

    When defined, the check will ensure class constant names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - ClassConstantCase of ``lower_case``
   - ClassConstantPrefix of ``pre_``
   - ClassConstantSuffix of ``_post``

Identifies and/or transforms class constant names as follows:

Before:

.. code-block:: c++

    class FOO {
    public:
      static const int CLASS_CONSTANT;
    };

After:

.. code-block:: c++

    class FOO {
    public:
      static const int pre_class_constant_post;
    };

.. option:: ClassMemberCase

    When defined, the check will ensure class member names conform to the
    selected casing.

.. option:: ClassMemberPrefix

    When defined, the check will ensure class member names will add the
    prefixed with the given value (regardless of casing).

.. option:: ClassMemberShortSizeThreshold

    Identifier naming checks won't be enforced for class member names having a
    length less than or equal to this setting.

.. option:: ClassMemberSuffix

    When defined, the check will ensure class member names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - ClassMemberCase of ``lower_case``
   - ClassMemberPrefix of ``pre_``
   - ClassMemberSuffix of ``_post``

Identifies and/or transforms class member names as follows:

Before:

.. code-block:: c++

    class FOO {
    public:
      static int CLASS_CONSTANT;
    };

After:

.. code-block:: c++

    class FOO {
    public:
      static int pre_class_constant_post;
    };

.. option:: ClassMethodCase

    When defined, the check will ensure class method names conform to the
    selected casing.

.. option:: ClassMethodPrefix

    When defined, the check will ensure class method names will add the
    prefixed with the given value (regardless of casing).

.. option:: ClassMethodShortSizeThreshold

    Identifier naming checks won't be enforced for class method names having a
    length less than or equal to this setting.

.. option:: ClassMethodSuffix

    When defined, the check will ensure class method names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - ClassMethodCase of ``lower_case``
   - ClassMethodPrefix of ``pre_``
   - ClassMethodSuffix of ``_post``

Identifies and/or transforms class method names as follows:

Before:

.. code-block:: c++

    class FOO {
    public:
      int CLASS_MEMBER();
    };

After:

.. code-block:: c++

    class FOO {
    public:
      int pre_class_member_post();
    };

.. option:: ConstantCase

    When defined, the check will ensure constant names conform to the
    selected casing.

.. option:: ConstantPrefix

    When defined, the check will ensure constant names will add the
    prefixed with the given value (regardless of casing).

.. option:: ConstantShortSizeThreshold

    Identifier naming checks won't be enforced for constant names having a
    length less than or equal to this setting.

.. option:: ConstantSuffix

    When defined, the check will ensure constant names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - ConstantCase of ``lower_case``
   - ConstantPrefix of ``pre_``
   - ConstantSuffix of ``_post``

Identifies and/or transforms constant names as follows:

Before:

.. code-block:: c++

    void function() { unsigned const MyConst_array[] = {1, 2, 3}; }

After:

.. code-block:: c++

    void function() { unsigned const pre_myconst_array_post[] = {1, 2, 3}; }

.. option:: ConstantMemberCase

    When defined, the check will ensure constant member names conform to the
    selected casing.

.. option:: ConstantMemberPrefix

    When defined, the check will ensure constant member names will add the
    prefixed with the given value (regardless of casing).

.. option:: ConstantMemberShortSizeThreshold

    Identifier naming checks won't be enforced for constant member names having
    a length less than or equal to this setting.

.. option:: ConstantMemberSuffix

    When defined, the check will ensure constant member names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - ConstantMemberCase of ``lower_case``
   - ConstantMemberPrefix of ``pre_``
   - ConstantMemberSuffix of ``_post``

Identifies and/or transforms constant member names as follows:

Before:

.. code-block:: c++

    class Foo {
      char const MY_ConstMember_string[4] = "123";
    }

After:

.. code-block:: c++

    class Foo {
      char const pre_my_constmember_string_post[4] = "123";
    }

.. option:: ConstantParameterCase

    When defined, the check will ensure constant parameter names conform to the
    selected casing.

.. option:: ConstantParameterPrefix

    When defined, the check will ensure constant parameter names will add the
    prefixed with the given value (regardless of casing).

.. option:: ConstantParameterShortSizeThreshold

    Identifier naming checks won't be enforced for constant parameter names
    having a length less than or equal to this setting.

.. option:: ConstantParameterSuffix

    When defined, the check will ensure constant parameter names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - ConstantParameterCase of ``lower_case``
   - ConstantParameterPrefix of ``pre_``
   - ConstantParameterSuffix of ``_post``

Identifies and/or transforms constant parameter names as follows:

Before:

.. code-block:: c++

    void GLOBAL_FUNCTION(int PARAMETER_1, int const CONST_parameter);

After:

.. code-block:: c++

    void GLOBAL_FUNCTION(int PARAMETER_1, int const pre_const_parameter_post);

.. option:: ConstantPointerParameterCase

    When defined, the check will ensure constant pointer parameter names conform to the
    selected casing.

.. option:: ConstantPointerParameterPrefix

    When defined, the check will ensure constant pointer parameter names will add the
    prefixed with the given value (regardless of casing).

.. option:: ConstantPointerParameterShortSizeThreshold

    Identifier naming checks won't be enforced for constant pointer parameter
    names having a length less than or equal to this setting.

.. option:: ConstantPointerParameterSuffix

    When defined, the check will ensure constant pointer parameter names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - ConstantPointerParameterCase of ``lower_case``
   - ConstantPointerParameterPrefix of ``pre_``
   - ConstantPointerParameterSuffix of ``_post``

Identifies and/or transforms constant pointer parameter names as follows:

Before:

.. code-block:: c++

    void GLOBAL_FUNCTION(int const *CONST_parameter);

After:

.. code-block:: c++

    void GLOBAL_FUNCTION(int const *pre_const_parameter_post);

.. option:: ConstexprFunctionCase

    When defined, the check will ensure constexpr function names conform to the
    selected casing.

.. option:: ConstexprFunctionPrefix

    When defined, the check will ensure constexpr function names will add the
    prefixed with the given value (regardless of casing).

.. option:: ConstexprFunctionShortSizeThreshold

    Identifier naming checks won't be enforced for constexpr function names
    having a length less than or equal to this setting.

.. option:: ConstexprFunctionSuffix

    When defined, the check will ensure constexpr function names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - ConstexprFunctionCase of ``lower_case``
   - ConstexprFunctionPrefix of ``pre_``
   - ConstexprFunctionSuffix of ``_post``

Identifies and/or transforms constexpr function names as follows:

Before:

.. code-block:: c++

    constexpr int CE_function() { return 3; }

After:

.. code-block:: c++

    constexpr int pre_ce_function_post() { return 3; }

.. option:: ConstexprMethodCase

    When defined, the check will ensure constexpr method names conform to the
    selected casing.

.. option:: ConstexprMethodPrefix

    When defined, the check will ensure constexpr method names will add the
    prefixed with the given value (regardless of casing).

.. option:: ConstexprMethodShortSizeThreshold

    Identifier naming checks won't be enforced for constexpr method names
    having a length less than or equal to this setting.

.. option:: ConstexprMethodSuffix

    When defined, the check will ensure constexpr method names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - ConstexprMethodCase of ``lower_case``
   - ConstexprMethodPrefix of ``pre_``
   - ConstexprMethodSuffix of ``_post``

Identifies and/or transforms constexpr method names as follows:

Before:

.. code-block:: c++

    class Foo {
    public:
      constexpr int CST_expr_Method() { return 2; }
    }

After:

.. code-block:: c++

    class Foo {
    public:
      constexpr int pre_cst_expr_method_post() { return 2; }
    }

.. option:: ConstexprVariableCase

    When defined, the check will ensure constexpr variable names conform to the
    selected casing.

.. option:: ConstexprVariablePrefix

    When defined, the check will ensure constexpr variable names will add the
    prefixed with the given value (regardless of casing).

.. option:: ConstexprVariableShortSizeThreshold

    Identifier naming checks won't be enforced for constexpr variable names
    having a length less than or equal to this setting.

.. option:: ConstexprVariableSuffix

    When defined, the check will ensure constexpr variable names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - ConstexprVariableCase of ``lower_case``
   - ConstexprVariablePrefix of ``pre_``
   - ConstexprVariableSuffix of ``_post``

Identifies and/or transforms constexpr variable names as follows:

Before:

.. code-block:: c++

    constexpr int ConstExpr_variable = MyConstant;

After:

.. code-block:: c++

    constexpr int pre_constexpr_variable_post = MyConstant;

.. option:: EnumCase

    When defined, the check will ensure enumeration names conform to the
    selected casing.

.. option:: EnumPrefix

    When defined, the check will ensure enumeration names will add the
    prefixed with the given value (regardless of casing).

.. option:: EnumConstantShortSizeThreshold

    Identifier naming checks won't be enforced for enumeration names having a
    length less than or equal to this setting.

.. option:: EnumSuffix

    When defined, the check will ensure enumeration names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - EnumCase of ``lower_case``
   - EnumPrefix of ``pre_``
   - EnumSuffix of ``_post``

Identifies and/or transforms enumeration names as follows:

Before:

.. code-block:: c++

    enum FOO { One, Two, Three };

After:

.. code-block:: c++

    enum pre_foo_post { One, Two, Three };

.. option:: EnumConstantCase

    When defined, the check will ensure enumeration constant names conform to the
    selected casing.

.. option:: EnumConstantPrefix

    When defined, the check will ensure enumeration constant names will add the
    prefixed with the given value (regardless of casing).

.. option:: EnumConstantShortSizeThreshold

    Identifier naming checks won't be enforced for enumeration constant names
    having a length less than or equal to this setting.

.. option:: EnumConstantSuffix

    When defined, the check will ensure enumeration constant names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - EnumConstantCase of ``lower_case``
   - EnumConstantPrefix of ``pre_``
   - EnumConstantSuffix of ``_post``

Identifies and/or transforms enumeration constant names as follows:

Before:

.. code-block:: c++

    enum FOO { One, Two, Three };

After:

.. code-block:: c++

    enum FOO { pre_One_post, pre_Two_post, pre_Three_post };

.. option:: FunctionCase

    When defined, the check will ensure function names conform to the
    selected casing.

.. option:: FunctionPrefix

    When defined, the check will ensure function names will add the
    prefixed with the given value (regardless of casing).

.. option:: FunctionShortSizeThreshold

    Identifier naming checks won't be enforced for function names having a
    length less than or equal to this setting.

.. option:: FunctionSuffix

    When defined, the check will ensure function names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - FunctionCase of ``lower_case``
   - FunctionPrefix of ``pre_``
   - FunctionSuffix of ``_post``

Identifies and/or transforms function names as follows:

Before:

.. code-block:: c++

    char MY_Function_string();

After:

.. code-block:: c++

    char pre_my_function_string_post();

.. option:: GetConfigPerFile

    When `true` the check will look for the configuration for where an
    identifier is declared. Useful for when included header files use a 
    different style. 
    Default value is `true`.

.. option:: GlobalConstantCase

    When defined, the check will ensure global constant names conform to the
    selected casing.

.. option:: GlobalConstantPrefix

    When defined, the check will ensure global constant names will add the
    prefixed with the given value (regardless of casing).

.. option:: GlobalConstantShortSizeThreshold

    Identifier naming checks won't be enforced for global constant names having
    a length less than or equal to this setting.

.. option:: GlobalConstantSuffix

    When defined, the check will ensure global constant names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - GlobalConstantCase of ``lower_case``
   - GlobalConstantPrefix of ``pre_``
   - GlobalConstantSuffix of ``_post``

Identifies and/or transforms global constant names as follows:

Before:

.. code-block:: c++

    unsigned const MyConstGlobal_array[] = {1, 2, 3};

After:

.. code-block:: c++

    unsigned const pre_myconstglobal_array_post[] = {1, 2, 3};

.. option:: GlobalConstantPointerCase

    When defined, the check will ensure global constant pointer names conform to the
    selected casing.

.. option:: GlobalConstantPointerPrefix

    When defined, the check will ensure global constant pointer names will add the
    prefixed with the given value (regardless of casing).

.. option:: GlobalConstantPointerShortSizeThreshold

    Identifier naming checks won't be enforced for global constant pointer
    names having a length less than or equal to this setting.

.. option:: GlobalConstantPointerSuffix

    When defined, the check will ensure global constant pointer names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - GlobalConstantPointerCase of ``lower_case``
   - GlobalConstantPointerPrefix of ``pre_``
   - GlobalConstantPointerSuffix of ``_post``

Identifies and/or transforms global constant pointer names as follows:

Before:

.. code-block:: c++

    int *const MyConstantGlobalPointer = nullptr;

After:

.. code-block:: c++

    int *const pre_myconstantglobalpointer_post = nullptr;

.. option:: GlobalFunctionCase

    When defined, the check will ensure global function names conform to the
    selected casing.

.. option:: GlobalFunctionPrefix

    When defined, the check will ensure global function names will add the
    prefixed with the given value (regardless of casing).

.. option:: GlobalFunctionShortSizeThreshold

    Identifier naming checks won't be enforced for global function names having
    a length less than or equal to this setting.

.. option:: GlobalFunctionSuffix

    When defined, the check will ensure global function names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - GlobalFunctionCase of ``lower_case``
   - GlobalFunctionPrefix of ``pre_``
   - GlobalFunctionSuffix of ``_post``

Identifies and/or transforms global function names as follows:

Before:

.. code-block:: c++

    void GLOBAL_FUNCTION(int PARAMETER_1, int const CONST_parameter);

After:

.. code-block:: c++

    void pre_global_function_post(int PARAMETER_1, int const CONST_parameter);

.. option:: GlobalPointerCase

    When defined, the check will ensure global pointer names conform to the
    selected casing.

.. option:: GlobalPointerPrefix

    When defined, the check will ensure global pointer names will add the
    prefixed with the given value (regardless of casing).

.. option:: GlobalPointerShortSizeThreshold

    Identifier naming checks won't be enforced for global pointer names having
    a length less than or equal to this setting.

.. option:: GlobalPointerSuffix

    When defined, the check will ensure global pointer names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - GlobalPointerCase of ``lower_case``
   - GlobalPointerPrefix of ``pre_``
   - GlobalPointerSuffix of ``_post``

Identifies and/or transforms global pointer names as follows:

Before:

.. code-block:: c++

    int *GLOBAL3;

After:

.. code-block:: c++

    int *pre_global3_post;

.. option:: GlobalVariableCase

    When defined, the check will ensure global variable names conform to the
    selected casing.

.. option:: GlobalVariablePrefix

    When defined, the check will ensure global variable names will add the
    prefixed with the given value (regardless of casing).

.. option:: GlobalVariableShortSizeThreshold

    Identifier naming checks won't be enforced for global variable names having
    a length less than or equal to this setting.

.. option:: GlobalVariableSuffix

    When defined, the check will ensure global variable names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - GlobalVariableCase of ``lower_case``
   - GlobalVariablePrefix of ``pre_``
   - GlobalVariableSuffix of ``_post``

Identifies and/or transforms global variable names as follows:

Before:

.. code-block:: c++

    int GLOBAL3;

After:

.. code-block:: c++

    int pre_global3_post;

.. option:: IgnoreMainLikeFunctions

    When set to `1` functions that have a similar signature to ``main`` or 
    ``wmain`` won't enforce checks on the names of their parameters.
    Default value is `0`.

.. option:: InlineNamespaceCase

    When defined, the check will ensure inline namespaces names conform to the
    selected casing.

.. option:: InlineNamespacePrefix

    When defined, the check will ensure inline namespaces names will add the
    prefixed with the given value (regardless of casing).

.. option:: InlineNamespaceShortSizeThreshold

    Identifier naming checks won't be enforced for inline namespaces names
    having a length less than or equal to this setting.

.. option:: InlineNamespaceSuffix

    When defined, the check will ensure inline namespaces names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - InlineNamespaceCase of ``lower_case``
   - InlineNamespacePrefix of ``pre_``
   - InlineNamespaceSuffix of ``_post``

Identifies and/or transforms inline namespaces names as follows:

Before:

.. code-block:: c++

    namespace FOO_NS {
    inline namespace InlineNamespace {
    ...
    }
    } // namespace FOO_NS

After:

.. code-block:: c++

    namespace FOO_NS {
    inline namespace pre_inlinenamespace_post {
    ...
    }
    } // namespace FOO_NS

.. option:: LocalConstantCase

    When defined, the check will ensure local constant names conform to the
    selected casing.

.. option:: LocalConstantPrefix

    When defined, the check will ensure local constant names will add the
    prefixed with the given value (regardless of casing).

.. option:: LocalConstantShortSizeThreshold

    Identifier naming checks won't be enforced for local constant names having
    a length less than or equal to this setting.

.. option:: LocalConstantSuffix

    When defined, the check will ensure local constant names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - LocalConstantCase of ``lower_case``
   - LocalConstantPrefix of ``pre_``
   - LocalConstantSuffix of ``_post``

Identifies and/or transforms local constant names as follows:

Before:

.. code-block:: c++

    void foo() { int const local_Constant = 3; }

After:

.. code-block:: c++

    void foo() { int const pre_local_constant_post = 3; }

.. option:: LocalConstantPointerCase

    When defined, the check will ensure local constant pointer names conform to the
    selected casing.

.. option:: LocalConstantPointerPrefix

    When defined, the check will ensure local constant pointer names will add the
    prefixed with the given value (regardless of casing).

.. option:: LocalConstantPointerShortSizeThreshold

    Identifier naming checks won't be enforced for local constant pointer names
    having a length less than or equal to this setting.

.. option:: LocalConstantPointerSuffix

    When defined, the check will ensure local constant pointer names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - LocalConstantPointerCase of ``lower_case``
   - LocalConstantPointerPrefix of ``pre_``
   - LocalConstantPointerSuffix of ``_post``

Identifies and/or transforms local constant pointer names as follows:

Before:

.. code-block:: c++

    void foo() { int const *local_Constant = 3; }

After:

.. code-block:: c++

    void foo() { int const *pre_local_constant_post = 3; }

.. option:: LocalPointerCase

    When defined, the check will ensure local pointer names conform to the
    selected casing.

.. option:: LocalPointerPrefix

    When defined, the check will ensure local pointer names will add the
    prefixed with the given value (regardless of casing).

.. option:: LocalPointerShortSizeThreshold

    Identifier naming checks won't be enforced for local pointer names having a
    length less than or equal to this setting.

.. option:: LocalPointerSuffix

    When defined, the check will ensure local pointer names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - LocalPointerCase of ``lower_case``
   - LocalPointerPrefix of ``pre_``
   - LocalPointerSuffix of ``_post``

Identifies and/or transforms local pointer names as follows:

Before:

.. code-block:: c++

    void foo() { int *local_Constant; }

After:

.. code-block:: c++

    void foo() { int *pre_local_constant_post; }

.. option:: LocalVariableCase

    When defined, the check will ensure local variable names conform to the
    selected casing.

.. option:: LocalVariablePrefix

    When defined, the check will ensure local variable names will add the
    prefixed with the given value (regardless of casing).

.. option:: LocalVariableShortSizeThreshold

    Identifier naming checks won't be enforced for local variable names having
    a length less than or equal to this setting.

.. option:: LocalVariableSuffix

    When defined, the check will ensure local variable names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - LocalVariableCase of ``lower_case``
   - LocalVariablePrefix of ``pre_``
   - LocalVariableSuffix of ``_post``

Identifies and/or transforms local variable names as follows:

Before:

.. code-block:: c++

    void foo() { int local_Constant; }

After:

.. code-block:: c++

    void foo() { int pre_local_constant_post; }

.. option:: MacroDefinitionCase

    When defined, the check will ensure macro definitions conform to the
    selected casing.

.. option:: MacroDefinitionPrefix

    When defined, the check will ensure macro definitions will add the
    prefixed with the given value (regardless of casing).

.. option:: MacroDefinitionShortSizeThreshold

    Identifier naming checks won't be enforced for macro definitions having a
    length less than or equal to this setting.

.. option:: MacroDefinitionSuffix

    When defined, the check will ensure macro definitions will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - MacroDefinitionCase of ``lower_case``
   - MacroDefinitionPrefix of ``pre_``
   - MacroDefinitionSuffix of ``_post``

Identifies and/or transforms macro definitions as follows:

Before:

.. code-block:: c

    #define MY_MacroDefinition

After:

.. code-block:: c

    #define pre_my_macro_definition_post

Note: This will not warn on builtin macros or macros defined on the command line
using the ``-D`` flag.

.. option:: MemberCase

    When defined, the check will ensure member names conform to the
    selected casing.

.. option:: MemberPrefix

    When defined, the check will ensure member names will add the
    prefixed with the given value (regardless of casing).

.. option:: MemberShortSizeThreshold

    Identifier naming checks won't be enforced for member names having a length
    less than or equal to this setting.

.. option:: MemberSuffix

    When defined, the check will ensure member names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - MemberCase of ``lower_case``
   - MemberPrefix of ``pre_``
   - MemberSuffix of ``_post``

Identifies and/or transforms member names as follows:

Before:

.. code-block:: c++

    class Foo {
      char MY_ConstMember_string[4];
    }

After:

.. code-block:: c++

    class Foo {
      char pre_my_constmember_string_post[4];
    }

.. option:: MethodCase

    When defined, the check will ensure method names conform to the
    selected casing.

.. option:: MethodPrefix

    When defined, the check will ensure method names will add the
    prefixed with the given value (regardless of casing).

.. option:: MethodShortSizeThreshold

    Identifier naming checks won't be enforced for method names having a length
    less than or equal to this setting.

.. option:: MethodSuffix

    When defined, the check will ensure method names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - MethodCase of ``lower_case``
   - MethodPrefix of ``pre_``
   - MethodSuffix of ``_post``

Identifies and/or transforms method names as follows:

Before:

.. code-block:: c++

    class Foo {
      char MY_Method_string();
    }

After:

.. code-block:: c++

    class Foo {
      char pre_my_method_string_post();
    }

.. option:: NamespaceCase

    When defined, the check will ensure namespace names conform to the
    selected casing.

.. option:: NamespacePrefix

    When defined, the check will ensure namespace names will add the
    prefixed with the given value (regardless of casing).

.. option:: NamespaceShortSizeThreshold

    Identifier naming checks won't be enforced for namespace names having a
    length less than or equal to this setting.

.. option:: NamespaceSuffix

    When defined, the check will ensure namespace names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - NamespaceCase of ``lower_case``
   - NamespacePrefix of ``pre_``
   - NamespaceSuffix of ``_post``

Identifies and/or transforms namespace names as follows:

Before:

.. code-block:: c++

    namespace FOO_NS {
    ...
    }

After:

.. code-block:: c++

    namespace pre_foo_ns_post {
    ...
    }

.. option:: ParameterCase

    When defined, the check will ensure parameter names conform to the
    selected casing.

.. option:: ParameterPrefix

    When defined, the check will ensure parameter names will add the
    prefixed with the given value (regardless of casing).

.. option:: ParameterShortSizeThreshold

    Identifier naming checks won't be enforced for parameter names having a
    length less than or equal to this setting.

.. option:: ParameterSuffix

    When defined, the check will ensure parameter names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - ParameterCase of ``lower_case``
   - ParameterPrefix of ``pre_``
   - ParameterSuffix of ``_post``

Identifies and/or transforms parameter names as follows:

Before:

.. code-block:: c++

    void GLOBAL_FUNCTION(int PARAMETER_1, int const CONST_parameter);

After:

.. code-block:: c++

    void GLOBAL_FUNCTION(int pre_parameter_post, int const CONST_parameter);

.. option:: ParameterPackCase

    When defined, the check will ensure parameter pack names conform to the
    selected casing.

.. option:: ParameterPackPrefix

    When defined, the check will ensure parameter pack names will add the
    prefixed with the given value (regardless of casing).

.. option:: ParameterPackShortSizeThreshold

    Identifier naming checks won't be enforced for parameter pack names having
    a length less than or equal to this setting.

.. option:: ParameterPackSuffix

    When defined, the check will ensure parameter pack names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - ParameterPackCase of ``lower_case``
   - ParameterPackPrefix of ``pre_``
   - ParameterPackSuffix of ``_post``

Identifies and/or transforms parameter pack names as follows:

Before:

.. code-block:: c++

    template <typename... TYPE_parameters> {
      void FUNCTION(int... TYPE_parameters);
    }

After:

.. code-block:: c++

    template <typename... TYPE_parameters> {
      void FUNCTION(int... pre_type_parameters_post);
    }

.. option:: PointerParameterCase

    When defined, the check will ensure pointer parameter names conform to the
    selected casing.

.. option:: PointerParameterPrefix

    When defined, the check will ensure pointer parameter names will add the
    prefixed with the given value (regardless of casing).

.. option:: PointerParameterShortSizeThreshold

    Identifier naming checks won't be enforced for pointer parameter names
    having a length less than or equal to this setting.

.. option:: PointerParameterSuffix

    When defined, the check will ensure pointer parameter names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - PointerParameterCase of ``lower_case``
   - PointerParameterPrefix of ``pre_``
   - PointerParameterSuffix of ``_post``

Identifies and/or transforms pointer parameter names as follows:

Before:

.. code-block:: c++

    void FUNCTION(int *PARAMETER);

After:

.. code-block:: c++

    void FUNCTION(int *pre_parameter_post);

.. option:: PrivateMemberCase

    When defined, the check will ensure private member names conform to the
    selected casing.

.. option:: PrivateMemberPrefix

    When defined, the check will ensure private member names will add the
    prefixed with the given value (regardless of casing).

.. option:: PrivateMemberShortSizeThreshold

    Identifier naming checks won't be enforced for private member names having
    a length less than or equal to this setting.

.. option:: PrivateMemberSuffix

    When defined, the check will ensure private member names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - PrivateMemberCase of ``lower_case``
   - PrivateMemberPrefix of ``pre_``
   - PrivateMemberSuffix of ``_post``

Identifies and/or transforms private member names as follows:

Before:

.. code-block:: c++

    class Foo {
    private:
      int Member_Variable;
    }

After:

.. code-block:: c++

    class Foo {
    private:
      int pre_member_variable_post;
    }

.. option:: PrivateMethodCase

    When defined, the check will ensure private method names conform to the
    selected casing.

.. option:: PrivateMethodPrefix

    When defined, the check will ensure private method names will add the
    prefixed with the given value (regardless of casing).

.. option:: PrivateMethodShortSizeThreshold

    Identifier naming checks won't be enforced for private method names having
    a length less than or equal to this setting.

.. option:: PrivateMethodSuffix

    When defined, the check will ensure private method names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - PrivateMethodCase of ``lower_case``
   - PrivateMethodPrefix of ``pre_``
   - PrivateMethodSuffix of ``_post``

Identifies and/or transforms private method names as follows:

Before:

.. code-block:: c++

    class Foo {
    private:
      int Member_Method();
    }

After:

.. code-block:: c++

    class Foo {
    private:
      int pre_member_method_post();
    }

.. option:: ProtectedMemberCase

    When defined, the check will ensure protected member names conform to the
    selected casing.

.. option:: ProtectedMemberPrefix

    When defined, the check will ensure protected member names will add the
    prefixed with the given value (regardless of casing).

.. option:: ProtectedMemberShortSizeThreshold

    Identifier naming checks won't be enforced for protected member names
    having a length less than or equal to this setting.

.. option:: ProtectedMemberSuffix

    When defined, the check will ensure protected member names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - ProtectedMemberCase of ``lower_case``
   - ProtectedMemberPrefix of ``pre_``
   - ProtectedMemberSuffix of ``_post``

Identifies and/or transforms protected member names as follows:

Before:

.. code-block:: c++

    class Foo {
    protected:
      int Member_Variable;
    }

After:

.. code-block:: c++

    class Foo {
    protected:
      int pre_member_variable_post;
    }

.. option:: ProtectedMethodCase

    When defined, the check will ensure protected method names conform to the
    selected casing.

.. option:: ProtectedMethodPrefix

    When defined, the check will ensure protected method names will add the
    prefixed with the given value (regardless of casing).

.. option:: ProtectedMethodShortSizeThreshold

    Identifier naming checks won't be enforced for protected method names
    having a length less than or equal to this setting.

.. option:: ProtectedMethodSuffix

    When defined, the check will ensure protected method names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - ProtectedMethodCase of ``lower_case``
   - ProtectedMethodPrefix of ``pre_``
   - ProtectedMethodSuffix of ``_post``

Identifies and/or transforms protect method names as follows:

Before:

.. code-block:: c++

    class Foo {
    protected:
      int Member_Method();
    }

After:

.. code-block:: c++

    class Foo {
    protected:
      int pre_member_method_post();
    }

.. option:: PublicMemberCase

    When defined, the check will ensure public member names conform to the
    selected casing.

.. option:: PublicMemberPrefix

    When defined, the check will ensure public member names will add the
    prefixed with the given value (regardless of casing).

.. option:: PublicMemberShortSizeThreshold

    Identifier naming checks won't be enforced for public member names having a
    length less than or equal to this setting.

.. option:: PublicMemberSuffix

    When defined, the check will ensure public member names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - PublicMemberCase of ``lower_case``
   - PublicMemberPrefix of ``pre_``
   - PublicMemberSuffix of ``_post``

Identifies and/or transforms public member names as follows:

Before:

.. code-block:: c++

    class Foo {
    public:
      int Member_Variable;
    }

After:

.. code-block:: c++

    class Foo {
    public:
      int pre_member_variable_post;
    }

.. option:: PublicMethodCase

    When defined, the check will ensure public method names conform to the
    selected casing.

.. option:: PublicMethodPrefix

    When defined, the check will ensure public method names will add the
    prefixed with the given value (regardless of casing).

.. option:: PublicMethodShortSizeThreshold

    Identifier naming checks won't be enforced for public method names having a
    length less than or equal to this setting.

.. option:: PublicMethodSuffix

    When defined, the check will ensure public method names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - PublicMethodCase of ``lower_case``
   - PublicMethodPrefix of ``pre_``
   - PublicMethodSuffix of ``_post``

Identifies and/or transforms public method names as follows:

Before:

.. code-block:: c++

    class Foo {
    public:
      int Member_Method();
    }

After:

.. code-block:: c++

    class Foo {
    public:
      int pre_member_method_post();
    }

.. option:: ScopedEnumConstantCase

    When defined, the check will ensure scoped enum constant names conform to 
    the selected casing.

.. option:: ScopedEnumConstantPrefix

    When defined, the check will ensure scoped enum constant names will add the
    prefixed with the given value (regardless of casing).

.. option:: ScopedEnumConstantShortSizeThreshold

    Identifier naming checks won't be enforced for scoped enum constant names
    having a length less than or equal to this setting.

.. option:: ScopedEnumConstantSuffix

    When defined, the check will ensure scoped enum constant names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - ScopedEnumConstantCase of ``lower_case``
   - ScopedEnumConstantPrefix of ``pre_``
   - ScopedEnumConstantSuffix of ``_post``

Identifies and/or transforms enumeration constant names as follows:

Before:

.. code-block:: c++

    enum class FOO { One, Two, Three };

After:

.. code-block:: c++

    enum class FOO { pre_One_post, pre_Two_post, pre_Three_post };

.. option:: StaticConstantCase

    When defined, the check will ensure static constant names conform to the
    selected casing.

.. option:: StaticConstantPrefix

    When defined, the check will ensure static constant names will add the
    prefixed with the given value (regardless of casing).

.. option:: StaticConstantShortSizeThreshold

    Identifier naming checks won't be enforced for static constant names having
    a length less than or equal to this setting.

.. option:: StaticConstantSuffix

    When defined, the check will ensure static constant names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - StaticConstantCase of ``lower_case``
   - StaticConstantPrefix of ``pre_``
   - StaticConstantSuffix of ``_post``

Identifies and/or transforms static constant names as follows:

Before:

.. code-block:: c++

    static unsigned const MyConstStatic_array[] = {1, 2, 3};

After:

.. code-block:: c++

    static unsigned const pre_myconststatic_array_post[] = {1, 2, 3};

.. option:: StaticVariableCase

    When defined, the check will ensure static variable names conform to the
    selected casing.

.. option:: StaticVariablePrefix

    When defined, the check will ensure static variable names will add the
    prefixed with the given value (regardless of casing).

.. option:: StaticVariableShortSizeThreshold

    Identifier naming checks won't be enforced for static variable names having
    a length less than or equal to this setting.

.. option:: StaticVariableSuffix

    When defined, the check will ensure static variable names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - StaticVariableCase of ``lower_case``
   - StaticVariablePrefix of ``pre_``
   - StaticVariableSuffix of ``_post``

Identifies and/or transforms static variable names as follows:

Before:

.. code-block:: c++

    static unsigned MyStatic_array[] = {1, 2, 3};

After:

.. code-block:: c++

    static unsigned pre_mystatic_array_post[] = {1, 2, 3};

.. option:: StructCase

    When defined, the check will ensure struct names conform to the
    selected casing.

.. option:: StructPrefix

    When defined, the check will ensure struct names will add the
    prefixed with the given value (regardless of casing).

.. option:: StructShortSizeThreshold

    Identifier naming checks won't be enforced for struct names having a length
    less than or equal to this setting.

.. option:: StructSuffix

    When defined, the check will ensure struct names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - StructCase of ``lower_case``
   - StructPrefix of ``pre_``
   - StructSuffix of ``_post``

Identifies and/or transforms struct names as follows:

Before:

.. code-block:: c++

    struct FOO {
      FOO();
      ~FOO();
    };

After:

.. code-block:: c++

    struct pre_foo_post {
      pre_foo_post();
      ~pre_foo_post();
    };

.. option:: TemplateParameterCase

    When defined, the check will ensure template parameter names conform to the
    selected casing.

.. option:: TemplateParameterPrefix

    When defined, the check will ensure template parameter names will add the
    prefixed with the given value (regardless of casing).

.. option:: TemplateParameterShortSizeThreshold

    Identifier naming checks won't be enforced for template parameter names
    having a length less than or equal to this setting.

.. option:: TemplateParameterSuffix

    When defined, the check will ensure template parameter names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - TemplateParameterCase of ``lower_case``
   - TemplateParameterPrefix of ``pre_``
   - TemplateParameterSuffix of ``_post``

Identifies and/or transforms template parameter names as follows:

Before:

.. code-block:: c++

    template <typename T> class Foo {};

After:

.. code-block:: c++

    template <typename pre_t_post> class Foo {};

.. option:: TemplateTemplateParameterCase

    When defined, the check will ensure template template parameter names conform to the
    selected casing.

.. option:: TemplateTemplateParameterPrefix

    When defined, the check will ensure template template parameter names will add the
    prefixed with the given value (regardless of casing).

.. option:: TemplateTemplateParameterShortSizeThreshold

    Identifier naming checks won't be enforced for template template parameter
    names having a length less than or equal to this setting.

.. option:: TemplateTemplateParameterSuffix

    When defined, the check will ensure template template parameter names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - TemplateTemplateParameterCase of ``lower_case``
   - TemplateTemplateParameterPrefix of ``pre_``
   - TemplateTemplateParameterSuffix of ``_post``

Identifies and/or transforms template template parameter names as follows:

Before:

.. code-block:: c++

    template <template <typename> class TPL_parameter, int COUNT_params,
              typename... TYPE_parameters>

After:

.. code-block:: c++

    template <template <typename> class pre_tpl_parameter_post, int COUNT_params,
              typename... TYPE_parameters>

.. option:: TypeAliasCase

    When defined, the check will ensure type alias names conform to the
    selected casing.

.. option:: TypeAliasPrefix

    When defined, the check will ensure type alias names will add the
    prefixed with the given value (regardless of casing).

.. option:: TypeAliasShortSizeThreshold

    Identifier naming checks won't be enforced for type alias names having a
    length less than or equal to this setting.

.. option:: TypeAliasSuffix

    When defined, the check will ensure type alias names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - TypeAliasCase of ``lower_case``
   - TypeAliasPrefix of ``pre_``
   - TypeAliasSuffix of ``_post``

Identifies and/or transforms type alias names as follows:

Before:

.. code-block:: c++

    using MY_STRUCT_TYPE = my_structure;

After:

.. code-block:: c++

    using pre_my_struct_type_post = my_structure;

.. option:: TypedefCase

    When defined, the check will ensure typedef names conform to the
    selected casing.

.. option:: TypedefPrefix

    When defined, the check will ensure typedef names will add the
    prefixed with the given value (regardless of casing).

.. option:: TypedefShortSizeThreshold

    Identifier naming checks won't be enforced for typedef names having a
    length less than or equal to this setting.

.. option:: TypedefSuffix

    When defined, the check will ensure typedef names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - TypedefCase of ``lower_case``
   - TypedefPrefix of ``pre_``
   - TypedefSuffix of ``_post``

Identifies and/or transforms typedef names as follows:

Before:

.. code-block:: c++

    typedef int MYINT;

After:

.. code-block:: c++

    typedef int pre_myint_post;

.. option:: TypeTemplateParameterCase

    When defined, the check will ensure type template parameter names conform to the
    selected casing.

.. option:: TypeTemplateParameterPrefix

    When defined, the check will ensure type template parameter names will add the
    prefixed with the given value (regardless of casing).

.. option:: TypeTemplateParameterShortSizeThreshold

    Identifier naming checks won't be enforced for type template names having a
    length less than or equal to this setting.

.. option:: TypeTemplateParameterSuffix

    When defined, the check will ensure type template parameter names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - TypeTemplateParameterCase of ``lower_case``
   - TypeTemplateParameterPrefix of ``pre_``
   - TypeTemplateParameterSuffix of ``_post``

Identifies and/or transforms type template parameter names as follows:

Before:

.. code-block:: c++

    template <template <typename> class TPL_parameter, int COUNT_params,
              typename... TYPE_parameters>

After:

.. code-block:: c++

    template <template <typename> class TPL_parameter, int COUNT_params,
              typename... pre_type_parameters_post>

.. option:: UnionCase

    When defined, the check will ensure union names conform to the
    selected casing.

.. option:: UnionPrefix

    When defined, the check will ensure union names will add the
    prefixed with the given value (regardless of casing).

.. option:: UnionShortSizeThreshold

    Identifier naming checks won't be enforced for union names having a length
    less than or equal to this setting.

.. option:: UnionSuffix

    When defined, the check will ensure union names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - UnionCase of ``lower_case``
   - UnionPrefix of ``pre_``
   - UnionSuffix of ``_post``

Identifies and/or transforms union names as follows:

Before:

.. code-block:: c++

    union FOO {
      int a;
      char b;
    };

After:

.. code-block:: c++

    union pre_foo_post {
      int a;
      char b;
    };

.. option:: ValueTemplateParameterCase

    When defined, the check will ensure value template parameter names conform to the
    selected casing.

.. option:: ValueTemplateParameterPrefix

    When defined, the check will ensure value template parameter names will add the
    prefixed with the given value (regardless of casing).

.. option:: ValueTemplateParameterShortSizeThreshold

    Identifier naming checks won't be enforced for value template parameter
    names having a length less than or equal to this setting.

.. option:: ValueTemplateParameterSuffix

    When defined, the check will ensure value template parameter names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - ValueTemplateParameterCase of ``lower_case``
   - ValueTemplateParameterPrefix of ``pre_``
   - ValueTemplateParameterSuffix of ``_post``

Identifies and/or transforms value template parameter names as follows:

Before:

.. code-block:: c++

    template <template <typename> class TPL_parameter, int COUNT_params,
              typename... TYPE_parameters>

After:

.. code-block:: c++

    template <template <typename> class TPL_parameter, int pre_count_params_post,
              typename... TYPE_parameters>

.. option:: VariableCase

    When defined, the check will ensure variable names conform to the
    selected casing.

.. option:: VariablePrefix

    When defined, the check will ensure variable names will add the
    prefixed with the given value (regardless of casing).

.. option:: VariableShortSizeThreshold

    Identifier naming checks won't be enforced for variable names having a
    length less than or equal to this setting.

.. option:: VariableSuffix

    When defined, the check will ensure variable names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - VariableCase of ``lower_case``
   - VariablePrefix of ``pre_``
   - VariableSuffix of ``_post``

Identifies and/or transforms variable names as follows:

Before:

.. code-block:: c++

    unsigned MyVariable;

After:

.. code-block:: c++

    unsigned pre_myvariable_post;

.. option:: VirtualMethodCase

    When defined, the check will ensure virtual method names conform to the
    selected casing.

.. option:: VirtualMethodPrefix

    When defined, the check will ensure virtual method names will add the
    prefixed with the given value (regardless of casing).

.. option:: VirtualMethodShortSizeThreshold

    Identifier naming checks won't be enforced for virtual method names having
    a length less than or equal to this setting.

.. option:: VirtualMethodSuffix

    When defined, the check will ensure virtual method names will add the
    suffix with the given value (regardless of casing).

For example using values of:

   - VirtualMethodCase of ``lower_case``
   - VirtualMethodPrefix of ``pre_``
   - VirtualMethodSuffix of ``_post``

Identifies and/or transforms virtual method names as follows:

Before:

.. code-block:: c++

    class Foo {
    public:
      virtual int MemberFunction();
    }

After:

.. code-block:: c++

    class Foo {
    public:
      virtual int pre_member_function_post();
    }
