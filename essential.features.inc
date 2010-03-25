<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function essential_ctools_plugin_api() {
  module_load_include('inc', 'essential', 'essential.defaults');
  $args = func_get_args();
  return call_user_func_array('_essential_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function essential_user_default_permissions() {
  module_load_include('inc', 'essential', 'essential.defaults');
  $args = func_get_args();
  return call_user_func_array('_essential_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function essential_strongarm() {
  module_load_include('inc', 'essential', 'essential.defaults');
  $args = func_get_args();
  return call_user_func_array('_essential_strongarm', $args);
}
