#ifndef FLUTTER_PLUGIN_UNTITLED1_PLUGIN_H_
#define FLUTTER_PLUGIN_UNTITLED1_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace untitled1 {

class Untitled1Plugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  Untitled1Plugin();

  virtual ~Untitled1Plugin();

  // Disallow copy and assign.
  Untitled1Plugin(const Untitled1Plugin&) = delete;
  Untitled1Plugin& operator=(const Untitled1Plugin&) = delete;

  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace untitled1

#endif  // FLUTTER_PLUGIN_UNTITLED1_PLUGIN_H_
