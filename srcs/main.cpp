/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 22:57:40 by cbaillat          #+#    #+#             */
/*   Updated: 2019/05/25 01:39:52 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.hpp"
#include <cstdlib> // exit codes
#include <iostream>

#include "IGameEntity.hpp"
#include "Point.hpp"
#include "Grid.hpp"

#include <unistd.h>

int main(void) {
    Grid world;

    Game game;
    game.run();
    return EXIT_SUCCESS;
}
