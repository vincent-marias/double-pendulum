/* CSCI 261 Final Project - Double Pendulum
 *
 * Author: Vincent Marias
 *
 *  "Simulation" of a simple double pendulum (NOT a Harmonograph / Blackburn
 *  pendulum) written in C++ using the SFML multimedia library.
 */

#ifndef DOUBLE_PENDULUM_PENDULUMS_H
#define DOUBLE_PENDULUM_PENDULUMS_H

#include "Pendulum.h"

class Pendulums {
public:
    // Constructors

    Pendulums();
    Pendulums( Pendulum& pend1, Pendulum& pend2 );

    // Getters + Setters

    Pendulum getpend1() const;
    Pendulum getpend2() const;

    // Helper functions

    void updateValues();

private:
    static const double G;
    Pendulum _pend1;
    Pendulum _pend2;
};

#endif //DOUBLE_PENDULUM_PENDULUMS_H