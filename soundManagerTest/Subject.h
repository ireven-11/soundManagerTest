#pragma once
#include"IObserver.h"
#include<list>

class Event;

class Subject
{
public:
	Subject() {};
	~Subject() {};

	void addObserver(IObserver<Subject,Event>* observer)
	{

	}
	void removeObserver(IObserver<Subject, Event>* observer)
	{

	}

private:
	std::list<IObserver<Subject, Event>> observers;
	int numberObservers_;

protected:
	void update(const Subject& subject, Event event)
	{
		for (const auto& observer : observers)
		{
			observer->update(subject, event);
		}
	}
};