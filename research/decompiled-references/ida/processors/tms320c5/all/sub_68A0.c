__int64 __fastcall sub_68A0(unsigned __int64 a1)
{
  __int16 v1; // dx
  __int64 result; // rax
  __int64 v3; // rax

  v1 = (unsigned __int16)a1 >> 12;
  if ( (unsigned __int16)a1 >> 12 == 11 )
    return ((_WORD)a1 == 0xBE3D) | (unsigned __int8)((_WORD)a1 == 0xBE21);
  if ( v1 == 15 )
  {
    result = 1;
    if ( (_WORD)a1 != 0xFF00 )
      return (a1 & 0xC00) != 1024;
  }
  else
  {
    result = 0;
    if ( v1 == 7 )
    {
      v3 = 2818572288LL;
      LOWORD(a1) = ((unsigned __int16)a1 >> 7) - 224;
      return _bittest64(&v3, a1);
    }
  }
  return result;
}

