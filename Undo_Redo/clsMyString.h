#pragma once
#include <iostream>
#include <stack>
#include "D:\Prorgramming_device\programing\ProblemSolvingLevel5\MyStackArr\MyStackArr\clsMyStackArr.h"

using namespace std;


//template <class T>
class clsMyString
{
private:
	stack<string> _Undo;
	stack<string> _Redo;
	string _Value = "";
public:

	void SetString(string Value)
	{
		_Undo.push(_Value);
		_Value = Value;
	}
	string GetString()
	{
		return _Value;
	}
	_declspec(property(get = GetString, put = SetString)) string Value;
	
	void Undo()
	{
		if(!_Undo.empty())
		{
			_Redo.push(_Value);
			_Value = _Undo.top();
			_Undo.pop();
		}
		
	}
	
	void Redo()
	{
		if(!_Redo.empty())
		{
			_Undo.push(_Value);
			_Value = _Redo.top();
			_Redo.pop();
		}
		
	}
	
	
};

