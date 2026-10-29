__int64 __fastcall sub_160F0(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64),
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // rbx
  unsigned int _32bit; // eax
  __int64 v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // r13
  __int64 v11; // rbp
  __int64 result; // rax

  v6 = a3 + a4;
  _32bit = get_32bit();
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(_DWORD *)(v8 + 2208);
  if ( v9 && v9 < _32bit )
  {
    if ( *(_BYTE *)(v8 + 2216) )
      sub_EC40();
    return 0xFFFFFFFFLL;
  }
  else
  {
    v10 = _32bit;
    v11 = 0;
    if ( _32bit )
    {
      while ( 1 )
      {
        result = (**a2)(a2, v6);
        if ( (_DWORD)result )
          break;
        ++v11;
        v6 += a5;
        if ( v10 == v11 )
          return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}
