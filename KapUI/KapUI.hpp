/*
** EPITECH PROJECT, 2022
** KapUi
** File description:
** KapUI
*/

#ifndef KAPUI_HPP_
#define KAPUI_HPP_

#define KAPUI_VERSION_MAJOR 0
#define KAPUI_VERSION_MINOR 1
#define KAPUI_VERSION "0.1"

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

#endif /* !KAPUI_HPP_ */
