#include "ks37-page-cv-gate.h"

struct _Ks37PageCvGate
{
	Ks37PreferencesPage parent_instance;
};

G_DEFINE_FINAL_TYPE (Ks37PageCvGate, ks37_page_cv_gate, KS37_TYPE_PREFERENCES_PAGE)

static void
ks37_page_cv_gate_class_init (Ks37PageCvGateClass *klass)
{
	GtkWidgetClass *widget_class = GTK_WIDGET_CLASS (klass);

	gtk_widget_class_set_template_from_resource (widget_class, "/hu/irl/keystep37-settings/pages/cv-gate/ks37-page-cv-gate.ui");
}

static void
ks37_page_cv_gate_init (Ks37PageCvGate *self)
{
	gtk_widget_init_template (GTK_WIDGET (self));
}

