#include "../../include/dynamics/ParticleSkieur.hpp"

ParticleSkieur::ParticleSkieur(const glm::vec3 &position, const glm::vec3 &velocity,
                   const float &mass, const float &radius) 
    : Particle(position, velocity, mass, radius) {
    m_jumpCollision = false;
    m_jump = NULL;
}

ParticleSkieur::~ParticleSkieur() {
    
}

void ParticleSkieur::setJumpCollision(const bool jumpCollision) {
    m_jumpCollision = jumpCollision;
}

bool ParticleSkieur::getJumpCollision() {
    return m_jumpCollision;
}

void ParticleSkieur::setJump(const JumpRenderablePtr jump) {
    m_jump = jump;
}

JumpRenderablePtr ParticleSkieur::getJump() {
    return m_jump;
}