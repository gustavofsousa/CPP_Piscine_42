/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusousa <gusousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:29:17 by gusousa           #+#    #+#             */
/*   Updated: 2023/04/19 17:40:15 by gusousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Contact.hpp"
#include <iostream>

Contact::Contact(void) {
	std::cout << "Destructor from Contact called" << std::endl;

}

Contact::~Contact(void) {
	std::cout << "Destructor from Contact called" << std::endl;
}

void Contact::setFirstName(std::string value) {
  this->_firstName = value;
}

void Contact::setLastName(std::string value) {
  this->_lastName = value;
}

void Contact::setNickname(std::string value) {
  this->_nickname = value;
}

void Contact::setPhoneNumber(std::string value) {
  this->_phoneNumber = value;
}

void Contact::setDarkestSecret(std::string value) {
  this->_darkestSecret = value;
}

std::string Contact::getFirstName() {
  return this->_firstName;
}

std::string Contact::getLastName() {
  return this->_lastName;
}

std::string Contact::getNickname() {
  return this->_nickname;
}

std::string Contact::getPhoneNumber() {
  return this->_phoneNumber;
}

std::string Contact::getDarkestSecret() {
  return this->_darkestSecret;
}
