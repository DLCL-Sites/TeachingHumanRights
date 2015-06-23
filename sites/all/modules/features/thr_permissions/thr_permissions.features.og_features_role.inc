<?php
/**
 * @file
 * thr_permissions.features.og_features_role.inc
 */

/**
 * Implements hook_og_features_default_roles().
 */
function thr_permissions_og_features_default_roles() {
  $roles = array();

  // Exported OG Role: 'node:course:instructor'.
  $roles['node:course:instructor'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'course',
    'name' => 'instructor',
  );

  return $roles;
}
