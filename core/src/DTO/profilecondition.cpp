/*
 * Sailfin: a Jellyfin client written using Qt
 * Copyright (C) 2021 Chris Josten and the Sailfin Contributors.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */
/*
 * WARNING: THIS IS AN AUTOMATICALLY GENERATED FILE! PLEASE DO NOT EDIT THIS, AS YOUR EDITS WILL GET
 * OVERWRITTEN AT SOME POINT! 
 *
 * If there is a bug in this file, please fix the code generator used to generate this file found in
 * core/openapigenerator.d. 
 *
 * This file is generated based on Jellyfin's OpenAPI description, "openapi.json". Please update that
 * file with a newer file if needed instead of manually updating the files.
 */

#include <JellyfinQt/DTO/profilecondition.h>

#include <JellyfinQt/DTO/profileconditiontype.h>
#include <JellyfinQt/DTO/profileconditionvalue.h>

namespace Jellyfin {
namespace DTO {

ProfileCondition::ProfileCondition(QObject *parent) : QObject(parent) {}

ProfileCondition *ProfileCondition::fromJSON(QJsonObject source, QObject *parent) {
	ProfileCondition *instance = new ProfileCondition(parent);
	instance->updateFromJSON(source);
	return instance;
}

void ProfileCondition::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject ProfileCondition::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
ProfileConditionType ProfileCondition::condition() const { return m_condition; }
void ProfileCondition::setCondition(ProfileConditionType newCondition) {
	m_condition = newCondition;
	emit conditionChanged(newCondition);
}

ProfileConditionValue ProfileCondition::property() const { return m_property; }
void ProfileCondition::setProperty(ProfileConditionValue newProperty) {
	m_property = newProperty;
	emit propertyChanged(newProperty);
}

QString ProfileCondition::value() const { return m_value; }
void ProfileCondition::setValue(QString newValue) {
	m_value = newValue;
	emit valueChanged(newValue);
}

bool ProfileCondition::isRequired() const { return m_isRequired; }
void ProfileCondition::setIsRequired(bool newIsRequired) {
	m_isRequired = newIsRequired;
	emit isRequiredChanged(newIsRequired);
}


} // NS Jellyfin
} // NS DTO
