<?php
echo "<head><title>Guest Book</title></head>";

$fp = fopen("guestbook", "r");

echo "<table border=0>";

while ($isi = fgets($fp, 80)) {
    $pisah = explode("|", $isi);

    echo "<tr><td>Nama </td><td>: $pisah[0]</td></tr>";
    echo "<tr><td>Alamat </td><td>: $pisah[1]</td></tr>";
    echo "<tr><td>Email </td><td>: $pisah[2]</td></tr>";
    echo "<tr><td>Upload </td><td>: $pisah[3]</td></tr>";
    echo "<tr><td>Status </td><td>: $pisah[4]</td></tr>";
    echo "<tr><td>Upload Buku </td><td>: $pisah[5]</td></tr>";
    echo "<tr><td>&nbsp; <hr></td><td>&nbsp;<hr></td></tr>";
}
echo "</table>";
echo "<a href='post.html'>Klik Disini</a><br>Isi Form Simpan Buku";
