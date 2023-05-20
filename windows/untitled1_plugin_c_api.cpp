#include "include/untitled1/untitled1_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "untitled1_plugin.h"

void Untitled1PluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  untitled1::Untitled1Plugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
