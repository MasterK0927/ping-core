/* Copyright (c) 2023 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at https://mozilla.org/MPL/2.0/. */

#ifndef BRAVE_BROWSER_UI_VIEWS_BUBBLE_BRAVE_WEBUI_BUBBLE_MANAGER_H_
#define BRAVE_BROWSER_UI_VIEWS_BUBBLE_BRAVE_WEBUI_BUBBLE_MANAGER_H_

#include "chrome/browser/ui/views/bubble/webui_bubble_manager.h"

// A subclass of WebUIBubbleManagerT that allows customization of the bubble
// border radius and other aspects of the rendered bubble view. Use exactly like
// WebUIBubbleManagerT, or subclass if a different customization behavior is
// required.
template <typename T>
class BraveWebUIBubbleManager : public WebUIBubbleManagerT<T> {
 public:
  using WebUIBubbleManagerT<T>::WebUIBubbleManagerT;

  ~BraveWebUIBubbleManager() override = default;

 protected:
  // Allows customization of the rendered bubble dialog view.
  virtual void CustomizeBubbleDialogView(WebUIBubbleDialogView& bubble_view) {}

 private:
  void BraveCustomizeBubbleDialogView(
      WebUIBubbleDialogView& bubble_view) override {
    bubble_view.SetPaintClientToLayer(true);
    bubble_view.set_use_round_corners(true);
    bubble_view.set_corner_radius(16);
    CustomizeBubbleDialogView(bubble_view);
  }
};

#endif  // BRAVE_BROWSER_UI_VIEWS_BUBBLE_BRAVE_WEBUI_BUBBLE_MANAGER_H_
