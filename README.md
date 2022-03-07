<b>Arduino ile  Android Kontrollü Akıllı Ev Sistemi<br></b>
Bu çalışmanın amacı, kullanılan sistemler ile insan hayatının kolaylaştırılması ve mekan güvenliğinin sağlanmasıdır. Yazılan android uygulama aracılığı ile istenilen yerden mekan içindeki aydınlatma, klima, perde ve su arıtma sistemi kontrolü sağlanıp, ortam sıcaklığı okunabilmektedir. Evde olunmadığı bildirildiği taktirde hareket ve yangın durumunda uyarı sistemi aktifleştirilmektedir. Aynı zamanda uygulama üzerinden de takip edilebilmektedir. Bu otomasyonda ayrıca şifreli kapı kilit sistemi, otomatik bahçe aydınlatması sistemi mevcuttur. Sistemin enerjisi çatıya yerleştirilen güneş panelleri ile sağlanmaktadır.<br>
<p>• Gerçekleştirilen çalışmada 1 adet Arduino Mega, 1 adet Arduino Uno R3 ve Ethernet Shield kullanılmaktadır. <br>
• Haberleşme yerel ağ üzerinden gerçekleştirilmektedir. <br>
• Android arayüz ile ethernet shield arasındaki haberleşme web server aracılığıyla gerçekleşmektedir. <br>
• Ldr’ den gelen ışık şiddetine göre bahçe aydınlatma sistemi otonom olarak çalışmaktadır. <br>
• Tuş takımından girilen şifre LCD ekranında gösterilmekte ve doğru girildiği takdirde servo motor çalışarak kapı kontrolü gerçekleştirilmektedir.<br>
• Aydınlatma, klima ve perde kontrolü android arayüzünden ethernet shielde gelen veriye göre gerçekleştirilmektedir. <br>
• LM35 sıcaklık sensöründen okunan ortam sıcaklık değeri ethernet shield aracılığı ile android arayüzünde gösterilmektedir. <br>
• Alev sensöründen okunan değere göre ethernet shield aracılığı ile android arayüzünde yangın olup olmadığı gösterilmektedir. <br>
• PIR sensöründen okunan digital değere göre ethernet shield aracılığı ile android arayüzünde hareket olup olmadığı gösterilmektedir. <br>
• Sistemin enerjisi çatıya yerleştirilen güneş panelleri ile sağlanmaktadır. <br>
<p>Kontrol edilen birimler:<br>
 ☠️Aydınlatma kontrolü<br>
 🥵Sıcaklık kontrolü <br>
 🔥Alev kontrolü <br>
 ☁️Klima kontrolü <br>
 🔑Şifreli kapı kilidi <br>
 🥱Hareket kontrolü <br>
 🏳️Perde kontrolü <br>
 🏝Otomatik bahçe aydınlatma sistemi<br>
Bu proje sayesinde uzaktan ve otomatik olarak mekan içi sistemlerin kontrolü sağlanmıştır. Çalışma verileri ethernet shield ve modem aracılığı ile mikrodenetleyiciye gönderilip mikrodenetleyiciden alınmaktadır. Ayrıca sensör ve tuş takımı giriş verilerine göre kontroller de sağlanmıştır. Bu projede sekiz ayrı birim kontrol edilmiştir. İstenildiği takdirde sisteme yeni birimler eklenip kontrolü sağlanabilir.
