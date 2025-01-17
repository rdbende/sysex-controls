#include "ar3-ch-row.h"

struct _Ar3ChRow
{
  ScComboRow parent_instance;
};

G_DEFINE_FINAL_TYPE (Ar3ChRow, ar3_ch_row, SC_TYPE_COMBO_ROW)

static void
ar3_ch_row_class_init (Ar3ChRowClass *klass)
{
  GtkWidgetClass *widget_class = GTK_WIDGET_CLASS (klass);

  gtk_widget_class_set_template_from_resource (widget_class, "/hu/irl/sysex-controls/ar3-ch-row.ui");
}

static void
ar3_ch_row_init (Ar3ChRow *self)
{
  gtk_widget_init_template (GTK_WIDGET (self));
}
