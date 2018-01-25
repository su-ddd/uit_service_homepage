<?php
/**
 * @file
 * uit_service_homepage.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function uit_service_homepage_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_new_style|node|service_page|form';
  $field_group->group_name = 'group_new_style';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'New Style',
    'weight' => '4',
    'children' => array(
      0 => 'field_service_data_security',
      1 => 'field_service_designed_for',
      2 => 'field_service_features',
      3 => 'field_service_get_help',
      4 => 'field_service_get_started',
      5 => 'field_service_rates',
      6 => 'field_service_requirements',
      7 => 'field_service_learn_more',
      8 => 'field_service_see_also',
      9 => 'group_service_banner',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'New Style',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-new-style field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_new_style|node|service_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_old_style|node|service_page|form';
  $field_group->group_name = 'group_old_style';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Classic Style',
    'weight' => '5',
    'children' => array(
      0 => 'body',
      1 => 'field_service_information',
      2 => 'group_related_services',
      3 => 'group_service_links',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Classic Style',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-old-style field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_old_style|node|service_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_services|node|service_page|form';
  $field_group->group_name = 'group_related_services';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_old_style';
  $field_group->data = array(
    'label' => 'Related Services',
    'weight' => '17',
    'children' => array(
      0 => 'field_services',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Related Services',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-related-services field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_related_services|node|service_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_service_banner|node|service_page|form';
  $field_group->group_name = 'group_service_banner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_new_style';
  $field_group->data = array(
    'label' => 'Banner',
    'weight' => '3',
    'children' => array(
      0 => 'field_service_action_links',
      1 => 'field_service_banner_image',
      2 => 'field_service_banner_text',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-service-banner field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_service_banner|node|service_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_service_files|node|service_page|form';
  $field_group->group_name = 'group_service_files';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Files',
    'weight' => '8',
    'children' => array(
      0 => 'field_service_files',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Files',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-service-files field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_service_files|node|service_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_service_images|node|service_page|form';
  $field_group->group_name = 'group_service_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '7',
    'children' => array(
      0 => 'field_images',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Images',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-service-images field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_service_images|node|service_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_service_links|node|service_page|form';
  $field_group->group_name = 'group_service_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_old_style';
  $field_group->data = array(
    'label' => 'Links',
    'weight' => '16',
    'children' => array(
      0 => 'field_service_faq_links',
      1 => 'field_service_launch_links',
      2 => 'field_service_order_links',
      3 => 'field_service_related_links',
      4 => 'field_service_request_links',
      5 => 'field_service_support_links',
      6 => 'field_service_download_links',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Links',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-service-links field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_service_links|node|service_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_service_notice|node|service_page|form';
  $field_group->group_name = 'group_service_notice';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Notice',
    'weight' => '1',
    'children' => array(
      0 => 'field_service_notice',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Notice',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-service-notice field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_service_notice|node|service_page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Banner');
  t('Classic Style');
  t('Files');
  t('Images');
  t('Links');
  t('New Style');
  t('Notice');
  t('Related Services');

  return $field_groups;
}
