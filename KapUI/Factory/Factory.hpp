/*
** EPITECH PROJECT, 2022
** KapUi
** File description:
** Factory
*/

#ifndef FACTORY_HPP_
#define FACTORY_HPP_

#include "KapUI.hpp"

namespace KapEngine {

    namespace UI {

        class KapUiFactory {
            public:
                static std::shared_ptr<Button> createButton(std::shared_ptr<GameObject> go, std::string text) {
                    auto result = std::make_shared<Button>(go, text);
                    go->addComponent(result);

                    return result;
                }

                static std::shared_ptr<Button> createButton(GameObject &go, std::string text) {
                    auto gGo = go.getScene().getGameObject(go.getId());
                    auto result = std::make_shared<Button>(gGo, text);
                    gGo->addComponent(result);

                    return result;
                }
        };

    }

}

#endif /* !FACTORY_HPP_ */
