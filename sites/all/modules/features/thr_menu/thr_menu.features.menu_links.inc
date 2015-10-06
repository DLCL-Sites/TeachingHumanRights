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

  // Exported menu link: main-menu_about-us:node/659
  $menu_links['main-menu_about-us:node/659'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/659',
    'router_path' => 'node/%',
    'link_title' => 'About Us',
    'options' => array(
      'identifier' => 'main-menu_about-us:node/659',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: main-menu_blog-posts:blog
  $menu_links['main-menu_blog-posts:blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog Posts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_blog-posts:blog',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources:<front>',
  );
  // Exported menu link: main-menu_blog:blog
  $menu_links['main-menu_blog:blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(
      'identifier' => 'main-menu_blog:blog',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources:<front>',
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
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );
  // Exported menu link: main-menu_for-teachers:node/658
  $menu_links['main-menu_for-teachers:node/658'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/658',
    'router_path' => 'node/%',
    'link_title' => 'For Teachers',
    'options' => array(
      'identifier' => 'main-menu_for-teachers:node/658',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
  );
  // Exported menu link: main-menu_forums:forum
  $menu_links['main-menu_forums:forum'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forum',
    'router_path' => 'forum',
    'link_title' => 'Forums',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_forums:forum',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources:<front>',
  );
  // Exported menu link: main-menu_gallery:gallery
  $menu_links['main-menu_gallery:gallery'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'gallery',
    'router_path' => 'gallery',
    'link_title' => 'Gallery',
    'options' => array(
      'identifier' => 'main-menu_gallery:gallery',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
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
  // Exported menu link: main-menu_how-to-use-this-site:node/725
  $menu_links['main-menu_how-to-use-this-site:node/725'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/725',
    'router_path' => 'node/%',
    'link_title' => 'How to Use this Site',
    'options' => array(
      'identifier' => 'main-menu_how-to-use-this-site:node/725',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_contribute:node/add',
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
    'weight' => -43,
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
    'weight' => -38,
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
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources:<front>',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');
  t('Blog');
  t('Blog Posts');
  t('Contribute');
  t('For Teachers');
  t('Forums');
  t('Gallery');
  t('Home');
  t('How to Use this Site');
  t('Issues');
  t('Log In');
  t('News Feed');

  return $menu_links;
}
