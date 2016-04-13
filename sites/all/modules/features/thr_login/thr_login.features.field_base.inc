<?php
/**
 * @file
 * thr_login.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function thr_login_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_country_of_origin'.
  $field_bases['field_country_of_origin'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_country_of_origin',
    'indexes' => array(
      'iso2' => array(
        0 => 'iso2',
      ),
    ),
    'locked' => 0,
    'module' => 'countries',
    'settings' => array(
      'continents' => array(
        'AF' => 'AF',
        'AN' => 'AN',
        'AS' => 'AS',
        'EU' => 'EU',
        'NA' => 'NA',
        'OC' => 'OC',
        'SA' => 'SA',
        'UN' => 'UN',
      ),
      'countries' => array(),
      'enabled' => 1,
      'size' => 5,
    ),
    'translatable' => 0,
    'type' => 'country',
  );

  // Exported field_base: 'field_display_name'.
  $field_bases['field_display_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_display_name',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
