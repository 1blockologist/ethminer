/*
    This file is part of cpp-ethereum.

    cpp-ethereum is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    cpp-ethereum is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with cpp-ethereum.  If not, see <http://www.gnu.org/licenses/>.
*/
/** @file FileIo.h
 * @author Arkadiy Paronyan arkadiy@ethdev.com
 * @date 2015
 * Ethereum IDE client.
 */

#pragma once

#include <QObject>

namespace dev
{
namespace mix
{

///File services for QML
class FileIo : public QObject
{
	Q_OBJECT

public:
	/// Create a directory if it does not exist. Throws on failure.
	Q_INVOKABLE void makeDir(QString const& _path);
	/// Read file contents to a string. Throws on failure.
	Q_INVOKABLE QString readFile(QString const& _path);
	/// Write contents to a file. Throws on failure.
	Q_INVOKABLE void writeFile(QString const& _path, QString const& _data);
	/// Copy a file from _sourcePath to _destPath. Throws on failure.
	Q_INVOKABLE void copyFile(QString const& _sourcePath, QString const& _destPath);
};

}
}
