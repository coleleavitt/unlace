__int64 __fastcall sub_DA50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbp
  char v8; // al
  __int64 (__fastcall *v9)(__int64, __int64, __int64); // rcx
  char v10; // al
  unsigned __int8 v11; // bp
  unsigned __int8 v12; // al
  bool v13; // r12
  __int64 (__fastcall *v14)(__int64, __int64); // rax
  unsigned __int8 v15; // al
  bool v16; // dl
  bool v17; // cc
  bool v18; // al
  char v19; // al
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  __m128i *v23; // rax
  __int64 v24; // rax
  __m128i v25; // xmm0
  __m128i *v26; // rdx
  int v27; // eax
  __m128i *v28; // rax
  __int64 v29[45]; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v30[7]; // [rsp+170h] [rbp-38h] BYREF

  v30[1] = __readfsqword(0x28u);
  if ( *(_WORD *)(a1 + 40) != 3 )
    return 0;
  v7 = *(_QWORD *)(a1 + 864);
  v8 = *(_BYTE *)(v7 + 1);
  if ( !v8 )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL);
  if ( v9 != sub_B220 )
  {
    v10 = v9(a1, a1 + 136, *(_QWORD *)(a1 + 864));
LABEL_11:
    if ( !v10 )
      return 0;
    goto LABEL_12;
  }
  if ( v8 != *(_BYTE *)(a1 + 137) )
    return 0;
  if ( v8 != 99 )
  {
    if ( v8 == 100 )
    {
      v10 = *(_QWORD *)(a1 + 144) == *(_QWORD *)(v7 + 8);
    }
    else
    {
      if ( v8 != 1 )
        return 0;
      v10 = *(_WORD *)(a1 + 142) == *(_WORD *)(v7 + 6);
    }
    goto LABEL_11;
  }
LABEL_12:
  v11 = *(_BYTE *)(v7 + 5);
  v12 = *(_BYTE *)(a1 + 141);
  v13 = v11 <= 0xF9u;
  if ( v12 > 0xF9u )
  {
    if ( v11 > 0xF9u && v12 >= v11 )
      goto LABEL_21;
  }
  else if ( v11 > 0xF9u || v12 >= v11 || *(_BYTE *)(a1 + 8) && v12 == 2 )
  {
    goto LABEL_21;
  }
  v14 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v14 == sub_B280 )
    return 0;
  v15 = v14(a1, a1 + 136);
  v16 = v13 || v15 < v11;
  v17 = v15 <= 0xF9u;
  v18 = v13 && v15 < v11;
  if ( !v17 )
    v18 = v16;
  if ( v18 )
    return 0;
LABEL_21:
  v19 = *(_BYTE *)(a1 + 57);
  if ( v19 == 5 )
  {
    v25 = _mm_loadu_si128((const __m128i *)(a1 + 96));
    v24 = *(_QWORD *)(a1 + 64) & *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 888) + 32LL) + 16LL);
    *(_QWORD *)(a1 + 896) = *(_QWORD *)(a1 + 32);
    v26 = *(__m128i **)(a1 + 864);
    *v26 = v25;
    v26[1] = _mm_loadu_si128((const __m128i *)(a1 + 112));
    v26[2].m128i_i32[0] = *(_DWORD *)(a1 + 128);
  }
  else
  {
    if ( v19 != 1 )
      return 0;
    v20 = *(unsigned __int16 *)(a1 + 62);
    qmemcpy(v29, (const void *)(a1 + 16), sizeof(v29));
    if ( (unsigned __int8)sub_D790(
                            *(_QWORD *)(a1 + 888),
                            v30,
                            (_QWORD *)(a1 + 896),
                            v20,
                            a5,
                            a6,
                            v29[0],
                            v29[1],
                            v29[2],
                            v29[3],
                            v29[4],
                            v29[5],
                            v29[6],
                            v29[7],
                            v29[8],
                            v29[9],
                            v29[10]) )
    {
      v23 = *(__m128i **)(a1 + 864);
      *v23 = _mm_loadu_si128((const __m128i *)(a1 + 96));
      v23[1] = _mm_loadu_si128((const __m128i *)(a1 + 112));
      v23[2].m128i_i32[0] = *(_DWORD *)(a1 + 128);
      v24 = v30[0];
    }
    else
    {
      v27 = *(unsigned __int16 *)(a1 + 102);
      qmemcpy(v29, (const void *)(a1 + 16), sizeof(v29));
      if ( !(unsigned __int8)sub_D790(
                               *(_QWORD *)(a1 + 888),
                               v30,
                               (_QWORD *)(a1 + 896),
                               v27,
                               v21,
                               v22,
                               v29[0],
                               v29[1],
                               v29[2],
                               v29[3],
                               v29[4],
                               v29[5],
                               v29[6],
                               v29[7],
                               v29[8],
                               v29[9],
                               v29[10]) )
        return 0;
      v28 = *(__m128i **)(a1 + 864);
      *v28 = _mm_loadu_si128((const __m128i *)(a1 + 56));
      v28[1] = _mm_loadu_si128((const __m128i *)(a1 + 72));
      v28[2].m128i_i32[0] = *(_DWORD *)(a1 + 88);
      v24 = v30[0];
    }
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) = v24;
  return 1;
}

