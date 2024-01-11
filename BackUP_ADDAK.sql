CREATE DATABASE  IF NOT EXISTS `addak` /*!40100 DEFAULT CHARACTER SET utf8mb3 */ /*!80016 DEFAULT ENCRYPTION='N' */;
USE `addak`;
-- MySQL dump 10.13  Distrib 8.0.34, for Win64 (x86_64)
--
-- Host: localhost    Database: addak
-- ------------------------------------------------------
-- Server version	8.0.35

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `cliente_empresa`
--

DROP TABLE IF EXISTS `cliente_empresa`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `cliente_empresa` (
  `Id_Cliente` int NOT NULL AUTO_INCREMENT,
  `Nome` varchar(20) NOT NULL,
  `CNPJ` char(20) DEFAULT NULL,
  `Telefone` varchar(16) DEFAULT NULL,
  `Cep` varchar(12) NOT NULL,
  `Cidade` varchar(20) DEFAULT NULL,
  `Bairro` varchar(20) DEFAULT NULL,
  `Rua` varchar(25) DEFAULT NULL,
  `Numero` varchar(5) DEFAULT NULL,
  `Observacao` varchar(255) DEFAULT '0',
  PRIMARY KEY (`Id_Cliente`)
) ENGINE=InnoDB AUTO_INCREMENT=29 DEFAULT CHARSET=utf8mb3;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `cliente_empresa`
--

LOCK TABLES `cliente_empresa` WRITE;
/*!40000 ALTER TABLE `cliente_empresa` DISABLE KEYS */;
INSERT INTO `cliente_empresa` VALUES (1,'Empresanumero1','11.111.111/1111-11','1111111111','12345-678','Cidade1','Bairro1','Rua1','1','0'),(2,'Empresa2','22.222.222/2222-22','2222222222','23456-789','Cidade2','Bairro2','Rua2','2','0'),(3,'Empresa3','33.333.333/3333-33','3333333333','34567-890','Cidade3','Bairro3','Rua3','3','0'),(4,'Empresa4','44.444.444/4444-44','4444444444','45678-901','Cidade4','Bairro4','Rua4','4','0'),(5,'Empresa5','55.555.555/5555-55','5555555555','56789-012','Cidade5','Bairro5','Rua5','5','0'),(6,'Empresa6','66.666.666/6666-66','6666666666','67890-123','Cidade6','Bairro6','Rua6','6','0'),(7,'Empresa7','77.777.777/7777-77','7777777777','78901-234','Cidade7','Bairro7','Rua7','7','0'),(8,'Empresa8','88.888.888/8888-88','8888888888','89012-345','Cidade8','Bairro8','Rua8','8','0'),(9,'Empresa9','99.999.999/9999-99','9999999999','90123-456','Cidade9','Bairro9','Rua9','9','0'),(10,'Empresa10','10.101.101/1010-10','1010101010','01234-567','Cidade10','Bairro10','Rua10','10','0'),(11,'Empresa11','11.111.111/1111-11','1111111111','12345-678','Cidade11','Bairro11','Rua11','11','0'),(12,'Empresa12','12.121.212/1212-12','1212121212','23456-789','Cidade12','Bairro12','Rua12','12','0'),(13,'Empresa13','13.131.313/1313-13','1313131313','34567-890','Cidade13','Bairro13','Rua13','13','0'),(14,'Empresa14','14.141.414/1414-14','1414141414','45678-901','Cidade14','Bairro14','Rua14','14','0'),(15,'Empresa15','15.151.515/1515-15','1515151515','56789-012','Cidade15','Bairro15','Rua15','15','0'),(16,'Empresa16','16.161.616/1616-16','1616161616','67890-123','Cidade16','Bairro16','Rua16','16','0'),(17,'Empresa17','17.171.717/1717-17','1717171717','78901-234','Cidade17','Bairro17','Rua17','17','0'),(18,'Empresa18','18.181.818/1818-18','1818181818','89012-345','Cidade18','Bairro18','Rua18','18','0'),(19,'Empresa19','19.191.919/1919-19','1919191919','90123-456','Cidade19','Bairro19','Rua19','19','0'),(20,'Empresa20','20.202.020/2020-20','2020202020','01234-567','Cidade20','Bairro20','Rua20','20','0'),(21,'Empresa21','21.212.121/2121-21','2121212121','12345-678','Cidade21','Bairro21','Rua21','21','0'),(22,'Empresa22','22.222.222/2222-22','2222222222','23456-789','Cidade22','Bairro22','Rua22','22','0'),(23,'Empresa23','23.232.323/2323-23','2323232323','34567-890','Cidade23','Bairro23','Rua23','23','0'),(24,'Empresa24','24.242.424/2424-24','2424242424','45678-901','Cidade24','Bairro24','Rua24','24','0'),(25,'Empresa25','25.252.525/2525-25','2525252525','98765-432','Cidade25','Bairro25','Rua25','25','0'),(26,'Jose A. D. Mom','','','','','','','',''),(27,'Jose Mome','12345678000199','1532436029','18112780','Votorantim','Jd Sao Luis','Amim Chaim, 65','65',''),(28,'','','','','','','','','');
/*!40000 ALTER TABLE `cliente_empresa` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `pedidos`
--

DROP TABLE IF EXISTS `pedidos`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `pedidos` (
  `Id_Pedido` int NOT NULL,
  `Id_Cliente` int DEFAULT NULL,
  `Id_Produtos` int DEFAULT NULL,
  `Quantidade` int DEFAULT NULL,
  `Valor` float DEFAULT NULL,
  `Data/Hora` timestamp NULL DEFAULT CURRENT_TIMESTAMP,
  KEY `Id_Cliente` (`Id_Cliente`),
  KEY `Id_Produtos` (`Id_Produtos`),
  CONSTRAINT `pedidos_ibfk_1` FOREIGN KEY (`Id_Cliente`) REFERENCES `cliente_empresa` (`Id_Cliente`),
  CONSTRAINT `pedidos_ibfk_2` FOREIGN KEY (`Id_Produtos`) REFERENCES `produtos` (`Id_Produtos`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb3;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `pedidos`
--

LOCK TABLES `pedidos` WRITE;
/*!40000 ALTER TABLE `pedidos` DISABLE KEYS */;
INSERT INTO `pedidos` VALUES (1,2,2,15,180,'2023-11-29 23:56:04'),(1,2,3,12,144,'2023-11-29 23:56:04'),(1,2,1,8,96,'2023-11-29 23:56:04'),(1,2,4,5,60,'2023-11-29 23:56:04'),(2,2,5,14,168,'2023-11-30 00:13:31'),(2,2,5,78,936,'2023-11-30 00:13:37'),(2,2,12,79,948,'2023-11-30 00:13:44'),(2,2,3,12,144,'2023-11-30 00:13:53'),(3,21,4,3,36,'2023-12-02 01:12:27'),(3,21,7,9,108,'2023-12-02 01:12:34');
/*!40000 ALTER TABLE `pedidos` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `produtos`
--

DROP TABLE IF EXISTS `produtos`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `produtos` (
  `Id_Produtos` int NOT NULL AUTO_INCREMENT,
  `Nome` varchar(15) DEFAULT NULL,
  `Categoria` varchar(15) DEFAULT NULL,
  `Materiais` tinytext,
  `Custo_Producao` decimal(5,2) DEFAULT NULL,
  `Variacao_Pocentagem` decimal(5,2) DEFAULT NULL,
  `Valor_Final` decimal(5,2) DEFAULT NULL,
  `Quantidade` int DEFAULT NULL,
  PRIMARY KEY (`Id_Produtos`)
) ENGINE=InnoDB AUTO_INCREMENT=23 DEFAULT CHARSET=utf8mb3;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `produtos`
--

LOCK TABLES `produtos` WRITE;
/*!40000 ALTER TABLE `produtos` DISABLE KEYS */;
INSERT INTO `produtos` VALUES (1,'Produto Teste1','Categoria Teste','Materiais Teste',10.52,1.20,12.00,5),(2,'Produto Teste2','Categoria Teste','Materiais Teste',10.00,1.20,12.00,5),(3,'Produto Teste3','Categoria Teste','Materiais Teste',10.00,1.20,12.00,5),(4,'Produto Teste4','Categoria Teste','Materiais Teste',10.00,1.20,12.00,5),(5,'Produto Teste5','Categoria Teste','Materiais Teste',10.00,1.20,12.00,5),(6,'Produto Teste6','Categoria Teste','Materiais Teste',10.00,1.20,12.00,5),(7,'Produto Teste7','Categoria Teste','Materiais Teste',10.00,1.20,12.00,5),(8,'Produto Teste8','Categoria Teste','Materiais Teste',10.00,1.20,12.00,5),(9,'Produto Teste9','Categoria Teste','Materiais Teste',10.00,1.20,12.00,5),(10,'Produto Teste10','Categoria Teste','Materiais Teste',10.00,1.20,12.00,5),(11,'Produto Teste11','Categoria Teste','Materiais Teste',10.00,1.20,12.00,5),(12,'Produto Teste12','Categoria Teste','Materiais Teste',10.00,1.20,12.00,5),(13,'Produto Teste13','Categoria Teste','Materiais Teste',10.00,1.20,12.00,5),(14,'Produto Teste14','Categoria Teste','Materiais Teste',10.00,1.20,12.00,5),(15,'Produto Teste15','Categoria Teste','Materiais Teste',10.00,1.20,12.00,5),(16,'Produto Teste16','Categoria Teste','Materiais Teste',10.00,1.20,12.00,5),(17,'Produto Teste17','Categoria Teste','Materiais Teste',10.00,1.20,12.00,5),(18,'Produto Teste18','Categoria Teste','Materiais Teste',10.00,1.20,12.00,5),(19,'Produto Teste19','Categoria Teste','Materiais Teste',10.00,1.20,12.00,5),(20,'Produto Teste20','Categoria Teste','Materiais Teste',10.00,1.20,12.00,5),(21,'Produto Teste21','Categoria Teste','Materiais Teste',10.00,1.20,12.00,5),(22,'Produto Teste22','Categoria Teste','Materiais Teste',10.00,1.20,12.00,5);
/*!40000 ALTER TABLE `produtos` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2023-12-08 21:06:00
