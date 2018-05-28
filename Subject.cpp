#include <iostream>
#include <string>
#include <list>

#include "Subject.h"
#include "Observer.h"

using namespace std;

typedef string State;

Subject::Subject()
{
	_obvs = new list<Observer*>;//务必在模板使用之前创建
}

/*Subject::~Subject()
{

}*/

void Subject::Attach(Observer* obv)
{
	_obvs->push_front(obv);
}

void Subject::Detach(Observer* obv)
{
	if(obv != NULL)
		_obvs->remove(obv);
}

void Subject::Notify()
{
	list<Observer*>::iterator it;
	it = _obvs->begin();
	for(; it != _obvs->end(); ++it)
	{
		(*it)->Update(this);//itreator本身是指针，指向一个Observer*类型变量
	}
}

ConcreteSubject::ConcreteSubject()
{
	_st = '\0';
}

void ConcreteSubject::SetState(const State& st)
{
	_st = st;
}

State ConcreteSubject::GetState()
{
	return _st;
}

