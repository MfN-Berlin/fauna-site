<?php
/**
 * @file
 * fauna_migration_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function fauna_migration_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'other_online_databases';
  $view->description = 'Other relevant on-line databases within the Kingdom Animalia';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Other Online Databases';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Other Online Databases';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_oodbtype',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'oodb_row';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_oodblogo' => 'field_oodblogo',
    'field_oodblink' => 'field_oodblink',
    'body' => 'body',
    'field_oodbtype' => 'field_oodbtype',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_oodblogo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oodblink' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oodbtype' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_oodblogo']['id'] = 'field_oodblogo';
  $handler->display->display_options['fields']['field_oodblogo']['table'] = 'field_data_field_oodblogo';
  $handler->display->display_options['fields']['field_oodblogo']['field'] = 'field_oodblogo';
  $handler->display->display_options['fields']['field_oodblogo']['label'] = '';
  $handler->display->display_options['fields']['field_oodblogo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oodblogo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_oodblogo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_oodblink']['id'] = 'field_oodblink';
  $handler->display->display_options['fields']['field_oodblink']['table'] = 'field_data_field_oodblink';
  $handler->display->display_options['fields']['field_oodblink']['field'] = 'field_oodblink';
  $handler->display->display_options['fields']['field_oodblink']['label'] = '';
  $handler->display->display_options['fields']['field_oodblink']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oodblink']['click_sort_column'] = 'url';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Database type */
  $handler->display->display_options['fields']['field_oodbtype']['id'] = 'field_oodbtype';
  $handler->display->display_options['fields']['field_oodbtype']['table'] = 'field_data_field_oodbtype';
  $handler->display->display_options['fields']['field_oodbtype']['field'] = 'field_oodbtype';
  $handler->display->display_options['fields']['field_oodbtype']['label'] = '';
  $handler->display->display_options['fields']['field_oodbtype']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_oodbtype']['alter']['text'] = '<h3><b>[field_oodbtype-value]</b></h3>';
  $handler->display->display_options['fields']['field_oodbtype']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<ul><li>[edit_node]</li></ul>';
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'contextual-links-wrapper';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'contextual-links-region';
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = TRUE;
  /* Sort criterion: Content: Database type (field_oodbtype) */
  $handler->display->display_options['sorts']['field_oodbtype_value']['id'] = 'field_oodbtype_value';
  $handler->display->display_options['sorts']['field_oodbtype_value']['table'] = 'field_data_field_oodbtype';
  $handler->display->display_options['sorts']['field_oodbtype_value']['field'] = 'field_oodbtype_value';
  $handler->display->display_options['sorts']['field_oodbtype_value']['expose']['label'] = 'Database type (field_oodbtype)';
  /* Contextual filter: Content: Database type (field_oodbtype) */
  $handler->display->display_options['arguments']['field_oodbtype_value']['id'] = 'field_oodbtype_value';
  $handler->display->display_options['arguments']['field_oodbtype_value']['table'] = 'field_data_field_oodbtype';
  $handler->display->display_options['arguments']['field_oodbtype_value']['field'] = 'field_oodbtype_value';
  $handler->display->display_options['arguments']['field_oodbtype_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_oodbtype_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_oodbtype_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_oodbtype_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_oodbtype_value']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'other_online_databases' => 'other_online_databases',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_oodblink']['id'] = 'field_oodblink';
  $handler->display->display_options['fields']['field_oodblink']['table'] = 'field_data_field_oodblink';
  $handler->display->display_options['fields']['field_oodblink']['field'] = 'field_oodblink';
  $handler->display->display_options['fields']['field_oodblink']['label'] = '';
  $handler->display->display_options['fields']['field_oodblink']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oodblink']['click_sort_column'] = 'url';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Database type */
  $handler->display->display_options['fields']['field_oodbtype']['id'] = 'field_oodbtype';
  $handler->display->display_options['fields']['field_oodbtype']['table'] = 'field_data_field_oodbtype';
  $handler->display->display_options['fields']['field_oodbtype']['field'] = 'field_oodbtype';
  $handler->display->display_options['fields']['field_oodbtype']['label'] = '';
  $handler->display->display_options['fields']['field_oodbtype']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_oodbtype']['alter']['text'] = '<h3><b>[field_oodbtype-value]</b></h3>';
  $handler->display->display_options['fields']['field_oodbtype']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<ul><li>[edit_node]</li></ul>';
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'contextual-links-wrapper';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'contextual-links-region';
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = TRUE;
  $handler->display->display_options['path'] = 'other-online-databases';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Other online databases';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page backup */
  $handler = $view->new_display('page', 'Page backup', 'page_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['path'] = 'other-online-databases';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Other online databases';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['other_online_databases'] = $view;

  return $export;
}
