<?php
/**
 * @file
 * thr_join_us.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function thr_join_us_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'join_us';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'sidebar_second',
          'weight' => '-33',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['join_us'] = $context;

  return $export;
}
