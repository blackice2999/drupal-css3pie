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
    '#title' => t('Use PHP wrapper'),
    '#description' => t('old server doesnt have the right mime type for .htc files so you can use the php wraper to simulate it.'),
    '#default_value' => variable_get('css3pie_css_use_php_wrapper', FALSE),
    '#options' => array(
      FALSE => t('No'),
      TRUE => t('Yes'),
    ),
  );

  $form['#submit'][] = 'css3pie_admin_submit';
  
 return system_settings_form($form);
}

function css3pie_admin_submit($form, &$form_state) {

  // check if submit button was pressed and rebuild the css file
  $op = isset($form_state['values']['op']) ? $form_state['values']['op'] : '';

  if ($op == t('Save configuration')) {
    _css3pie_build_css3pie_css();
  }
}