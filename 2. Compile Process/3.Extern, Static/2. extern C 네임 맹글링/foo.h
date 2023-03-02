//#pragma once

//void foo();
//void bar();


// name mangling 기능을 사용하지 않고 전처리해서
// C 사용자가 인터페이스를 사용 가능하게 할 수 있다.
// 즉 컴파일할떄 이름이 
// _Z3food  -> foo 로 어셈블리어로 변경/사용
extern "C"
{
	int foo(double a);
	double bar(int a);
}
