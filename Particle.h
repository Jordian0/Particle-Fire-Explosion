/****  Particle.h   (Particle class header file)   ****/

#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace pfexp {

struct Particle {
	// Struct members are public by default
	double m_x;
	double m_y;

private:
	double m_speed;
	double m_direction;

private:
	void init();

public:
	Particle();
	virtual ~Particle();
	void update(int interval);
};

} /* namespace pfexp */

#endif /* PARTICLE_H_ */
