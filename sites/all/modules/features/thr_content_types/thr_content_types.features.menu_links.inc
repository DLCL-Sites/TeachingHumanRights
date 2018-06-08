<?php
/**
 * @file
 * thr_content_types.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function thr_content_types_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_gallery:gallery.
  $menu_links['main-menu_gallery:gallery'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'gallery',
    'router_path' => 'gallery',
    'link_title' => 'Gallery',
    'options' => array(
      'identifier' => 'main-menu_gallery:gallery',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Gallery');

  return $menu_links;
}
