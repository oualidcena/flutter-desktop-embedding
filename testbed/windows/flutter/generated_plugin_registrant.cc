//
//  Generated file. Do not edit.
//

#include "generated_plugin_registrant.h"

#include <example_plugin.h>
#include <path_provider_plugin.h>
#include <url_launcher_plugin.h>
#include <window_size_plugin.h>

void RegisterPlugins(flutter::PluginRegistry* registry) {
  ExamplePluginRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("ExamplePlugin"));
  PathProviderPluginRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("PathProviderPlugin"));
  UrlLauncherPluginRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("UrlLauncherPlugin"));
  WindowSizePluginRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("WindowSizePlugin"));
}
