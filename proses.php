<?php
// Misalnya, mengambil nilai dari input form jika ada
$nama = isset($_POST['nama']) ? $_POST['nama'] : '';
$alamat = isset($_POST['alamat']) ? $_POST['alamat'] : '';
$email = isset($_POST['email']) ? $_POST['email'] : '';
$upload = isset($_POST['upload']) ? $_POST['upload'] :'';
$status = isset($_POST['status']) ? $_POST['status'] : '';
$komentar = isset($_POST['komentar']) ? $_POST['komentar'] : '';

echo "<head><title>Guest Book</title></head>";

$fp = fopen("guestbook", "a+");
fputs($fp, "$nama | $alamat | $email | $upload | $status | $komentar\n");
fclose($fp);


echo "Terima Kasih Atas Partisipasi Anda Mengisi Data Buku<br>";
echo "<a href='tampilan.html'>Isi Program Simpan Buku</a><br>";
echo "<a href='lihat.php'>Lihat Buku Tersimpan</a><br>";
