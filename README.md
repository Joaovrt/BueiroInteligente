<h1 align="center">🌐Bueiro Inteligente♻</h1>
<ul>
  <li>🤔<b> Objetivo do projeto</b></li><br>
  <p Align="justify">Propor um sistema para monitoramento de obstrução de bueiros, a fim de amenizar a incidência de alagamentos em vias públicas.</p>
  <li>⚙<b> Como funciona?</b></li><br>
  <p Align="justify">Um recipiente vazado será colocado dentro do bueiro, o qual funcionará como uma espécie de filtro, barrando o lixo e deixando a água passar. No topo desse cesto, estará uma caixa com o hardware do projeto, uma placa com microcontrolador e um sensor de distância. Tal sensor estará virado para baixo, em direção ao fundo do cesto, assim, conseguirá medir a distância entre ele e o lixo acumulado.</p>
  <p Align="justify">Quando a distância for grande, mais para o fundo estará o resíduo, o que indica que o bueiro ainda não está saturado. Já no caso contrário, quando essa distância for pequena, quer dizer que o bueiro está cheio. Todos esses dados serão enviados de forma automática e atualizada para um dashboard, o qual poderá ser acessado de forma remota, via internet, facilitando a gestão dos responsáveis pela manutenção.</p>
  <li>📃<b> Justificativa</b></li><br>
   <p Align="justify">Visando a uma solução que integrasse conhecimentos de computação, “Internet das Coisas” (IoT) e nos moldes das “Smart Cities”, o equipamento pode trazer melhorias em 3 âmbitos: social, econômico e ambiental. No primeiro tópico, tem potencial de reduzir o número de vítimas, o desalojamento e doenças comuns desse tipo de fenômeno, como amebíase, cólera, esquistossomose, leptospirose e difteria.</p>
   <p Align="justify">Além disso, pode ser uma oportunidade de diminuir os custos não só da mobilização das forças de controle e resgate, mas também para reparar os danos causados à infraestrutura da cidade, aos bens de comércios e residências. Ademais, há a possibilidade de otimização da manutenção dos bueiros pela empresa responsável, com economia de recursos por conta das informações de localização e período de bloqueio dos bueiros.</p>
   <p Align="justify">No aspecto ambiental, o projeto tem importância pois evitaria que resíduos como plásticos e outros poluentes chegassem aos corpos d’água, assim, seria capaz de proteger da contaminação a fauna e flora desses meios, como também poderia frear o processo de assoreamento dos rios.</p>
   <li>🛠<b> Protótipo</b></li><br>
    <p Align="justify">Para a elaboração do protótipo, foi adquirido um cesto e feito uma abertura em uma das faces, que funcionaria como a parte encostada à boca de lobo do bueiro. Em continuidade, duas chapas de metal foram fixadas na lateral do cesto para que pudessem ser encaixadas no bueiro. Além disso, também foi feita a fixação de puxadores na parte de dentro das chapas, para assim permitir a retirada e colocação com mais facilidade. Em seguida, um cano de alumínio foi alocado no centro do cesto para que pudesse apoiar o recipiente com equipamento eletrônico dentro e proteger a fiação.</p>
    <p Align="center"><img src="https://github.com/Joaovrt/BueiroInteligente/blob/main/Puxadores.jpg" width=70%></p>
    <p Align="center"><img src="https://github.com/Joaovrt/BueiroInteligente/blob/main/Suporte.jpg" width=70%></p>
    <p Align="center"><img src="https://github.com/Joaovrt/BueiroInteligente/blob/main/Projeto.jpeg" width=70%></p>
    <p Align="justify">Sobre o hardware, utilizou-se um ESP8266, responsável por receber as informações do sensor de distância Hc-sr04 e enviá-las para um dashboard, através de sua conexão com a internet. Foi soldado na placa ilha as barras de pinos fêmea e macho para encaixar o ESP e os jumpers e desenhado as trilhas para funcionamento do sistema. De acordo com esse esquema, os procedimentos foram os seguintes: foi conectado o GND do sensor ao GND do ESP, o VCC do sensor ao VU do ESP, o pino TRIG do sensor de distância ao ESP na entrada D7, e o pino ECHO do sensor de distância na entrada D8 do ESP também.</p>
    <p Align="center"><img src="" width=70%></p>
    <p Align="center"><img src="" width=70%></p>
  <li>💡<b> Autores:</b></li><br>
  <p Align="justify">Diogo Pereira Almeida<br>Fernando Silva Martins<br>João Victor Oliveira Moreira<br>João Victor Rosa Tagliarini<br>José Antônio Soares Pinto<br>Lucas Ribeiro Bonfílio de Lemos<br>Matheus Aparecido de Oliveira Ramos</p>
</ul>
