/****  Swarm.h   (Swarm class header file)   ****/

#ifndef SWARM_H_
#define SWARM_H_

#include "Particle.h"

namespace pfexp {

class Swarm {
public:
	const static int NPARTICLES = 5000;

private:
	int last_time;
	Particle *m_pParticles;

public:
	Swarm();
	virtual ~Swarm();
	void update(int elapsed);
	const Particle * const getParticles() { return m_pParticles; };
};

} /* namespace pfexp */

#endif /* SWARM_H_ */
