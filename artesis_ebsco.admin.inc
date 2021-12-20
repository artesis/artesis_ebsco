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
    '#description' => t('URL to EBSCO search service. Defaults to <strong>https://search.ebscohost.com/login.aspx?authtype=ip,uid&direct=true&profile=ehost<strong>'),
    '#default_value' => variable_get('ebsco_url', 'https://search.ebscohost.com/login.aspx?authtype=ip,uid&direct=true&profile=ehost'),
  ];

  return system_settings_form($form);
}
