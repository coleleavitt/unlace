__int64 __fastcall sub_AFF0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // rbp
  unsigned __int64 v5; // r12
  unsigned int v6; // r13d
  __int64 v7; // rbp

  v3 = 16LL * a1[28];
  v4 = a3 + v3;
  v5 = sub_9E80(a3 + v3);
  v6 = (*(__int64 (__fastcall **)(_QWORD *, __int64, unsigned __int64, unsigned __int64))(*a1 + 120LL))(
         a1,
         a2,
         v5,
         v5 - v3);
  if ( (_BYTE)v6 )
  {
    v7 = v4 - v5;
    if ( v7 > 0 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 43);
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 112LL))(a1, v7, 16);
    }
  }
  return v6;
}

