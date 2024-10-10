#pragma once

#include <adwaita.h>

#include "sc-navigation-page.h"

G_BEGIN_DECLS

#define KS37_TYPE_TRANSPORT_PAGE (ks37_transport_page_get_type ())

G_DECLARE_FINAL_TYPE (Ks37TransportPage, ks37_transport_page, KS37, TRANSPORT_PAGE, ScNavigationPage)

G_END_DECLS
