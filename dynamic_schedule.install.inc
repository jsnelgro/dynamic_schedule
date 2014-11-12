$content['type']  = array (
  'name' => 'Available Times',
  'type' => 'dynamic_schedule_available',
  'description' => 'A collection of times indicating when your organization opens and closes each day.',
  'title_label' => 'Schedule Name',
  'body_label' => 'Ignore this field',
  'min_word_count' => '0',
  'help' => 'First select which page this data will be displayed on, then select the times that you open and close each day.',
  'node_options' => 
  array (
    'status' => false,
    'promote' => false,
    'sticky' => false,
    'revision' => false,
  ),
  'language_content_type' => '0',
  'upload' => '0',
  'old_type' => 'dynamic_schedule_available',
  'orig_type' => '',
  'module' => 'node',
  'custom' => '1',
  'modified' => '1',
  'locked' => '0',
  'comment' => '0',
  'comment_default_mode' => '4',
  'comment_default_order' => '1',
  'comment_default_per_page' => '50',
  'comment_controls' => '3',
  'comment_anonymous' => 0,
  'comment_subject_field' => '0',
  'comment_preview' => '1',
  'comment_form_location' => '0',
);
$content['groups']  = array (
  0 => 
  array (
    'label' => 'Hours',
    'group_type' => 'standard',
    'settings' => 
    array (
      'form' => 
      array (
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => 
      array (
        'description' => '',
        'teaser' => 
        array (
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => 
        array (
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        4 => 
        array (
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '-2',
    'group_name' => 'group_days',
  ),
);
$content['fields']  = array (
  0 => 
  array (
    'label' => 'Pages',
    'field_name' => 'field_dyn_sch_page',
    'type' => 'text',
    'widget_type' => 'optionwidgets_select',
    'change' => 'Change basic information',
    'weight' => '-3',
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'value' => '',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => NULL,
    'group' => false,
    'required' => 1,
    'multiple' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '//unavailable pages query
$in_use_sql = \'SELECT field_dyn_sch_page_value FROM content_field_dyn_sch_page\';
//pages query
$pages_sql = "SELECT nid FROM node WHERE type = \\"page\\"";

//run the queries
$in_use_result = db_query($in_use_sql);
$pages_result = db_query($pages_sql);
$used_by_this_type = array();
//check which pages are already in use by this content type
//TODO I think theres a bug somewhere around here, so its not getting the currently used pages
//and displaying them as selections too
for ($i=0; $i < count(menu_get_object()->field_dyn_sch_page); $i++) { 
  $value = menu_get_object()->field_dyn_sch_page[$i]["value"];
  $used_by_this_type[$value] = $value;
}

//create an array of unavailable page nodes, excluding the pages this type is already linked to
$used_pages = array();
while($used = db_result($in_use_result)) {
  if($used != $used_by_this_type[$used]) {
    $used_pages[$used] = $used;
  }
}

//create the array of available pages to return
$useable_pages = array();
while($page = db_result($pages_result)) {
  if ($page != $used_pages[$page]) {
    $page_title = node_load($page)->title;
    $useable_pages[$page] = $page_title;
  }
}
return $useable_pages;',
    'op' => 'Save field settings',
    'module' => 'text',
    'widget_module' => 'optionwidgets',
    'columns' => 
    array (
      'value' => 
      array (
        'type' => 'text',
        'size' => 'big',
        'not null' => false,
        'sortable' => true,
        'views' => true,
      ),
    ),
    'display_settings' => 
    array (
      'label' => 
      array (
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
  1 => 
  array (
    'label' => 'Monday Open',
    'field_name' => 'field_monday',
    'type' => 'text',
    'widget_type' => 'optionwidgets_select',
    'change' => 'Change basic information',
    'weight' => '-3',
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'value' => '9:00 am',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => NULL,
    'group' => 'group_days',
    'required' => 1,
    'multiple' => '0',
    'text_processing' => '0',
    'max_length' => '25',
    'allowed_values' => 'closed|closed
1:00 am|1:00 am
1:30 am|1:30 am
2:00 am|2:00 am
2:30 am|2:30 am
3:00 am|3:00 am
3:30 am|3:30 am
4:00 am|4:00 am
4:30 am|4:30 am
5:00 am|5:00 am
5:30 am|5:30 am
6:00 am|6:00 am
6:30 am|6:30 am
7:00 am|7:00 am
7:30 am|7:30 am
8:00 am|8:00 am
8:30 am|8:30 am
9:00 am|9:00 am
9:30 am|9:30 am
10:00 am|10:00 am
10:30 am|10:30 am
11:00 am|11:00 am
11:30 am|11:30 am
12:00 pm|12:00 pm
12:30 pm|12:30 pm
1:00 pm|1:00 pm
1:30 pm|1:30 pm
2:00 pm|2:00 pm
2:30 pm|2:30 pm
3:00 pm|3:00 pm
3:30 pm|3:30 pm
4:00 pm|4:00 pm
4:30 pm|4:30 pm
5:00 pm|5:00 pm
5:30 pm|5:30 pm
6:00 pm|6:00 pm
6:30 pm|6:30 pm
7:00 pm|7:00 pm
7:30 pm|7:30 pm
8:00 pm|8:00 pm
8:30 pm|8:30 pm
9:00 pm|9:00 pm
9:30 pm|9:30 pm
10:00 pm|10:00 pm
10:30 pm|10:30 pm
11:00 pm|11:00 pm
11:30 pm|11:30 pm
12:00 pm|12:00 pm
12:30 pm|12:30 pm',
    'allowed_values_php' => '',
    'op' => 'Save field settings',
    'module' => 'text',
    'widget_module' => 'optionwidgets',
    'columns' => 
    array (
      'value' => 
      array (
        'type' => 'varchar',
        'length' => '25',
        'not null' => false,
        'sortable' => true,
        'views' => true,
      ),
    ),
    'display_settings' => 
    array (
      'weight' => '-3',
      'parent' => 'group_days',
      'label' => 
      array (
        'format' => 'above',
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
  2 => 
  array (
    'label' => 'Monday Close',
    'field_name' => 'field_monday_close',
    'type' => 'text',
    'widget_type' => 'optionwidgets_select',
    'change' => 'Change basic information',
    'weight' => '-2',
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'value' => '5:00 pm',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => NULL,
    'group' => 'group_days',
    'required' => 1,
    'multiple' => '0',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'closed|closed
1:00 am|1:00 am
1:30 am|1:30 am
2:00 am|2:00 am
2:30 am|2:30 am
3:00 am|3:00 am
3:30 am|3:30 am
4:00 am|4:00 am
4:30 am|4:30 am
5:00 am|5:00 am
5:30 am|5:30 am
6:00 am|6:00 am
6:30 am|6:30 am
7:00 am|7:00 am
7:30 am|7:30 am
8:00 am|8:00 am
8:30 am|8:30 am
9:00 am|9:00 am
9:30 am|9:30 am
10:00 am|10:00 am
10:30 am|10:30 am
11:00 am|11:00 am
11:30 am|11:30 am
12:00 pm|12:00 pm
12:30 pm|12:30 pm
1:00 pm|1:00 pm
1:30 pm|1:30 pm
2:00 pm|2:00 pm
2:30 pm|2:30 pm
3:00 pm|3:00 pm
3:30 pm|3:30 pm
4:00 pm|4:00 pm
4:30 pm|4:30 pm
5:00 pm|5:00 pm
5:30 pm|5:30 pm
6:00 pm|6:00 pm
6:30 pm|6:30 pm
7:00 pm|7:00 pm
7:30 pm|7:30 pm
8:00 pm|8:00 pm
8:30 pm|8:30 pm
9:00 pm|9:00 pm
9:30 pm|9:30 pm
10:00 pm|10:00 pm
10:30 pm|10:30 pm
11:00 pm|11:00 pm
11:30 pm|11:30 pm
12:00 pm|12:00 pm
12:30 pm|12:30 pm',
    'allowed_values_php' => '',
    'op' => 'Save field settings',
    'module' => 'text',
    'widget_module' => 'optionwidgets',
    'columns' => 
    array (
      'value' => 
      array (
        'type' => 'text',
        'size' => 'big',
        'not null' => false,
        'sortable' => true,
        'views' => true,
      ),
    ),
    'display_settings' => 
    array (
      'label' => 
      array (
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
  3 => 
  array (
    'label' => 'Tuesday Open',
    'field_name' => 'field_tuesday',
    'type' => 'text',
    'widget_type' => 'optionwidgets_select',
    'change' => 'Change basic information',
    'weight' => 0,
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'value' => '9:00 am',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => NULL,
    'group' => 'group_days',
    'required' => 1,
    'multiple' => '0',
    'text_processing' => '0',
    'max_length' => '25',
    'allowed_values' => 'closed|closed
1:00 am|1:00 am
1:30 am|1:30 am
2:00 am|2:00 am
2:30 am|2:30 am
3:00 am|3:00 am
3:30 am|3:30 am
4:00 am|4:00 am
4:30 am|4:30 am
5:00 am|5:00 am
5:30 am|5:30 am
6:00 am|6:00 am
6:30 am|6:30 am
7:00 am|7:00 am
7:30 am|7:30 am
8:00 am|8:00 am
8:30 am|8:30 am
9:00 am|9:00 am
9:30 am|9:30 am
10:00 am|10:00 am
10:30 am|10:30 am
11:00 am|11:00 am
11:30 am|11:30 am
12:00 pm|12:00 pm
12:30 pm|12:30 pm
1:00 pm|1:00 pm
1:30 pm|1:30 pm
2:00 pm|2:00 pm
2:30 pm|2:30 pm
3:00 pm|3:00 pm
3:30 pm|3:30 pm
4:00 pm|4:00 pm
4:30 pm|4:30 pm
5:00 pm|5:00 pm
5:30 pm|5:30 pm
6:00 pm|6:00 pm
6:30 pm|6:30 pm
7:00 pm|7:00 pm
7:30 pm|7:30 pm
8:00 pm|8:00 pm
8:30 pm|8:30 pm
9:00 pm|9:00 pm
9:30 pm|9:30 pm
10:00 pm|10:00 pm
10:30 pm|10:30 pm
11:00 pm|11:00 pm
11:30 pm|11:30 pm
12:00 pm|12:00 pm
12:30 pm|12:30 pm',
    'allowed_values_php' => '',
    'op' => 'Save field settings',
    'module' => 'text',
    'widget_module' => 'optionwidgets',
    'columns' => 
    array (
      'value' => 
      array (
        'type' => 'varchar',
        'length' => '25',
        'not null' => false,
        'sortable' => true,
        'views' => true,
      ),
    ),
    'display_settings' => 
    array (
      'weight' => '-2',
      'parent' => 'group_days',
      'label' => 
      array (
        'format' => 'above',
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
  4 => 
  array (
    'label' => 'Tuesday Close',
    'field_name' => 'field_tuesday_close',
    'type' => 'text',
    'widget_type' => 'optionwidgets_select',
    'change' => 'Change basic information',
    'weight' => '1',
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'value' => '5:00 pm',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => NULL,
    'group' => 'group_days',
    'required' => 1,
    'multiple' => '0',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'closed|closed
1:00 am|1:00 am
1:30 am|1:30 am
2:00 am|2:00 am
2:30 am|2:30 am
3:00 am|3:00 am
3:30 am|3:30 am
4:00 am|4:00 am
4:30 am|4:30 am
5:00 am|5:00 am
5:30 am|5:30 am
6:00 am|6:00 am
6:30 am|6:30 am
7:00 am|7:00 am
7:30 am|7:30 am
8:00 am|8:00 am
8:30 am|8:30 am
9:00 am|9:00 am
9:30 am|9:30 am
10:00 am|10:00 am
10:30 am|10:30 am
11:00 am|11:00 am
11:30 am|11:30 am
12:00 pm|12:00 pm
12:30 pm|12:30 pm
1:00 pm|1:00 pm
1:30 pm|1:30 pm
2:00 pm|2:00 pm
2:30 pm|2:30 pm
3:00 pm|3:00 pm
3:30 pm|3:30 pm
4:00 pm|4:00 pm
4:30 pm|4:30 pm
5:00 pm|5:00 pm
5:30 pm|5:30 pm
6:00 pm|6:00 pm
6:30 pm|6:30 pm
7:00 pm|7:00 pm
7:30 pm|7:30 pm
8:00 pm|8:00 pm
8:30 pm|8:30 pm
9:00 pm|9:00 pm
9:30 pm|9:30 pm
10:00 pm|10:00 pm
10:30 pm|10:30 pm
11:00 pm|11:00 pm
11:30 pm|11:30 pm
12:00 pm|12:00 pm
12:30 pm|12:30 pm',
    'allowed_values_php' => '',
    'op' => 'Save field settings',
    'module' => 'text',
    'widget_module' => 'optionwidgets',
    'columns' => 
    array (
      'value' => 
      array (
        'type' => 'text',
        'size' => 'big',
        'not null' => false,
        'sortable' => true,
        'views' => true,
      ),
    ),
    'display_settings' => 
    array (
      'label' => 
      array (
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
  5 => 
  array (
    'label' => 'Wednesday Open',
    'field_name' => 'field_wednesday',
    'type' => 'text',
    'widget_type' => 'optionwidgets_select',
    'change' => 'Change basic information',
    'weight' => '2',
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'value' => '9:00 am',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => NULL,
    'group' => 'group_days',
    'required' => 1,
    'multiple' => '0',
    'text_processing' => '0',
    'max_length' => '25',
    'allowed_values' => 'closed|closed
1:00 am|1:00 am
1:30 am|1:30 am
2:00 am|2:00 am
2:30 am|2:30 am
3:00 am|3:00 am
3:30 am|3:30 am
4:00 am|4:00 am
4:30 am|4:30 am
5:00 am|5:00 am
5:30 am|5:30 am
6:00 am|6:00 am
6:30 am|6:30 am
7:00 am|7:00 am
7:30 am|7:30 am
8:00 am|8:00 am
8:30 am|8:30 am
9:00 am|9:00 am
9:30 am|9:30 am
10:00 am|10:00 am
10:30 am|10:30 am
11:00 am|11:00 am
11:30 am|11:30 am
12:00 pm|12:00 pm
12:30 pm|12:30 pm
1:00 pm|1:00 pm
1:30 pm|1:30 pm
2:00 pm|2:00 pm
2:30 pm|2:30 pm
3:00 pm|3:00 pm
3:30 pm|3:30 pm
4:00 pm|4:00 pm
4:30 pm|4:30 pm
5:00 pm|5:00 pm
5:30 pm|5:30 pm
6:00 pm|6:00 pm
6:30 pm|6:30 pm
7:00 pm|7:00 pm
7:30 pm|7:30 pm
8:00 pm|8:00 pm
8:30 pm|8:30 pm
9:00 pm|9:00 pm
9:30 pm|9:30 pm
10:00 pm|10:00 pm
10:30 pm|10:30 pm
11:00 pm|11:00 pm
11:30 pm|11:30 pm
12:00 pm|12:00 pm
12:30 pm|12:30 pm',
    'allowed_values_php' => '',
    'op' => 'Save field settings',
    'module' => 'text',
    'widget_module' => 'optionwidgets',
    'columns' => 
    array (
      'value' => 
      array (
        'type' => 'varchar',
        'length' => '25',
        'not null' => false,
        'sortable' => true,
        'views' => true,
      ),
    ),
    'display_settings' => 
    array (
      'weight' => '-1',
      'parent' => 'group_days',
      'label' => 
      array (
        'format' => 'above',
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
  6 => 
  array (
    'label' => 'Wednesday Close',
    'field_name' => 'field_wednesday_close',
    'type' => 'text',
    'widget_type' => 'optionwidgets_select',
    'change' => 'Change basic information',
    'weight' => '3',
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'value' => '5:00 pm',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => NULL,
    'group' => 'group_days',
    'required' => 1,
    'multiple' => '0',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'closed|closed
1:00 am|1:00 am
1:30 am|1:30 am
2:00 am|2:00 am
2:30 am|2:30 am
3:00 am|3:00 am
3:30 am|3:30 am
4:00 am|4:00 am
4:30 am|4:30 am
5:00 am|5:00 am
5:30 am|5:30 am
6:00 am|6:00 am
6:30 am|6:30 am
7:00 am|7:00 am
7:30 am|7:30 am
8:00 am|8:00 am
8:30 am|8:30 am
9:00 am|9:00 am
9:30 am|9:30 am
10:00 am|10:00 am
10:30 am|10:30 am
11:00 am|11:00 am
11:30 am|11:30 am
12:00 pm|12:00 pm
12:30 pm|12:30 pm
1:00 pm|1:00 pm
1:30 pm|1:30 pm
2:00 pm|2:00 pm
2:30 pm|2:30 pm
3:00 pm|3:00 pm
3:30 pm|3:30 pm
4:00 pm|4:00 pm
4:30 pm|4:30 pm
5:00 pm|5:00 pm
5:30 pm|5:30 pm
6:00 pm|6:00 pm
6:30 pm|6:30 pm
7:00 pm|7:00 pm
7:30 pm|7:30 pm
8:00 pm|8:00 pm
8:30 pm|8:30 pm
9:00 pm|9:00 pm
9:30 pm|9:30 pm
10:00 pm|10:00 pm
10:30 pm|10:30 pm
11:00 pm|11:00 pm
11:30 pm|11:30 pm
12:00 pm|12:00 pm
12:30 pm|12:30 pm',
    'allowed_values_php' => '',
    'op' => 'Save field settings',
    'module' => 'text',
    'widget_module' => 'optionwidgets',
    'columns' => 
    array (
      'value' => 
      array (
        'type' => 'text',
        'size' => 'big',
        'not null' => false,
        'sortable' => true,
        'views' => true,
      ),
    ),
    'display_settings' => 
    array (
      'label' => 
      array (
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
  7 => 
  array (
    'label' => 'Thursday Open',
    'field_name' => 'field_thursday',
    'type' => 'text',
    'widget_type' => 'optionwidgets_select',
    'change' => 'Change basic information',
    'weight' => '4',
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'value' => '9:00 am',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => NULL,
    'group' => 'group_days',
    'required' => 1,
    'multiple' => '0',
    'text_processing' => '0',
    'max_length' => '25',
    'allowed_values' => 'closed|closed
1:00 am|1:00 am
1:30 am|1:30 am
2:00 am|2:00 am
2:30 am|2:30 am
3:00 am|3:00 am
3:30 am|3:30 am
4:00 am|4:00 am
4:30 am|4:30 am
5:00 am|5:00 am
5:30 am|5:30 am
6:00 am|6:00 am
6:30 am|6:30 am
7:00 am|7:00 am
7:30 am|7:30 am
8:00 am|8:00 am
8:30 am|8:30 am
9:00 am|9:00 am
9:30 am|9:30 am
10:00 am|10:00 am
10:30 am|10:30 am
11:00 am|11:00 am
11:30 am|11:30 am
12:00 pm|12:00 pm
12:30 pm|12:30 pm
1:00 pm|1:00 pm
1:30 pm|1:30 pm
2:00 pm|2:00 pm
2:30 pm|2:30 pm
3:00 pm|3:00 pm
3:30 pm|3:30 pm
4:00 pm|4:00 pm
4:30 pm|4:30 pm
5:00 pm|5:00 pm
5:30 pm|5:30 pm
6:00 pm|6:00 pm
6:30 pm|6:30 pm
7:00 pm|7:00 pm
7:30 pm|7:30 pm
8:00 pm|8:00 pm
8:30 pm|8:30 pm
9:00 pm|9:00 pm
9:30 pm|9:30 pm
10:00 pm|10:00 pm
10:30 pm|10:30 pm
11:00 pm|11:00 pm
11:30 pm|11:30 pm
12:00 pm|12:00 pm
12:30 pm|12:30 pm',
    'allowed_values_php' => '',
    'op' => 'Save field settings',
    'module' => 'text',
    'widget_module' => 'optionwidgets',
    'columns' => 
    array (
      'value' => 
      array (
        'type' => 'varchar',
        'length' => '25',
        'not null' => false,
        'sortable' => true,
        'views' => true,
      ),
    ),
    'display_settings' => 
    array (
      'weight' => 0,
      'parent' => 'group_days',
      'label' => 
      array (
        'format' => 'above',
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
  8 => 
  array (
    'label' => 'Thursday Close',
    'field_name' => 'field_thursday_close',
    'type' => 'text',
    'widget_type' => 'optionwidgets_select',
    'change' => 'Change basic information',
    'weight' => '5',
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'value' => '5:00 pm',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => NULL,
    'group' => 'group_days',
    'required' => 1,
    'multiple' => '0',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'closed|closed
1:00 am|1:00 am
1:30 am|1:30 am
2:00 am|2:00 am
2:30 am|2:30 am
3:00 am|3:00 am
3:30 am|3:30 am
4:00 am|4:00 am
4:30 am|4:30 am
5:00 am|5:00 am
5:30 am|5:30 am
6:00 am|6:00 am
6:30 am|6:30 am
7:00 am|7:00 am
7:30 am|7:30 am
8:00 am|8:00 am
8:30 am|8:30 am
9:00 am|9:00 am
9:30 am|9:30 am
10:00 am|10:00 am
10:30 am|10:30 am
11:00 am|11:00 am
11:30 am|11:30 am
12:00 pm|12:00 pm
12:30 pm|12:30 pm
1:00 pm|1:00 pm
1:30 pm|1:30 pm
2:00 pm|2:00 pm
2:30 pm|2:30 pm
3:00 pm|3:00 pm
3:30 pm|3:30 pm
4:00 pm|4:00 pm
4:30 pm|4:30 pm
5:00 pm|5:00 pm
5:30 pm|5:30 pm
6:00 pm|6:00 pm
6:30 pm|6:30 pm
7:00 pm|7:00 pm
7:30 pm|7:30 pm
8:00 pm|8:00 pm
8:30 pm|8:30 pm
9:00 pm|9:00 pm
9:30 pm|9:30 pm
10:00 pm|10:00 pm
10:30 pm|10:30 pm
11:00 pm|11:00 pm
11:30 pm|11:30 pm
12:00 pm|12:00 pm
12:30 pm|12:30 pm',
    'allowed_values_php' => '',
    'op' => 'Save field settings',
    'module' => 'text',
    'widget_module' => 'optionwidgets',
    'columns' => 
    array (
      'value' => 
      array (
        'type' => 'text',
        'size' => 'big',
        'not null' => false,
        'sortable' => true,
        'views' => true,
      ),
    ),
    'display_settings' => 
    array (
      'label' => 
      array (
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
  9 => 
  array (
    'label' => 'Friday Open',
    'field_name' => 'field_friday',
    'type' => 'text',
    'widget_type' => 'optionwidgets_select',
    'change' => 'Change basic information',
    'weight' => '6',
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'value' => '9:00 am',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => NULL,
    'group' => 'group_days',
    'required' => 1,
    'multiple' => '0',
    'text_processing' => '0',
    'max_length' => '25',
    'allowed_values' => 'closed|closed
1:00 am|1:00 am
1:30 am|1:30 am
2:00 am|2:00 am
2:30 am|2:30 am
3:00 am|3:00 am
3:30 am|3:30 am
4:00 am|4:00 am
4:30 am|4:30 am
5:00 am|5:00 am
5:30 am|5:30 am
6:00 am|6:00 am
6:30 am|6:30 am
7:00 am|7:00 am
7:30 am|7:30 am
8:00 am|8:00 am
8:30 am|8:30 am
9:00 am|9:00 am
9:30 am|9:30 am
10:00 am|10:00 am
10:30 am|10:30 am
11:00 am|11:00 am
11:30 am|11:30 am
12:00 pm|12:00 pm
12:30 pm|12:30 pm
1:00 pm|1:00 pm
1:30 pm|1:30 pm
2:00 pm|2:00 pm
2:30 pm|2:30 pm
3:00 pm|3:00 pm
3:30 pm|3:30 pm
4:00 pm|4:00 pm
4:30 pm|4:30 pm
5:00 pm|5:00 pm
5:30 pm|5:30 pm
6:00 pm|6:00 pm
6:30 pm|6:30 pm
7:00 pm|7:00 pm
7:30 pm|7:30 pm
8:00 pm|8:00 pm
8:30 pm|8:30 pm
9:00 pm|9:00 pm
9:30 pm|9:30 pm
10:00 pm|10:00 pm
10:30 pm|10:30 pm
11:00 pm|11:00 pm
11:30 pm|11:30 pm
12:00 pm|12:00 pm
12:30 pm|12:30 pm',
    'allowed_values_php' => '',
    'op' => 'Save field settings',
    'module' => 'text',
    'widget_module' => 'optionwidgets',
    'columns' => 
    array (
      'value' => 
      array (
        'type' => 'varchar',
        'length' => '25',
        'not null' => false,
        'sortable' => true,
        'views' => true,
      ),
    ),
    'display_settings' => 
    array (
      'weight' => '1',
      'parent' => 'group_days',
      'label' => 
      array (
        'format' => 'above',
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
  10 => 
  array (
    'label' => 'Friday Close',
    'field_name' => 'field_friday_close',
    'type' => 'text',
    'widget_type' => 'optionwidgets_select',
    'change' => 'Change basic information',
    'weight' => '7',
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'value' => '5:00 pm',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => NULL,
    'group' => 'group_days',
    'required' => 1,
    'multiple' => '0',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'closed|closed
1:00 am|1:00 am
1:30 am|1:30 am
2:00 am|2:00 am
2:30 am|2:30 am
3:00 am|3:00 am
3:30 am|3:30 am
4:00 am|4:00 am
4:30 am|4:30 am
5:00 am|5:00 am
5:30 am|5:30 am
6:00 am|6:00 am
6:30 am|6:30 am
7:00 am|7:00 am
7:30 am|7:30 am
8:00 am|8:00 am
8:30 am|8:30 am
9:00 am|9:00 am
9:30 am|9:30 am
10:00 am|10:00 am
10:30 am|10:30 am
11:00 am|11:00 am
11:30 am|11:30 am
12:00 pm|12:00 pm
12:30 pm|12:30 pm
1:00 pm|1:00 pm
1:30 pm|1:30 pm
2:00 pm|2:00 pm
2:30 pm|2:30 pm
3:00 pm|3:00 pm
3:30 pm|3:30 pm
4:00 pm|4:00 pm
4:30 pm|4:30 pm
5:00 pm|5:00 pm
5:30 pm|5:30 pm
6:00 pm|6:00 pm
6:30 pm|6:30 pm
7:00 pm|7:00 pm
7:30 pm|7:30 pm
8:00 pm|8:00 pm
8:30 pm|8:30 pm
9:00 pm|9:00 pm
9:30 pm|9:30 pm
10:00 pm|10:00 pm
10:30 pm|10:30 pm
11:00 pm|11:00 pm
11:30 pm|11:30 pm
12:00 pm|12:00 pm
12:30 pm|12:30 pm',
    'allowed_values_php' => '',
    'op' => 'Save field settings',
    'module' => 'text',
    'widget_module' => 'optionwidgets',
    'columns' => 
    array (
      'value' => 
      array (
        'type' => 'text',
        'size' => 'big',
        'not null' => false,
        'sortable' => true,
        'views' => true,
      ),
    ),
    'display_settings' => 
    array (
      'label' => 
      array (
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
  11 => 
  array (
    'label' => 'Saturday Open',
    'field_name' => 'field_saturday',
    'type' => 'text',
    'widget_type' => 'optionwidgets_select',
    'change' => 'Change basic information',
    'weight' => '8',
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'value' => 'closed',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => NULL,
    'group' => 'group_days',
    'required' => 1,
    'multiple' => '0',
    'text_processing' => '0',
    'max_length' => '25',
    'allowed_values' => 'closed|closed
1:00 am|1:00 am
1:30 am|1:30 am
2:00 am|2:00 am
2:30 am|2:30 am
3:00 am|3:00 am
3:30 am|3:30 am
4:00 am|4:00 am
4:30 am|4:30 am
5:00 am|5:00 am
5:30 am|5:30 am
6:00 am|6:00 am
6:30 am|6:30 am
7:00 am|7:00 am
7:30 am|7:30 am
8:00 am|8:00 am
8:30 am|8:30 am
9:00 am|9:00 am
9:30 am|9:30 am
10:00 am|10:00 am
10:30 am|10:30 am
11:00 am|11:00 am
11:30 am|11:30 am
12:00 pm|12:00 pm
12:30 pm|12:30 pm
1:00 pm|1:00 pm
1:30 pm|1:30 pm
2:00 pm|2:00 pm
2:30 pm|2:30 pm
3:00 pm|3:00 pm
3:30 pm|3:30 pm
4:00 pm|4:00 pm
4:30 pm|4:30 pm
5:00 pm|5:00 pm
5:30 pm|5:30 pm
6:00 pm|6:00 pm
6:30 pm|6:30 pm
7:00 pm|7:00 pm
7:30 pm|7:30 pm
8:00 pm|8:00 pm
8:30 pm|8:30 pm
9:00 pm|9:00 pm
9:30 pm|9:30 pm
10:00 pm|10:00 pm
10:30 pm|10:30 pm
11:00 pm|11:00 pm
11:30 pm|11:30 pm
12:00 pm|12:00 pm
12:30 pm|12:30 pm',
    'allowed_values_php' => '',
    'op' => 'Save field settings',
    'module' => 'text',
    'widget_module' => 'optionwidgets',
    'columns' => 
    array (
      'value' => 
      array (
        'type' => 'varchar',
        'length' => '25',
        'not null' => false,
        'sortable' => true,
        'views' => true,
      ),
    ),
    'display_settings' => 
    array (
      'weight' => '2',
      'parent' => 'group_days',
      'label' => 
      array (
        'format' => 'above',
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
  12 => 
  array (
    'label' => 'Saturday Close',
    'field_name' => 'field_saturday_close',
    'type' => 'text',
    'widget_type' => 'optionwidgets_select',
    'change' => 'Change basic information',
    'weight' => '9',
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'value' => 'closed',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => NULL,
    'group' => 'group_days',
    'required' => 1,
    'multiple' => '0',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'closed|closed
1:00 am|1:00 am
1:30 am|1:30 am
2:00 am|2:00 am
2:30 am|2:30 am
3:00 am|3:00 am
3:30 am|3:30 am
4:00 am|4:00 am
4:30 am|4:30 am
5:00 am|5:00 am
5:30 am|5:30 am
6:00 am|6:00 am
6:30 am|6:30 am
7:00 am|7:00 am
7:30 am|7:30 am
8:00 am|8:00 am
8:30 am|8:30 am
9:00 am|9:00 am
9:30 am|9:30 am
10:00 am|10:00 am
10:30 am|10:30 am
11:00 am|11:00 am
11:30 am|11:30 am
12:00 pm|12:00 pm
12:30 pm|12:30 pm
1:00 pm|1:00 pm
1:30 pm|1:30 pm
2:00 pm|2:00 pm
2:30 pm|2:30 pm
3:00 pm|3:00 pm
3:30 pm|3:30 pm
4:00 pm|4:00 pm
4:30 pm|4:30 pm
5:00 pm|5:00 pm
5:30 pm|5:30 pm
6:00 pm|6:00 pm
6:30 pm|6:30 pm
7:00 pm|7:00 pm
7:30 pm|7:30 pm
8:00 pm|8:00 pm
8:30 pm|8:30 pm
9:00 pm|9:00 pm
9:30 pm|9:30 pm
10:00 pm|10:00 pm
10:30 pm|10:30 pm
11:00 pm|11:00 pm
11:30 pm|11:30 pm
12:00 pm|12:00 pm
12:30 pm|12:30 pm',
    'allowed_values_php' => '',
    'op' => 'Save field settings',
    'module' => 'text',
    'widget_module' => 'optionwidgets',
    'columns' => 
    array (
      'value' => 
      array (
        'type' => 'text',
        'size' => 'big',
        'not null' => false,
        'sortable' => true,
        'views' => true,
      ),
    ),
    'display_settings' => 
    array (
      'label' => 
      array (
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
  13 => 
  array (
    'label' => 'Sunday Open',
    'field_name' => 'field_sunday',
    'type' => 'text',
    'widget_type' => 'optionwidgets_select',
    'change' => 'Change basic information',
    'weight' => '10',
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'value' => 'closed',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => NULL,
    'group' => 'group_days',
    'required' => 1,
    'multiple' => '0',
    'text_processing' => '0',
    'max_length' => '25',
    'allowed_values' => 'closed|closed
1:00 am|1:00 am
1:30 am|1:30 am
2:00 am|2:00 am
2:30 am|2:30 am
3:00 am|3:00 am
3:30 am|3:30 am
4:00 am|4:00 am
4:30 am|4:30 am
5:00 am|5:00 am
5:30 am|5:30 am
6:00 am|6:00 am
6:30 am|6:30 am
7:00 am|7:00 am
7:30 am|7:30 am
8:00 am|8:00 am
8:30 am|8:30 am
9:00 am|9:00 am
9:30 am|9:30 am
10:00 am|10:00 am
10:30 am|10:30 am
11:00 am|11:00 am
11:30 am|11:30 am
12:00 pm|12:00 pm
12:30 pm|12:30 pm
1:00 pm|1:00 pm
1:30 pm|1:30 pm
2:00 pm|2:00 pm
2:30 pm|2:30 pm
3:00 pm|3:00 pm
3:30 pm|3:30 pm
4:00 pm|4:00 pm
4:30 pm|4:30 pm
5:00 pm|5:00 pm
5:30 pm|5:30 pm
6:00 pm|6:00 pm
6:30 pm|6:30 pm
7:00 pm|7:00 pm
7:30 pm|7:30 pm
8:00 pm|8:00 pm
8:30 pm|8:30 pm
9:00 pm|9:00 pm
9:30 pm|9:30 pm
10:00 pm|10:00 pm
10:30 pm|10:30 pm
11:00 pm|11:00 pm
11:30 pm|11:30 pm
12:00 pm|12:00 pm
12:30 pm|12:30 pm',
    'allowed_values_php' => '',
    'op' => 'Save field settings',
    'module' => 'text',
    'widget_module' => 'optionwidgets',
    'columns' => 
    array (
      'value' => 
      array (
        'type' => 'varchar',
        'length' => '25',
        'not null' => false,
        'sortable' => true,
        'views' => true,
      ),
    ),
    'display_settings' => 
    array (
      'weight' => '3',
      'parent' => 'group_days',
      'label' => 
      array (
        'format' => 'above',
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
  14 => 
  array (
    'label' => 'Sunday Close',
    'field_name' => 'field_sunday_close',
    'type' => 'text',
    'widget_type' => 'optionwidgets_select',
    'change' => 'Change basic information',
    'weight' => '11',
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'value' => 'closed',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => NULL,
    'group' => 'group_days',
    'required' => 1,
    'multiple' => '0',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'closed|closed
1:00 am|1:00 am
1:30 am|1:30 am
2:00 am|2:00 am
2:30 am|2:30 am
3:00 am|3:00 am
3:30 am|3:30 am
4:00 am|4:00 am
4:30 am|4:30 am
5:00 am|5:00 am
5:30 am|5:30 am
6:00 am|6:00 am
6:30 am|6:30 am
7:00 am|7:00 am
7:30 am|7:30 am
8:00 am|8:00 am
8:30 am|8:30 am
9:00 am|9:00 am
9:30 am|9:30 am
10:00 am|10:00 am
10:30 am|10:30 am
11:00 am|11:00 am
11:30 am|11:30 am
12:00 pm|12:00 pm
12:30 pm|12:30 pm
1:00 pm|1:00 pm
1:30 pm|1:30 pm
2:00 pm|2:00 pm
2:30 pm|2:30 pm
3:00 pm|3:00 pm
3:30 pm|3:30 pm
4:00 pm|4:00 pm
4:30 pm|4:30 pm
5:00 pm|5:00 pm
5:30 pm|5:30 pm
6:00 pm|6:00 pm
6:30 pm|6:30 pm
7:00 pm|7:00 pm
7:30 pm|7:30 pm
8:00 pm|8:00 pm
8:30 pm|8:30 pm
9:00 pm|9:00 pm
9:30 pm|9:30 pm
10:00 pm|10:00 pm
10:30 pm|10:30 pm
11:00 pm|11:00 pm
11:30 pm|11:30 pm
12:00 pm|12:00 pm
12:30 pm|12:30 pm',
    'allowed_values_php' => '',
    'op' => 'Save field settings',
    'module' => 'text',
    'widget_module' => 'optionwidgets',
    'columns' => 
    array (
      'value' => 
      array (
        'type' => 'text',
        'size' => 'big',
        'not null' => false,
        'sortable' => true,
        'views' => true,
      ),
    ),
    'display_settings' => 
    array (
      'label' => 
      array (
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
);
$content['extra']  = array (
  'title' => '-5',
  'body_field' => '4',
  'revision_information' => '1',
  'author' => '2',
  'options' => '0',
  'comment_settings' => '3',
  'menu' => '-1',
);