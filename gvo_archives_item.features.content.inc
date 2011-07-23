<?php

/**
 * Implementation of hook_content_default_fields().
 */
function gvo_archives_item_content_default_fields() {
  $fields = array();

  // Exported field: field_item_date
  $fields['item-field_item_date'] = array(
    'field_name' => 'field_item_date',
    'type_name' => 'item',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'short',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'short',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '1',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
      'hour' => 'hour',
      'minute' => 'minute',
    ),
    'timezone_db' => 'UTC',
    'tz_handling' => 'site',
    'todate' => 'optional',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'medium',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'blank',
      'default_value_code2' => '',
      'input_format' => 'j F Y',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-5:+3',
      'label_position' => 'above',
      'semantic_cck_widget_settings' => array(
        'use_widget_settings' => 0,
      ),
      'label' => 'Date',
      'weight' => '-3',
      'description' => '',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_item_image
  $fields['item-field_item_image'] = array(
    'field_name' => 'field_item_image',
    'type_name' => 'item',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'small_linked',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'large_default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'semantic_cck_widget_settings' => array(
        'use_widget_settings' => 0,
      ),
      'label' => 'Image',
      'weight' => '-4',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_item_location
  $fields['item-field_item_location'] = array(
    'field_name' => 'field_item_location',
    'type_name' => 'item',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'location',
    'required' => '1',
    'multiple' => '0',
    'module' => 'location_cck',
    'active' => '1',
    'location_settings' => array(
      'form' => array(
        'fields' => array(
          'name' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '-100',
          ),
          'street' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '-99',
          ),
          'city' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '-98',
          ),
          'country' => array(
            'collect' => '2',
            'default' => '',
            'weight' => '-97',
          ),
          'locpick' => array(
            'collect' => '2',
            'weight' => '-96',
          ),
          'additional' => array(
            'collect' => '0',
            'default' => '',
            'weight' => '-95',
          ),
          'postal_code' => array(
            'collect' => '0',
            'default' => '',
            'weight' => '-94',
          ),
          'province' => array(
            'collect' => '0',
            'default' => '',
            'weight' => '-93',
          ),
        ),
      ),
      'display' => array(
        'hide' => array(
          'name' => 0,
          'street' => 0,
          'additional' => 0,
          'city' => 0,
          'province' => 0,
          'postal_code' => 0,
          'country' => 0,
          'locpick' => 0,
          'province_name' => 0,
          'country_name' => 0,
          'map_link' => 0,
          'coords' => 0,
        ),
      ),
    ),
    'gmap_macro' => '[gmap |options=+collapsehack |width=100%|height=400px]',
    'gmap_marker' => 'drupal',
    'widget' => array(
      'semantic_cck_widget_settings' => array(
        'use_widget_settings' => 0,
      ),
      'default_value' => array(
        '0' => array(
          'name' => '',
          'street' => '',
          'city' => '',
          'country' => 'us',
          'locpick' => array(
            'user_latitude' => '',
            'user_longitude' => '',
          ),
          'additional' => '',
          'cck_preview_in_progress' => TRUE,
          'location_settings' => array(
            'form' => array(
              'fields' => array(
                'name' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '-100',
                ),
                'street' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '-99',
                ),
                'city' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '-98',
                ),
                'country' => array(
                  'default' => 'us',
                  'collect' => 1,
                  'weight' => '-97',
                ),
                'locpick' => array(
                  'default' => array(
                    'user_latitude' => '',
                    'user_longitude' => '',
                  ),
                  'collect' => 1,
                  'weight' => '-96',
                  'nodiff' => TRUE,
                ),
                'additional' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '-95',
                ),
                'postal_code' => array(
                  'default' => '',
                  'collect' => '0',
                  'weight' => '-94',
                ),
                'province' => array(
                  'default' => '',
                  'collect' => '0',
                  'weight' => '-93',
                ),
                'cck_preview_in_progress' => array(
                  'default' => TRUE,
                ),
                'location_settings' => array(
                  'default' => array(
                    'form' => array(
                      'fields' => array(
                        'name' => array(
                          'default' => '',
                          'collect' => '1',
                          'weight' => '-100',
                        ),
                        'street' => array(
                          'default' => '',
                          'collect' => '1',
                          'weight' => '-99',
                        ),
                        'city' => array(
                          'default' => '',
                          'collect' => '1',
                          'weight' => '-98',
                        ),
                        'country' => array(
                          'default' => 'us',
                          'collect' => 1,
                          'weight' => '-97',
                        ),
                        'locpick' => array(
                          'default' => array(
                            'user_latitude' => '',
                            'user_longitude' => '',
                          ),
                          'collect' => 1,
                          'weight' => '-96',
                          'nodiff' => TRUE,
                        ),
                        'additional' => array(
                          'default' => '',
                          'collect' => '1',
                          'weight' => '-95',
                        ),
                        'postal_code' => array(
                          'default' => '',
                          'collect' => '0',
                          'weight' => '-94',
                        ),
                        'province' => array(
                          'default' => '',
                          'collect' => '0',
                          'weight' => '-93',
                        ),
                        'cck_preview_in_progress' => array(
                          'default' => TRUE,
                        ),
                        'location_settings' => array(
                          'default' => array(
                            'form' => array(
                              'fields' => array(
                                'name' => array(
                                  'default' => '',
                                  'collect' => '1',
                                  'weight' => '-100',
                                ),
                                'street' => array(
                                  'default' => '',
                                  'collect' => '1',
                                  'weight' => '-99',
                                ),
                                'city' => array(
                                  'default' => '',
                                  'collect' => '1',
                                  'weight' => '-98',
                                ),
                                'country' => array(
                                  'default' => 'us',
                                  'collect' => 1,
                                  'weight' => '-97',
                                ),
                                'postal_code' => array(
                                  'default' => '',
                                  'collect' => '0',
                                  'weight' => '-96',
                                ),
                                'additional' => array(
                                  'default' => '',
                                  'collect' => '1',
                                  'weight' => '-95',
                                ),
                                'province' => array(
                                  'default' => '',
                                  'collect' => '0',
                                  'weight' => '-94',
                                ),
                                'locpick' => array(
                                  'default' => array(
                                    'user_latitude' => '',
                                    'user_longitude' => '',
                                  ),
                                  'collect' => '4',
                                  'weight' => '-93',
                                  'nodiff' => TRUE,
                                ),
                                'cck_preview_in_progress' => array(
                                  'default' => TRUE,
                                ),
                                'location_settings' => array(
                                  'default' => array(
                                    'form' => array(
                                      'fields' => array(
                                        'lid' => array(
                                          'default' => FALSE,
                                        ),
                                        'name' => array(
                                          'default' => '',
                                          'collect' => 1,
                                          'weight' => 2,
                                        ),
                                        'street' => array(
                                          'default' => '',
                                          'collect' => 1,
                                          'weight' => 4,
                                        ),
                                        'additional' => array(
                                          'default' => '',
                                          'collect' => 1,
                                          'weight' => 6,
                                        ),
                                        'city' => array(
                                          'default' => '',
                                          'collect' => 0,
                                          'weight' => 8,
                                        ),
                                        'province' => array(
                                          'default' => '',
                                          'collect' => 0,
                                          'weight' => 10,
                                        ),
                                        'postal_code' => array(
                                          'default' => '',
                                          'collect' => 0,
                                          'weight' => 12,
                                        ),
                                        'country' => array(
                                          'default' => 'us',
                                          'collect' => 1,
                                          'weight' => 14,
                                        ),
                                        'locpick' => array(
                                          'default' => FALSE,
                                          'collect' => 1,
                                          'weight' => 20,
                                          'nodiff' => TRUE,
                                        ),
                                        'latitude' => array(
                                          'default' => 0,
                                        ),
                                        'longitude' => array(
                                          'default' => 0,
                                        ),
                                        'source' => array(
                                          'default' => 0,
                                        ),
                                        'is_primary' => array(
                                          'default' => 0,
                                        ),
                                        'delete_location' => array(
                                          'default' => FALSE,
                                          'nodiff' => TRUE,
                                        ),
                                      ),
                                    ),
                                  ),
                                ),
                                'lid' => array(
                                  'default' => FALSE,
                                ),
                                'latitude' => array(
                                  'default' => 0,
                                ),
                                'longitude' => array(
                                  'default' => 0,
                                ),
                                'source' => array(
                                  'default' => 0,
                                ),
                                'is_primary' => array(
                                  'default' => 0,
                                ),
                                'delete_location' => array(
                                  'default' => FALSE,
                                  'nodiff' => TRUE,
                                ),
                              ),
                            ),
                            'display' => array(
                              'hide' => array(
                                'name' => 0,
                                'street' => 0,
                                'additional' => 0,
                                'city' => 0,
                                'province' => 0,
                                'postal_code' => 0,
                                'country' => 0,
                                'locpick' => 0,
                                'province_name' => 0,
                                'country_name' => 0,
                                'map_link' => 0,
                                'coords' => 0,
                              ),
                            ),
                          ),
                        ),
                        'lid' => array(
                          'default' => FALSE,
                        ),
                        'latitude' => array(
                          'default' => 0,
                        ),
                        'longitude' => array(
                          'default' => 0,
                        ),
                        'source' => array(
                          'default' => 0,
                        ),
                        'is_primary' => array(
                          'default' => 0,
                        ),
                        'delete_location' => array(
                          'default' => FALSE,
                          'nodiff' => TRUE,
                        ),
                      ),
                    ),
                    'display' => array(
                      'hide' => array(
                        'name' => 0,
                        'street' => 0,
                        'additional' => 0,
                        'city' => 0,
                        'province' => 0,
                        'postal_code' => 0,
                        'country' => 0,
                        'locpick' => 0,
                        'province_name' => 0,
                        'country_name' => 0,
                        'map_link' => 0,
                        'coords' => 0,
                      ),
                    ),
                  ),
                ),
                'lid' => array(
                  'default' => FALSE,
                ),
                'latitude' => array(
                  'default' => 0,
                ),
                'longitude' => array(
                  'default' => 0,
                ),
                'source' => array(
                  'default' => 0,
                ),
                'is_primary' => array(
                  'default' => 0,
                ),
                'delete_location' => array(
                  'default' => FALSE,
                  'nodiff' => TRUE,
                ),
              ),
            ),
            'display' => array(
              'hide' => array(
                'name' => 0,
                'street' => 0,
                'additional' => 0,
                'city' => 0,
                'province' => 0,
                'postal_code' => 0,
                'country' => 0,
                'locpick' => 0,
                'province_name' => 0,
                'country_name' => 0,
                'map_link' => 0,
                'coords' => 0,
              ),
            ),
          ),
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Location',
      'weight' => '-1',
      'description' => 'Item Location.
For best results, use the coordinate chooser on top of everything else.',
      'type' => 'location',
      'module' => 'location_cck',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Date');
  t('Image');
  t('Location');

  return $fields;
}
