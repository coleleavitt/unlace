__int64 __fastcall sub_10000(__int64 a1, __int64 a2)
{
  unsigned int wide_byte; // eax
  __int64 v3; // r10
  unsigned int v4; // r13d
  bool v5; // zf
  __int64 *v6; // rdx
  int v7; // eax
  __int64 *v8; // rbx
  int v9; // r14d
  char v10; // al
  int v12; // eax
  int v13; // r11d
  int v14; // r9d
  int v15; // eax
  const __m128i *v16; // rax
  __int64 v17; // [rsp+0h] [rbp-58h]
  __int64 v18; // [rsp+8h] [rbp-50h]
  int v19; // [rsp+14h] [rbp-44h]
  unsigned int v20; // [rsp+18h] [rbp-40h]

  wide_byte = get_wide_byte();
  v3 = a2 + 40;
  v20 = wide_byte;
  v4 = wide_byte;
  ++*(_WORD *)(a2 + 26);
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 248) = a2 + 40;
  *(_QWORD *)(a1 + 584) = 0;
  memset(
    (void *)((a1 + 264) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((_DWORD)a1 + 256 - (((_DWORD)a1 + 264) & 0xFFFFFFF8) + 336) >> 3));
  v5 = *(_DWORD *)(a1 + 600) == 1;
  *(_QWORD *)(a1 + 256) = *(_QWORD *)(a2 + 16);
  if ( v5 )
  {
    if ( !(_BYTE)byte_2AA78 )
    {
      v15 = __cxa_guard_acquire(&byte_2AA78);
      v3 = a2 + 40;
      if ( v15 )
      {
        v16 = (const __m128i *)memcpy(qword_2FB60, &off_21540, 0x90E0u);
        sub_CE40(v16, 244, 32);
        __cxa_guard_release(&byte_2AA78);
        v3 = a2 + 40;
      }
    }
    v6 = qword_2FB60;
  }
  else
  {
    if ( !(_BYTE)byte_2AA80 )
    {
      v7 = __cxa_guard_acquire(&byte_2AA80);
      v3 = a2 + 40;
      if ( v7 )
      {
        sub_CE40((const __m128i *)&off_21540, 244, 24);
        __cxa_guard_release(&byte_2AA80);
        v3 = a2 + 40;
      }
    }
    v6 = (__int64 *)&off_21540;
  }
  v18 = v3;
  v8 = v6;
  v9 = 0;
  v17 = (__int64)v6;
  while ( 1 )
  {
    if ( (v4 & (_DWORD)v8[18]) != *((_DWORD *)v8 + 37) || !(unsigned __int8)sub_E440(a1, *(_WORD *)v8) )
      goto LABEL_9;
    *(_WORD *)(a2 + 24) = *((_WORD *)v8 + 1);
    if ( v8[3] )
    {
      v10 = sub_FA80(a1, a2, v17, v4, v9, 0, 4);
    }
    else
    {
      if ( (v4 & (_DWORD)v8[5]) >> *((_DWORD *)v8 + 11) )
      {
        v12 = 2;
        v13 = 3;
        v14 = 1;
      }
      else
      {
        v12 = 4;
        v13 = 1;
        v14 = 3;
      }
      v19 = v13;
      if ( !(unsigned __int8)sub_FA80(a1, a2, v17, v4, v9, v14, v12) )
        goto LABEL_25;
      *(_QWORD *)(a1 + 248) += 40LL;
      v10 = sub_FA80(a1, a2, v17, v4, v9, v19, v19 + 1);
    }
    if ( v10 )
      break;
LABEL_25:
    *(_QWORD *)(a1 + 248) = v18;
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
LABEL_9:
    ++v9;
    v8 += 19;
    if ( v9 == 244 )
      return 0;
  }
  if ( !*(_BYTE *)(v8[1] + 8) )
    sub_EFB0(a1, a2, (unsigned __int16)(v20 >> 8));
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

