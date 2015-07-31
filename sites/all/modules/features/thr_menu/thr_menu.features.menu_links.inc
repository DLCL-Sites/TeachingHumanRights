<?php
/**
 * @file
 * thr_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function thr_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about-us:node/13
  $menu_links['main-menu_about-us:node/13'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/13',
    'router_path' => 'node/%',
    'link_title' => 'About Us',
    'options' => array(
      'identifier' => 'main-menu_about-us:node/13',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_contribute:node/add
  $menu_links['main-menu_contribute:node/add'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Contribute',
    'options' => array(
      'attributes' => array(
        'title' => 'Add content to THR',
      ),
      'identifier' => 'main-menu_contribute:node/add',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_for-teachers:for-teachers
  $menu_links['main-menu_for-teachers:for-teachers'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'for-teachers',
    'router_path' => 'for-teachers',
    'link_title' => 'For Teachers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_for-teachers:for-teachers',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_issues:issues
  $menu_links['main-menu_issues:issues'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'issues',
    'router_path' => 'issues',
    'link_title' => 'Issues',
    'options' => array(
      'identifier' => 'main-menu_issues:issues',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: main-menu_log-in:user/login
  $menu_links['main-menu_log-in:user/login'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Log In',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_log-in:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_news-feed:news-feed
  $menu_links['main-menu_news-feed:news-feed'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news-feed',
    'router_path' => 'news-feed',
    'link_title' => 'News Feed',
    'options' => array(
      'identifier' => 'main-menu_news-feed:news-feed',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');
  t('Contribute');
  t('For Teachers');
  t('Home');
  t('Issues');
  t('Log In');
  t('News Feed');


  return $menu_links;
}
