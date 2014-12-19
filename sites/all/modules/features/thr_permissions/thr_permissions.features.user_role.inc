<?php
/**
 * @file
 * thr_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function thr_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Content Manager.
  $roles['Content Manager'] = array(
    'name' => 'Content Manager',
    'weight' => 5,
  );

  // Exported role: Instructor.
  $roles['Instructor'] = array(
    'name' => 'Instructor',
    'weight' => 4,
  );

  // Exported role: Student.
  $roles['Student'] = array(
    'name' => 'Student',
    'weight' => 3,
  );

  return $roles;
}
