__int64 __fastcall sub_77030(__int64 a1, unsigned int a2, int a3, unsigned int a4, _QWORD *a5, __int64 a6)
{
  __int64 v8; // rax
  int v9; // edx
  __int64 result; // rax

  v8 = dbg;
  if ( (unsigned int)(a3 - 33) > 1 )
  {
    v9 = *(_DWORD *)(dbg + 16LL);
    if ( !v9 || v9 == 9 )
    {
      if ( (unsigned __int8)getinf_flag() && !(unsigned __int8)getinf_flag() )
      {
        *a5 = 0;
        return 1;
      }
      v8 = dbg;
    }
  }
  if ( (*(_BYTE *)(v8 + 37) & 1) == 0
    || (int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
              1108,
              a5,
              a2,
              a4,
              &callui,
              a6) <= 0 )
  {
    result = 0;
    if ( (*(_BYTE *)(a1 + 28) & 0x18) != 0 )
      return result;
    *a5 = 16 * a4;
  }
  return 1;
}
