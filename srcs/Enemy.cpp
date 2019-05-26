/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 09:59:28 by chaydont          #+#    #+#             */
/*   Updated: 2019/05/26 09:21:52 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy() : direction(1, 0) { init(); }

Enemy::~Enemy() {}

Enemy::Enemy(Point c_direction) : direction(c_direction) { init(); }

Enemy::Enemy(Enemy const &a) { *this = a; }

Enemy &Enemy::operator=(Enemy const &a) {
    direction = a.direction;
    return *this;
}

// methods

void Enemy::end_turn() { has_moved = false; }

// getters

BluePrint const &Enemy::get_blueprint() const { return blueprint; }

Point Enemy::get_direction() const { return direction; }

Point Enemy::get_move() const {
    if (has_moved) {
        return Point(0, 0);
    } else {
        has_moved = true;
        return direction;
    }
}

EntityType Enemy::get_type() const { return type; }

// setters

void Enemy::set_direction(Point dir) { direction = dir; }

// collision

IGameEntity *Enemy::collide(IGameEntity *e) { return e->get_collided(this); }

IGameEntity *Enemy::get_collided(Enemy *e) {
    delete this;
    delete e;
    return NULL;
}

IGameEntity *Enemy::get_collided(Obstacle *e) {
    delete this;
    return (IGameEntity *)e;
}

IGameEntity *Enemy::get_collided(Projectile *e) {
    delete this;
    delete e;
    return NULL;
}

IGameEntity *Enemy::get_collided(Player *e) {
    delete e;
    return NULL;
}

IGameEntity *Enemy::get_collided(Road *e) {
    delete this;
    return (IGameEntity *)e;
}

/* PRIVATE */

void Enemy::init() { has_moved = false; }

// static

BluePrint const Enemy::blueprint = BluePrint(new std::string("|o|"), 1);
EntityType const Enemy::type = enemy;

