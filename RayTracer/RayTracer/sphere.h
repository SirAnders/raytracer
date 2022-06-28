#ifndef SPHERE_H
#define SPHERE_H


using Math::vec3;

class sphere
{
private:
	vec3 m_center;
	double m_radius;
	sf::Color m_color;
public:

	sphere()
	{
		m_center = { 0,0,0 };
		m_radius = 1;
		m_color = sf::Color::Red;
	}

	sphere(const vec3& center,const double radius,const sf::Color color = sf::Color::Red)
	{
		m_center = center;
		m_radius = radius;
		m_color = color;
	}

	void move(const vec3& in)
	{
		m_center = m_center + in;
	}

	void set_center(const vec3& center)
	{
		m_center = center;
	}

	vec3 center() const
	{
		return m_center;
	}

	sf::Color color() const
	{
		return m_color;
	}

	double radius()
	{
		return m_radius;
	}


};

#endif
