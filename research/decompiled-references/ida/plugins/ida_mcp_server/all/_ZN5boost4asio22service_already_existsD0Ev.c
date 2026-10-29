void __fastcall boost::asio::service_already_exists::~service_already_exists(boost::asio::service_already_exists *this)
{
  *(_QWORD *)this = off_4446A8;
  std::logic_error::~logic_error(this);
  operator delete(this, 0x10u);
}

