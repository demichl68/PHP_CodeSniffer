<?php
$i = 0;
do {
    echo $i;
} while ($i > 0);

do
{
    echo $i;
} while ($i > 0);

do
{
    echo $i;
}
while ($i > 0);

do { echo $i; } while ($i > 0);

do{
    echo $i;
}while($i > 0);

while ($i < 1) {
    echo $i;
}

while($i < 1){
    echo $i;
}

while ($i < 1) { echo $i; }

for ($i = 1; $i < 1; $i++) {
    echo $i;
}

for($i = 1; $i < 1; $i++){
    echo $i;
}

for ($i = 1; $i < 1; $i++) { echo $i; }

if ($i == 0) {
    $i = 1;
}

if($i == 0){
    $i = 1;
}

if ($i == 0) { $i = 1; }

if ($i == 0) {
    $i = 1;
} else {
    $i = 0;
}

if ($i == 0) {
    $i = 1;
}else{
    $i = 0;
}

if ($i == 0) { $i = 1; } else { $i = 0; }

if ($i == 0) {
    $i = 1;
} else if ($i == 2) {
    $i = 0;
}

if ($i == 0) {
    $i = 1;
}else   if($i == 2){
    $i = 0;
}

if ($i == 0) { $i = 1; } else if ($i == 2) { $i = 0; }

if ($i == 0) { // comments are not allowed
    $i = 1;
}

if ($i == 0) {// comments are not allowed
    $i = 1;
}

if ($i == 0) { /* comments are not allowed*/
    $i = 1;
}

if ($i == 0)
{ // this is not ok
    $i = 1;
}

if ($i == 0) /* this is not ok */ {
}

try {
    $code = 'this';
} catch (Exception $e) {
    // Caught!
}

try { $code = 'this'; } catch (Exception $e) {
    // Caught!
}

do { echo $i;
} while ($i > 0);

if ($i === 0) {

    $i = 1
}

if ($a) {

}
elseif ($b) {
}

foreach ($items as $item) {
    echo $item;
}

foreach($items as $item){
    echo $item;
}

if ($a && $b) // && $c)
{
}
