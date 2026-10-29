unsigned __int64 __fastcall boost::asio::detail::throw_error(__int64 a1)
{
  __int64 v1; // rax
  _BYTE v3[40]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v4; // [rsp+38h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 16);
  if ( (v1 & 1) != 0 && (v1 != 1 || *(_DWORD *)a1) )
  {
    boost::system::system_error::system_error();
    boost::throw_exception<boost::system::system_error>((std::runtime_error *)v3);
  }
  return v4 - __readfsqword(0x28u);
}

