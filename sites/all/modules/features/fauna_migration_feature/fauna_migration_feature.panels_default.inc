<?php
/**
 * @file
 * fauna_migration_feature.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function fauna_migration_feature_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer';
  $mini->category = 'static';
  $mini->admin_title = 'footer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'ft2',
          2 => 'ft3',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '33.29754235266046',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'ft2' => array(
        'type' => 'region',
        'title' => 'ft2',
        'width' => 33.351228823669771,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'ft3' => array(
        'type' => 'region',
        'title' => 'ft3',
        'width' => 33.351228823669771,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'ft2' => NULL,
      'ft3' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '192675a7-034a-41a3-8601-a06d0229ff45';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'footer';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a8e57595-c139-4686-adb6-2cd7763acbf0';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'block-5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Fauna Europaea Secretariat ',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a8e57595-c139-4686-adb6-2cd7763acbf0';
  $display->content['new-a8e57595-c139-4686-adb6-2cd7763acbf0'] = $pane;
  $display->panels['center'][0] = 'new-a8e57595-c139-4686-adb6-2cd7763acbf0';
  $pane = new stdClass();
  $pane->pid = 'new-8b83b2e0-60c9-450d-9d93-79b2afe2d322';
  $pane->panel = 'ft2';
  $pane->type = 'block';
  $pane->subtype = 'faeu-funded_by_eu_bon';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8b83b2e0-60c9-450d-9d93-79b2afe2d322';
  $display->content['new-8b83b2e0-60c9-450d-9d93-79b2afe2d322'] = $pane;
  $display->panels['ft2'][0] = 'new-8b83b2e0-60c9-450d-9d93-79b2afe2d322';
  $pane = new stdClass();
  $pane->pid = 'new-bc8107d4-e357-417a-a91e-26f15eb292f6';
  $pane->panel = 'ft2';
  $pane->type = 'block';
  $pane->subtype = 'cdm_dataportal-fundedByEDIT';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'bc8107d4-e357-417a-a91e-26f15eb292f6';
  $display->content['new-bc8107d4-e357-417a-a91e-26f15eb292f6'] = $pane;
  $display->panels['ft2'][1] = 'new-bc8107d4-e357-417a-a91e-26f15eb292f6';
  $pane = new stdClass();
  $pane->pid = 'new-c2a16357-eb11-43de-b81d-75a3b01120d1';
  $pane->panel = 'ft3';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c2a16357-eb11-43de-b81d-75a3b01120d1';
  $display->content['new-c2a16357-eb11-43de-b81d-75a3b01120d1'] = $pane;
  $display->panels['ft3'][0] = 'new-c2a16357-eb11-43de-b81d-75a3b01120d1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a8e57595-c139-4686-adb6-2cd7763acbf0';
  $mini->display = $display;
  $export['footer'] = $mini;

  return $export;
}
