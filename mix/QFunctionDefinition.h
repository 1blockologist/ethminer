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
/** @file QFunctionDefinition.h
 * @author Yann yann@ethdev.com
 * @date 2014
 */

#pragma once

#include <QObject>
#include <libsolidity/AST.h>
#include "QBasicNodeDefinition.h"

namespace dev
{
namespace mix
{

class QFunctionDefinition: public QBasicNodeDefinition
{
	Q_OBJECT
	Q_PROPERTY(QList<QObject*> parameters READ parameters)
	Q_PROPERTY(int index READ index)

public:
	QFunctionDefinition(dev::solidity::FunctionDefinition const* _f, int _index);
	QList<QObject*> parameters() const { return m_parameters; }
	QList<QObject*> returnParameters() const { return m_returnParameters; }
	int index() const { return m_index; }

private:
	QList<QObject*> m_parameters;
	QList<QObject*> m_returnParameters;
	int m_index;
};

}
}
