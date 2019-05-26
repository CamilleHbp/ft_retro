/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MenuScreen.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 13:35:56 by cbaillat          #+#    #+#             */
/*   Updated: 2019/05/26 18:21:33 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MenuScreen.hpp"

MenuScreen::MenuScreen(unsigned int height, unsigned int width,
                       unsigned int starty, unsigned int startx)
    : Screen(height, width, starty, startx,
             Borders('|', '|', '-', '-', ACS_ULCORNER, ACS_URCORNER,
             ACS_LLCORNER, ACS_LRCORNER)) {
}

MenuScreen::~MenuScreen() {}

void MenuScreen::print_menu() {
    mvwprintw(get_win(), 5, 5, " _____ _____       _____ _____ _____ _____ _____ ");
    mvwprintw(get_win(), 6, 5, " |   __|_   _|     | __  |   __|_   _| __  |     |");
    mvwprintw(get_win(), 7, 5, " |   __| | |       |    -|   __| | | |    -|  |  |");
    mvwprintw(get_win(), 8, 5, " |__|    |_|  _____|__|__|_____| |_| |__|__|_____|");
    mvwprintw(get_win(), 9, 5, "             |_____|     ");
}

/* PRIVATE */

MenuScreen::MenuScreen() : Screen() {}