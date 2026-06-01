__int64 __fastcall sub_159E0(_QWORD *a1, _QWORD *a2, __int64 a3, char a4)
{
  __int64 v5; // rbx
  int _32bit; // eax
  unsigned int v7; // edx

  if ( (a4 & 0x20) == 0 )
    return (*(__int64 (__fastcall **)(_QWORD *, _QWORD *, __int64))(*a1 + 136LL))(a1, a2, a1[60] + a3);
  v5 = a3 + 8;
  _32bit = get_32bit();
  v7 = 0;
  if ( _32bit != -1 )
  {
    v7 = 1;
    *a2 = v5 + _32bit;
  }
  return v7;
}
