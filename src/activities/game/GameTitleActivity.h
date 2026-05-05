#pragma once

#include "../Activity.h"

class GameTitleActivity final : public Activity {
 public:
  explicit GameTitleActivity(GfxRenderer& renderer, MappedInputManager& mappedInput)
      : Activity("GameTitle", renderer, mappedInput) {}
  void onEnter() override;
  void loop() override;
  void render(RenderLock&&) override;
};
