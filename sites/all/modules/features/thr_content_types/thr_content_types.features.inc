<?php
/**
 * @file
 * thr_content_types.features.inc
 */

/**
 * Implements hook_node_info().
 */
function thr_content_types_node_info() {
  $items = array(
    'assignment' => array(
      'name' => t('Assignment'),
      'base' => 'node_content',
      'description' => t('Create an assignment for sharing with a class or the community.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'course' => array(
      'name' => t('Course'),
      'base' => 'node_content',
      'description' => t('A course collects assignments, syllabus, and other materials in a single place.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'featured_slider' => array(
      'name' => t('Featured Slider'),
      'base' => 'node_content',
      'description' => t('Images for slider'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'images' => array(
      'name' => t('Images'),
      'base' => 'node_content',
      'description' => t('Images for use in the site'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('Add a relevant news item.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'resource' => array(
      'name' => t('Resource'),
      'base' => 'node_content',
      'description' => t('A general purpose resource'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'syllabus' => array(
      'name' => t('Syllabus'),
      'base' => 'node_content',
      'description' => t('Upload a syllabus.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'thr_gallery' => array(
      'name' => t('THR Gallery'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'wiki_page' => array(
      'name' => t('Wiki page'),
      'base' => 'node_content',
      'description' => t('Create or edit a wiki page. May be part of a course and private or public.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
