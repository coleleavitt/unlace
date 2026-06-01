__int64 __fastcall std::endl<char,std::char_traits<char>>(std::ostream *this)
{
  _BYTE *v1; // rbx
  char v2; // al
  __int64 (__fastcall *v3)(); // rdx
  std::ostream *v4; // rax

  v1 = *(_BYTE **)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL) + 240);
  if ( !v1 )
    std::__throw_bad_cast();
  if ( v1[56] )
  {
    v2 = v1[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v3 = *(__int64 (__fastcall **)())(*(_QWORD *)v1 + 48LL);
    v2 = 10;
    if ( v3 != std::ctype<char>::do_widen )
      v2 = ((__int64 (__fastcall *)(_BYTE *, __int64))v3)(v1, 10);
  }
  v4 = (std::ostream *)std::ostream::put(this, v2);
  return std::ostream::flush(v4);
}

