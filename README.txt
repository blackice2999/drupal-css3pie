// $Id$

*CSS3PIE*

a very simple Drupal module to implement the css3pie.com javascript to your drupal and
make the css selectors configurable over ui. This module creates a real css file on drupal
files folder and add them via drupal_add_css.

The module also implement a hook_css3pie() so your module can provide css selectors like that.

hook_css3pie() {
  return array('yourmodulename' => array(
    '.class1', '.class2', '.class3',
  ));
}


The result of the css is very simple:

CSS file:
-----
.myclass1, .myclass2, #myId1, #myId1 > .myclass3
{
  behaviour: url(/sites/all/libraries/PIE/PIE.htc);
}
----