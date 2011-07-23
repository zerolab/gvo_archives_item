<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function gvo_archives_item_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'gvo_archives_item_node';
  $context->description = '';
  $context->tag = 'Item';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'item' => 'item',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-global_archives_item-block_1' => array(
          'module' => 'views',
          'delta' => 'global_archives_item-block_1',
          'region' => 'side',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Item');

  $export['gvo_archives_item_node'] = $context;
  return $export;
}
