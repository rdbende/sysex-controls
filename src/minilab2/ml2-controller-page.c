#include "ml2-controller-page.h"

struct _Ml2ControllerPage
{
  ScNavigationPage parent_instance;
};

G_DEFINE_FINAL_TYPE (Ml2ControllerPage, ml2_controller_page, SC_TYPE_NAVIGATION_PAGE)

static void
ml2_controller_page_class_init (Ml2ControllerPageClass *klass)
{
  GtkWidgetClass *widget_class = GTK_WIDGET_CLASS (klass);

  gtk_widget_class_set_template_from_resource (widget_class, "/hu/irl/sysex-controls/minilab2/ml2-controller-page.ui");
}

static void
ml2_controller_page_init (Ml2ControllerPage *self)
{
  gtk_widget_init_template (GTK_WIDGET (self));
}
