//
// Created by asice-cloud on 10/3/24.
//
#pragma once

#ifndef STATIC_REFLECT_H
#define STATIC_REFLECT_H

//library code below
#define REFLECT_PP_FOREACH_1(f, _1) f(_1)
#define REFLECT_PP_FOREACH_2(f, _1, _2) f(_1) f(_2)
#define REFLECT_PP_FOREACH_3(f, _1, _2, _3) f(_1) f(_2) f(_3)
#define REFLECT_PP_FOREACH_4(f, _1, _2, _3, _4) f(_1) f(_2) f(_3) f(_4)
#define REFLECT_PP_FOREACH_5(f, _1, _2, _3, _4, _5) f(_1) f(_2) f(_3) f(_4) f(_5)
#define REFLECT_PP_FOREACH_6(f, _1, _2, _3, _4, _5, _6) f(_1) f(_2) f(_3) f(_4) f(_5) f(_6)
#define REFLECT_PP_FOREACH_7(f, _1, _2, _3, _4, _5, _6, _7) f(_1) f(_2) f(_3) f(_4) f(_5) f(_6) f(_7)
#define REFLECT_PP_FOREACH_8(f, _1, _2, _3, _4, _5, _6, _7, _8) f(_1) f(_2) f(_3) f(_4) f(_5) f(_6) f(_7) f(_8)
#define REFLECT_PP_FOREACH_9(f, _1, _2, _3, _4, _5, _6, _7, _8, _9) f(_1) f(_2) f(_3) f(_4) f(_5) f(_6) f(_7) f(_8) f(_9)
#define REFLECT_PP_FOREACH_10(f, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10) f(_1) f(_2) f(_3) f(_4) f(_5) f(_6) f(_7) f(_8) f(_9) f(_10)
#define REFLECT_PP_FOREACH_11(f, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11) f(_1) f(_2) f(_3) f(_4) f(_5) f(_6) f(_7) f(_8) f(_9) f(_10) f(_11)
#define REFLECT_PP_FOREACH_12(f, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12) f(_1) f(_2) f(_3) f(_4) f(_5) f(_6) f(_7) f(_8) f(_9) f(_10) f(_11) f(_12)
#define REFLECT_PP_FOREACH_13(f, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13) f(_1) f(_2) f(_3) f(_4) f(_5) f(_6) f(_7) f(_8) f(_9) f(_10) f(_11) f(_12) f(_13)
#define REFLECT_PP_FOREACH_14(f, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14) f(_1) f(_2) f(_3) f(_4) f(_5) f(_6) f(_7) f(_8) f(_9) f(_10) f(_11) f(_12) f(_13) f(_14)
#define REFLECT_PP_FOREACH_15(f, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15) f(_1) f(_2) f(_3) f(_4) f(_5) f(_6) f(_7) f(_8) f(_9) f(_10) f(_11) f(_12) f(_13) f(_14) f(_15)
#define REFLECT_PP_FOREACH_16(f, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16) f(_1) f(_2) f(_3) f(_4) f(_5) f(_6) f(_7) f(_8) f(_9) f(_10) f(_11) f(_12) f(_13) f(_14) f(_15) f(_16)
#define REFLECT_PP_FOREACH_17(f, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17) f(_1) f(_2) f(_3) f(_4) f(_5) f(_6) f(_7) f(_8) f(_9) f(_10) f(_11) f(_12) f(_13) f(_14) f(_15) f(_16) f(_17)
#define REFLECT_PP_FOREACH_18(f, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18) f(_1) f(_2) f(_3) f(_4) f(_5) f(_6) f(_7) f(_8) f(_9) f(_10) f(_11) f(_12) f(_13) f(_14) f(_15) f(_16) f(_17) f(_18)
#define REFLECT_PP_FOREACH_19(f, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19) f(_1) f(_2) f(_3) f(_4) f(_5) f(_6) f(_7) f(_8) f(_9) f(_10) f(_11) f(_12) f(_13) f(_14) f(_15) f(_16) f(_17) f(_18) f(_19)
#define REFLECT_PP_FOREACH_20(f, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20) f(_1) f(_2) f(_3) f(_4) f(_5) f(_6) f(_7) f(_8) f(_9) f(_10) f(_11) f(_12) f(_13) f(_14) f(_15) f(_16) f(_17) f(_18) f(_19) f(_20)
#define REFLECT_PP_FOREACH_21(f, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21) f(_1) f(_2) f(_3) f(_4) f(_5) f(_6) f(_7) f(_8) f(_9) f(_10) f(_11) f(_12) f(_13) f(_14) f(_15) f(_16) f(_17) f(_18) f(_19) f(_20) f(_21)
#define REFLECT_PP_FOREACH_22(f, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22) f(_1) f(_2) f(_3) f(_4) f(_5) f(_6) f(_7) f(_8) f(_9) f(_10) f(_11) f(_12) f(_13) f(_14) f(_15) f(_16) f(_17) f(_18) f(_19) f(_20) f(_21) f(_22)
#define REFLECT_PP_FOREACH_23(f, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23) f(_1) f(_2) f(_3) f(_4) f(_5) f(_6) f(_7) f(_8) f(_9) f(_10) f(_11) f(_12) f(_13) f(_14) f(_15) f(_16) f(_17) f(_18) f(_19) f(_20) f(_21) f(_22) f(_23)
#define REFLECT_PP_FOREACH_24(f, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24) f(_1) f(_2) f(_3) f(_4) f(_5) f(_6) f(_7) f(_8) f(_9) f(_10) f(_11) f(_12) f(_13) f(_14) f(_15) f(_16) f(_17) f(_18) f(_19) f(_20) f(_21) f(_22) f(_23) f(_24)
#define REFLECT_PP_FOREACH_25(f, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25) f(_1) f(_2) f(_3) f(_4) f(_5) f(_6) f(_7) f(_8) f(_9) f(_10) f(_11) f(_12) f(_13) f(_14) f(_15) f(_16) f(_17) f(_18) f(_19) f(_20) f(_21) f(_22) f(_23) f(_24) f(_25)
#define REFLECT_PP_FOREACH_26(f, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26) f(_1) f(_2) f(_3) f(_4) f(_5) f(_6) f(_7) f(_8) f(_9) f(_10) f(_11) f(_12) f(_13) f(_14) f(_15) f(_16) f(_17) f(_18) f(_19) f(_20) f(_21) f(_22) f(_23) f(_24) f(_25) f(_26)
#define REFLECT_PP_FOREACH_27(f, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27) f(_1) f(_2) f(_3) f(_4) f(_5) f(_6) f(_7) f(_8) f(_9) f(_10) f(_11) f(_12) f(_13) f(_14) f(_15) f(_16) f(_17) f(_18) f(_19) f(_20) f(_21) f(_22) f(_23) f(_24) f(_25) f(_26) f(_27)
#define REFLECT_PP_FOREACH_28(f, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28) f(_1) f(_2) f(_3) f(_4) f(_5) f(_6) f(_7) f(_8) f(_9) f(_10) f(_11) f(_12) f(_13) f(_14) f(_15) f(_16) f(_17) f(_18) f(_19) f(_20) f(_21) f(_22) f(_23) f(_24) f(_25) f(_26) f(_27) f(_28)
#define REFLECT_PP_FOREACH_29(f, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29) f(_1) f(_2) f(_3) f(_4) f(_5) f(_6) f(_7) f(_8) f(_9) f(_10) f(_11) f(_12) f(_13) f(_14) f(_15) f(_16) f(_17) f(_18) f(_19) f(_20) f(_21) f(_22) f(_23) f(_24) f(_25) f(_26) f(_27) f(_28) f(_29)
#define REFLECT_PP_FOREACH_30(f, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30) f(_1) f(_2) f(_3) f(_4) f(_5) f(_6) f(_7) f(_8) f(_9) f(_10) f(_11) f(_12) f(_13) f(_14) f(_15) f(_16) f(_17) f(_18) f(_19) f(_20) f(_21) f(_22) f(_23) f(_24) f(_25) f(_26) f(_27) f(_28) f(_29) f(_30)
#define REFLECT_PP_FOREACH_31(f, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31) f(_1) f(_2) f(_3) f(_4) f(_5) f(_6) f(_7) f(_8) f(_9) f(_10) f(_11) f(_12) f(_13) f(_14) f(_15) f(_16) f(_17) f(_18) f(_19) f(_20) f(_21) f(_22) f(_23) f(_24) f(_25) f(_26) f(_27) f(_28) f(_29) f(_30) f(_31)
#define REFLECT_PP_FOREACH_32(f, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32) f(_1) f(_2) f(_3) f(_4) f(_5) f(_6) f(_7) f(_8) f(_9) f(_10) f(_11) f(_12) f(_13) f(_14) f(_15) f(_16) f(_17) f(_18) f(_19) f(_20) f(_21) f(_22) f(_23) f(_24) f(_25) f(_26) f(_27) f(_28) f(_29) f(_30) f(_31) f(_32)

	//implement
#define REFLECT_PP_NARGS_IMPL(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, N, ...) N
#define REFLECT_PP_NARGS(...) REFLECT_PP_NARGS_IMPL(__VA_ARGS__, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1)

#define REFLECT_PP_EXPAND_2(...) __VA_ARGS__
#define REFLECT_PP_EXPAND(...) REFLECT_PP_EXPAND_2(__VA_ARGS__)
#define REFLECT_PP_CONCAT_2(x, y) x##y
#define REFLECT_PP_CONCAT(x, y) REFLECT_PP_CONCAT_2(x, y)
#define REFLECT_PP_FOREACH(f,...) REFLECT_PP_EXPAND(REFLECT_PP_CONCAT(REFLECT_PP_FOREACH_, REFLECT_PP_NARGS(__VA_ARGS__))(f, __VA_ARGS__))

// do with reflect:
template <class T>
struct reflect_trait
{
	template<class Func>
	static constexpr void for_each_member(T &self,Func &&func)
	{
		self.for_each_member(func);
	}
};

#define REFLECT_EX_BEGIN(Type)\
template<>\
struct reflect_trait<Type>{\
template<class Func> \
static void for_each_member(Type &obj,Func&&func){

#define REFLECT_EX_PER_MEMBER(x)\
func(#x,obj.x);

#define REFLECT_EX_END()\
}\
}

#define REFLECT(...) std::tuple<__VA_ARGS__> t;

//use reflect outside of struct
#define REFLECT_EXTERNAL(Type,...) \
REFLECT_EX_BEGIN(Admin) \
REFLECT_PP_FOREACH(REFLECT_EX_PER_MEMBER,__VA_ARGS__) \
REFLECT_EX_END();


//reflec inside of struct
#define REFLECT_IN_PER_MEMBER(x)\
	func(#x,x);

#define REFLECT_INTERNAL(...) \
	template<class Func> \
	constexpr void for_each_member(Func &&func){\
	REFLECT_PP_FOREACH(REFLECT_IN_PER_MEMBER,__VA_ARGS__) \
	}

//serilize
	template <class T>
	std::string serilize(T& object)
	{
		Json::Value root;
		reflect_trait<T>::for_each_member(object, [&](const char* name, auto& value)
		{
			root[name] = value;
		});
		return root.toStyledString();
	}

#endif //STATIC_REFLECT_H
