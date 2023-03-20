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

    //Fungsi yang pertamakali dipanggil setiap instansiasi kelas
    public function __construct( $judul, $penulis, $penerbit, $harga){
        echo "Ini hasil dari __construct <br>";
        $this->judul = $judul;
        $this->penulis = $penulis;
        $this->penerbit = $penerbit;
        $this->harga = $harga;
    }
}

class CetakInfoProduk {
    //Agar hanya kelas produk yang bisa masuk ke parameter, maka kelas Produk disertakan sebagai onject type
    public function cetak ( Produk $produk ) {
        $str = "{$produk->judul} | {$produk->getLabel()}, (Rp. $produk->harga)";
        return $str;
    }
}


//membuat insctance
$produk1 = new Produk("Evangilion", "Tatang sutatamg", "Exex Media", "Rp. 15000" );
$produk2 = new Produk("The Last of Us", "James Gunn", "HBO", "Rp. 25000");

echo "Anime : " . $produk1->getLabel();
echo "<br>";
echo "Game : " . $produk2->getLabel();

$infoProduk1 = new CetakInfoProduk();
//dalam parameter function hanya bisa memaukkan object Produk, karena dalam kelasnya tertulis kelas Produk
echo $infoProduk1->cetak($produk1);



?>