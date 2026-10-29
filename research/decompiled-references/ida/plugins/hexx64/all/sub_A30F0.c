_DWORD *__fastcall sub_A30F0(_QWORD *a1, _DWORD *a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  *a2 = a3;
  a2[1] &= ~0x10u;
  if ( a4 )
    sub_A0C30(a1, (__int64)(a2 + 8), a4);
  if ( a5 )
    sub_A0C30(a1, (__int64)(a2 + 12), a5);
  if ( a6 )
    sub_A0C30(a1, (__int64)(a2 + 16), a6);
  return a2;
}

