unsigned __int64 __fastcall sub_10B9E0(const char *a1, __int64 a2, __int64 a3)
{
  const char *v3; // rbp
  __int64 v5; // rbx
  __int64 v6; // r9
  __m128i v7; // xmm0
  _QWORD *v8; // rax
  unsigned int v9; // edx
  __int64 v10; // r15
  int v11; // eax
  __int64 v12; // r13
  int v13; // eax
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // r14
  __int64 v21; // r15
  __int64 v22; // rbp
  __int64 v23; // [rsp+8h] [rbp-50h]
  __int64 v24; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v25; // [rsp+18h] [rbp-40h]

  v3 = a1;
  v25 = __readfsqword(0x28u);
  v5 = qalloc_or_throw();
  if ( !a1 )
    v3 = "du/ud chains";
  *(_OWORD *)(v5 + 16) = -1;
  v7 = _mm_loadl_epi64(&off_4CA640);
  *(_QWORD *)v5 = &unk_4D8D28;
  *(_QWORD *)(v5 + 8) = 4278190084LL;
  *(_QWORD *)(v5 + 40) = v3;
  v8 = (_QWORD *)(v5 + 80);
  *(_QWORD *)(v5 + 32) = 0;
  *(_DWORD *)(v5 + 48) = 3;
  *(_DWORD *)(v5 + 72) = -1;
  *(__m128i *)(v5 + 56) = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)&off_4CA620);
  do
  {
    *v8 = 0;
    v8 += 3;
    *((_OWORD *)v8 - 1) = 0;
  }
  while ( v8 != (_QWORD *)(v5 + 176) );
  *(_DWORD *)(v5 + 176) = 0;
  v9 = *(_DWORD *)(v5 + 12);
  if ( ((v9 >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(v5 + 11) != 0xFF )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    *(_BYTE *)(v5 + 11) = ((v9 >> 19) & 0x3F) - 1;
    *(_DWORD *)(v5 + 12) = v9 & 0xFE07FFFF;
  }
  *(_QWORD *)(v5 + 184) = 0;
  *(_QWORD *)v5 = off_4CA420;
  *(_OWORD *)(v5 + 192) = 0;
  v10 = *(_QWORD *)(a2 + 8);
  if ( v10 )
  {
    v15 = qalloc_or_throw();
    *(_QWORD *)(v5 + 184) = v15;
    v16 = 0;
    *(_QWORD *)(v5 + 200) = v10;
    while ( 1 )
    {
      v17 = *(_QWORD *)a2 + 24 * v16;
      v23 = 24 * v16 + v15;
      sub_10B560((__int64 *)v23, v17);
      ++v16;
      *(_DWORD *)(v23 + 16) = *(_DWORD *)(v17 + 16);
      if ( v10 == v16 )
        break;
      v15 = *(_QWORD *)(v5 + 184);
    }
    *(_QWORD *)(v5 + 192) = v10;
  }
  v11 = *(_DWORD *)(a2 + 24);
  *(_QWORD *)(v5 + 216) = 0;
  *(_OWORD *)(v5 + 224) = 0;
  *(_DWORD *)(v5 + 208) = v11;
  v12 = *(_QWORD *)(a3 + 8);
  if ( v12 )
  {
    v18 = qalloc_or_throw();
    *(_QWORD *)(v5 + 216) = v18;
    v19 = v18;
    v20 = 0;
    *(_QWORD *)(v5 + 232) = v12;
    while ( 1 )
    {
      v21 = 24 * v20 + v19;
      v22 = *(_QWORD *)a3 + 24 * v20;
      sub_10B560((__int64 *)v21, v22);
      ++v20;
      *(_DWORD *)(v21 + 16) = *(_DWORD *)(v22 + 16);
      if ( v12 == v20 )
        break;
      v19 = *(_QWORD *)(v5 + 216);
    }
    *(_QWORD *)(v5 + 224) = v12;
  }
  v13 = *(_DWORD *)(a3 + 24);
  v24 = 0;
  *(_DWORD *)(v5 + 240) = v13;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(16, 0, v5, &v24, &callui, v6);
  return v25 - __readfsqword(0x28u);
}

