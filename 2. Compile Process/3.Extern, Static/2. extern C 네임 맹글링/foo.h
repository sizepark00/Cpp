//#pragma once

//void foo();
//void bar();


// name mangling ����� ������� �ʰ� ��ó���ؼ�
// C ����ڰ� �������̽��� ��� �����ϰ� �� �� �ִ�.
// �� �������ҋ� �̸��� 
// _Z3food  -> foo �� �������� ����/���
extern "C"
{
	int foo(double a);
	double bar(int a);
}
