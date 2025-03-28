//
// Copyright (c) ZeroC, Inc. All rights reserved.
//
//
// Ice version 3.7.10
//
// <auto-generated>
//
// Generated from file `Joystick.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#include "Joystick.h"
#include <IceUtil/PushDisableWarnings.h>
#include <Ice/LocalException.h>
#include <Ice/ValueFactory.h>
#include <Ice/OutgoingAsync.h>
#include <Ice/InputStream.h>
#include <Ice/OutputStream.h>
#include <IceUtil/PopDisableWarnings.h>

#if defined(_MSC_VER)
#   pragma warning(disable:4458) // declaration of ... hides class member
#elif defined(__clang__)
#   pragma clang diagnostic ignored "-Wshadow"
#elif defined(__GNUC__)
#   pragma GCC diagnostic ignored "-Wshadow"
#endif

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 307
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 >= 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 10
#       error Ice patch level mismatch!
#   endif
#endif

#ifdef ICE_CPP11_MAPPING // C++11 mapping

namespace
{

const ::std::string iceC_Data_CarData_ids[2] =
{
	"::Data::CarData",
	"::Ice::Object"
};
const ::std::string iceC_Data_CarData_ops[] =
{
	"getCarTemperatureValue",
	"getJoystickValue",
	"ice_id",
	"ice_ids",
	"ice_isA",
	"ice_ping",
	"setCarTemperatureValue",
	"setJoystickValue"
};
const ::std::string iceC_Data_CarData_setJoystickValue_name = "setJoystickValue";
const ::std::string iceC_Data_CarData_getJoystickValue_name = "getJoystickValue";
const ::std::string iceC_Data_CarData_setCarTemperatureValue_name = "setCarTemperatureValue";
const ::std::string iceC_Data_CarData_getCarTemperatureValue_name = "getCarTemperatureValue";

}

bool
Data::CarData::ice_isA(::std::string s, const ::Ice::Current&) const
{
	return ::std::binary_search(iceC_Data_CarData_ids, iceC_Data_CarData_ids + 2, s);
}

::std::vector<::std::string>
Data::CarData::ice_ids(const ::Ice::Current&) const
{
	return ::std::vector<::std::string>(&iceC_Data_CarData_ids[0], &iceC_Data_CarData_ids[2]);
}

::std::string
Data::CarData::ice_id(const ::Ice::Current&) const
{
	return ice_staticId();
}

const ::std::string&
Data::CarData::ice_staticId()
{
	static const ::std::string typeId = "::Data::CarData";
	return typeId;
}

/// \cond INTERNAL
bool
Data::CarData::_iceD_setJoystickValue(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
	_iceCheckMode(::Ice::OperationMode::Normal, current.mode);
	auto istr = inS.startReadParams();
	bool iceP_newValue;
	istr->readAll(iceP_newValue);
	inS.endReadParams();
	this->setJoystickValue(iceP_newValue, current);
	inS.writeEmptyParams();
	return true;
}
/// \endcond

/// \cond INTERNAL
bool
Data::CarData::_iceD_getJoystickValue(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
	_iceCheckMode(::Ice::OperationMode::Normal, current.mode);
	inS.readEmptyParams();
	bool ret = this->getJoystickValue(current);
	auto ostr = inS.startWriteParams();
	ostr->writeAll(ret);
	inS.endWriteParams();
	return true;
}
/// \endcond

/// \cond INTERNAL
bool
Data::CarData::_iceD_setCarTemperatureValue(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
	_iceCheckMode(::Ice::OperationMode::Normal, current.mode);
	auto istr = inS.startReadParams();
	double iceP_newValue;
	istr->readAll(iceP_newValue);
	inS.endReadParams();
	this->setCarTemperatureValue(iceP_newValue, current);
	inS.writeEmptyParams();
	return true;
}
/// \endcond

/// \cond INTERNAL
bool
Data::CarData::_iceD_getCarTemperatureValue(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
	_iceCheckMode(::Ice::OperationMode::Normal, current.mode);
	inS.readEmptyParams();
	double ret = this->getCarTemperatureValue(current);
	auto ostr = inS.startWriteParams();
	ostr->writeAll(ret);
	inS.endWriteParams();
	return true;
}
/// \endcond

/// \cond INTERNAL
bool
Data::CarData::_iceDispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
	::std::pair<const ::std::string*, const ::std::string*> r = ::std::equal_range(iceC_Data_CarData_ops, iceC_Data_CarData_ops + 8, current.operation);
	if(r.first == r.second)
	{
		throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
	}

	switch(r.first - iceC_Data_CarData_ops)
	{
		case 0:
		{
			return _iceD_getCarTemperatureValue(in, current);
		}
		case 1:
		{
			return _iceD_getJoystickValue(in, current);
		}
		case 2:
		{
			return _iceD_ice_id(in, current);
		}
		case 3:
		{
			return _iceD_ice_ids(in, current);
		}
		case 4:
		{
			return _iceD_ice_isA(in, current);
		}
		case 5:
		{
			return _iceD_ice_ping(in, current);
		}
		case 6:
		{
			return _iceD_setCarTemperatureValue(in, current);
		}
		case 7:
		{
			return _iceD_setJoystickValue(in, current);
		}
		default:
		{
			assert(false);
			throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
		}
	}
}
/// \endcond

/// \cond INTERNAL
void
Data::CarDataPrx::_iceI_setJoystickValue(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<void>>& outAsync, bool iceP_newValue, const ::Ice::Context& context)
{
	outAsync->invoke(iceC_Data_CarData_setJoystickValue_name, ::Ice::OperationMode::Normal, ::Ice::FormatType::DefaultFormat, context,
		[&](::Ice::OutputStream* ostr)
		{
			ostr->writeAll(iceP_newValue);
		},
		nullptr);
}
/// \endcond

/// \cond INTERNAL
void
Data::CarDataPrx::_iceI_getJoystickValue(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<bool>>& outAsync, const ::Ice::Context& context)
{
	_checkTwowayOnly(iceC_Data_CarData_getJoystickValue_name);
	outAsync->invoke(iceC_Data_CarData_getJoystickValue_name, ::Ice::OperationMode::Normal, ::Ice::FormatType::DefaultFormat, context,
		nullptr,
		nullptr);
}
/// \endcond

/// \cond INTERNAL
void
Data::CarDataPrx::_iceI_setCarTemperatureValue(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<void>>& outAsync, double iceP_newValue, const ::Ice::Context& context)
{
	outAsync->invoke(iceC_Data_CarData_setCarTemperatureValue_name, ::Ice::OperationMode::Normal, ::Ice::FormatType::DefaultFormat, context,
		[&](::Ice::OutputStream* ostr)
		{
			ostr->writeAll(iceP_newValue);
		},
		nullptr);
}
/// \endcond

/// \cond INTERNAL
void
Data::CarDataPrx::_iceI_getCarTemperatureValue(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<double>>& outAsync, const ::Ice::Context& context)
{
	_checkTwowayOnly(iceC_Data_CarData_getCarTemperatureValue_name);
	outAsync->invoke(iceC_Data_CarData_getCarTemperatureValue_name, ::Ice::OperationMode::Normal, ::Ice::FormatType::DefaultFormat, context,
		nullptr,
		nullptr);
}
/// \endcond

/// \cond INTERNAL
::std::shared_ptr<::Ice::ObjectPrx>
Data::CarDataPrx::_newInstance() const
{
	return ::IceInternal::createProxy<CarDataPrx>();
}
/// \endcond

const ::std::string&
Data::CarDataPrx::ice_staticId()
{
	return CarData::ice_staticId();
}

#else // C++98 mapping

namespace
{

const ::std::string iceC_Data_CarData_setJoystickValue_name = "setJoystickValue";

const ::std::string iceC_Data_CarData_getJoystickValue_name = "getJoystickValue";

const ::std::string iceC_Data_CarData_setCarTemperatureValue_name = "setCarTemperatureValue";

const ::std::string iceC_Data_CarData_getCarTemperatureValue_name = "getCarTemperatureValue";

}

/// \cond INTERNAL
::IceProxy::Ice::Object* ::IceProxy::Data::upCast(CarData* p) { return p; }

void
::IceProxy::Data::_readProxy(::Ice::InputStream* istr, ::IceInternal::ProxyHandle< CarData>& v)
{
	::Ice::ObjectPrx proxy;
	istr->read(proxy);
	if(!proxy)
	{
		v = 0;
	}
	else
	{
		v = new CarData;
		v->_copyFrom(proxy);
	}
}
/// \endcond

::Ice::AsyncResultPtr
IceProxy::Data::CarData::_iceI_begin_setJoystickValue(bool iceP_newValue, const ::Ice::Context& context, const ::IceInternal::CallbackBasePtr& del, const ::Ice::LocalObjectPtr& cookie, bool sync)
{
	::IceInternal::OutgoingAsyncPtr result = new ::IceInternal::CallbackOutgoing(this, iceC_Data_CarData_setJoystickValue_name, del, cookie, sync);
	try
	{
		result->prepare(iceC_Data_CarData_setJoystickValue_name, ::Ice::Normal, context);
		::Ice::OutputStream* ostr = result->startWriteParams(::Ice::DefaultFormat);
		ostr->write(iceP_newValue);
		result->endWriteParams();
		result->invoke(iceC_Data_CarData_setJoystickValue_name);
	}
	catch(const ::Ice::Exception& ex)
	{
		result->abort(ex);
	}
	return result;
}

void
IceProxy::Data::CarData::end_setJoystickValue(const ::Ice::AsyncResultPtr& result)
{
	_end(result, iceC_Data_CarData_setJoystickValue_name);
}

::Ice::AsyncResultPtr
IceProxy::Data::CarData::_iceI_begin_getJoystickValue(const ::Ice::Context& context, const ::IceInternal::CallbackBasePtr& del, const ::Ice::LocalObjectPtr& cookie, bool sync)
{
	_checkTwowayOnly(iceC_Data_CarData_getJoystickValue_name, sync);
	::IceInternal::OutgoingAsyncPtr result = new ::IceInternal::CallbackOutgoing(this, iceC_Data_CarData_getJoystickValue_name, del, cookie, sync);
	try
	{
		result->prepare(iceC_Data_CarData_getJoystickValue_name, ::Ice::Normal, context);
		result->writeEmptyParams();
		result->invoke(iceC_Data_CarData_getJoystickValue_name);
	}
	catch(const ::Ice::Exception& ex)
	{
		result->abort(ex);
	}
	return result;
}

bool
IceProxy::Data::CarData::end_getJoystickValue(const ::Ice::AsyncResultPtr& result)
{
	::Ice::AsyncResult::_check(result, this, iceC_Data_CarData_getJoystickValue_name);
	bool ret;
	if(!result->_waitForResponse())
	{
		try
		{
			result->_throwUserException();
		}
		catch(const ::Ice::UserException& ex)
		{
			throw ::Ice::UnknownUserException(__FILE__, __LINE__, ex.ice_id());
		}
	}
	::Ice::InputStream* istr = result->_startReadParams();
	istr->read(ret);
	result->_endReadParams();
	return ret;
}

::Ice::AsyncResultPtr
IceProxy::Data::CarData::_iceI_begin_setCarTemperatureValue(::Ice::Double iceP_newValue, const ::Ice::Context& context, const ::IceInternal::CallbackBasePtr& del, const ::Ice::LocalObjectPtr& cookie, bool sync)
{
	::IceInternal::OutgoingAsyncPtr result = new ::IceInternal::CallbackOutgoing(this, iceC_Data_CarData_setCarTemperatureValue_name, del, cookie, sync);
	try
	{
		result->prepare(iceC_Data_CarData_setCarTemperatureValue_name, ::Ice::Normal, context);
		::Ice::OutputStream* ostr = result->startWriteParams(::Ice::DefaultFormat);
		ostr->write(iceP_newValue);
		result->endWriteParams();
		result->invoke(iceC_Data_CarData_setCarTemperatureValue_name);
	}
	catch(const ::Ice::Exception& ex)
	{
		result->abort(ex);
	}
	return result;
}

void
IceProxy::Data::CarData::end_setCarTemperatureValue(const ::Ice::AsyncResultPtr& result)
{
	_end(result, iceC_Data_CarData_setCarTemperatureValue_name);
}

::Ice::AsyncResultPtr
IceProxy::Data::CarData::_iceI_begin_getCarTemperatureValue(const ::Ice::Context& context, const ::IceInternal::CallbackBasePtr& del, const ::Ice::LocalObjectPtr& cookie, bool sync)
{
	_checkTwowayOnly(iceC_Data_CarData_getCarTemperatureValue_name, sync);
	::IceInternal::OutgoingAsyncPtr result = new ::IceInternal::CallbackOutgoing(this, iceC_Data_CarData_getCarTemperatureValue_name, del, cookie, sync);
	try
	{
		result->prepare(iceC_Data_CarData_getCarTemperatureValue_name, ::Ice::Normal, context);
		result->writeEmptyParams();
		result->invoke(iceC_Data_CarData_getCarTemperatureValue_name);
	}
	catch(const ::Ice::Exception& ex)
	{
		result->abort(ex);
	}
	return result;
}

::Ice::Double
IceProxy::Data::CarData::end_getCarTemperatureValue(const ::Ice::AsyncResultPtr& result)
{
	::Ice::AsyncResult::_check(result, this, iceC_Data_CarData_getCarTemperatureValue_name);
	::Ice::Double ret;
	if(!result->_waitForResponse())
	{
		try
		{
			result->_throwUserException();
		}
		catch(const ::Ice::UserException& ex)
		{
			throw ::Ice::UnknownUserException(__FILE__, __LINE__, ex.ice_id());
		}
	}
	::Ice::InputStream* istr = result->_startReadParams();
	istr->read(ret);
	result->_endReadParams();
	return ret;
}

/// \cond INTERNAL
::IceProxy::Ice::Object*
IceProxy::Data::CarData::_newInstance() const
{
	return new CarData;
}
/// \endcond

const ::std::string&
IceProxy::Data::CarData::ice_staticId()
{
	return ::Data::CarData::ice_staticId();
}

Data::CarData::~CarData()
{
}

/// \cond INTERNAL
::Ice::Object* Data::upCast(CarData* p) { return p; }

/// \endcond

namespace
{
const ::std::string iceC_Data_CarData_ids[2] =
{
	"::Data::CarData",
	"::Ice::Object"
};

}

bool
Data::CarData::ice_isA(const ::std::string& s, const ::Ice::Current&) const
{
	return ::std::binary_search(iceC_Data_CarData_ids, iceC_Data_CarData_ids + 2, s);
}

::std::vector< ::std::string>
Data::CarData::ice_ids(const ::Ice::Current&) const
{
	return ::std::vector< ::std::string>(&iceC_Data_CarData_ids[0], &iceC_Data_CarData_ids[2]);
}

const ::std::string&
Data::CarData::ice_id(const ::Ice::Current&) const
{
	return ice_staticId();
}

const ::std::string&
Data::CarData::ice_staticId()
{
#ifdef ICE_HAS_THREAD_SAFE_LOCAL_STATIC
	static const ::std::string typeId = "::Data::CarData";
	return typeId;
#else
	return iceC_Data_CarData_ids[0];
#endif
}

/// \cond INTERNAL
bool
Data::CarData::_iceD_setJoystickValue(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
	_iceCheckMode(::Ice::Normal, current.mode);
	::Ice::InputStream* istr = inS.startReadParams();
	bool iceP_newValue;
	istr->read(iceP_newValue);
	inS.endReadParams();
	this->setJoystickValue(iceP_newValue, current);
	inS.writeEmptyParams();
	return true;
}
/// \endcond

/// \cond INTERNAL
bool
Data::CarData::_iceD_getJoystickValue(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
	_iceCheckMode(::Ice::Normal, current.mode);
	inS.readEmptyParams();
	bool ret = this->getJoystickValue(current);
	::Ice::OutputStream* ostr = inS.startWriteParams();
	ostr->write(ret);
	inS.endWriteParams();
	return true;
}
/// \endcond

/// \cond INTERNAL
bool
Data::CarData::_iceD_setCarTemperatureValue(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
	_iceCheckMode(::Ice::Normal, current.mode);
	::Ice::InputStream* istr = inS.startReadParams();
	::Ice::Double iceP_newValue;
	istr->read(iceP_newValue);
	inS.endReadParams();
	this->setCarTemperatureValue(iceP_newValue, current);
	inS.writeEmptyParams();
	return true;
}
/// \endcond

/// \cond INTERNAL
bool
Data::CarData::_iceD_getCarTemperatureValue(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
	_iceCheckMode(::Ice::Normal, current.mode);
	inS.readEmptyParams();
	::Ice::Double ret = this->getCarTemperatureValue(current);
	::Ice::OutputStream* ostr = inS.startWriteParams();
	ostr->write(ret);
	inS.endWriteParams();
	return true;
}
/// \endcond

namespace
{
const ::std::string iceC_Data_CarData_all[] =
{
	"getCarTemperatureValue",
	"getJoystickValue",
	"ice_id",
	"ice_ids",
	"ice_isA",
	"ice_ping",
	"setCarTemperatureValue",
	"setJoystickValue"
};

}

/// \cond INTERNAL
bool
Data::CarData::_iceDispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
	::std::pair<const ::std::string*, const ::std::string*> r = ::std::equal_range(iceC_Data_CarData_all, iceC_Data_CarData_all + 8, current.operation);
	if(r.first == r.second)
	{
		throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
	}

	switch(r.first - iceC_Data_CarData_all)
	{
		case 0:
		{
			return _iceD_getCarTemperatureValue(in, current);
		}
		case 1:
		{
			return _iceD_getJoystickValue(in, current);
		}
		case 2:
		{
			return _iceD_ice_id(in, current);
		}
		case 3:
		{
			return _iceD_ice_ids(in, current);
		}
		case 4:
		{
			return _iceD_ice_isA(in, current);
		}
		case 5:
		{
			return _iceD_ice_ping(in, current);
		}
		case 6:
		{
			return _iceD_setCarTemperatureValue(in, current);
		}
		case 7:
		{
			return _iceD_setJoystickValue(in, current);
		}
		default:
		{
			assert(false);
			throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
		}
	}
}
/// \endcond

/// \cond STREAM
void
Data::CarData::_iceWriteImpl(::Ice::OutputStream* ostr) const
{
	ostr->startSlice(ice_staticId(), -1, true);
	::Ice::StreamWriter< CarData, ::Ice::OutputStream>::write(ostr, *this);
	ostr->endSlice();
}

void
Data::CarData::_iceReadImpl(::Ice::InputStream* istr)
{
	istr->startSlice();
	::Ice::StreamReader< CarData, ::Ice::InputStream>::read(istr, *this);
	istr->endSlice();
}
/// \endcond

/// \cond INTERNAL
void
Data::_icePatchObjectPtr(CarDataPtr& handle, const ::Ice::ObjectPtr& v)
{
	handle = CarDataPtr::dynamicCast(v);
	if(v && !handle)
	{
		IceInternal::Ex::throwUOE(CarData::ice_staticId(), v);
	}
}
/// \endcond

namespace Ice
{
}

#endif
