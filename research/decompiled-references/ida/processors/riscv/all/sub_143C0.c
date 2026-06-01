__int64 __fastcall sub_143C0(__int64 a1, __int64 a2, _BOOL4 a3, __int64 a4)
{
  bool v6; // r13
  __m128i *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int16 v13; // dx
  __int16 v14; // si
  int v15; // ecx
  __int64 v16; // r8
  __int16 v17; // di
  __int64 v18; // rax
  __int64 v19; // rax
  char v20; // al
  int v21; // eax
  __int64 v22; // rsi
  __int16 v23; // ax
  int v24; // edx
  __m128i v25; // xmm0
  __int64 v26; // rax
  __int64 v27; // rax
  __int16 v28; // ax
  __int16 v29; // ax
  int v30; // edx
  __m128i v31; // xmm0
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  __m128i v37; // xmm0
  int v38; // eax
  __m128i v39; // xmm0
  __int128 v40; // [rsp+0h] [rbp-198h] BYREF
  __int64 v41; // [rsp+10h] [rbp-188h]
  __int64 v42; // [rsp+18h] [rbp-180h]
  __int64 v43; // [rsp+20h] [rbp-178h]
  __m128i v44; // [rsp+28h] [rbp-170h] BYREF
  __m128i v45; // [rsp+38h] [rbp-160h] BYREF
  int v46; // [rsp+48h] [rbp-150h]
  char v47; // [rsp+55h] [rbp-143h]
  __int16 v48; // [rsp+56h] [rbp-142h]
  __int64 v49; // [rsp+60h] [rbp-138h]
  unsigned __int64 v50; // [rsp+80h] [rbp-118h]
  unsigned __int64 v51; // [rsp+168h] [rbp-30h] BYREF

  v51 = __readfsqword(0x28u);
  if ( !a3 )
    return 0;
  v6 = *(_WORD *)(a2 + 24) != 51 && (unsigned __int16)(*(_WORD *)(a2 + 24) - 1) > 1u;
  if ( v6 )
    return 0;
  v41 = -1;
  v9 = &v44;
  v40 = -1;
  v42 = 0;
  v43 = 0;
  do
  {
    v9->m128i_i16[0] = 0;
    v9 = (__m128i *)((char *)v9 + 40);
    v9[-3].m128i_i16[5] = 0;
    v9[-3].m128i_i16[6] = 0;
    v9[-1].m128i_i32[2] = 0;
    v9[-3].m128i_i16[7] = 0;
    v9[-2] = 0;
    v9[-1].m128i_i64[0] = 0;
  }
  while ( v9 != (__m128i *)&v51 );
  v10 = *(_QWORD *)(a1 + 504);
  v11 = *(unsigned __int16 *)(a2 + 26);
  v12 = *(_QWORD *)(a2 + 16);
  if ( v10 )
    *(_QWORD *)(v10 + 8) = v11;
  if ( !(unsigned int)((__int64 (__fastcall *)(__int128 *, __int64, __int64, __int64, _QWORD, _QWORD, double))decode_insn)(
                        &v40,
                        v12 + v11,
                        v12,
                        a4,
                        0,
                        0,
                        0.0) )
    return 0;
  v13 = *(_WORD *)(a2 + 46);
  if ( v13 != v48 )
    return 0;
  v14 = *(_WORD *)(a2 + 24);
  if ( v14 == 51 )
    return sub_14100(a1, a2);
  v15 = (unsigned __int16)v42;
  if ( (_WORD)v42 == 51 )
    return sub_14100(a1, a2);
  v16 = v49;
  v17 = *(_WORD *)(a2 + 34) & 4;
  if ( v17 )
    v6 = a3;
  if ( v14 == 2 )
  {
    v22 = *(_QWORD *)(a2 + 16);
    v16 = v22 + v49;
    if ( (unsigned __int16)v42 > 0xDu )
    {
      if ( (_WORD)v42 == 19 )
      {
        v32 = *(_QWORD *)(a2 + 88);
        v33 = v50;
        if ( !v32 && v50 <= 7 )
          return 0;
        *(_WORD *)(a2 + 26) += WORD1(v42);
        *(_WORD *)(a2 + 24) = 162;
        v34 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v33 + v22 + (int)((_DWORD)v32 << 12));
        *(_BYTE *)(a2 + 81) = 2;
        *(_QWORD *)(a2 + 96) = v34;
        return a3;
      }
      if ( (_WORD)v42 != 49 )
        return 0;
    }
    else if ( (unsigned __int16)v42 <= 0xAu )
    {
      if ( (_WORD)v42 != 4 )
        return 0;
      v23 = v44.m128i_i16[3];
      if ( v44.m128i_i16[3] )
      {
        v24 = v46;
        *(__m128i *)(a2 + 40) = _mm_loadu_si128(&v44);
        v25 = _mm_loadu_si128(&v45);
        *(_DWORD *)(a2 + 72) = v24;
        *(__m128i *)(a2 + 56) = v25;
        if ( v23 == 1 )
          *(_BYTE *)(a2 + 44) &= ~8u;
        v26 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
        goto LABEL_31;
      }
      v35 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
      goto LABEL_56;
    }
    if ( v48 == v44.m128i_i16[3] )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
      goto LABEL_38;
    }
    return 0;
  }
  if ( (_WORD)v42 == 19 )
  {
    if ( v48 != v44.m128i_i16[3] )
      return 0;
    *(_WORD *)(a2 + 26) += WORD1(v42);
    *(_WORD *)(a2 + 24) = 122;
    *(_QWORD *)(a2 + 88) = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL)
                         & (v50 + (int)((unsigned int)*(_QWORD *)(a2 + 88) << 12));
    return a3;
  }
  else
  {
    if ( (unsigned __int16)v42 <= 0x13u )
    {
      if ( (_WORD)v42 != 4 )
      {
        if ( (unsigned __int16)(v42 - 11) > 2u )
          return 0;
        goto LABEL_19;
      }
      v29 = v44.m128i_i16[3];
      if ( v44.m128i_i16[3] )
      {
        v30 = v46;
        *(__m128i *)(a2 + 40) = _mm_loadu_si128(&v44);
        v31 = _mm_loadu_si128(&v45);
        *(_DWORD *)(a2 + 72) = v30;
        *(__m128i *)(a2 + 56) = v31;
        if ( v29 == 1 )
          *(_BYTE *)(a2 + 44) &= ~8u;
        v26 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
        if ( !v6 )
        {
          v27 = (v16 + (*(_QWORD *)(a2 + 88) << 12)) & v26;
          goto LABEL_32;
        }
LABEL_31:
        v27 = (v16 + (int)((unsigned int)*(_QWORD *)(a2 + 88) << 12)) & v26;
LABEL_32:
        *(_BYTE *)(a2 + 81) = 7;
        *(_QWORD *)(a2 + 96) = v27;
        v28 = 163;
LABEL_33:
        *(_WORD *)(a2 + 24) = v28;
        *(_WORD *)(a2 + 26) += WORD1(v42);
        return a3;
      }
      v35 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
      if ( !v6 )
      {
        v36 = (v49 + (*(_QWORD *)(a2 + 88) << 12)) & v35;
        goto LABEL_53;
      }
LABEL_56:
      v36 = (v16 + (int)((unsigned int)*(_QWORD *)(a2 + 88) << 12)) & v35;
LABEL_53:
      *(_BYTE *)(a2 + 81) = 7;
      v37 = _mm_loadu_si128((const __m128i *)(a2 + 80));
      *(_QWORD *)(a2 + 96) = v36;
      v38 = *(_DWORD *)(a2 + 112);
      *(__m128i *)(a2 + 40) = v37;
      v39 = _mm_loadu_si128((const __m128i *)(a2 + 96));
      *(_DWORD *)(a2 + 72) = v38;
      *(_BYTE *)(a2 + 40) = 0;
      *(__m128i *)(a2 + 56) = v39;
      if ( v13 == 6 )
      {
        *(_BYTE *)(a2 + 81) = 0;
        v28 = 164;
      }
      else
      {
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 86) = (unsigned __int8)v13;
        *(_BYTE *)(a2 + 85) = v17 == 0 ? 2 : 7;
        v28 = 165;
      }
      goto LABEL_33;
    }
    if ( (_WORD)v42 == 49 )
    {
LABEL_19:
      if ( v48 == v44.m128i_i16[3] )
      {
        v18 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
        if ( !v6 )
        {
          v19 = (v49 + (*(_QWORD *)(a2 + 88) << 12)) & v18;
LABEL_22:
          *(_QWORD *)(a2 + 96) = v19;
          v20 = v47;
          *(_BYTE *)(a2 + 81) = 2;
          *(_BYTE *)(a2 + 85) = v20;
          v21 = WORD1(v42);
          LOWORD(v21) = *(_WORD *)(a2 + 26) + WORD1(v42);
          *(_DWORD *)(a2 + 24) = v15 | (v21 << 16);
          return a3;
        }
LABEL_38:
        v19 = (v16 + (int)((unsigned int)*(_QWORD *)(a2 + 88) << 12)) & v18;
        goto LABEL_22;
      }
      return 0;
    }
    return 0;
  }
}

