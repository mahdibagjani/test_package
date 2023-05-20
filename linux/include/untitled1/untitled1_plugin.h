#ifndef FLUTTER_PLUGIN_UNTITLED1_PLUGIN_H_
#define FLUTTER_PLUGIN_UNTITLED1_PLUGIN_H_

#include <flutter_linux/flutter_linux.h>

G_BEGIN_DECLS

#ifdef FLUTTER_PLUGIN_IMPL
#define FLUTTER_PLUGIN_EXPORT __attribute__((visibility("default")))
#else
#define FLUTTER_PLUGIN_EXPORT
#endif

typedef struct _Untitled1Plugin Untitled1Plugin;
typedef struct {
  GObjectClass parent_class;
} Untitled1PluginClass;

FLUTTER_PLUGIN_EXPORT GType untitled1_plugin_get_type();

FLUTTER_PLUGIN_EXPORT void untitled1_plugin_register_with_registrar(
    FlPluginRegistrar* registrar);

G_END_DECLS

#endif  // FLUTTER_PLUGIN_UNTITLED1_PLUGIN_H_
