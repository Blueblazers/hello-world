<?php
	
$con = mysqli_connect('localhost','id13687949_customer_info', '&U!g(e(5{iHY7@*1', 'id13687949_customers');

if($con){
	echo "Connection Succesful";
}
else{
	echo "Connection Unsuccesful";
}

mysqli_select_db($con,'id13687949_customers');

$user = $_POST['fname'];
$phone = $_POST['phone'];
$email = $_POST['email'];
$comment = $_POST['message'];


$query = "insert into customer_details(Name, Phone, Email, Comments) values ('$user','$phone', '$email', '$comment')";


echo "$query";
mysqli_query($con, $query);

echo "<script>window.location = 'https://testingdeyhardware.000webhostapp.com/contact.php'</script>";


?>