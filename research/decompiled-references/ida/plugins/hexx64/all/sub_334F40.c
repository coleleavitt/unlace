__int64 __fastcall sub_334F40(const char *a1, const void *a2, __int64 a3, __int64 a4)
{
  const char *v4; // rbx
  int v6; // edx
  __int64 v7; // r9
  int *v8; // rax
  int *v9; // rbx
  __int64 v10; // rax
  _QWORD *v11; // rax
  const void *v12; // rdx
  __m128i v13; // xmm0
  __int64 v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // r13
  __int64 v18; // rbp
  _QWORD *v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v23; // [rsp+0h] [rbp-130h] BYREF
  __int64 v24; // [rsp+8h] [rbp-128h] BYREF
  __int128 v25; // [rsp+10h] [rbp-120h]
  __int64 (__fastcall **v26)(); // [rsp+28h] [rbp-108h] BYREF
  __int64 v27; // [rsp+30h] [rbp-100h]
  __int128 v28; // [rsp+38h] [rbp-F8h]
  __int64 v29; // [rsp+48h] [rbp-E8h]
  const char *v30; // [rsp+50h] [rbp-E0h]
  int v31; // [rsp+58h] [rbp-D8h]
  __m128i v32; // [rsp+60h] [rbp-D0h]
  int v33; // [rsp+70h] [rbp-C0h]
  _BYTE v34[72]; // [rsp+78h] [rbp-B8h] BYREF
  int v35; // [rsp+D8h] [rbp-58h] BYREF
  __int64 *v36; // [rsp+E0h] [rbp-50h]
  unsigned __int64 v37; // [rsp+F0h] [rbp-40h]

  v4 = a1;
  v37 = __readfsqword(0x28u);
  v25 = 0;
  v24 = 0;
  v6 = sub_3349B0((__int64)&v24, a2, a3, (const void **)a4, 0);
  v29 = 0;
  if ( !a1 )
    v4 = "Choose union field";
  v31 = 2;
  v27 = 0x3FF000004LL;
  v28 = -1;
  v26 = (__int64 (__fastcall **)())&unk_4EBE48;
  v8 = (int *)v34;
  v33 = -1;
  v30 = v4;
  v9 = &v35;
  v32 = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_4E3B60), (__m128i)(unsigned __int64)&off_4E3AF0);
  do
  {
    *(_QWORD *)v8 = 0;
    v8 += 6;
    *((_OWORD *)v8 - 1) = 0;
  }
  while ( v8 != &v35 );
  v35 = 0;
  if ( ((HIDWORD(v27) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v27) != 0xFF )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    BYTE3(v27) = ((HIDWORD(v27) >> 19) & 0x3F) - 1;
    HIDWORD(v27) &= 0xFE07FFFF;
  }
  v26 = off_4E36E0;
  v23 = v6;
  v36 = &v24;
  v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(16, 0, &v26, &v23, &callui, v7);
  if ( v10 < 0 || v10 >= (unsigned __int64)v25 )
  {
    v14 = -1;
  }
  else
  {
    v11 = (_QWORD *)(v24 + (v10 << 6));
    v12 = *(const void **)a4;
    v13 = _mm_loadu_si128((const __m128i *)(a4 + 8));
    *(_QWORD *)a4 = v11[4];
    *(_QWORD *)(a4 + 8) = v11[5];
    *(_QWORD *)(a4 + 16) = v11[6];
    v14 = *v11;
    v11[4] = v12;
    *(__m128i *)(v11 + 5) = v13;
  }
  v26 = (__int64 (__fastcall **)())&unk_4EBE48;
  do
  {
    v15 = *((_QWORD *)v9 - 3);
    v9 -= 6;
    if ( v15 )
    {
      *((_QWORD *)v9 + 1) = 0;
      qfree(v15);
    }
  }
  while ( v9 != (int *)v34 );
  v16 = v24;
  if ( v24 )
  {
    v17 = v25;
    if ( (_QWORD)v25 )
    {
      v18 = 0;
      do
      {
        v19 = (_QWORD *)(v16 + (v18 << 6));
        clear_tinfo_t();
        v20 = v19[4];
        if ( v20 )
        {
          v19[5] = 0;
          qfree(v20);
        }
        v21 = v19[1];
        if ( v21 )
        {
          v19[2] = 0;
          qfree(v21);
        }
        ++v18;
        v16 = v24;
      }
      while ( v17 != v18 );
    }
    *(_QWORD *)&v25 = 0;
    qfree(v16);
  }
  return v14;
}

