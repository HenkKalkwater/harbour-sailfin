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

#include <JellyfinQt/DTO/imageoption.h>

#include <JellyfinQt/DTO/imagetype.h>

namespace Jellyfin {
namespace DTO {

ImageOption::ImageOption(QObject *parent) : QObject(parent) {}

ImageOption *ImageOption::fromJSON(QJsonObject source, QObject *parent) {
	ImageOption *instance = new ImageOption(parent);
	instance->updateFromJSON(source);
	return instance;
}

void ImageOption::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject ImageOption::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
ImageType ImageOption::type() const { return m_type; }
void ImageOption::setType(ImageType newType) {
	m_type = newType;
	emit typeChanged(newType);
}

qint32 ImageOption::limit() const { return m_limit; }
void ImageOption::setLimit(qint32 newLimit) {
	m_limit = newLimit;
	emit limitChanged(newLimit);
}

qint32 ImageOption::minWidth() const { return m_minWidth; }
void ImageOption::setMinWidth(qint32 newMinWidth) {
	m_minWidth = newMinWidth;
	emit minWidthChanged(newMinWidth);
}


} // NS Jellyfin
} // NS DTO
