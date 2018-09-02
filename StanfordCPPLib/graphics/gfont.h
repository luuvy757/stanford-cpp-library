/*
 * File: gfont.h
 * -------------
 *
 * @author Marty Stepp
 * @version 2018/08/23
 * - renamed to gfont.h to replace Java version
 * @version 2018/07/05
 * - initial version
 */

#ifndef _gfont_h
#define _gfont_h

#include <string>
#include <QFont>
#include "ginteractor.h"

/*
 * ...
 */
class GFont {
public:
    static void changeFontSize(GInteractor* interactor, int dsize);
    static QFont changeFontSize(const QFont& font, int dsize);
    static QFont deriveQFont(const QFont& font, QFont::Weight weight = QFont::Normal, int size = -1);
    static QFont deriveQFont(const QFont& font, const std::string& fontFamily, QFont::Weight weight = QFont::Normal, int size = -1);
    static QFont deriveQFont(const std::string& font, QFont::Weight weight = QFont::Normal, int size = -1);
    static QFont deriveQFont(const std::string& font, const std::string& fontFamily, QFont::Weight weight = QFont::Normal, int size = -1);
    static std::string toFontString(const QFont& font);
    static QFont toQFont(const std::string& fontString);
    static QFont toQFont(const QFont& font, const std::string& fontString);

private:
    GFont();   // prevent construction
    static QFont::StyleHint getStyleHint(const std::string& fontFamily);
};

#include "private/init.h"   // ensure that Stanford C++ lib is initialized

#endif // _gfont_h
