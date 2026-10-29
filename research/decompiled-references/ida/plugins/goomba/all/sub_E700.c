__int64 __fastcall sub_E700(std::exception *this, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 (__fastcall *hexdsp)(__int64, std::exception *); // rax

  *(_QWORD *)this = off_4D788;
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    *((_QWORD *)this + 4) = 0;
    qfree(v3);
  }
  std::exception::~exception(this);
  hexdsp = (__int64 (__fastcall *)(__int64, std::exception *))get_hexdsp(this, a2, v4);
  return hexdsp(130, this);
}

