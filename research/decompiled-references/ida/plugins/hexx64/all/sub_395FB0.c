__int64 __fastcall sub_395FB0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        __m128i a9,
        double a10)
{
  __int64 v11; // rsi
  int *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rsi
  unsigned int v16; // r13d
  __m128i *v17; // rbx
  __int64 v18; // rdi
  __int64 (__fastcall **v20)(); // [rsp+0h] [rbp-118h] BYREF
  __int64 v21; // [rsp+8h] [rbp-110h]
  __int128 v22; // [rsp+10h] [rbp-108h]
  __int64 v23; // [rsp+20h] [rbp-F8h]
  const char *v24; // [rsp+28h] [rbp-F0h]
  int v25; // [rsp+30h] [rbp-E8h]
  __m128i v26; // [rsp+38h] [rbp-E0h] BYREF
  int v27; // [rsp+48h] [rbp-D0h]
  char v28; // [rsp+50h] [rbp-C8h] BYREF
  char v29; // [rsp+98h] [rbp-80h] BYREF
  int v30; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v31; // [rsp+B8h] [rbp-60h]
  __int64 v32; // [rsp+C0h] [rbp-58h]
  __int128 v33; // [rsp+C8h] [rbp-50h]
  __int64 v34; // [rsp+D8h] [rbp-40h]
  __int64 v35; // [rsp+E0h] [rbp-38h]
  unsigned __int64 v36; // [rsp+E8h] [rbp-30h]

  v36 = __readfsqword(0x28u);
  if ( a2 )
  {
    v11 = *(_QWORD *)(a1 + 24);
    v22 = -1;
    v21 = 0x3FF000004LL;
    v24 = "Select a variable to unmap";
    v20 = (__int64 (__fastcall **)())&unk_4EBE48;
    v12 = (int *)&v28;
    v23 = 0;
    v25 = 1;
    v27 = -1;
    v26 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4E6CB8), (__m128i)(unsigned __int64)off_4E6CB0);
    do
    {
      *(_QWORD *)v12 = 0;
      v12 += 6;
      *((_OWORD *)v12 - 1) = 0;
    }
    while ( v12 != &v30 );
    v30 = 0;
    v13 = HIDWORD(v21);
    v14 = ((HIDWORD(v21) >> 19) & 0x3F) - 1;
    if ( ((HIDWORD(v21) >> 19) & 0x3F) != 0 )
    {
      if ( BYTE3(v21) != 0xFF )
      {
        if ( !under_debugger )
          interr();
        BUG();
      }
      v13 = HIDWORD(v21) & 0xFE07FFFF;
      BYTE3(v21) = ((HIDWORD(v21) >> 19) & 0x3F) - 1;
      HIDWORD(v21) &= 0xFE07FFFF;
    }
    v31 = v11;
    v34 = v11 + 1280;
    v32 = 0;
    v20 = off_4E6750;
    v35 = a2;
    v33 = 0;
    v15 = sub_38B610(&v20, 0, a2, v13, v14, a6);
    if ( v15 )
      v16 = sub_395F30(a1, v15, 0, 0.0, COERCE_DOUBLE(off_4E6CB0), a9, a10);
    else
      v16 = 0;
    v20 = off_4E6680;
    if ( v32 )
    {
      *(_QWORD *)&v33 = 0;
      qfree(v32);
    }
    v20 = (__int64 (__fastcall **)())&unk_4EBE48;
    v17 = (__m128i *)&v29;
    do
    {
      v18 = v17->m128i_i64[0];
      if ( v17->m128i_i64[0] )
      {
        v17->m128i_i64[1] = 0;
        qfree(v18);
      }
      v17 = (__m128i *)((char *)v17 - 24);
    }
    while ( &v26 != v17 );
  }
  else
  {
    return 0;
  }
  return v16;
}

