/*
 *  Weight.h
 *
 *  ===========================================================================
 *
 *  Copyright 2008-2009 Daniel Kruesi (Dan Krusi) and David Grob
 *
 *  This file is part of the emms framework.
 *
 *  The emms framework  is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  The emms framework is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this software. If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef WEIGHT_H_
#define WEIGHT_H_

#include <QObject>

#include "../../CoreObject.h"
#include "../../Library/Math.h"

class Weight : public CoreObject {

	Q_OBJECT;

public:
	Weight(QString name, Core *core) : CoreObject(name, core) {
		this->core = core;
		this->name = name;
	};

	virtual ~Weight() {};

	virtual void process(Vector2D &v) = 0;
};

#endif /* WEIGHT_H_ */
