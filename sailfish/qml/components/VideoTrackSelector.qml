/*
Sailfin: a Jellyfin client written using Qt
Copyright (C) 2020 Chris Josten

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/
import QtQuick 2.6
import Sailfish.Silica 1.0

import nl.netsoj.chris.Jellyfin 1.0

Column {
    property var tracks
    readonly property int audioTrack: audioSelector.currentItem ? audioSelector.currentItem._index : 0
    readonly property int subtitleTrack: subitleSelector.currentItem._index

    ListModel {
        id: videoModel
    }
    ListModel {
        id: audioModel
    }

    ListModel {
        id: subtitleModel
    }

    ComboBox {
        id: videoSelector
        label: qsTr("Video track")
        enabled: videoModel.count > 1
        menu: ContextMenu {
            Repeater {
                model: videoModel
                MenuItem {
                    readonly property int _index: model.index
                    text: model.displayTitle
                }
            }
        }
    }

    ComboBox {
        id: audioSelector
        label: qsTr("Audio track")
        enabled: audioModel.count > 1
        menu: ContextMenu {
            Repeater {
                model: audioModel
                MenuItem {
                    readonly property int _index: model.index
                    text: model.displayTitle
                }
            }
        }
    }

    ComboBox {
        id: subitleSelector
        label: qsTr("Subtitle track")
        enabled: subtitleModel.count > 0
        menu: ContextMenu {
            MenuItem {
                readonly property int _index: -1
                //: Value in ComboBox to disable subtitles
                text: qsTr("Off")
            }
            Repeater {
                model: subtitleModel
                MenuItem {
                    readonly property int _index: model.index
                    text: model.displayTitle
                }
            }
        }
    }

    onTracksChanged: {
        audioModel.clear()
        subtitleModel.clear()
        if (typeof tracks === "undefined") {
            console.log("tracks undefined")
            return
        }
        console.log(tracks)
        for(var i = 0; i < tracks.length; i++) {
            var track = tracks[i];
            switch(track.type) {
            case MediaStream.Video:
                videoModel.append(track)
                break;
            case MediaStream.Audio:
                audioModel.append(track)
                break;
            case MediaStream.Subtitle:
                subtitleModel.append(track)
                break;
            default:
                console.log("Ignored " + track.displayTitle + "(" + track.type + ")")
                break;
            }
        }
    }
}
