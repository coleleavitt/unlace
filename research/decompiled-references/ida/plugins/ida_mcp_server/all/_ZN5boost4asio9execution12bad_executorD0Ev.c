void __fastcall boost::asio::execution::bad_executor::~bad_executor(boost::asio::execution::bad_executor *this)
{
  *(_QWORD *)this = off_444610;
  std::exception::~exception(this);
  operator delete(this, 8u);
}

