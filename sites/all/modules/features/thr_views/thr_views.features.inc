<?php
/**
 * @file
 * thr_views.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function thr_views_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function thr_views_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function thr_views_image_default_styles() {
  $styles = array();

  // Exported image style: news_feed_image.
  $styles['news_feed_image'] = array(
    'label' => 'News Feed Image',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 220,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
