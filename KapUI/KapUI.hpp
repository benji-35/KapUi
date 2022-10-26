/*
** EPITECH PROJECT, 2022
** KapUi
** File description:
** KapUI
*/

#ifndef KAPUI_HPP_
#define KAPUI_HPP_

#define KAPUI_VERSION_MAJOR 0
#define KAPUI_VERSION_MINOR 101
#define KAPUI_VERSION "0.101"

#define IS_KAPUI_VERSION(x, y) (KAPUI_VERSION_MAJOR != x)? false : (KAPUI_VERSION_MINOR != y)? false : true
#define IS_MAX_KAPUI_VERSION(x, y) (KAPUI_VERSION_MAJOR < x)? true : (KAPUI_VERSION_MAJOR > x)? false : (KAPUI_VERSION_MINOR <= y)? true : false
#define IS_MIN_KAPUI_VERSION(x, y) (KAPUI_VERSION_MAJOR < x)? false : (KAPUI_VERSION_MAJOR > x)? true : (KAPUI_VERSION_MINOR < y)? false : true


namespace KapEngine {
    class Component;
    namespace UI {
        class Button;
        class InputField;
    }
}

#ifndef KAPUI_BUTTON_HPP_
    #include "Button/Button.hpp"
#endif

#ifndef KAPUI_INPUTFIELD_HPP_
    #include "InputField/Inputfield.hpp"
#endif

#ifndef KAPUI_FACTORY_HPP_
    #include "Factory/Factory.hpp"
#endif

#endif /* !KAPUI_HPP_ */
