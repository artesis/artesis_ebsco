<?php

/**
 * @file
 * EBSCO module administration.
 */

/**
 * EBSCO Service settings form.
 */
function artesis_ebsco_admin_form($form, &$form_state) {
  $form['ebsco_url'] = [
    '#type' => 'textfield',
    '#title' => t('EBSCO Url'),
    '#description' => t('URL to EBSCO search service. Defaults to <strong>@service_url<strong>', [
      '@service_url' => ARTESIS_EBSCO_SERVICE_URL,
    ]),
    '#default_value' => variable_get('ebsco_url', ARTESIS_EBSCO_SERVICE_URL),
  ];

  return system_settings_form($form);
}
