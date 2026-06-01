__int64 __fastcall sub_3B56D0(
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
  __int64 v11; // rbx
  __m128i *v12; // r14
  __m128i *v13; // r12
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __m128i *v16; // rbx
  __int64 v17; // rdi
  int *v18; // rax
  int *v19; // rbx
  __int64 v20; // r9
  const char *v21; // rax
  __int64 v22; // rax
  double v23; // xmm0_8
  int v24; // ebp
  unsigned int v25; // ebp
  __int64 v26; // rdi
  int v28; // [rsp+10h] [rbp-148h] BYREF
  int v29; // [rsp+14h] [rbp-144h]
  __int64 (__fastcall **v30)(); // [rsp+40h] [rbp-118h] BYREF
  __int64 v31; // [rsp+48h] [rbp-110h]
  __int128 v32; // [rsp+50h] [rbp-108h]
  __int64 v33; // [rsp+60h] [rbp-F8h]
  const char *v34; // [rsp+68h] [rbp-F0h]
  int v35; // [rsp+70h] [rbp-E8h]
  __m128i v36; // [rsp+78h] [rbp-E0h]
  int v37; // [rsp+88h] [rbp-D0h]
  _BYTE v38[96]; // [rsp+90h] [rbp-C8h] BYREF
  int v39; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v40; // [rsp+F8h] [rbp-60h]
  const char *v41; // [rsp+100h] [rbp-58h] BYREF
  __int128 v42; // [rsp+108h] [rbp-50h]
  unsigned __int64 v43; // [rsp+118h] [rbp-40h]

  v11 = 40LL * *(_QWORD *)(a2 + 8);
  v43 = __readfsqword(0x28u);
  v12 = *(__m128i **)a2;
  v13 = (__m128i *)(*(_QWORD *)a2 + v11);
  if ( v13 != *(__m128i **)a2 )
  {
    v14 = 0xCCCCCCCCCCCCCCCDLL * (v11 >> 3);
    if ( v14 )
    {
      _BitScanReverse64(&v15, v14);
      sub_3B4BD0((__int64)v12, v13, 2LL * (int)v15, a4, a5, a6);
      if ( v11 > 640 )
      {
        v16 = v12 + 40;
        sub_3A9A30(v12, v12 + 40);
        do
        {
          v17 = (__int64)v16;
          v16 = (__m128i *)((char *)v16 + 40);
          sub_3A98C0(v17);
        }
        while ( v13 != v16 );
        goto LABEL_6;
      }
    }
    else
    {
      sub_3B4BD0((__int64)v12, v13, -2, a4, a5, a6);
    }
    sub_3A9A30(v12, v13);
  }
LABEL_6:
  v33 = 0;
  v31 = 0x3FF000004LL;
  v32 = -1;
  v18 = (int *)v38;
  v30 = (__int64 (__fastcall **)())&unk_4EBE48;
  v19 = &v39;
  v34 = nullptr;
  v35 = 4;
  v37 = -1;
  v36 = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_4E7570), (__m128i)(unsigned __int64)&off_4E7520);
  do
  {
    *(_QWORD *)v18 = 0;
    v18 += 6;
    *((_OWORD *)v18 - 1) = 0;
  }
  while ( &v39 != v18 );
  v39 = 0;
  if ( ((HIDWORD(v31) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v31) != 0xFF )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    BYTE3(v31) = ((HIDWORD(v31) >> 19) & 0x3F) - 1;
    HIDWORD(v31) &= 0xFE07FFFF;
  }
  v30 = off_4E7128;
  v40 = a2;
  v41 = nullptr;
  v42 = 0;
  sub_6B870((__int64 *)&v41);
  v21 = s1;
  if ( (_QWORD)v42 )
    v21 = v41;
  v34 = v21;
  v23 = ((double (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
          16,
          0,
          &v30,
          a1 + 44,
          &callui,
          v20);
  if ( v22 < 0 )
  {
    v25 = 0;
  }
  else
  {
    sub_390A30((__int64)&v28, *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL) + 8LL, (__int64 *)(*(_QWORD *)a2 + 40 * v22 + 16));
    if ( !v29 )
    {
      v24 = tag_skipcodes();
      v29 = skip_spaces() - v24;
    }
    sub_395890((__int64)&v28, 1, 0, 0, v23, COERCE_DOUBLE(&off_4E7520), a9, a10);
    v25 = 1;
  }
  v30 = off_4E7128;
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree((__int64)v41);
  }
  v30 = (__int64 (__fastcall **)())&unk_4EBE48;
  do
  {
    v26 = *((_QWORD *)v19 - 3);
    v19 -= 6;
    if ( v26 )
    {
      *((_QWORD *)v19 + 1) = 0;
      qfree(v26);
    }
  }
  while ( v19 != (int *)v38 );
  return v25;
}

