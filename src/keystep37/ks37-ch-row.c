#include "ks37-ch-row.h"

struct _Ks37ChRow
{
  ScComboRow parent_instance;
};

G_DEFINE_FINAL_TYPE (Ks37ChRow, ks37_ch_row, SC_TYPE_COMBO_ROW)

static void
ks37_ch_row_class_init (Ks37ChRowClass *klass)
{
  GtkWidgetClass *widget_class = GTK_WIDGET_CLASS (klass);

  gtk_widget_class_set_template_from_resource (widget_class, "/hu/irl/sysex-controls/keystep37/ks37-ch-row.ui");
}

static void
ks37_ch_row_init (Ks37ChRow *self)
{
  gtk_widget_init_template (GTK_WIDGET (self));
}
