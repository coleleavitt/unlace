__int64 __fastcall sub_6D980(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  char v4; // al
  __int64 v6; // r12
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int8 v11; // al
  unsigned __int64 *v12; // rax
  __int64 v13; // rsi
  int v14; // r15d
  __int64 flags; // rax
  __int16 v16; // ax
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rbx
  __int16 v22; // bx
  __m128i si128; // xmm0
  __int64 v24; // rdi
  unsigned int v25; // eax
  __int64 v26; // rdx
  __m128 v27; // xmm0
  unsigned __int8 v28; // [rsp+1h] [rbp-1E1h]
  __int64 v29; // [rsp+2h] [rbp-1E0h]
  __int64 v30; // [rsp+Ah] [rbp-1D8h] BYREF
  __int64 v31; // [rsp+12h] [rbp-1D0h] BYREF
  __int64 v32; // [rsp+1Ah] [rbp-1C8h] BYREF
  __int128 v33; // [rsp+22h] [rbp-1C0h]
  __int128 v34; // [rsp+3Ah] [rbp-1A8h] BYREF
  __int64 v35; // [rsp+4Ah] [rbp-198h] BYREF
  __int64 v36; // [rsp+52h] [rbp-190h]
  __int64 v37; // [rsp+5Ah] [rbp-188h]
  _BYTE v38[6]; // [rsp+62h] [rbp-180h] BYREF
  __int16 v39; // [rsp+68h] [rbp-17Ah]
  _BYTE v40[280]; // [rsp+8Ah] [rbp-158h] BYREF
  unsigned __int64 v41; // [rsp+1A2h] [rbp-40h] BYREF

  v3 = 0;
  v41 = __readfsqword(0x28u);
  v4 = *(_BYTE *)(a2 + 32);
  v33 = 0;
  v32 = 0;
  if ( (v4 & 0xF) != 0xE || *(_BYTE *)(a2 + 81) != 3 || *(_QWORD *)(a2 + 88) != 2 || *(_BYTE *)(a2 + 113) )
    return v3;
  v6 = *(_QWORD *)(a2 + 16);
  v32 = qvector_reserve((__int64)&v32, 0, 1, 8);
  *(_QWORD *)(v32 + 8 * v33) = v6;
  v9 = *(unsigned __int16 *)(a2 + 86);
  v10 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)&v33 = v33 + 1;
  v30 = -1;
  if ( !(unsigned __int8)sub_81DB0(a3, &v30, v10, v9, 0) )
    goto LABEL_7;
  v11 = *(_BYTE *)(a2 + 112);
  v36 = 0;
  v37 = 0;
  v28 = v11;
  v12 = (unsigned __int64 *)v38;
  v34 = -1;
  do
  {
    *(_WORD *)v12 = 0;
    v12 += 5;
    *((_WORD *)v12 - 19) = 0;
    *((_WORD *)v12 - 18) = 0;
    *((_DWORD *)v12 - 2) = 0;
    *((_WORD *)v12 - 17) = 0;
    *((_OWORD *)v12 - 2) = 0;
    *(v12 - 2) = 0;
  }
  while ( &v41 != v12 );
  v13 = *(_QWORD *)(a2 + 16);
  v31 = 0;
  v14 = 16;
  v35 = v13;
  while ( decode_prev_insn() != -1 )
  {
    v16 = v36;
    if ( (_WORD)v36 == 20 )
    {
      if ( v38[1] != 1 || v28 != v39 )
        goto LABEL_14;
      if ( (unsigned __int8)sub_839C0(a3, &v31, &v34, v40, 0) )
      {
        v20 = v33;
        v21 = v35;
        if ( *((_QWORD *)&v33 + 1) < (unsigned __int64)(v33 + 1) )
        {
          v32 = qvector_reserve((__int64)&v32, v32, v33 + 1, 8);
          v20 = v33;
        }
        *(_QWORD *)(v32 + 8 * v20) = v21;
        *(_QWORD *)&v33 = v33 + 1;
        break;
      }
      v16 = v36;
    }
    if ( v16 == 3 )
    {
      v17 = v33;
      v18 = v35;
      v19 = v32;
      v14 = v37 & 0xF;
      if ( *((_QWORD *)&v33 + 1) < (unsigned __int64)(v33 + 1) )
      {
        v29 = v35;
        v32 = qvector_reserve((__int64)&v32, v32, v33 + 1, 8);
        v19 = v32;
        v18 = v29;
        v17 = v33;
      }
      *(_QWORD *)(v19 + 8 * v17) = v18;
      *(_QWORD *)&v33 = v33 + 1;
    }
    else
    {
LABEL_14:
      flags = get_flags_ex(v35, 4);
      if ( (flags & 0x10000) == 0
        || (flags & 0x1000) != 0
        || (v36 & 0x100000000LL) != 0
        || (unsigned __int16)(v36 - 18) <= 3u
        || (_WORD)v36 == 4 )
      {
        goto LABEL_7;
      }
    }
  }
  if ( v14 == 2 )
  {
    v22 = v31;
LABEL_34:
    si128 = _mm_load_si128((const __m128i *)&xmmword_89610);
    v24 = *(_QWORD *)(a1 + 96);
    *(_DWORD *)a1 = 0x800000;
    *(_WORD *)(a1 + 4) = 0;
    v25 = 8388612;
    *(__m128i *)(a1 + 8) = si128;
    *(_DWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 64) = -1;
    *(_BYTE *)(a1 + 68) = 0;
    *(_QWORD *)(a1 + 72) = 0;
    *(_DWORD *)(a1 + 80) = 2;
    *(_QWORD *)(a1 + 88) = -1;
    *(_OWORD *)(a1 + 24) = -1;
    if ( v24 )
    {
      *(_QWORD *)(a1 + 104) = 0;
      qfree(v24);
      v25 = *(_DWORD *)a1 & 0xFFFFFBFB | 4;
    }
    *(_DWORD *)a1 = v25;
    v26 = v30;
    *(_OWORD *)(a1 + 104) = 0;
    *(_QWORD *)(a1 + 96) = 0;
    v27 = _mm_loadh_ps((const double *)&v35);
    *(_WORD *)(a1 + 4) = v22;
    *(_QWORD *)(a1 + 8) = v26;
    *(_DWORD *)(a1 + 64) = v28;
    *(_BYTE *)(a1 + 68) = 2;
    *(__m128 *)(a1 + 24) = v27;
    sub_6BB00((_QWORD *)a1, &v32);
    v3 = 1;
  }
  else
  {
    if ( v14 == 8 )
    {
      v22 = v31 + 1;
      goto LABEL_34;
    }
LABEL_7:
    v3 = 0;
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32);
  }
  return v3;
}
