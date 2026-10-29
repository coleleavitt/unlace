// Alternative name is '_ZN5boost4asio6detail11posix_mutexC2Ev'
unsigned __int64 __fastcall boost::asio::detail::posix_mutex::posix_mutex(pthread_mutex_t *this)
{
  _BYTE v2[40]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v3; // [rsp+68h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  if ( pthread_mutex_init(this, nullptr) )
  {
    boost::system::system_error::system_error();
    boost::throw_exception<boost::system::system_error>((std::runtime_error *)v2);
  }
  return v3 - __readfsqword(0x28u);
}

