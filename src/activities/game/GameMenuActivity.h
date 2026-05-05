#pragma once

#include "../Activity.h"
#include "util/ButtonNavigator.h"

class GameMenuActivity final : public Activity {
 public:
  enum class Action { Resume = 0, SaveQuit = 1, Abandon = 2 };

 private:
  enum class Screen { Menu, Inventory, Character };

  Screen currentScreen = Screen::Menu;
  int selectedIndex = 0;
  ButtonNavigator buttonNavigator;

  void renderMenu();
  void renderInventory();
  void renderCharacter();
  void useInventoryItem(int index);

 public:
  explicit GameMenuActivity(GfxRenderer& renderer, MappedInputManager& mappedInput)
      : Activity("GameMenu", renderer, mappedInput) {}

  void onEnter() override;
  void loop() override;
  void render(RenderLock&&) override;
};
