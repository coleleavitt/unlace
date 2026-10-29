__int64 __fastcall sub_3964F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  int *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rsi
  unsigned int v12; // r13d
  __m128i *v13; // rbx
  __int64 (__fastcall **v15)(); // [rsp+0h] [rbp-118h] BYREF
  __int64 v16; // [rsp+8h] [rbp-110h]
  __int128 v17; // [rsp+10h] [rbp-108h]
  __int64 v18; // [rsp+20h] [rbp-F8h]
  const char *v19; // [rsp+28h] [rbp-F0h]
  int v20; // [rsp+30h] [rbp-E8h]
  __m128i v21; // [rsp+38h] [rbp-E0h] BYREF
  int v22; // [rsp+48h] [rbp-D0h]
  char v23; // [rsp+50h] [rbp-C8h] BYREF
  char v24; // [rsp+98h] [rbp-80h] BYREF
  int v25; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v26; // [rsp+B8h] [rbp-60h]
  __int64 v27; // [rsp+C0h] [rbp-58h]
  __int128 v28; // [rsp+C8h] [rbp-50h]
  __int64 v29; // [rsp+D8h] [rbp-40h]
  __int64 v30; // [rsp+E0h] [rbp-38h]
  unsigned __int64 v31; // [rsp+E8h] [rbp-30h]

  v31 = __readfsqword(0x28u);
  if ( a2 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    v17 = -1;
    v16 = 0x3FF000004LL;
    v19 = "Select a variable to unmap";
    v15 = (__int64 (__fastcall **)())&unk_4E7D28;
    v8 = (int *)&v23;
    v18 = 0;
    v20 = 1;
    v22 = -1;
    v21 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4E1378), (__m128i)(unsigned __int64)off_4E1370);
    do
    {
      *(_QWORD *)v8 = 0;
      v8 += 6;
      *((_OWORD *)v8 - 1) = 0;
    }
    while ( v8 != &v25 );
    v25 = 0;
    v9 = HIDWORD(v16);
    v10 = ((HIDWORD(v16) >> 19) & 0x3F) - 1;
    if ( ((HIDWORD(v16) >> 19) & 0x3F) != 0 )
    {
      if ( BYTE3(v16) != 0xFF )
      {
        if ( !under_debugger )
          interr();
        BUG();
      }
      v9 = HIDWORD(v16) & 0xFE07FFFF;
      BYTE3(v16) = ((HIDWORD(v16) >> 19) & 0x3F) - 1;
      HIDWORD(v16) &= 0xFE07FFFF;
    }
    v26 = v7;
    v29 = v7 + 1280;
    v27 = 0;
    v15 = off_4E0E10;
    v30 = a2;
    v28 = 0;
    v11 = sub_38BB50(&v15, 0, a2, v9, v10, a6);
    if ( v11 )
      v12 = sub_396470(a1, v11, 0, 0.0);
    else
      v12 = 0;
    v15 = off_4E0D40;
    if ( v27 )
    {
      *(_QWORD *)&v28 = 0;
      qfree();
    }
    v15 = (__int64 (__fastcall **)())&unk_4E7D28;
    v13 = (__m128i *)&v24;
    do
    {
      if ( v13->m128i_i64[0] )
      {
        v13->m128i_i64[1] = 0;
        qfree();
      }
      v13 = (__m128i *)((char *)v13 - 24);
    }
    while ( &v21 != v13 );
  }
  else
  {
    return 0;
  }
  return v12;
}

