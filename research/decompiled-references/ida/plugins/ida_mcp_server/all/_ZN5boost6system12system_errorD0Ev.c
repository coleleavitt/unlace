void __fastcall boost::system::system_error::~system_error(boost::system::system_error *this)
{
  *(_QWORD *)this = off_444638;
  std::runtime_error::~runtime_error(this);
  operator delete(this, 0x28u);
}

