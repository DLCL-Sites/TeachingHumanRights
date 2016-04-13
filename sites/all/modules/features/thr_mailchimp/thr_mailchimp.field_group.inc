<?php
/**
 * @file
 * thr_mailchimp.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function thr_mailchimp_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_account|user|user|form';
  $field_group->group_name = 'group_account';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Account',
    'weight' => '0',
    'children' => array(
      0 => 'field_display_name',
      1 => 'field_subscribe_to_mailing_list',
      2 => 'account',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-account field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_account|user|user|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Account');

  return $field_groups;
}
