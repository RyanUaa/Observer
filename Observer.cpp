#include "Observer.h"
#include "Subject.h"

#include <string>
#include <list>

using namespace std;

Observer::Observer()
{
	_st = '\0';
}

ConcreteObserverA::ConcreteObserverA(Subject* sub)
{
	_sub = sub;
	_sub->Attach(this);
}

ConcreteObserverA::~ConcreteObserverA()
{
	_sub->Detach(this);
	if(NULL != _sub)
	{
		delete _sub;
	}
}

Subject* ConcreteObserverA::GetSubject()
{
	return _sub;
}

void ConcreteObserverA::PrintInfo()
{
	cout<<"ConcreteObserverA:"<<_sub->GetState()<<endl;
}

void ConcreteObserverA::Update(Subject* sub)
{
	_st = sub->GetState();
	PrintInfo();
}

ConcreteObserverB::ConcreteObserverB(Subject* sub)
{
	_sub = sub;
	_sub->Attach(this);
}

ConcreteObserverB::~ConcreteObserverB()
{
	_sub->Detach(this);
	if(NULL != _sub)
	{
		delete _sub;
	}
}

Subject* ConcreteObserverB::GetSubject()
{
	return _sub;
}

void ConcreteObserverB::PrintInfo()
{
	cout<<"ConcreteObserverA:"<<_sub->GetState()<<endl;
}

void ConcreteObserverB::Update(Subject* sub)
{
	_st = sub->GetState();
	PrintInfo();
}
