__int64 __fastcall sub_10270(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  __int64 result; // rax
  __int64 v8; // rax

  v6 = *a1;
  if ( (unsigned __int64)a1[2] <= 0xC )
  {
    v8 = qvector_reserve(a1, v6, 13, 1, a5, a6);
    *a1 = v8;
    v6 = v8;
  }
  a1[1] = 13;
  *(_QWORD *)v6 = 0x2528696825252001LL;
  *(_DWORD *)(v6 + 8) = 537012595;
  result = *a1;
  *(_BYTE *)(*a1 + 12) = 0;
  return result;
}
