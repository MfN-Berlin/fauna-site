<?php
/**
 * @file
 * fauna_migration_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function fauna_migration_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-faeu_address'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'faeu_address',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cyprus' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyprus',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
      'zen_dataportal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen_dataportal',
        'weight' => 0,
      ),
    ),
    'title' => 'Fauna Europaea Secretariat ',
    'visibility' => 0,
  );

  $export['block-faeu_statistics'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'faeu_statistics',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cyprus' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyprus',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
      'zen_dataportal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen_dataportal',
        'weight' => -4,
      ),
    ),
    'title' => 'Statistics',
    'visibility' => 0,
  );

  $export['cdm_api-cdm_ws_debug'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'cdm_ws_debug',
    'module' => 'cdm_api',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'administrator' => 3,
      'CDM admin' => 4,
    ),
    'themes' => array(
      'cyprus' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'cyprus',
        'weight' => -12,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'zen',
        'weight' => -12,
      ),
      'zen_dataportal' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'zen_dataportal',
        'weight' => -20,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['cdm_csv_export-cdm_csv_export'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'cdm_csv_export',
    'module' => 'cdm_csv_export',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cyprus' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyprus',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
      'zen_dataportal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen_dataportal',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['cdm_dataportal-2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 2,
    'module' => 'cdm_dataportal',
    'node_types' => array(),
    'pages' => 'cdm_dataportal/search',
    'roles' => array(),
    'themes' => array(
      'cyprus' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'cyprus',
        'weight' => -11,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'zen',
        'weight' => -11,
      ),
      'zen_dataportal' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'zen_dataportal',
        'weight' => -11,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['cdm_dataportal-4'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 4,
    'module' => 'cdm_dataportal',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cyprus' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyprus',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
      'zen_dataportal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen_dataportal',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['cdm_dataportal-classification_breadcrumbs'] = array(
    'cache' => 4,
    'custom' => 0,
    'delta' => 'classification_breadcrumbs',
    'module' => 'cdm_dataportal',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cyprus' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyprus',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
      'zen_dataportal' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'zen_dataportal',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['cdm_dataportal-fundedByEDIT'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'fundedByEDIT',
    'module' => 'cdm_dataportal',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cyprus' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyprus',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
      'zen_dataportal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen_dataportal',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['cdm_dataportal-keys'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'keys',
    'module' => 'cdm_dataportal',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cyprus' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyprus',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
      'zen_dataportal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen_dataportal',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['cdm_dataportal-taxonomic_children'] = array(
    'cache' => 4,
    'custom' => 0,
    'delta' => 'taxonomic_children',
    'module' => 'cdm_dataportal',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cyprus' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyprus',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
      'zen_dataportal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen_dataportal',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['cdm_taxontree-cdm_tree'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'cdm_tree',
    'module' => 'cdm_taxontree',
    'node_types' => array(),
    'pages' => 'history
version
quality
geo-scope
tax-scope
discl
cit
imprint
contact
focal-points
other-online-databases
<front>',
    'roles' => array(),
    'themes' => array(
      'cyprus' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'cyprus',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'zen',
        'weight' => 0,
      ),
      'zen_dataportal' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'zen_dataportal',
        'weight' => -18,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['cdm_taxontree-cdm_tree_drupal_taxonomy'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'cdm_tree_drupal_taxonomy',
    'module' => 'cdm_taxontree',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'cyprus' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyprus',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
      'zen_dataportal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen_dataportal',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['cdm_taxontree-cdm_tree_filters'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'cdm_tree_filters',
    'module' => 'cdm_taxontree',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cyprus' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyprus',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
      'zen_dataportal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen_dataportal',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['ext_links-0'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 0,
    'module' => 'ext_links',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cyprus' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyprus',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
      'zen_dataportal' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'zen_dataportal',
        'weight' => -17,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['faeu-funded_by_eu_bon'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'funded_by_eu_bon',
    'module' => 'faeu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cyprus' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyprus',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
      'zen_dataportal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen_dataportal',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['panels_mini-footer'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'footer',
    'module' => 'panels_mini',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cyprus' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyprus',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'zen',
        'weight' => 0,
      ),
      'zen_dataportal' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'zen_dataportal',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cyprus' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyprus',
        'weight' => -1,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => -10,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => -1,
      ),
      'zen_dataportal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen_dataportal',
        'weight' => -1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['webform-client-block-285'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'client-block-285',
    'module' => 'webform',
    'node_types' => array(),
    'pages' => 'contact',
    'roles' => array(),
    'themes' => array(
      'cyprus' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyprus',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
      'zen_dataportal' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'zen_dataportal',
        'weight' => 0,
      ),
    ),
    'title' => 'Contact form',
    'visibility' => 1,
  );

  return $export;
}
