#include "amm3-pad-bank-page.h"

struct _Amm3PadBankPage
{
  ScNavigationPage parent_instance;
};

G_DEFINE_FINAL_TYPE (Amm3PadBankPage, amm3_pad_bank_page, SC_TYPE_NAVIGATION_PAGE)

static void
amm3_pad_bank_page_class_init (Amm3PadBankPageClass *klass)
{
  GtkWidgetClass *widget_class = GTK_WIDGET_CLASS (klass);

  gtk_widget_class_set_template_from_resource (widget_class, "/hu/irl/sysex-controls/mpkmini3/amm3-pad-bank-page.ui");
}

static void
amm3_pad_bank_page_init (Amm3PadBankPage *self)
{
  gtk_widget_init_template (GTK_WIDGET (self));
}
