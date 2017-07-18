<?php

/**
 * @file
 * Defines a naked two-column layout with a subcolumn bar.
 */

// Plugin definition.
$plugin = array(
  'title' => t('CaliDance ACT website'),
  'category' => t('calidance'),
  'icon' => 'calidance-act_website.png',
  'theme' => 'calidance-act_website',
  'regions' => array(
    'center' => t('Center'),
    'left-sidebar' => t('Left Sidebar'),
    'right-sidebar' => t('Right Sidebar'),
    'footer' => t('Footer'),
  ),
);