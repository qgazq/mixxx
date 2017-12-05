#include "track/albuminfo.h"


namespace mixxx {

// TODO(XXX): Add the commented out properties to the Mixxx library
bool operator==(const AlbumInfo& lhs, const AlbumInfo& rhs) {
    return (lhs.getArtist() == rhs.getArtist()) &&
            //(lhs.getMusicBrainzArtistId() == rhs.getMusicBrainzArtistId()) &&
            //(lhs.getMusicBrainzReleaseId() == rhs.getMusicBrainzReleaseId()) &&
            //(lhs.getMusicBrainzReleaseGroupId() == rhs.getMusicBrainzReleaseGroupId()) &&
            //(lhs.getReplayGain() == rhs.getReplayGain()) &&
            (lhs.getTitle() == rhs.getTitle());
}

// TODO(XXX): Add the commented out properties to the Mixxx library
QDebug operator<<(QDebug dbg, const AlbumInfo& arg) {
    dbg << '{';
    arg.dbgArtist(dbg);
    //arg.dbgMusicBrainzArtistId(dbg);
    //arg.dbgMusicBrainzReleaseId(dbg);
    //arg.dbgMusicBrainzReleaseGroupId(dbg);
    //arg.dbgReplayGain(dbg);
    arg.dbgTitle(dbg);
    dbg << '}';
    return dbg;
}

} // namespace mixxx
