<?php
/**
 * @file
 * fauna_migration_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fauna_migration_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_page';
  $strongarm->value = 0;
  $export['comment_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__book';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__page';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_book';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page';
  $strongarm->value = 0;
  $export['node_submitted_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_zen_dataportal_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 0,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'zen_breadcrumb' => 'yes',
    'zen_breadcrumb_separator' => ' › ',
    'zen_breadcrumb_home' => 1,
    'zen_breadcrumb_trailing' => 1,
    'zen_breadcrumb_title' => 0,
    'zen_skip_link_anchor' => 'main-menu',
    'zen_skip_link_text' => 'Jump to navigation',
    'zen_html5_respond_meta' => array(
      'respond' => 'respond',
      'html5' => 'html5',
      'meta' => 'meta',
    ),
    'zen_rebuild_registry' => 0,
    'zen_wireframes' => 0,
    'site_name_position' => 'hide',
    'header_margin_bottom' => '350px',
    'user_defined_styles' => '/*
  table tr td{  
   font-size:9px;  
   font-family:Verdana, Arial, Helvetica, sans-serif;  
  }  
#footer { border-top: 3px solid grey;  background-color: #DEDEDE; }    

Element {}
.block a:link, .block a:visited, .node a:link, .node a:visited, #backButton a:link, #backButton a:visited, #identificationKey a:link, #identificationKey a:visited {
    color: #D50000;
    text-decoration: none;
}
@media (min-width: 1053px) {
     #page {min-width: 1053px;}
}
*/
/*
  This is the original CSS for the nice menus module, edited to copy the layout 
  of the standard main menu. Items are only edited for HORIZONTAL menus. 
  Original description as follows: 
  
  This is the default layout template for nice menus, and will provide
  a starting point for the look of your menus. To customize, it\'s
  recommended to create a custom CSS file using this file as a template,
  then configure the module to use your custom CSS file
  (this is done in the global settings tab of the theme administration.)

  See README.txt and the handbook page (http://drupal.org/node/185543)
  for more information on using the CSS.
*/

/******************************
 Global CSS for ALL menu types
******************************/

#navigation .links li.first, 
#navigation .nice-menu li.first {
    border-left: 10px none;
        border-left-width: 10px;
        border-left-style: none;
        border-left-color: -moz-use-text-color;
}

#navigation .nice-menu .links li {
margin-left: -1px;
border-right: 1px solid #000;
border-left: 1px solid #000;
padding: 0px 20px;
line-height: 20px;
list-style-type: none;
list-style-image: none;
}

#navigation ul.nice-menu,
#navigation ul.nice-menu ul {
    background-color: #DEDEDE;
    display: block;
    font-size: 14.4px;
}


#navigation ul.nice-menu li {
  border-top: 0;
  background-color: #DEDEDE;
  border-style: none;
  padding-left: 20px;
}

#navigation ul.nice-menu a {
  color: #000;
  padding: 0.3em 5px 0.3em 5px;
}

#navigation ul.nice-menu a:hover, a:focus {
      text-decoration: underline;
        text-decoration-color: -moz-use-text-color;
        text-decoration-line: underline;
        text-decoration-style: solid;
}

#navigation ul.nice-menu ul {
  top: 1.8em;
  left: -1px; /* LTR */
  border: 0;
  margin-right: 0; /* LTR */
}

#navigation ul.nice-menu ul li {
  width: 12.5em;
}



/******************************
 HORIZONTAL (down) menus
******************************/

#navigation ul.nice-menu-down .links li {
  border: 0;
  box-sizing: border-box;
line-height: 20px;
padding: 0px 20px;
list-style-type: none;
list-style-image: none;
border-left: 1px solid #000;
border-right: 1px solid #000;
margin-left: -1px;
}

#navigation ul.nice-menu-down li.menuparent {
    background: transparent url("&quot;../images/arrow-down.png") no-repeat scroll right center;
}

#navigation ul.nice-menu-down li li {
  border-top: 0;
}

#navigation ul.nice-menu-down ul {
  left: 0; /* LTR */
}

#navigation ul.nice-menu-down ul li {
  clear: both;
}

#navigation ul.nice-menu-down li ul li ul {
  left: 12.5em; /* LTR */
  top: -1px;
}

#navigation ul.nice-menu-down .menuparent a {
  padding-right: 15px; /* LTR */
}

#navigation ul.nice-menu-down li.menuparent {
  background: #eee url("../images/arrow-down.png") right center no-repeat; /* LTR */
}

#navigation ul.nice-menu-down li.menuparent:hover {
  background: #ccc url("../images/arrow-down.png") right center no-repeat; /* LTR */
}

#navigation ul.nice-menu-down li li.menuparent {
  background: #eee url("../images/arrow-right.png") right center no-repeat; /* LTR */
}

#navigation ul.nice-menu-down li li.menuparent:hover {
  background: #ccc url("../images/arrow-right.png") right center no-repeat; /* LTR */
}
*/
',
    'site-name_color' => '',
    'main-menu_color' => '',
    'main-menu_background-color' => '',
    'main-menu_background-color-2' => '',
    'sub-header_background-color' => '',
    'default_logo' => 0,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 0,
    'favicon_path' => 'public://favicon.png',
    'favicon_upload' => '',
    'default_banner' => 0,
    'banner_path' => 'public://faeu-960.png',
    'banner_upload' => '',
    'default_body_background' => 0,
    'body_background_path' => '',
    'body_background_upload' => '',
    'default_page_background' => 0,
    'page_background_path' => '',
    'page_background_upload' => '',
    'nice_menus_custom_css' => '',
    'favicon_mimetype' => 'image/png',
  );
  $export['theme_zen_dataportal_settings'] = $strongarm;

  return $export;
}
