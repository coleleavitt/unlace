__int64 __fastcall sub_6EEC0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  char v4; // al
  __int64 v6; // rdx
  __int64 v9; // r12
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int8 v13; // al
  char v14; // al
  unsigned __int64 *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // r15
  __int64 i; // rax
  __int64 flags; // rax
  int v21; // r15d
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rdi
  __m128i si128; // xmm0
  unsigned int v26; // eax
  __int16 v27; // bp
  __int64 v28; // rdx
  __m128 v29; // xmm0
  unsigned __int8 v30; // [rsp+0h] [rbp-1E2h]
  char v31; // [rsp+1h] [rbp-1E1h]
  __int64 v32; // [rsp+Ah] [rbp-1D8h] BYREF
  __int64 v33; // [rsp+12h] [rbp-1D0h] BYREF
  __int64 v34; // [rsp+1Ah] [rbp-1C8h] BYREF
  __int128 v35; // [rsp+22h] [rbp-1C0h]
  __int128 v36; // [rsp+3Ah] [rbp-1A8h] BYREF
  __int64 v37; // [rsp+4Ah] [rbp-198h] BYREF
  __int64 v38; // [rsp+52h] [rbp-190h]
  __int64 v39; // [rsp+5Ah] [rbp-188h]
  _BYTE v40[6]; // [rsp+62h] [rbp-180h] BYREF
  __int16 v41; // [rsp+68h] [rbp-17Ah]
  _BYTE v42[280]; // [rsp+8Ah] [rbp-158h] BYREF
  unsigned __int64 v43; // [rsp+1A2h] [rbp-40h] BYREF

  v3 = 0;
  v4 = *(_BYTE *)(a2 + 32);
  v43 = __readfsqword(0x28u);
  v6 = 520;
  v35 = 0;
  v34 = 0;
  if ( _bittest64(&v6, v4 & 0xF) && *(_BYTE *)(a2 + 81) == 3 && *(_QWORD *)(a2 + 88) == 2 && !*(_BYTE *)(a2 + 113) )
  {
    v9 = *(_QWORD *)(a2 + 16);
    v34 = qvector_reserve((__int64)&v34, 0, 1, 8);
    *(_QWORD *)(v34 + 8 * v35) = v9;
    v11 = *(unsigned __int16 *)(a2 + 86);
    v12 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)&v35 = v35 + 1;
    v32 = -1;
    if ( !(unsigned __int8)sub_81DB0(a3, &v32, v12, v11, 0) )
      goto LABEL_7;
    v13 = *(_BYTE *)(a2 + 112);
    v37 = -1;
    v38 = 0;
    v30 = v13;
    v14 = *(_BYTE *)(a2 + 32);
    v39 = 0;
    v31 = v14;
    v15 = (unsigned __int64 *)v40;
    v36 = -1;
    do
    {
      *(_WORD *)v15 = 0;
      v15 += 5;
      *((_WORD *)v15 - 19) = 0;
      *((_WORD *)v15 - 18) = 0;
      *((_DWORD *)v15 - 2) = 0;
      *((_WORD *)v15 - 17) = 0;
      *((_OWORD *)v15 - 2) = 0;
      *(v15 - 2) = 0;
    }
    while ( &v43 != v15 );
    if ( (int)decode_insn() > 0 )
    {
      v16 = v35;
      v17 = v34;
      v18 = v37;
      if ( *((_QWORD *)&v35 + 1) < (unsigned __int64)(v35 + 1) )
      {
        v34 = qvector_reserve((__int64)&v34, v34, v35 + 1, 8);
        v17 = v34;
        v16 = v35;
      }
      *(_QWORD *)(v17 + 8 * v16) = v18;
      *(_QWORD *)&v35 = v35 + 1;
      v33 = 0;
      v37 = *(_QWORD *)(a2 + 16);
      for ( i = decode_prev_insn(); ; i = decode_prev_insn() )
      {
        if ( i == -1 )
        {
          v21 = v30;
          goto LABEL_30;
        }
        if ( (_WORD)v38 == 20 && v40[1] == 1 )
        {
          v21 = v30;
          if ( v30 == v41 )
          {
            if ( (unsigned __int8)sub_839C0(a3, &v33, &v36, v42, 0) )
              break;
          }
        }
        flags = get_flags_ex(v37, 4);
        if ( (flags & 0x10000) == 0
          || (flags & 0x1000) != 0
          || (v38 & 0x100000000LL) != 0
          || (unsigned __int16)(v38 - 18) <= 3u
          || (unsigned __int16)(v38 - 3) <= 1u )
        {
          goto LABEL_7;
        }
      }
      v22 = v35;
      v23 = v37;
      if ( *((_QWORD *)&v35 + 1) < (unsigned __int64)(v35 + 1) )
      {
        v34 = qvector_reserve((__int64)&v34, v34, v35 + 1, 8);
        v22 = v35;
      }
      *(_QWORD *)(v34 + 8 * v22) = v23;
      *(_QWORD *)&v35 = v35 + 1;
LABEL_30:
      v24 = *(_QWORD *)(a1 + 96);
      *(_BYTE *)(a1 + 68) = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_89610);
      *(_DWORD *)a1 = 0x800000;
      *(_DWORD *)(a1 + 40) = 0;
      *(__m128i *)(a1 + 8) = si128;
      v26 = 8388612;
      *(_QWORD *)(a1 + 48) = 0;
      v27 = v33 + ((v31 & 0xF) != 3);
      *(_WORD *)(a1 + 4) = 0;
      *(_QWORD *)(a1 + 56) = 0;
      *(_DWORD *)(a1 + 64) = -1;
      *(_QWORD *)(a1 + 72) = 0;
      *(_DWORD *)(a1 + 80) = 2;
      *(_QWORD *)(a1 + 88) = -1;
      *(_OWORD *)(a1 + 24) = -1;
      if ( v24 )
      {
        *(_QWORD *)(a1 + 104) = 0;
        qfree(v24);
        v26 = *(_DWORD *)a1 & 0xFFFFFBFB | 4;
      }
      v28 = v32;
      *(_WORD *)(a1 + 4) = v27;
      *(_OWORD *)(a1 + 104) = 0;
      *(_QWORD *)(a1 + 96) = 0;
      *(_QWORD *)(a1 + 8) = v28;
      v29 = _mm_loadh_ps((const double *)&v37);
      *(_DWORD *)a1 = v26;
      *(_DWORD *)(a1 + 64) = v21;
      *(_BYTE *)(a1 + 68) = 2;
      *(__m128 *)(a1 + 24) = v29;
      sub_6BB00((_QWORD *)a1, &v34);
      v3 = 1;
    }
    else
    {
LABEL_7:
      v3 = 0;
    }
    if ( v34 )
    {
      *(_QWORD *)&v35 = 0;
      qfree(v34);
    }
  }
  return v3;
}
