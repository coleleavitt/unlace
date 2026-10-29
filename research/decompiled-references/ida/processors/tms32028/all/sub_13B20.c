__int64 __fastcall sub_13B20(__int64 a1, __int64 *a2, __m128i *a3, __int64 a4, __int64 a5, int a6)
{
  char v7; // al
  __int64 v9; // rax
  __int16 v10; // dx
  unsigned int v11; // edx
  unsigned int v13; // r8d
  char v14; // si
  __int64 v15; // rdx
  unsigned int v16; // r8d
  __int64 v17[45]; // [rsp-170h] [rbp-1A8h] BYREF
  int v18[2]; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v19[5]; // [rsp+10h] [rbp-28h] BYREF

  v7 = *(_BYTE *)(a1 + 97);
  v19[1] = __readfsqword(0x28u);
  if ( v7 == 5 )
  {
    v9 = *(_QWORD *)(a1 + 104);
    v14 = *(_BYTE *)(a1 + 131);
    *(_QWORD *)v18 = v9;
    if ( v14 )
    {
      v11 = 0;
      if ( ((v14 - 48) & 0xEF) == 0 )
        return v11;
      v15 = v9 << 16;
      v9 <<= v14 & 0xF;
      if ( v14 == 32 )
        v9 = v15;
    }
    *a3 = _mm_loadu_si128((const __m128i *)(a1 + 56));
    a3[1] = _mm_loadu_si128((const __m128i *)(a1 + 72));
    a3[2].m128i_i32[0] = *(_DWORD *)(a1 + 88);
  }
  else if ( v7 == 1
         && !*(_BYTE *)(a1 + 131)
         && (v13 = *(unsigned __int16 *)(a1 + 102),
             qmemcpy(v17, (const void *)(a1 + 16), sizeof(v17)),
             (unsigned __int8)sub_13510(
                                *(_QWORD *)(a1 + 888),
                                (__int64 *)v18,
                                v19,
                                v13,
                                v13,
                                a6,
                                v17[0],
                                v17[1],
                                v17[2],
                                v17[3],
                                v17[4],
                                v17[5],
                                v17[6],
                                v17[7],
                                v17[8],
                                v17[9],
                                v17[10],
                                v17[11],
                                (void *)v17[12],
                                v17[13],
                                v17[14])) )
  {
    *a3 = _mm_loadu_si128((const __m128i *)(a1 + 56));
    a3[1] = _mm_loadu_si128((const __m128i *)(a1 + 72));
    a3[2].m128i_i32[0] = *(_DWORD *)(a1 + 88);
    v9 = *(_QWORD *)v18;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 57) == 1 )
    {
      v16 = *(unsigned __int16 *)(a1 + 62);
      qmemcpy(v17, (const void *)(a1 + 16), sizeof(v17));
      if ( (unsigned __int8)sub_13510(
                              *(_QWORD *)(a1 + 888),
                              (__int64 *)v18,
                              v19,
                              v16,
                              v16,
                              a6,
                              v17[0],
                              v17[1],
                              v17[2],
                              v17[3],
                              v17[4],
                              v17[5],
                              v17[6],
                              v17[7],
                              v17[8],
                              v17[9],
                              v17[10],
                              v17[11],
                              (void *)v17[12],
                              v17[13],
                              v17[14]) )
      {
        *a3 = _mm_loadu_si128((const __m128i *)(a1 + 96));
        a3[1] = _mm_loadu_si128((const __m128i *)(a1 + 112));
        a3[2].m128i_i32[0] = *(_DWORD *)(a1 + 128);
      }
    }
    v9 = *(_QWORD *)v18;
  }
  v10 = *(_WORD *)(a1 + 40);
  if ( (unsigned __int16)(v10 - 131) <= 1u || v10 == 136 )
    v9 = -v9;
  *a2 = v9;
  return 1;
}

