<?php
/**
 * @file
 * thr_mailchimp.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function thr_mailchimp_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_subscribe_to_mailing_list'.
  $field_instances['user-user-field_subscribe_to_mailing_list'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'subscribe' => 0,
        'is_default' => TRUE,
      ),
    ),
    'deleted' => 0,
    'description' => 'Would you like to subscribe to our mailing list?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mailchimp_lists',
        'settings' => array(
          'interest_groups' => array(),
          'show_interest_groups' => FALSE,
        ),
        'type' => 'mailchimp_lists_subscribe_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_subscribe_to_mailing_list',
    'label' => 'Subscribe to Mailing List',
    'required' => 0,
    'settings' => array(
      'interest_groups_title' => 'Interest Groups',
      'mergefields' => array(
        'EMAIL' => '[user:mail]',
        'FNAME' => '[user:field-display-name]',
        'LNAME' => '',
        'advanced' => 0,
      ),
      'options' => array(
        'interest_groups' => array(),
        'subscribe' => FALSE,
      ),
      'show_interest_groups' => 0,
      'unsubscribe_on_delete' => 1,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'mailchimp_lists',
      'settings' => array(),
      'type' => 'mailchimp_lists_select',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Subscribe to Mailing List');
  t('Would you like to subscribe to our mailing list?');

  return $field_instances;
}
