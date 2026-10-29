void __fastcall boost::asio::invalid_service_owner::~invalid_service_owner(boost::asio::invalid_service_owner *this)
{
  *(_QWORD *)this = off_4446D0;
  std::logic_error::~logic_error(this);
  operator delete(this, 0x10u);
}

