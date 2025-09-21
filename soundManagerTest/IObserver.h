#pragma once

template <typename Entity, typename Event>
class IObserver
{
public:
	virtual ~IObserver() = default;
	virtual void update(const Entity& entity, Event event) = 0;
};