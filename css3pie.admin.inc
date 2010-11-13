<?php
// $Id$

/**
 *  CSS3PIE Administrative settings form
 */
function css3pie_admin() {
 $form = array();

  $form['css3pie_css_selectors'] = array(
    '#type' => 'textarea',
    '#title' => t('CSS Selectors'),
    '#cols' => 40,
    '#rows' => 3,
    '#prefix' => '<div class="css3pie-selector">',
    '#suffix' => '</div>',
    '#default_value' => variable_get('css3pie_css_selectors', ''),
    '#description' => t('Use normal CSS Selectors here .class or #id use new line per selector'),
  );

  $form['css3pie_css_comment'] = array(
    '#type' => 'select',
    '#title' => t('Display namespace as comment in css file'),
    '#description' => t('renders the used namespace names in to css as comment'),
    '#default_value' => variable_get('css3pie_css_comment', TRUE),
    '#options' => array(
      FALSE => t('No'),
      TRUE => t('Yes'),
    ),
  );

  $form['css3pie_css_use_php_wrapper'] = array(
    '#type' => 'select',
    '#title' => t(),
    '#description' => t(),
    '#default_value' => variable_get('css3pie_css_use_php_wrapper', FALSE),
    '#options' => array(
      FALSE => t('No'),
      TRUE => t('Yes'),
    ),
  );

 return system_settings_form($form);
}