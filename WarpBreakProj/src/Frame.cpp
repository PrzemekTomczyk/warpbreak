#include "Frame.h"



Frame::Frame(sf::RenderWindow& window) : Container(nullptr), m_window(window)
{
}

Frame::~Frame()
{
}

void Frame::processEvents()
{
	sf::Vector2f parent_pos(0, 0);
	processEvents(parent_pos);
}

bool Frame::processEvent(const sf::Event & event)
{

	sf::Vector2f parent_pos(0, 0);
	return processEvent(event, parent_pos);
}

//void Frame::bind(int key, const FuncType& callback)
//{
//	ActionTarget::bind(key, callback);
//}

//void Frame::unbind(int key)
//{
//	ActionTarget::unbind(key);
//}

void Frame::draw()
{
	m_window.draw(*this);
}

sf::Vector2f Frame::getSize() const
{
	sf::Vector2u size = m_window.getSize();
	return sf::Vector2f(size.x, size.y);
}

bool Frame::processEvent(const sf::Event & event, const sf::Vector2f & parent_pos)
{
	/*bool res = ActionTarget::processEvent(event);
	if (!res)
		res = Container::processEvent(event, parent_pos);
	return res;*/
	return false;
}

void Frame::processEvents(const sf::Vector2f & parent_pos)
{
	//ActionTarget::processEvents();
	Container::processEvents(parent_pos);
	sf::Event event;
	while (m_window.pollEvent(event))
		Container::processEvent(event, parent_pos);
}
