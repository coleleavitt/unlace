__int64 __fastcall sub_1672E0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rax

  v5 = 0;
  v6 = a2;
  v7 = a4;
  v8 = a1;
  if ( a4 >= 0 )
  {
    v9 = sub_199140(a1, a2);
    v5 = 1000000 * HIDWORD(v9) + 1000 * v7 + (unsigned int)v9;
  }
  if ( !a3 )
    return a3;
  v10 = a3;
  while ( 1 )
  {
    if ( v5 )
    {
      v12 = sub_199140(a1, a2);
      v13 = 0;
      v14 = 1000000 * HIDWORD(v12) + (unsigned int)v12;
      if ( v14 < v5 )
        v13 = (v5 - v14) / 0x3E8;
    }
    else
    {
      v13 = 0xFFFFFFFFLL;
    }
    if ( (*(int (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v8 + 48LL))(v8, v13) <= 0 )
      break;
    a2 = v6;
    a1 = v8;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 56LL))(v8, v6, v10);
    if ( v11 <= 0 )
      break;
    v6 += v11;
    v10 -= v11;
    if ( !v10 )
      return a3;
  }
  return a3 - v10;
}
