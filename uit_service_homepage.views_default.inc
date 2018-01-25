<?php
/**
 * @file
 * uit_service_homepage.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uit_service_homepage_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'related_pages';
  $view->description = 'Service Page: Related Pages';
  $view->tag = 'service_page';
  $view->base_table = 'node';
  $view->human_name = 'Service Home Page: Related Pages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'See Also';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_service_related_links']['id'] = 'field_service_related_links';
  $handler->display->display_options['fields']['field_service_related_links']['table'] = 'field_data_field_service_related_links';
  $handler->display->display_options['fields']['field_service_related_links']['field'] = 'field_service_related_links';
  $handler->display->display_options['fields']['field_service_related_links']['label'] = '';
  $handler->display->display_options['fields']['field_service_related_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_related_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_service_related_links']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_service_related_links']['delta_offset'] = '0';
  /* Sort criterion: Content: Related Links (field_service_related_links:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_service_related_links';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Related Links (field_service_related_links:url) */
  $handler->display->display_options['filters']['field_service_related_links_url']['id'] = 'field_service_related_links_url';
  $handler->display->display_options['filters']['field_service_related_links_url']['table'] = 'field_data_field_service_related_links';
  $handler->display->display_options['filters']['field_service_related_links_url']['field'] = 'field_service_related_links_url';
  $handler->display->display_options['filters']['field_service_related_links_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_service_related_links_url']['group'] = 1;
  /* Filter criterion: Content: Style (field_page_style) */
  $handler->display->display_options['filters']['field_page_style_value']['id'] = 'field_page_style_value';
  $handler->display->display_options['filters']['field_page_style_value']['table'] = 'field_data_field_page_style';
  $handler->display->display_options['filters']['field_page_style_value']['field'] = 'field_page_style_value';
  $handler->display->display_options['filters']['field_page_style_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_page_style_value']['value'] = array(
    'new' => 'new',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<i class="fa fa-arrow-circle-right fa-4x pull-left"></i>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $export['related_pages'] = $view;

  $view = new view();
  $view->name = 'service_information';
  $view->description = 'Shows ITIL Information';
  $view->tag = 'service_page';
  $view->base_table = 'node';
  $view->human_name = 'Service Home Page: At a glance';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'At a glance';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Service Information */
  $handler->display->display_options['fields']['field_service_information']['id'] = 'field_service_information';
  $handler->display->display_options['fields']['field_service_information']['table'] = 'field_data_field_service_information';
  $handler->display->display_options['fields']['field_service_information']['field'] = 'field_service_information';
  $handler->display->display_options['fields']['field_service_information']['label'] = '';
  $handler->display->display_options['fields']['field_service_information']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_service_information']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_information']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_service_information']['hide_empty'] = TRUE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'service_page' => 'service_page',
  );
  /* Filter criterion: Content: Service Information (field_service_information) */
  $handler->display->display_options['filters']['field_service_information_value']['id'] = 'field_service_information_value';
  $handler->display->display_options['filters']['field_service_information_value']['table'] = 'field_data_field_service_information';
  $handler->display->display_options['filters']['field_service_information_value']['field'] = 'field_service_information_value';
  $handler->display->display_options['filters']['field_service_information_value']['operator'] = 'longerthan';
  $handler->display->display_options['filters']['field_service_information_value']['value'] = '0';
  /* Filter criterion: Content: Style (field_page_style) */
  $handler->display->display_options['filters']['field_page_style_value']['id'] = 'field_page_style_value';
  $handler->display->display_options['filters']['field_page_style_value']['table'] = 'field_data_field_page_style';
  $handler->display->display_options['filters']['field_page_style_value']['field'] = 'field_page_style_value';
  $handler->display->display_options['filters']['field_page_style_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_page_style_value']['value'] = array(
    'new' => 'new',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['block_caching'] = '-1';
  $export['service_information'] = $view;

  $view = new view();
  $view->name = 'service_links_order';
  $view->description = 'Order, Request, Download and Launch Links';
  $view->tag = 'service_page';
  $view->base_table = 'node';
  $view->human_name = 'Service Home Page: Buttons';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Actions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Order Links */
  $handler->display->display_options['fields']['field_service_order_links']['id'] = 'field_service_order_links';
  $handler->display->display_options['fields']['field_service_order_links']['table'] = 'field_data_field_service_order_links';
  $handler->display->display_options['fields']['field_service_order_links']['field'] = 'field_service_order_links';
  $handler->display->display_options['fields']['field_service_order_links']['label'] = '';
  $handler->display->display_options['fields']['field_service_order_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_order_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_service_order_links']['delta_offset'] = '0';
  /* Field: Content: Request Links */
  $handler->display->display_options['fields']['field_service_request_links']['id'] = 'field_service_request_links';
  $handler->display->display_options['fields']['field_service_request_links']['table'] = 'field_data_field_service_request_links';
  $handler->display->display_options['fields']['field_service_request_links']['field'] = 'field_service_request_links';
  $handler->display->display_options['fields']['field_service_request_links']['label'] = '';
  $handler->display->display_options['fields']['field_service_request_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_request_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_service_request_links']['delta_offset'] = '0';
  /* Field: Content: Launch Links */
  $handler->display->display_options['fields']['field_service_launch_links']['id'] = 'field_service_launch_links';
  $handler->display->display_options['fields']['field_service_launch_links']['table'] = 'field_data_field_service_launch_links';
  $handler->display->display_options['fields']['field_service_launch_links']['field'] = 'field_service_launch_links';
  $handler->display->display_options['fields']['field_service_launch_links']['label'] = '';
  $handler->display->display_options['fields']['field_service_launch_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_launch_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_service_launch_links']['delta_offset'] = '0';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
    'service_page' => 'service_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Order Links (field_service_order_links:url) */
  $handler->display->display_options['filters']['field_service_order_links_url']['id'] = 'field_service_order_links_url';
  $handler->display->display_options['filters']['field_service_order_links_url']['table'] = 'field_data_field_service_order_links';
  $handler->display->display_options['filters']['field_service_order_links_url']['field'] = 'field_service_order_links_url';
  $handler->display->display_options['filters']['field_service_order_links_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_service_order_links_url']['group'] = 2;
  /* Filter criterion: Content: Request Links (field_service_request_links:url) */
  $handler->display->display_options['filters']['field_service_request_links_url']['id'] = 'field_service_request_links_url';
  $handler->display->display_options['filters']['field_service_request_links_url']['table'] = 'field_data_field_service_request_links';
  $handler->display->display_options['filters']['field_service_request_links_url']['field'] = 'field_service_request_links_url';
  $handler->display->display_options['filters']['field_service_request_links_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_service_request_links_url']['group'] = 2;
  /* Filter criterion: Content: Launch Links (field_service_launch_links:url) */
  $handler->display->display_options['filters']['field_service_launch_links_url']['id'] = 'field_service_launch_links_url';
  $handler->display->display_options['filters']['field_service_launch_links_url']['table'] = 'field_data_field_service_launch_links';
  $handler->display->display_options['filters']['field_service_launch_links_url']['field'] = 'field_service_launch_links_url';
  $handler->display->display_options['filters']['field_service_launch_links_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_service_launch_links_url']['group'] = 2;

  /* Display: Order Links */
  $handler = $view->new_display('block', 'Order Links', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Order Links */
  $handler->display->display_options['fields']['field_service_order_links']['id'] = 'field_service_order_links';
  $handler->display->display_options['fields']['field_service_order_links']['table'] = 'field_data_field_service_order_links';
  $handler->display->display_options['fields']['field_service_order_links']['field'] = 'field_service_order_links';
  $handler->display->display_options['fields']['field_service_order_links']['label'] = '';
  $handler->display->display_options['fields']['field_service_order_links']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_order_links']['alter']['text'] = '<a href="[field_service_order_links-url]" class="btn btn-large btn-block btn-order"><i class="fa fa-shopping-cart fa-lg"></i> [field_service_order_links-title]</a>';
  $handler->display->display_options['fields']['field_service_order_links']['alter']['path'] = '[field_service_order_links-url]';
  $handler->display->display_options['fields']['field_service_order_links']['alter']['link_class'] = 'icon-shopping-cart icon-large';
  $handler->display->display_options['fields']['field_service_order_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_order_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_service_order_links']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_service_order_links']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'service_page' => 'service_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Order Links (field_service_order_links:url) */
  $handler->display->display_options['filters']['field_service_order_links_url']['id'] = 'field_service_order_links_url';
  $handler->display->display_options['filters']['field_service_order_links_url']['table'] = 'field_data_field_service_order_links';
  $handler->display->display_options['filters']['field_service_order_links_url']['field'] = 'field_service_order_links_url';
  $handler->display->display_options['filters']['field_service_order_links_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_service_order_links_url']['group'] = 2;
  /* Filter criterion: Content: Request Links (field_service_request_links:url) */
  $handler->display->display_options['filters']['field_service_request_links_url']['id'] = 'field_service_request_links_url';
  $handler->display->display_options['filters']['field_service_request_links_url']['table'] = 'field_data_field_service_request_links';
  $handler->display->display_options['filters']['field_service_request_links_url']['field'] = 'field_service_request_links_url';
  $handler->display->display_options['filters']['field_service_request_links_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_service_request_links_url']['group'] = 2;
  /* Filter criterion: Content: Launch Links (field_service_launch_links:url) */
  $handler->display->display_options['filters']['field_service_launch_links_url']['id'] = 'field_service_launch_links_url';
  $handler->display->display_options['filters']['field_service_launch_links_url']['table'] = 'field_data_field_service_launch_links';
  $handler->display->display_options['filters']['field_service_launch_links_url']['field'] = 'field_service_launch_links_url';
  $handler->display->display_options['filters']['field_service_launch_links_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_service_launch_links_url']['group'] = 2;
  /* Filter criterion: Content: Download Links (field_service_download_links:url) */
  $handler->display->display_options['filters']['field_service_download_links_url']['id'] = 'field_service_download_links_url';
  $handler->display->display_options['filters']['field_service_download_links_url']['table'] = 'field_data_field_service_download_links';
  $handler->display->display_options['filters']['field_service_download_links_url']['field'] = 'field_service_download_links_url';
  $handler->display->display_options['filters']['field_service_download_links_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_service_download_links_url']['group'] = 2;
  /* Filter criterion: Content: Style (field_page_style) */
  $handler->display->display_options['filters']['field_page_style_value']['id'] = 'field_page_style_value';
  $handler->display->display_options['filters']['field_page_style_value']['table'] = 'field_data_field_page_style';
  $handler->display->display_options['filters']['field_page_style_value']['field'] = 'field_page_style_value';
  $handler->display->display_options['filters']['field_page_style_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_page_style_value']['value'] = array(
    'new' => 'new',
  );

  /* Display: Request Links */
  $handler = $view->new_display('attachment', 'Request Links', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Request Links */
  $handler->display->display_options['fields']['field_service_request_links']['id'] = 'field_service_request_links';
  $handler->display->display_options['fields']['field_service_request_links']['table'] = 'field_data_field_service_request_links';
  $handler->display->display_options['fields']['field_service_request_links']['field'] = 'field_service_request_links';
  $handler->display->display_options['fields']['field_service_request_links']['label'] = '';
  $handler->display->display_options['fields']['field_service_request_links']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_request_links']['alter']['text'] = '<a href="[field_service_request_links-url]" class="btn btn-large btn-block btn-request"><i class="fa fa-hand-o-right fa-lg"></i> [field_service_request_links-title]</a>';
  $handler->display->display_options['fields']['field_service_request_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_request_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_service_request_links']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_service_request_links']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'service_page' => 'service_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Request Links (field_service_request_links:url) */
  $handler->display->display_options['filters']['field_service_request_links_url']['id'] = 'field_service_request_links_url';
  $handler->display->display_options['filters']['field_service_request_links_url']['table'] = 'field_data_field_service_request_links';
  $handler->display->display_options['filters']['field_service_request_links_url']['field'] = 'field_service_request_links_url';
  $handler->display->display_options['filters']['field_service_request_links_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_service_request_links_url']['group'] = 1;
  /* Filter criterion: Content: Style (field_page_style) */
  $handler->display->display_options['filters']['field_page_style_value']['id'] = 'field_page_style_value';
  $handler->display->display_options['filters']['field_page_style_value']['table'] = 'field_data_field_page_style';
  $handler->display->display_options['filters']['field_page_style_value']['field'] = 'field_page_style_value';
  $handler->display->display_options['filters']['field_page_style_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_page_style_value']['value'] = array(
    'new' => 'new',
  );
  $handler->display->display_options['displays'] = array(
    'block' => 'block',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Launch Links */
  $handler = $view->new_display('attachment', 'Launch Links', 'attachment_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Launch Links */
  $handler->display->display_options['fields']['field_service_launch_links']['id'] = 'field_service_launch_links';
  $handler->display->display_options['fields']['field_service_launch_links']['table'] = 'field_data_field_service_launch_links';
  $handler->display->display_options['fields']['field_service_launch_links']['field'] = 'field_service_launch_links';
  $handler->display->display_options['fields']['field_service_launch_links']['label'] = '';
  $handler->display->display_options['fields']['field_service_launch_links']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_launch_links']['alter']['text'] = '<a href="[field_service_launch_links-url]" class="btn btn-large btn-block btn-launch"><i class="fa fa-power-off fa-lg"></i> [field_service_launch_links-title]</a>';
  $handler->display->display_options['fields']['field_service_launch_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_launch_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_service_launch_links']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_service_launch_links']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'service_page' => 'service_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Launch Links (field_service_launch_links:url) */
  $handler->display->display_options['filters']['field_service_launch_links_url']['id'] = 'field_service_launch_links_url';
  $handler->display->display_options['filters']['field_service_launch_links_url']['table'] = 'field_data_field_service_launch_links';
  $handler->display->display_options['filters']['field_service_launch_links_url']['field'] = 'field_service_launch_links_url';
  $handler->display->display_options['filters']['field_service_launch_links_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_service_launch_links_url']['group'] = 1;
  /* Filter criterion: Content: Style (field_page_style) */
  $handler->display->display_options['filters']['field_page_style_value']['id'] = 'field_page_style_value';
  $handler->display->display_options['filters']['field_page_style_value']['table'] = 'field_data_field_page_style';
  $handler->display->display_options['filters']['field_page_style_value']['field'] = 'field_page_style_value';
  $handler->display->display_options['filters']['field_page_style_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_page_style_value']['value'] = array(
    'new' => 'new',
  );
  $handler->display->display_options['displays'] = array(
    'block' => 'block',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Download Links */
  $handler = $view->new_display('attachment', 'Download Links', 'attachment_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Download Links */
  $handler->display->display_options['fields']['field_service_download_links']['id'] = 'field_service_download_links';
  $handler->display->display_options['fields']['field_service_download_links']['table'] = 'field_data_field_service_download_links';
  $handler->display->display_options['fields']['field_service_download_links']['field'] = 'field_service_download_links';
  $handler->display->display_options['fields']['field_service_download_links']['label'] = '';
  $handler->display->display_options['fields']['field_service_download_links']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_download_links']['alter']['text'] = '<a href="[field_service_download_links-url]" class="btn btn-large btn-block btn-download"><i class="fa fa-download fa-lg"></i> [field_service_download_links-title]</a>';
  $handler->display->display_options['fields']['field_service_download_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_download_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_service_download_links']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_service_download_links']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'service_page' => 'service_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Download Links (field_service_download_links:url) */
  $handler->display->display_options['filters']['field_service_download_links_url']['id'] = 'field_service_download_links_url';
  $handler->display->display_options['filters']['field_service_download_links_url']['table'] = 'field_data_field_service_download_links';
  $handler->display->display_options['filters']['field_service_download_links_url']['field'] = 'field_service_download_links_url';
  $handler->display->display_options['filters']['field_service_download_links_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_service_download_links_url']['group'] = 1;
  /* Filter criterion: Content: Style (field_page_style) */
  $handler->display->display_options['filters']['field_page_style_value']['id'] = 'field_page_style_value';
  $handler->display->display_options['filters']['field_page_style_value']['table'] = 'field_data_field_page_style';
  $handler->display->display_options['filters']['field_page_style_value']['field'] = 'field_page_style_value';
  $handler->display->display_options['filters']['field_page_style_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_page_style_value']['value'] = array(
    'new' => 'new',
  );
  $handler->display->display_options['displays'] = array(
    'block' => 'block',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $export['service_links_order'] = $view;

  $view = new view();
  $view->name = 'service_links_support_and_faq';
  $view->description = 'Support and FAQ links';
  $view->tag = 'service_page';
  $view->base_table = 'node';
  $view->human_name = 'Service Home Page: Support and FAQ Links';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Support Links */
  $handler->display->display_options['fields']['field_service_support_links']['id'] = 'field_service_support_links';
  $handler->display->display_options['fields']['field_service_support_links']['table'] = 'field_data_field_service_support_links';
  $handler->display->display_options['fields']['field_service_support_links']['field'] = 'field_service_support_links';
  $handler->display->display_options['fields']['field_service_support_links']['label'] = '';
  $handler->display->display_options['fields']['field_service_support_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_support_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_service_support_links']['delta_offset'] = '0';
  /* Field: Content: FAQ Links */
  $handler->display->display_options['fields']['field_service_faq_links']['id'] = 'field_service_faq_links';
  $handler->display->display_options['fields']['field_service_faq_links']['table'] = 'field_data_field_service_faq_links';
  $handler->display->display_options['fields']['field_service_faq_links']['field'] = 'field_service_faq_links';
  $handler->display->display_options['fields']['field_service_faq_links']['label'] = '';
  $handler->display->display_options['fields']['field_service_faq_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_faq_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_service_faq_links']['delta_offset'] = '0';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
    'service_page' => 'service_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Support Links (field_service_support_links:url) */
  $handler->display->display_options['filters']['field_service_support_links_url']['id'] = 'field_service_support_links_url';
  $handler->display->display_options['filters']['field_service_support_links_url']['table'] = 'field_data_field_service_support_links';
  $handler->display->display_options['filters']['field_service_support_links_url']['field'] = 'field_service_support_links_url';
  $handler->display->display_options['filters']['field_service_support_links_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_service_support_links_url']['group'] = 2;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Help & FAQs';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<i class="fa fa-question-circle fa-4x pull-left"></i>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Support Links */
  $handler->display->display_options['fields']['field_service_support_links']['id'] = 'field_service_support_links';
  $handler->display->display_options['fields']['field_service_support_links']['table'] = 'field_data_field_service_support_links';
  $handler->display->display_options['fields']['field_service_support_links']['field'] = 'field_service_support_links';
  $handler->display->display_options['fields']['field_service_support_links']['label'] = '';
  $handler->display->display_options['fields']['field_service_support_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_support_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_service_support_links']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_service_support_links']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'service_page' => 'service_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Support Links (field_service_support_links:url) */
  $handler->display->display_options['filters']['field_service_support_links_url']['id'] = 'field_service_support_links_url';
  $handler->display->display_options['filters']['field_service_support_links_url']['table'] = 'field_data_field_service_support_links';
  $handler->display->display_options['filters']['field_service_support_links_url']['field'] = 'field_service_support_links_url';
  $handler->display->display_options['filters']['field_service_support_links_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_service_support_links_url']['group'] = 2;
  /* Filter criterion: Content: FAQ Links (field_service_faq_links:url) */
  $handler->display->display_options['filters']['field_service_faq_links_url']['id'] = 'field_service_faq_links_url';
  $handler->display->display_options['filters']['field_service_faq_links_url']['table'] = 'field_data_field_service_faq_links';
  $handler->display->display_options['filters']['field_service_faq_links_url']['field'] = 'field_service_faq_links_url';
  $handler->display->display_options['filters']['field_service_faq_links_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_service_faq_links_url']['group'] = 2;
  /* Filter criterion: Content: Style (field_page_style) */
  $handler->display->display_options['filters']['field_page_style_value']['id'] = 'field_page_style_value';
  $handler->display->display_options['filters']['field_page_style_value']['table'] = 'field_data_field_page_style';
  $handler->display->display_options['filters']['field_page_style_value']['field'] = 'field_page_style_value';
  $handler->display->display_options['filters']['field_page_style_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_page_style_value']['value'] = array(
    'new' => 'new',
  );

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: FAQ Links */
  $handler->display->display_options['fields']['field_service_faq_links']['id'] = 'field_service_faq_links';
  $handler->display->display_options['fields']['field_service_faq_links']['table'] = 'field_data_field_service_faq_links';
  $handler->display->display_options['fields']['field_service_faq_links']['field'] = 'field_service_faq_links';
  $handler->display->display_options['fields']['field_service_faq_links']['label'] = '';
  $handler->display->display_options['fields']['field_service_faq_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_faq_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_service_faq_links']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_service_faq_links']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'service_page' => 'service_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: FAQ Links (field_service_faq_links:url) */
  $handler->display->display_options['filters']['field_service_faq_links_url']['id'] = 'field_service_faq_links_url';
  $handler->display->display_options['filters']['field_service_faq_links_url']['table'] = 'field_data_field_service_faq_links';
  $handler->display->display_options['filters']['field_service_faq_links_url']['field'] = 'field_service_faq_links_url';
  $handler->display->display_options['filters']['field_service_faq_links_url']['operator'] = 'not empty';
  /* Filter criterion: Content: Style (field_page_style) */
  $handler->display->display_options['filters']['field_page_style_value']['id'] = 'field_page_style_value';
  $handler->display->display_options['filters']['field_page_style_value']['table'] = 'field_data_field_page_style';
  $handler->display->display_options['filters']['field_page_style_value']['field'] = 'field_page_style_value';
  $handler->display->display_options['filters']['field_page_style_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_page_style_value']['value'] = array(
    'new' => 'new',
  );
  $handler->display->display_options['displays'] = array(
    'block' => 'block',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $export['service_links_support_and_faq'] = $view;

  $view = new view();
  $view->name = 'service_page_related_services';
  $view->description = '';
  $view->tag = 'service_page';
  $view->base_table = 'node';
  $view->human_name = 'Service Home Page: Related Services';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related Services';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_services_target_id']['id'] = 'field_services_target_id';
  $handler->display->display_options['relationships']['field_services_target_id']['table'] = 'field_data_field_services';
  $handler->display->display_options['relationships']['field_services_target_id']['field'] = 'field_services_target_id';
  /* Field: Content: Related Services */
  $handler->display->display_options['fields']['field_services']['id'] = 'field_services';
  $handler->display->display_options['fields']['field_services']['table'] = 'field_data_field_services';
  $handler->display->display_options['fields']['field_services']['field'] = 'field_services';
  $handler->display->display_options['fields']['field_services']['label'] = '';
  $handler->display->display_options['fields']['field_services']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_services']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_services']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_services']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_services']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_services']['delta_offset'] = '0';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'service_page' => 'service_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Related Services (field_services) */
  $handler->display->display_options['filters']['field_services_target_id']['id'] = 'field_services_target_id';
  $handler->display->display_options['filters']['field_services_target_id']['table'] = 'field_data_field_services';
  $handler->display->display_options['filters']['field_services_target_id']['field'] = 'field_services_target_id';
  $handler->display->display_options['filters']['field_services_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_services_target_id']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_services_target_id';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Style (field_page_style) */
  $handler->display->display_options['filters']['field_page_style_value']['id'] = 'field_page_style_value';
  $handler->display->display_options['filters']['field_page_style_value']['table'] = 'field_data_field_page_style';
  $handler->display->display_options['filters']['field_page_style_value']['field'] = 'field_page_style_value';
  $handler->display->display_options['filters']['field_page_style_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_page_style_value']['value'] = array(
    'new' => 'new',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<i class="fa fa-info-circle fa-4x pull-left"></i>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $export['service_page_related_services'] = $view;

  return $export;
}
