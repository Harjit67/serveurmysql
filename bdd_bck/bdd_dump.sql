-- phpMyAdmin SQL Dump
-- version 4.8.3
-- https://www.phpmyadmin.net/
--
-- Hôte : 127.0.0.1:3306
-- Généré le :  lun. 15 mars 2021 à 09:14
-- Version du serveur :  5.7.23
-- Version de PHP :  7.2.10

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Base de données :  `parking`
--
CREATE DATABASE IF NOT EXISTS `parking` DEFAULT CHARACTER SET latin1 COLLATE latin1_swedish_ci;
USE `parking`;

-- --------------------------------------------------------

--
-- Structure de la table `enregistrement`
--

DROP TABLE IF EXISTS `enregistrement`;
CREATE TABLE IF NOT EXISTS `enregistrement` (
  `id_enregistrement` int(11) NOT NULL AUTO_INCREMENT,
  `dateheure` datetime NOT NULL,
  `images` blob NOT NULL,
  `id_vehicule` int(11) NOT NULL,
  PRIMARY KEY (`id_enregistrement`),
  UNIQUE KEY `dateheure` (`dateheure`),
  KEY `id_vehicule` (`id_vehicule`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Structure de la table `personnel`
--

DROP TABLE IF EXISTS `personnel`;
CREATE TABLE IF NOT EXISTS `personnel` (
  `id_perso` int(11) NOT NULL AUTO_INCREMENT,
  `invite` tinyint(1) NOT NULL,
  `prenom` varchar(40) NOT NULL,
  `nom` varchar(40) NOT NULL,
  `photo` blob NOT NULL,
  `service` varchar(40) NOT NULL,
  `horaire` time NOT NULL,
  `id_vehicule` int(11) NOT NULL,
  PRIMARY KEY (`id_perso`),
  KEY `id_vehicule` (`id_vehicule`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Structure de la table `place`
--

DROP TABLE IF EXISTS `place`;
CREATE TABLE IF NOT EXISTS `place` (
  `id_place` int(11) NOT NULL AUTO_INCREMENT,
  `libre` varchar(10) NOT NULL,
  `numero` int(11) NOT NULL,
  PRIMARY KEY (`id_place`)
) ENGINE=MyISAM AUTO_INCREMENT=27 DEFAULT CHARSET=latin1;

--
-- Déchargement des données de la table `place`
--

INSERT INTO `place` (`id_place`, `libre`, `numero`) VALUES
(26, 'm', 4),
(25, 'm', 4),
(24, 'n', 15),
(21, 'nn', 1),
(11, 'non', 2),
(23, 'n', 15),
(22, 'nn', 1),
(16, 'jkjkjjk', 22),
(17, 'jkjkjjk', 22),
(18, 'jkjkjjk', 22),
(19, 'jkjkjjk', 22),
(20, 'jkjkjjk', 22);

-- --------------------------------------------------------

--
-- Structure de la table `vehicule`
--

DROP TABLE IF EXISTS `vehicule`;
CREATE TABLE IF NOT EXISTS `vehicule` (
  `id_vehicule` int(11) NOT NULL AUTO_INCREMENT,
  `immatriculation` varchar(128) NOT NULL,
  `type` varchar(50) NOT NULL,
  `couleur` varchar(50) NOT NULL,
  PRIMARY KEY (`id_vehicule`),
  UNIQUE KEY `immatriculation` (`immatriculation`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
