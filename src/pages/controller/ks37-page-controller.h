#pragma once

#include <adwaita.h>

#include "ks37-preferences-page.h"

G_BEGIN_DECLS

#define KS37_TYPE_PAGE_CONTROLLER (ks37_page_controller_get_type())

G_DECLARE_FINAL_TYPE (Ks37PageController, ks37_page_controller, KS37, PAGE_CONTROLLER, Ks37PreferencesPage)

G_END_DECLS


