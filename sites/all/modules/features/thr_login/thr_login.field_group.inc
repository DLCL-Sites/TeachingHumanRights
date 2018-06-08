<?php
/**
 * @file
 * thr_login.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function thr_login_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_about_you|user|user|form';
  $field_group->group_name = 'group_about_you';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'About',
    'weight' => '4',
    'children' => array(
      0 => 'field_university_affiliation',
      1 => 'field_links',
      2 => 'field_country_of_origin',
      3 => 'picture',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-about-you field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_about_you|user|user|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('About');

  return $field_groups;
}
