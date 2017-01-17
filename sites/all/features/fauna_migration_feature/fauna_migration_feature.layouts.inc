<?php
/**
 * @file
 * fauna_migration_feature.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function fauna_migration_feature_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'landing';
  $layout->admin_title = 'landing';
  $layout->admin_description = 'layout for landing page';
  $layout->category = '';
  $layout->plugin = 'flexible';
  $layout->settings = array(
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
          0 => 2,
          1 => 1,
          2 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'row2',
          1 => 'center',
          2 => 'row3_3',
          3 => 'row3_4',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'row3-2',
        'width' => '24.974292383700146',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'row3',
        ),
        'parent' => 'main',
        'class' => 'up',
      ),
      'row2' => array(
        'type' => 'region',
        'title' => 'row3-1',
        'width' => '25.005506606894375',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'row3' => array(
        'type' => 'region',
        'title' => 'row2-center',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'row1_center',
        ),
        'parent' => 'main',
        'class' => 'row1',
      ),
      'row1_center' => array(
        'type' => 'region',
        'title' => 'row1-center',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      'row3_3' => array(
        'type' => 'region',
        'title' => 'row3-3',
        'width' => '25.02092103866877',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'row3_4' => array(
        'type' => 'region',
        'title' => 'row3-4',
        'width' => '24.999279970736712',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $export['landing'] = $layout;

  return $export;
}
