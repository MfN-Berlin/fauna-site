<?php
/**
 * @file
 * fauna_migration_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function fauna_migration_feature_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'start_3';
  $page->task = 'page';
  $page->admin_title = 'start-3';
  $page->admin_description = '';
  $page->path = 'start-3';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_start_3_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'start_3';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
          2 => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(),
        'parent' => 'main',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'row11',
          1 => 'row12',
          2 => 'row13',
        ),
        'parent' => 'main',
        'class' => 'row2',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(),
        'parent' => 'main',
        'class' => 'column1',
      ),
      'row11' => array(
        'type' => 'region',
        'title' => 'row11',
        'width' => '37.40250461857501',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'row12' => array(
        'type' => 'region',
        'title' => 'row12',
        'width' => '25.010590904532016',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'row13' => array(
        'type' => 'region',
        'title' => 'row13',
        'width' => '12.671686484232552',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'row2' => NULL,
      'center1' => NULL,
      'row11' => NULL,
      'row12' => NULL,
      'row13' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd2c8c459-8f94-4de4-9786-006cbc2945da';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_start_3_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-eabf636b-4056-40f2-8fe0-7e3aa3047d3e';
  $pane->panel = 'row11';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-about-fauna-europaea';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'eabf636b-4056-40f2-8fe0-7e3aa3047d3e';
  $display->content['new-eabf636b-4056-40f2-8fe0-7e3aa3047d3e'] = $pane;
  $display->panels['row11'][0] = 'new-eabf636b-4056-40f2-8fe0-7e3aa3047d3e';
  $pane = new stdClass();
  $pane->pid = 'new-4e37449b-78fa-488d-b700-e2aedf8f3c38';
  $pane->panel = 'row12';
  $pane->type = 'block';
  $pane->subtype = 'cdm_taxontree-cdm_tree';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array(
    'method' => 'simple',
    'settings' => array(
      'lifetime' => '15',
      'granularity' => 'none',
    ),
  );
  $pane->style = array(
    'settings' => NULL,
    'style' => 'block',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array(
    'type' => 'none',
    'regions' => array(
      'row11' => 'row11',
    ),
  );
  $pane->uuid = '4e37449b-78fa-488d-b700-e2aedf8f3c38';
  $display->content['new-4e37449b-78fa-488d-b700-e2aedf8f3c38'] = $pane;
  $display->panels['row12'][0] = 'new-4e37449b-78fa-488d-b700-e2aedf8f3c38';
  $pane = new stdClass();
  $pane->pid = 'new-f738ac77-30a3-4c3d-9fb9-457ab26263d1';
  $pane->panel = 'row12';
  $pane->type = 'block';
  $pane->subtype = 'block-7';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Statistics',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f738ac77-30a3-4c3d-9fb9-457ab26263d1';
  $display->content['new-f738ac77-30a3-4c3d-9fb9-457ab26263d1'] = $pane;
  $display->panels['row12'][1] = 'new-f738ac77-30a3-4c3d-9fb9-457ab26263d1';
  $pane = new stdClass();
  $pane->pid = 'new-2f00aef1-7233-4063-b943-3fc3bab19585';
  $pane->panel = 'row13';
  $pane->type = 'block';
  $pane->subtype = 'block-6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Social Media',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2f00aef1-7233-4063-b943-3fc3bab19585';
  $display->content['new-2f00aef1-7233-4063-b943-3fc3bab19585'] = $pane;
  $display->panels['row13'][0] = 'new-2f00aef1-7233-4063-b943-3fc3bab19585';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['start_3'] = $page;

  return $pages;

}
