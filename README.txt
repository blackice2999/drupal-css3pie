// $Id$

*CSS3PIE*

a very simple Drupal module to implement the css3pie.com javascript to your drupal and
make the css selectors configurable over ui. This module creates a real css file on drupal
files folder and add them via drupal_add_css.

You can use it also via a API function.

css3pie_add_pie($selectors, 'yourmodulename');

$selectors is a array with multible selectors

$selectora = array(
  array('selector' => '.myclass1'),
  array('selector' => '.myclass2'),
  array('selector' => '#myId1'),
  array('selector' => '#myId1 > .myclass3'),
);

The result of the css is very simple:

CSS file:
-----
.myclass1, .myclass2, #myId1, #myId1 > .myclass3
{
  behaviour: url(/sites/all/libraries/PIE/PIE.htc);
}
----