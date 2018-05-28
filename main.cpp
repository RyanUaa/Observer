#include "Subject.h"
#include "Observer.h"

#include <iostream>
using namespace std;

int main()
{
	ConcreteSubject* sub = new ConcreteSubject();
	Observer* obva = new ConcreteObserverA(sub);
	Observer* obvb = new ConcreteObserverB(sub);

	sub->SetState("old");
	sub->Notify();
	sub->SetState("new");
	sub->Notify();

	return 0;
}
