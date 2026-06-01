void __fastcall boost::asio::multiple_exceptions::~multiple_exceptions(boost::asio::multiple_exceptions *this)
{
  *(_QWORD *)this = off_4445E8;
  if ( *((_QWORD *)this + 1) )
    std::__exception_ptr::exception_ptr::_M_release((boost::asio::multiple_exceptions *)((char *)this + 8));
  std::exception::~exception(this);
  operator delete(this, 0x10u);
}

