/*
** EPITECH PROJECT, 2022
** RType2
** File description:
** Button
*/

#ifndef KAPUI_BUTTON_HPP_
#define KAPUI_BUTTON_HPP_

#include "KapEngine.hpp"
#include "KapEngineEvents.hpp"

namespace KapEngine
{

    namespace UI
    {

        class Button : public Component
        {
          public:
            Button(std::shared_ptr<GameObject> go, std::string const &textContent = "Text");
            ~Button();

            void onMouseEnter() override;
            void onMouseStay() override;
            void onMouseExit() override;

            //text setters
            void setText(std::string const &text);
            void setTextPosition(Tools::Vector2 const &pos);
            void setTextColor(Tools::Color const &color);
            
			//button setters
			void setNormalColor(Tools::Color const &color) {
				_defaultColor = color;
			}

			void setHoverColor(Tools::Color const &color) {
				_hoverColor = color;
			}

			void setClickColor(Tools::Color const &color) {
				_clickedColor = color;
			}

			//button getters
			Tools::Color getNormalColor() const {
				return _defaultColor;
			}

			Tools::Color getHoverColor() const {
				return _hoverColor;
			}

			Tools::Color getClickColor() const {
				return _clickedColor;
			}

			//background setter
			void setBackground(std::string const &path, Tools::Rectangle const &rect);

            Events::EventAction &getOnClick() { return _onClick; }

            Events::EventAction &getOnHover() { return _onHover; }

            Events::EventAction &getOnUnhover() { return _onUnhover; }

          protected:
          private:
            void __init(std::shared_ptr<GameObject> go);
            void __updateImageColor();

            Tools::Color _currentColor = Tools::Color::white();
            Tools::Color _defaultColor = Tools::Color::white();
            Tools::Color _hoverColor = Tools::Color::pink();
            Tools::Color _clickedColor = Tools::Color::red();

            Events::EventAction _onClick;
            Events::EventAction _onHover;
            Events::EventAction _onUnhover;
        };

    } // namespace UI

} // namespace KapEngine

#endif /* !BUTTON_HPP_ */
