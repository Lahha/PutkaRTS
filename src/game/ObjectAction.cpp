/*
 * Object action class implementation.
 *
 * Copyright 2011 Petri Österman
 *
 * This file is part of PutkaRTS.
 *
 * PutkaRTS is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * PutkaRTS is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with PutkaRTS.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "ObjectAction.hpp"
#include "Object.hpp"

Game::ObjectAction::ObjectAction(std::istream& stream):
	id("dummy"),
	name("Do something") {
	// TODO: Load action data from stream.
}

bool Game::ObjectAction::runAction(boost::shared_ptr<Object> actor, boost::shared_ptr<Object> target) {
	// TODO: Run the action.
	return false;
}
