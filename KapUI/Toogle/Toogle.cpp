/*
** EPITECH PROJECT, 2022
** KapUi
** File description:
** Toogle
*/

#include "Toogle.hpp"

#if KAPUI_BETA

    using namespace KapEngine;

    UI::Toogle::Toogle(std::shared_ptr<GameObject> go) : Component(go, "Toggle") {
        //create background + toggle
        _bgImg = std::make_shared<Image>(go);
        _toggleImg = std::make_shared<Image>(go);
        go->addComponent(_bgImg);
        go->addComponent(_toggleImg);

        _bgImg->setPathSprite("Packages/KapUI/KapUI/Assests/Icons/square.png");
        _bgImg->setRectangle({0, 0, 512, 512});
        _toggleImg->setPathSprite("Packages/KapUI/KapUI/Assests/Icons/check.png");
        _toggleImg->setRectangle({0, 0, 512, 512});

        if (!go->hasComponent("Mouse Detector")) {
            auto md = std::make_shared<MouseDetector>(go);
            md->detectMouseInCanvas(true);
            go->addComponent(md);
        }
    }

    UI::Toogle::~Toogle() {}

    void UI::Toogle::onUpdate() {
        if (_overed && getInput().getKeyDown(KapEngine::Input::MOUSE_LEFT)) {
            _toggled = !_toggled;
            if (_toggled) {
                _toggleImg->setActive(true);
            } else {
                _toggleImg->setActive(false);
            }
        }
    }

    void UI::Toogle::onMouseEnter() {
        _overed = true;
    }

    void UI::Toogle::onMouseExit() {
        _overed = false;
    }

    void UI::Toogle::onStart() {
        _toggled = _startToggled;
        _toggleImg->setActive(_toggled);
    }

#endif
