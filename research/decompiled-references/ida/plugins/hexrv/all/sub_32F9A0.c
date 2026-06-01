__int64 __fastcall sub_32F9A0(const char *a1, __int64 a2, __int64 a3, __int64 a4)
{
  const char *v4; // rbx
  int v6; // edx
  __int64 v7; // r9
  int *v8; // rax
  int *v9; // rbx
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __m128i v13; // xmm0
  __int64 v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // r13
  __int64 v18; // rbp
  _QWORD *v19; // rbx
  __int64 v21; // [rsp+0h] [rbp-130h] BYREF
  __int64 v22; // [rsp+8h] [rbp-128h] BYREF
  __int128 v23; // [rsp+10h] [rbp-120h]
  __int64 (__fastcall **v24)(); // [rsp+28h] [rbp-108h] BYREF
  __int64 v25; // [rsp+30h] [rbp-100h]
  __int128 v26; // [rsp+38h] [rbp-F8h]
  __int64 v27; // [rsp+48h] [rbp-E8h]
  const char *v28; // [rsp+50h] [rbp-E0h]
  int v29; // [rsp+58h] [rbp-D8h]
  __m128i v30; // [rsp+60h] [rbp-D0h]
  int v31; // [rsp+70h] [rbp-C0h]
  _BYTE v32[72]; // [rsp+78h] [rbp-B8h] BYREF
  int v33; // [rsp+D8h] [rbp-58h] BYREF
  __int64 *v34; // [rsp+E0h] [rbp-50h]
  unsigned __int64 v35; // [rsp+F0h] [rbp-40h]

  v4 = a1;
  v35 = __readfsqword(0x28u);
  v23 = 0;
  v22 = 0;
  v6 = sub_32F410(&v22, a2, a3, a4, 0);
  v27 = 0;
  if ( !a1 )
    v4 = "Choose union field";
  v29 = 2;
  v25 = 0x3FF000004LL;
  v26 = -1;
  v24 = (__int64 (__fastcall **)())&unk_4BDC88;
  v8 = (int *)v32;
  v31 = -1;
  v28 = v4;
  v9 = &v33;
  v30 = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_4B6580), (__m128i)(unsigned __int64)&off_4B6510);
  do
  {
    *(_QWORD *)v8 = 0;
    v8 += 6;
    *((_OWORD *)v8 - 1) = 0;
  }
  while ( v8 != &v33 );
  v33 = 0;
  if ( ((HIDWORD(v25) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v25) != 0xFF )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    BYTE3(v25) = ((HIDWORD(v25) >> 19) & 0x3F) - 1;
    HIDWORD(v25) &= 0xFE07FFFF;
  }
  v24 = off_4B6100;
  v21 = v6;
  v34 = &v22;
  v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(16, 0, &v24, &v21, &callui, v7);
  if ( v10 < 0 || v10 >= (unsigned __int64)v23 )
  {
    v14 = -1;
  }
  else
  {
    v11 = (_QWORD *)(v22 + (v10 << 6));
    v12 = *(_QWORD *)a4;
    v13 = _mm_loadu_si128((const __m128i *)(a4 + 8));
    *(_QWORD *)a4 = v11[4];
    *(_QWORD *)(a4 + 8) = v11[5];
    *(_QWORD *)(a4 + 16) = v11[6];
    v14 = *v11;
    v11[4] = v12;
    *(__m128i *)(v11 + 5) = v13;
  }
  v24 = (__int64 (__fastcall **)())&unk_4BDC88;
  do
  {
    v15 = *((_QWORD *)v9 - 3);
    v9 -= 6;
    if ( v15 )
    {
      *((_QWORD *)v9 + 1) = 0;
      qfree();
    }
  }
  while ( v9 != (int *)v32 );
  v16 = v22;
  if ( v22 )
  {
    v17 = v23;
    if ( (_QWORD)v23 )
    {
      v18 = 0;
      do
      {
        v19 = (_QWORD *)(v16 + (v18 << 6));
        clear_tinfo_t();
        if ( v19[4] )
        {
          v19[5] = 0;
          qfree();
        }
        if ( v19[1] )
        {
          v19[2] = 0;
          qfree();
        }
        ++v18;
        v16 = v22;
      }
      while ( v17 != v18 );
    }
    *(_QWORD *)&v23 = 0;
    qfree();
  }
  return v14;
}

