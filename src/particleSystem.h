#ifndef __cardsProject__particleSystem__
#define __cardsProject__particleSystem__

#include "ofMain.h"
#include "particle.h"

#define NUM_PARTICLES 50
#define DIST_THRESHOLD 50
#define BRUSH_SIZE 30

class ParticleSystem {
public:
    ParticleSystem();
    void update();
    void draw();
    void reset();
    
    ofImage m_brushImage;
    vector<Particle> m_particles;
};

#endif