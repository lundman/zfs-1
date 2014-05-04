//
//  IDSerialLinker.hpp
//  InvariantDisks
//
//  Created by Gerhard Röthlin on 2014.05.03.
//  Copyright (c) 2014 the-color-black.net. All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without modification, are permitted
//  provided that the conditions of the "3-Clause BSD" license described in the LICENSE file are met.
//

#ifndef ID_SERIALLINKER_HPP
#define ID_SERIALLINKER_HPP

#include "IDDiskArbitrationHandler.hpp"

#include <string>

namespace ID
{
	class SerialLinker : public DiskArbitrationHandler
	{
	public:
		SerialLinker(std::string base);

	public:
		virtual void diskAppeared(DADiskRef disk, DiskInformation const & info) override;
		virtual void diskDisappeared(DADiskRef disk, DiskInformation const & info) override;

	private:
		std::string m_base;
	};
}

#endif