/****   Swarm.cpp   (Swarm class source file)   ****/

#include "Swarm.h"

namespace pfexp {

Swarm::Swarm(): last_time(0) {
	m_pParticles = new Particle[NPARTICLES];
}


Swarm::~Swarm() {
	delete [] m_pParticles;
}


void Swarm::update(int elapsed) {
	int interval = elapsed - last_time;

	for(int i = 0; i < Swarm::NPARTICLES; i++) {
		m_pParticles[i].update(interval);
	}

	last_time = elapsed;
}


} /* namespace pfexp */
