<?php
/**
 * @file
 * fauna_migration_feature.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function fauna_migration_feature_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'address';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'faeu_address';
  $fe_block_boxes->body = '<p>Museum für Naturkunde<br />Leibniz-Institut für Evolutions- und Biodiversitätsforschung<br />Invalidenstr. 43 <br />10115 Berlin <br />Germany <br />Phone: +49 30 2093 70367<br />Fax: +49 30 2093 8323<br />Mail: fauna-eu(at)mfn-berlin.de<br />website: <a href="http://www.fauna-eu.org">http://www.fauna-eu.org</a></p><p>&nbsp;</p>';

  $export['faeu_address'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'statistics';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'faeu_statistics';
  $fe_block_boxes->body = '<p>235,708 taxon names<br /><strong>180,712 accepted taxon names</strong><br />6,017 higher taxon names<br /><strong>5,838 accepted higher taxon names</strong><br />36,162 (sub)genus names<br /><strong>28,589 accepted (sub)genus names</strong><br />173,654 species names<br /><strong>132,097 accepted species names</strong><br />19,821 subspecies names<br /><strong>14,188 accepted subspecies names</strong></p>';

  $export['faeu_statistics'] = $fe_block_boxes;

  return $export;
}
