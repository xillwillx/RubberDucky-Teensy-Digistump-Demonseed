<?php
$creds = glob("*.creds");
echo '<ul>'.implode('', array_map('sprintf', array_fill(0, count($creds), '<li><a href="%s">%s</a></li>'), $creds, $creds)).'</ul>';
?>