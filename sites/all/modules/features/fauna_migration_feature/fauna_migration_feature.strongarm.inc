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
  $strongarm->name = 'cdm-name-render-templates';
  $strongarm->value = array(
    'polytomousKey' => (object) array(
      'namePart' => (object) array(
        '#uri' => TRUE,
      ),
    ),
    'taxon_page_synonymy,related_taxon' => (object) array(
      'nameAuthorPart' => (object) array(
        '#uri' => TRUE,
      ),
      'referencePart' => TRUE,
      'statusPart' => TRUE,
      'descriptionPart' => TRUE,
    ),
    'homonym' => (object) array(
      'nameAuthorPart' => (object) array(
        '#uri' => TRUE,
      ),
      'referenceYearPart' => TRUE,
    ),
    'taxon_page_title,acceptedFor,typedesignations,list_of_taxa' => (object) array(
      'nameAuthorPart' => (object) array(
        '#uri' => TRUE,
      ),
      'referencePart' => TRUE,
    ),
    '#DEFAULT' => (object) array(
      'nameAuthorPart' => (object) array(
        '#uri' => TRUE,
      ),
      'referencePart' => TRUE,
    ),
  );
  $export['cdm-name-render-templates'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm-part-definitions';
  $strongarm->value = array(
    'ZoologicalName' => (object) array(
      'namePart' => (object) array(
        'name' => TRUE,
      ),
      'nameAuthorPart' => (object) array(
        'name' => TRUE,
      ),
      'referencePart' => (object) array(
        'authors' => TRUE,
      ),
      'microreferencePart' => (object) array(
        'microreference' => TRUE,
      ),
      'statusPart' => (object) array(
        'status' => TRUE,
      ),
      'descriptionPart' => (object) array(
        'description' => TRUE,
      ),
    ),
    'BotanicalName' => (object) array(
      'namePart' => (object) array(
        'name' => TRUE,
      ),
      'nameAuthorPart' => (object) array(
        'name' => TRUE,
        'authors' => TRUE,
      ),
      'referencePart' => (object) array(
        'reference' => TRUE,
        'microreference' => TRUE,
      ),
      'referenceYearPart' => (object) array(
        'reference.year' => TRUE,
      ),
      'statusPart' => (object) array(
        'status' => TRUE,
      ),
      'descriptionPart' => (object) array(
        'description' => TRUE,
      ),
    ),
    '#DEFAULT' => (object) array(
      'namePart' => (object) array(
        'name' => TRUE,
      ),
      'nameAuthorPart' => (object) array(
        'name' => TRUE,
        'authors' => TRUE,
      ),
      'referencePart' => (object) array(
        'reference' => TRUE,
      ),
      'microreferencePart' => (object) array(
        'microreference' => TRUE,
      ),
      'statusPart' => (object) array(
        'status' => TRUE,
      ),
      'descriptionPart' => (object) array(
        'description' => TRUE,
      ),
    ),
  );
  $export['cdm-part-definitions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_aggregate_by_taxon_relationships';
  $strongarm->value = array(
    'direct' => array(),
    'invers' => array(),
  );
  $export['cdm_aggregate_by_taxon_relationships'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_dataportal_all_footnotes';
  $strongarm->value = 0;
  $export['cdm_dataportal_all_footnotes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_dataportal_annotations_footnotes';
  $strongarm->value = 0;
  $export['cdm_dataportal_annotations_footnotes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_dataportal_compressed_specimen_derivate_table';
  $strongarm->value = 0;
  $export['cdm_dataportal_compressed_specimen_derivate_table'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_dataportal_compressed_specimen_derivate_table_show_determined_as';
  $strongarm->value = 1;
  $export['cdm_dataportal_compressed_specimen_derivate_table_show_determined_as'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_dataportal_default_tab';
  $strongarm->value = '0';
  $export['cdm_dataportal_default_tab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_dataportal_display_is_accepted_for';
  $strongarm->value = 0;
  $export['cdm_dataportal_display_is_accepted_for'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_dataportal_display_taxon_relationships';
  $strongarm->value = 1;
  $export['cdm_dataportal_display_taxon_relationships'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_dataportal_featuretree_uuid';
  $strongarm->value = 'ff59b9ad-1fb8-4aa4-a8ba-79d62123d0fb';
  $export['cdm_dataportal_featuretree_uuid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_dataportal_geoservice_display_width';
  $strongarm->value = '600';
  $export['cdm_dataportal_geoservice_display_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_dataportal_nomref_in_title';
  $strongarm->value = 1;
  $export['cdm_dataportal_nomref_in_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_dataportal_search_items_on_page';
  $strongarm->value = '25';
  $export['cdm_dataportal_search_items_on_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_dataportal_show_advanced_search';
  $strongarm->value = 1;
  $export['cdm_dataportal_show_advanced_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_dataportal_show_back_to_search_results';
  $strongarm->value = 1;
  $export['cdm_dataportal_show_back_to_search_results'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_dataportal_structdesc_featuretree_uuid';
  $strongarm->value = '';
  $export['cdm_dataportal_structdesc_featuretree_uuid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_dataportal_taxonpage_tabs';
  $strongarm->value = 0;
  $export['cdm_dataportal_taxonpage_tabs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_dataportal_taxon_auto_suggest';
  $strongarm->value = 0;
  $export['cdm_dataportal_taxon_auto_suggest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_debug_mode';
  $strongarm->value = 0;
  $export['cdm_debug_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_distribution_filter';
  $strongarm->value = array(
    'filter_rules' => array(
      'statusOrderPreference' => 'statusOrderPreference',
      'subAreaPreference' => 0,
    ),
    'hiddenAreaMarkerType' => array(),
  );
  $export['cdm_distribution_filter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_drupal_node_creation';
  $strongarm->value = 0;
  $export['cdm_drupal_node_creation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_images_include_children';
  $strongarm->value = '0';
  $export['cdm_images_include_children'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_js_devel_mode';
  $strongarm->value = 0;
  $export['cdm_js_devel_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_map_distribution';
  $strongarm->value = array(
    'aspect_ratio' => 2,
    'bbox' => '-33.75,33.7243397779702,50.625,76.84081644345761',
    'show_labels' => 0,
    'caption' => '',
    'distribution_opacity' => '0.8',
    'map_type' => '1',
    'image_map' => array(
      'base_layer' => '',
      'bg_color' => '1874CD',
      'layer_style' => 'ffffff,606060,,',
      'width' => 512,
      'projection' => '',
      'height' => 1024,
    ),
    'openlayers' => array(
      'base_layers' => array(
        'PREFERRED' => 'custom_wms_base_layer_1',
        'custom_wms_base_layer_1' => 'custom_wms_base_layer_1',
      ),
      'custom_wms_base_layer' => array(
        'name' => 'Fauna Europaea 2016',
        'url' => 'http://edit.africamuseum.be/geoserver/topp/wms',
        'params' => '{
  "Layers": "topp:fauna_europaea_2016",
  "Format": "image/png",
  "BGCOLOR": "0xe0faff"
}',
        'projection' => 'EPSG:7777777',
        'proj4js_def' => '+proj=lcc +lat_1=42 +lat_2=56 +lat_0=35 +lon_0=24 +x_0=3000000 +y_0=100000 +ellps=intl +towgs84=-87,-98,-121,0,0,0,0 +units=m +no_defs',
        'max_extent' => '-1600072.75,-1364034.540527,5600000,5836038.209473',
        'units' => 'm',
      ),
      'show_layer_switcher' => 1,
      'display_outside_max_extent' => 0,
    ),
    'legend' => array(
      'show' => 1,
      'opacity' => '1.0',
      'font_size' => '10',
      'font_style' => '0',
      'icon_width' => '35',
      'icon_height' => '15',
    ),
  );
  $export['cdm_map_distribution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_occurrence_featuretree_uuid';
  $strongarm->value = 'ac8d4e58-926d-4f81-ac77-cebdd295df7c';
  $export['cdm_occurrence_featuretree_uuid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_search_taxa_mode';
  $strongarm->value = array(
    'doTaxa' => 'doTaxa',
    'doSynonyms' => 0,
    'doTaxaByCommonNames' => 0,
    'doMisappliedNames' => 0,
  );
  $export['cdm_search_taxa_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_taxonomictree_uuid';
  $strongarm->value = 'b8fa363d-ae55-4b8b-b696-eba58419cc6b';
  $export['cdm_taxonomictree_uuid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_taxonpage_tabs_visibility';
  $strongarm->value = array(
    'General' => 'General',
    'Synonymy' => 'Synonymy',
    'Images' => 'Images',
    'Specimens' => 'Specimens',
    'Keys' => 'Keys',
    'Experts' => 'Experts',
  );
  $export['cdm_taxonpage_tabs_visibility'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_taxonpage_tabs_weight';
  $strongarm->value = array(
    'general' => '-3',
    'synonymy' => '-4',
    'images' => '0',
    'specimens' => '1',
    'keys' => '3',
    'experts' => '-4',
  );
  $export['cdm_taxonpage_tabs_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_taxontree_ranklimit';
  $strongarm->value = '0';
  $export['cdm_taxontree_ranklimit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_taxon_media_filter';
  $strongarm->value = array(
    'includeTaxonDescriptions' => 'includeTaxonDescriptions',
    'includeTaxonNameDescriptions' => 0,
    'includeOccurrences' => 0,
  );
  $export['cdm_taxon_media_filter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_taxon_profile_image';
  $strongarm->value = array(
    'show' => 0,
    'maxextend' => '184',
    'media_uri_query' => '',
    'custom_placeholder_enabled' => 0,
    'custom_placeholder_image_on' => 0,
    'custom_placeholder_image_fid' => '',
  );
  $export['cdm_taxon_profile_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_taxon_relationship_types';
  $strongarm->value = array(
    '1ed87175-59dd-437e-959e-0d71583d8417' => '1ed87175-59dd-437e-959e-0d71583d8417',
    '605b1d01-f2b1-4544-b2e0-6f08def3d6ed' => '605b1d01-f2b1-4544-b2e0-6f08def3d6ed',
    '0e5099bb-87c0-400e-abdc-bcfed5b5eece' => 0,
    'a8f03491-2ad6-4fae-a04c-2a4c117a2e9b' => 0,
    '0170cd83-93ad-43c2-9ad1-7ac879300e2f' => 0,
    '6c16c33b-cfc5-4a00-92bd-a9f9e448f389' => 0,
    '60974c98-64ab-4574-bb5c-c110f6db634d' => 0,
    '2046a0fd-4fd6-45a1-b707-2b91547f3ec7' => 0,
    '758e6cf3-05a0-49ed-9496-d8c4a9fd02ae' => 0,
    'c3ed5089-6779-4051-bb24-f5ea0eca80d5' => 0,
    'ecd2382b-3d94-4169-9dd2-2c4ea1d24605' => 0,
    '6fabef72-5264-44f1-bfc0-8e2e141375f2' => 0,
    'b55cb3a2-6e20-4ca3-95bc-12b59d3235b0' => 0,
    '6ee440bc-fd3d-4da2-ad85-906d35a94731' => 0,
    '43d8492c-8bd5-4f38-a633-f1ad910a34dd' => 0,
    '43466aa9-e431-4f37-8bca-febfd9f63716' => 0,
    '0501c385-cab1-4fbe-b945-fc747419bb13' => 0,
    '623ecdeb-ff1f-471d-a8dc-0d75b2fe8d94' => 0,
    '831fcd88-e5c9-49e0-b06e-bbb67d1c05c9' => 0,
    '4535a63c-4a3f-4d69-9350-7bf02e2c23be' => 0,
    '89dffa4e-e004-4d42-b0d1-ae1827529e43' => 0,
    'd5c6953d-aa53-46f8-aafc-ebc6428ad5d0' => 0,
    'f1ec567b-3c73-436b-8625-b4fd53588abb' => 0,
    'd13fecdf-eb44-4dd7-9244-26679c05df1c' => 0,
    'b7153c89-cc6c-4f8c-bf74-216f10feac46' => 0,
    '2d923b1a-6c0f-414c-ac9b-bbc502e18078' => 0,
    '78355cfa-5200-432f-8e00-82b97afad0ed' => 0,
  );
  $export['cdm_taxon_relationship_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_webservice_cache';
  $strongarm->value = 1;
  $export['cdm_webservice_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_webservice_proxy_port';
  $strongarm->value = '80';
  $export['cdm_webservice_proxy_port'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_webservice_proxy_pwd';
  $strongarm->value = '';
  $export['cdm_webservice_proxy_pwd'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_webservice_proxy_url';
  $strongarm->value = '';
  $export['cdm_webservice_proxy_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_webservice_proxy_usr';
  $strongarm->value = '';
  $export['cdm_webservice_proxy_usr'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdm_webservice_url';
  $strongarm->value = 'http://172.18.0.1:8080/dockerMaria/';
  $export['cdm_webservice_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_page';
  $strongarm->value = 0;
  $export['comment_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_page_manager_pages';
  $strongarm->value = array();
  $export['default_page_manager_pages'] = $strongarm;

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
  $strongarm->name = 'page_manager_search_disabled_user';
  $strongarm->value = FALSE;
  $export['page_manager_search_disabled_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 0,
    'toggle_comment_user_verification' => 0,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 0,
    'default_logo' => 0,
    'logo_path' => 'sites/fauna.biodiv.naturkundemuseum-berlin.de/themes/bartik_CDM/FaEu-logo1.png',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
  );
  $export['theme_settings'] = $strongarm;

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
