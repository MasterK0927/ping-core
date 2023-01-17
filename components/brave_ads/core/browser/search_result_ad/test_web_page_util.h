/* Copyright (c) 2023 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at https://mozilla.org/MPL/2.0/. */

#ifndef BRAVE_COMPONENTS_BRAVE_ADS_CORE_BROWSER_SEARCH_RESULT_AD_TEST_WEB_PAGE_UTIL_H_
#define BRAVE_COMPONENTS_BRAVE_ADS_CORE_BROWSER_SEARCH_RESULT_AD_TEST_WEB_PAGE_UTIL_H_

#include "third_party/blink/public/mojom/document_metadata/document_metadata.mojom-forward.h"

namespace brave_ads {

constexpr char kTestWebPageCreativeInstanceId[] = "creative_instance_id";
constexpr char kTestWebPageTargetUrl[] = "https://brave.com";

blink::mojom::WebPagePtr CreateTestWebPage(int attribute_index_to_skip = -1);

}  // namespace brave_ads

#endif  // BRAVE_COMPONENTS_BRAVE_ADS_CORE_BROWSER_SEARCH_RESULT_AD_TEST_WEB_PAGE_UTIL_H_
