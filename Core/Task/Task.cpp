/*
 *  Task.cpp
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

#include "Task.h"

Task::Task(QString name, Core *core, int interval, TaskPriority priority) : CoreObject(name, core) {
	this->interval = interval;
	this->status = Task::Waiting;
	this->priority = priority;

	interruptOnNextProcess = false;
}

Task::~Task() {

}

void Task::preProcess() {

}

void Task::postProcess() {

}

void Task::interrupt() {
	interruptOnNextProcess = true;
}

bool Task::interruptRequested() {
	return interruptOnNextProcess;
}

int Task::getInterval(){
	return interval;
}

QString Task::getName(){
	return name;
}
