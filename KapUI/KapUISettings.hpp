/*
** EPITECH PROJECT, 2022
** KapUi
** File description:
** KapUISettings
*/

#ifndef KAPUI_SETTINGS_HPP_
#define KAPUI_SETTINGS_HPP_

#ifdef KAPUI_BETA_OW
    #ifndef KAPUI_BETA
        #define KAPUI_BETA KAPUI_BETA_OW
    #else
        #undef KAPUI_BETA
        #define KAPUI_BETA KAPUI_BETA_OW
    #endif
#else
    #ifndef KAPUI_BETA
        #define KAPUI_BETA false
    #endif
#endif

#endif /* !KAPUI_SETTINGS_HPP_ */
