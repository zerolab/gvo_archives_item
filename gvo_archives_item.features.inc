<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function gvo_archives_item_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function gvo_archives_item_node_info() {
  $items = array(
    'item' => array(
      'name' => t('Archive Item'),
      'module' => 'features',
      'description' => t('Global Archives Item. Can be an event, a person profile or anything with a date or time span associated with'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function gvo_archives_item_views_api() {
  return array(
    'api' => '2',
  );
}
