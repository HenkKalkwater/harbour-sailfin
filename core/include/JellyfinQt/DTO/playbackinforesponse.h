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

#ifndef JELLYFIN_DTO_PLAYBACKINFORESPONSE_H
#define JELLYFIN_DTO_PLAYBACKINFORESPONSE_H

#include <QJsonObject>
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

#include "JellyfinQt/DTO/playbackerrorcode.h"

namespace Jellyfin {
namespace DTO {

class MediaSourceInfo;

class PlaybackInfoResponse : public QObject {
	Q_OBJECT
public:
	explicit PlaybackInfoResponse(QObject *parent = nullptr);
	static PlaybackInfoResponse *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the media sources.
	 */
	Q_PROPERTY(QList<MediaSourceInfo *> mediaSources READ mediaSources WRITE setMediaSources NOTIFY mediaSourcesChanged)
	/**
	 * @brief Gets or sets the play session identifier.
	 */
	Q_PROPERTY(QString playSessionId READ playSessionId WRITE setPlaySessionId NOTIFY playSessionIdChanged)
	Q_PROPERTY(PlaybackErrorCode errorCode READ errorCode WRITE setErrorCode NOTIFY errorCodeChanged)

	QList<MediaSourceInfo *> mediaSources() const;
	void setMediaSources(QList<MediaSourceInfo *> newMediaSources);
	
	QString playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId);
	
	PlaybackErrorCode errorCode() const;
	void setErrorCode(PlaybackErrorCode newErrorCode);
	
signals:
	void mediaSourcesChanged(QList<MediaSourceInfo *> newMediaSources);
	void playSessionIdChanged(QString newPlaySessionId);
	void errorCodeChanged(PlaybackErrorCode newErrorCode);
protected:
	QList<MediaSourceInfo *> m_mediaSources;
	QString m_playSessionId;
	PlaybackErrorCode m_errorCode;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_PLAYBACKINFORESPONSE_H
