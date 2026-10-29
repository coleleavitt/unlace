void __fastcall boost::asio::ip::bad_address_cast::~bad_address_cast(boost::asio::ip::bad_address_cast *this)
{
  *(_QWORD *)this = off_444830;
  std::bad_cast::~bad_cast(this);
  operator delete(this, 8u);
}

