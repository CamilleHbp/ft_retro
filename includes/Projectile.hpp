/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Projectile.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 11:44:43 by chaydont          #+#    #+#             */
/*   Updated: 2019/05/25 19:48:31 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROJECTILE_HPP
#define PROJECTILE_HPP

#include "IGameEntity.hpp"
#include "Point.hpp"
#include <iostream>

class Projectile : public IGameEntity {
    private:
    Point direction;
        static const BluePrint blueprint;
        bool    has_moved;
        Point shoot;
        Projectile();

    public:
        Projectile(Point);
        ~Projectile();
        Projectile(Projectile const &);
        Projectile &operator=(Projectile const &);

        Point get_move();
        Point get_shoot();
        void set_shoot(Point);

        BluePrint const &get_blueprint() const;

        IGameEntity*  collide(IGameEntity*);
        IGameEntity*  get_collided(Obstacle*);
        IGameEntity*  get_collided(Projectile*);
        IGameEntity*  get_collided(Enemy*);
        IGameEntity*  get_collided(Player*);
        void  end_turn();
};


#endif /* PROJECTILE_HPP */
