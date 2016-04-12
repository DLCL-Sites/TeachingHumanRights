<?php
/**
 * @file
 * thr_mailchimp.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function thr_mailchimp_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_mailchimp_signup().
 */
function thr_mailchimp_default_mailchimp_signup() {
  $items = array();
  $items['mailing_list_signup'] = entity_import('mailchimp_signup', '{
    "name" : "mailing_list_signup",
    "mc_lists" : { "d05aa5959e" : "d05aa5959e" },
    "mode" : "1",
    "title" : "Mailing List Signup",
    "settings" : {
      "path" : "",
      "submit_button" : "Sign Up",
      "confirmation_message" : "You have been successfully subscribed.",
      "destination" : "",
      "mergefields" : {
        "EMAIL" : {
          "name" : "Email Address",
          "req" : true,
          "field_type" : "email",
          "public" : true,
          "show" : true,
          "order" : "1",
          "default" : null,
          "helptext" : null,
          "size" : "25",
          "tag" : "EMAIL",
          "id" : 0
        },
        "FNAME" : {
          "name" : "First Name",
          "req" : false,
          "field_type" : "text",
          "public" : true,
          "show" : true,
          "order" : "2",
          "default" : "",
          "helptext" : "",
          "size" : "25",
          "tag" : "FNAME",
          "id" : 1
        },
        "LNAME" : {
          "name" : "Last Name",
          "req" : false,
          "field_type" : "text",
          "public" : true,
          "show" : true,
          "order" : "3",
          "default" : "",
          "helptext" : "",
          "size" : "25",
          "tag" : "LNAME",
          "id" : 2
        }
      },
      "description" : "Sign up to receive updates from the Teaching Human Rights mailing list.",
      "doublein" : 1,
      "send_welcome" : 1,
      "include_interest_groups" : 0
    },
    "rdf_mapping" : []
  }');
  return $items;
}
