__int64 __fastcall sub_CAD0(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  __int64 v8; // rax
  int v9; // edx
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int128 v23; // [rsp+10h] [rbp-18h]

  v8 = sub_BB20();
  v9 = sub_A440(v8);
  result = 64;
  if ( !v9 )
  {
    v11 = sub_BB20();
    v16 = sub_A8C0(v11, a2, v12, v13, v14, v15, (__int128)_mm_loadu_si128((const __m128i *)&a7), a8);
    result = 32;
    if ( v16 )
    {
      v17 = sub_BB20();
      *(_QWORD *)&v23 = a8;
      v22 = (unsigned int)sub_A9E0(v17, a2, v18, v19, v20, v21, (__int128)_mm_loadu_si128((const __m128i *)&a7), v23)
          - 1;
      result = 16;
      if ( (unsigned int)v22 <= 0xC )
        return dword_22380[v22];
    }
  }
  return result;
}

