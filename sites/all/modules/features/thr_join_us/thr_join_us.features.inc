<?php
/**
 * @file
 * thr_join_us.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function thr_join_us_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
