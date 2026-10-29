__int64 __fastcall sub_FB40(__int64 a1, __int64 a2)
{
  int wide_byte; // r12d
  int v4; // eax
  __int64 v5; // r11
  unsigned int v6; // r12d
  bool v7; // zf
  __int64 *v8; // rsi
  int v9; // eax
  __int64 *v10; // rbx
  int v11; // r13d
  __int16 v12; // ax
  char v13; // r14
  char v14; // al
  unsigned __int16 v15; // bx
  int v16; // eax
  int v18; // eax
  int v19; // r11d
  int v20; // r9d
  int v21; // eax
  const __m128i *v22; // rax
  int v23; // [rsp+8h] [rbp-60h]
  __int64 v24; // [rsp+18h] [rbp-50h]
  int v25; // [rsp+28h] [rbp-40h]
  int v26; // [rsp+2Ch] [rbp-3Ch]

  wide_byte = (unsigned __int16)get_wide_byte();
  v4 = get_wide_byte();
  v5 = a2 + 40;
  *(_QWORD *)(a1 + 256) = 0;
  v6 = (v4 << 16) | wide_byte;
  *(_QWORD *)(a1 + 248) = a2 + 40;
  *(_QWORD *)(a1 + 584) = 0;
  memset(
    (void *)((a1 + 264) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((_DWORD)a1 + 256 - (((_DWORD)a1 + 264) & 0xFFFFFFF8) + 336) >> 3));
  v7 = *(_DWORD *)(a1 + 600) == 1;
  *(_QWORD *)(a1 + 256) = *(_QWORD *)(a2 + 16);
  if ( v7 )
  {
    if ( !(_BYTE)byte_2AA88 )
    {
      v21 = __cxa_guard_acquire(&byte_2AA88);
      v5 = a2 + 40;
      if ( v21 )
      {
        v22 = (const __m128i *)memcpy(qword_2AAA0, &qword_1C2C0, sizeof(qword_2AAA0));
        sub_CE40(v22, 136, 32);
        __cxa_guard_release(&byte_2AA88);
        v5 = a2 + 40;
      }
    }
    v8 = qword_2AAA0;
  }
  else
  {
    if ( !(_BYTE)byte_2AA90 )
    {
      v9 = __cxa_guard_acquire(&byte_2AA90);
      v5 = a2 + 40;
      if ( v9 )
      {
        sub_CE40((const __m128i *)&qword_1C2C0, 136, 24);
        __cxa_guard_release(&byte_2AA90);
        v5 = a2 + 40;
      }
    }
    v8 = &qword_1C2C0;
  }
  v23 = 0;
  v10 = v8;
  v11 = 0;
  v24 = v5;
  while ( (v6 & (_DWORD)v10[18]) != *((_DWORD *)v10 + 37) )
  {
LABEL_9:
    ++v11;
    v10 += 19;
    if ( v11 == 136 )
      return 0;
  }
  v12 = *((_WORD *)v10 + 1);
  *(_WORD *)(a2 + 26) = 1;
  *(_WORD *)(a2 + 24) = v12;
  v13 = *((_BYTE *)v10 + 16);
  *(_WORD *)(a2 + 26) = (strlen((const char *)v10[1]) > 0x10) + 1;
  if ( v23 == 2 )
  {
    v25 = 2;
    *(_WORD *)(a2 + 26) = 2;
  }
  else
  {
    v25 = v13;
    if ( v13 == 2 )
    {
      v23 = 2;
      v6 >>= 16;
      goto LABEL_9;
    }
  }
  if ( v10[3] )
  {
    v14 = sub_FA80(a1, a2, (__int64)v8, v6, v11, 0, 4);
  }
  else
  {
    if ( (v6 & (_DWORD)v10[5]) >> *((_DWORD *)v10 + 11) )
    {
      v18 = 2;
      v19 = 3;
      v20 = 1;
    }
    else
    {
      v18 = 4;
      v19 = 1;
      v20 = 3;
    }
    v26 = v19;
    if ( !(unsigned __int8)sub_FA80(a1, a2, (__int64)v8, v6, v11, v20, v18) )
      goto LABEL_29;
    *(_QWORD *)(a1 + 248) += 40LL;
    v14 = sub_FA80(a1, a2, (__int64)v8, v6, v11, v26, v26 + 1);
  }
  if ( !v14 )
  {
LABEL_29:
    *(_QWORD *)(a1 + 248) = v24;
    *(_BYTE *)(a2 + 41) = 0;
    *(_BYTE *)(a2 + 81) = 0;
    *(_BYTE *)(a2 + 121) = 0;
    *(_BYTE *)(a2 + 161) = 0;
    *(_BYTE *)(a2 + 201) = 0;
    *(_BYTE *)(a2 + 241) = 0;
    *(_BYTE *)(a2 + 281) = 0;
    *(_BYTE *)(a2 + 321) = 0;
    *(_QWORD *)(a1 + 256) = 0;
    *(_QWORD *)(a1 + 584) = 0;
    memset(
      (void *)((a1 + 264) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((_DWORD)a1 + 256 - (((_DWORD)a1 + 264) & 0xFFFFFFF8) + 336) >> 3));
    goto LABEL_9;
  }
  if ( v25 == 3 )
  {
    sub_ECC0(a1, a2, (unsigned __int16)v6);
  }
  else if ( v25 > 3 )
  {
    if ( v25 == 4 )
      sub_EE60(a1, a2, (unsigned __int16)v6);
  }
  else if ( v25 == 1 )
  {
    sub_E890(a1, a2, (unsigned __int16)v6);
  }
  else if ( v25 == 2 )
  {
    v15 = get_wide_byte();
    v16 = get_wide_byte();
    sub_EB50(a1, a2, (v16 << 16) | v15);
  }
  if ( !*(_BYTE *)(a2 + 41) )
  {
    if ( *(_DWORD *)(a1 + 264) )
    {
      *(__m128i *)(a2 + 40) = _mm_loadu_si128((const __m128i *)(a1 + 272));
      *(__m128i *)(a2 + 56) = _mm_loadu_si128((const __m128i *)(a1 + 288));
      *(_DWORD *)(a2 + 72) = *(_DWORD *)(a1 + 304);
      *(__m128i *)(a2 + 80) = _mm_loadu_si128((const __m128i *)(a1 + 312));
      *(__m128i *)(a2 + 96) = _mm_loadu_si128((const __m128i *)(a1 + 328));
      *(_DWORD *)(a2 + 112) = *(_DWORD *)(a1 + 344);
      *(_BYTE *)(a1 + 273) = 0;
      *(_BYTE *)(a1 + 313) = 0;
    }
  }
  return *(unsigned __int16 *)(a2 + 26);
}

