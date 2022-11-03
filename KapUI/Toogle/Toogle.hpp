/*
** EPITECH PROJECT, 2022
** KapUi
** File description:
** Toogle
*/

#ifndef KAPUI_TOOGLE_HPP_
#define KAPUI_TOOGLE_HPP_

#include "KapEngine.hpp"
#include "KapUISettings.hpp"

#if KAPUI_BETA

    namespace KapEngine
    {

        namespace UI
        {

            class Toogle : public Component {
                public:
                    Toogle(std::shared_ptr<GameObject> go);
                    ~Toogle();

                    void onStart() override;
                    void onUpdate() override;

                    void onMouseEnter() override;
                    void onMouseExit() override;

                    void setStartToggled(bool toggled) { _startToggled = toggled; }
                    bool isToggled() const { return _toggled; }

                protected:
                private:
                    bool _overed = false;
                    bool _startToggled = false;
                    bool _toggled = false;
                    std::shared_ptr<Image> _bgImg;
                    std::shared_ptr<Image> _toggleImg;
            };

        }

    }

#endif

#endif /* !KAPUI_TOOGLE_HPP_ */
