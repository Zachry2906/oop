<?php

class Produk {
    public $judul = "judul", 
    $penulis = "penulis",
    $penerbit = "Erlangga",
    $harga;

    //property = variabel dalam kelas + visibility
    //method = function dalam kelas + visibility

    public function getLabel(){
        return "$this->judul, $this->penulis, $this->penerbit, $this->harga ";
    }
}

//membuat insctance

$produk1 = new Produk();
$produk1->judul = "Evangilion";
$produk1->penilis = "Tatang sutatamg";
$produk1->penerbit = "Exex Media";
$produk1->harga = "Rp. 15000";

$produk2 = new Produk();
$produk2->judul = "The Last of Us";
$produk2->penilis = "James Gunn";
$produk2->penerbit = "HBO";
$produk2->harga = "Rp. 25000";

echo "Anime : " . $produk1->getLabel();
echo "<br>";
echo "Game : " . $produk2->getLabel();
?>