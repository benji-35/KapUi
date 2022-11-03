/*
** EPITECH PROJECT, 2022
** KapUi
** File description:
** Factory
*/

#ifndef KAPUI_FACTORY_HPP_
#define KAPUI_FACTORY_HPP_

#include "../KapUI.hpp"

namespace KapEngine {

    namespace UI {

        class KapUiFactory {
            public:

                static std::shared_ptr<Button> createButton(std::shared_ptr<GameObject> object, std::string text,
                                                          Tools::Color color = Tools::Color::white(),
                                                          Tools::Color textColor = Tools::Color::black()) {
                    auto result = std::make_shared<Button>(object, text);
                    object->addComponent(result);

                    result->setNormalColor(color);
                    result->setTextColor(textColor);

                    return result;
                }

                static std::shared_ptr<Button> createButton(GameObject &go, std::string text,
                                                          Tools::Color color = Tools::Color::white(),
                                                          Tools::Color textColor = Tools::Color::black()) {
                    return createButton(go.getScene().getGameObject(go.getId()), text, color, textColor);
                }

                static std::shared_ptr<Button> createButton(std::shared_ptr<GameObject> object, std::string text,
                                                          std::function<void()> callback,
                                                          Tools::Color color = Tools::Color::white(),
                                                          Tools::Color textColor = Tools::Color::black()) {
                    auto result = std::make_shared<Button>(object, text);
                    object->addComponent(result);

                    result->setNormalColor(color);
                    result->setTextColor(textColor);
                    result->getOnClick().registerAction(callback);

                    return result;
                }

                static std::shared_ptr<Button> createButton(GameObject& object, std::string text,
                                                          std::function<void()> callback,
                                                          Tools::Color color = Tools::Color::white(),
                                                          Tools::Color textColor = Tools::Color::black()) {
                    return createButton(object.getScene().getGameObject(object.getId()), text, callback, color, textColor);
                }

                static std::shared_ptr<Inputfield> createInputfield(std::shared_ptr<GameObject> go, Inputfield::InputType inputTye = Inputfield::InputType::TEXT, std::string const& placeHolder = "Enter text here...") {
                    auto result = std::make_shared<Inputfield>(go);
                    go->addComponent(result);

                    result->setPlaceholderText(placeHolder);
                    result->setInputType(inputTye);

                    return result;
                }

                static std::shared_ptr<Inputfield> createInputfield(GameObject &go, Inputfield::InputType inputTye = Inputfield::InputType::TEXT, std::string const& placeHolder = "Enter text here...") {
                    return createInputfield(go.getScene().getGameObject(go.getId()));
                }
        
                #if KAPUI_BETA
    
                    static std::shared_ptr<Toggle> createToggle(GameObject &go, bool toggleValue = false) {
                        auto result = std::make_shared<Toggle>(go);
                        go->addComponent(result);

                        result->setStartToggled(toggleValue);

                        return result;
                    }

                #endif
        };

    }

}

#endif /* !KAPUI_FACTORY_HPP_ */
