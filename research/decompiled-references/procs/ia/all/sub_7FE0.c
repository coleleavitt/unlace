__int64 __fastcall sub_7FE0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, void *a5)
{
  int v7; // eax
  __int64 v8; // r9
  unsigned __int64 v9; // r10
  int v10; // r8d
  unsigned int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  __int64 v15; // r14
  unsigned __int16 *v16; // rcx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  _BYTE *v20; // rbp
  _BYTE *v21; // r9
  char *v22; // rcx
  char v23; // r11
  unsigned __int64 v24; // r10
  unsigned int *v25; // rdi
  const double *v26; // rcx
  __m128 v27; // xmm0
  int v28; // eax
  unsigned int v29; // esi
  int v30; // eax
  __m128i v31; // xmm1
  unsigned int v32; // esi
  __m128i v33; // xmm0
  char v35; // di
  unsigned __int16 v37; // [rsp+8h] [rbp-50h]
  unsigned __int64 v38; // [rsp+18h] [rbp-40h]

  v7 = sub_79A0(a3, a4, a3, a4, a5);
  if ( v7 < 0 )
    return 0;
  v9 = a3;
  v10 = *((_DWORD *)&unk_CDC0 + 2 * v7);
  v11 = *((unsigned __int16 *)&unk_CDC0 + 4 * v7 + 1);
  v12 = a1 + 224;
  LOWORD(v11) = (unsigned __int16)v11 >> 4;
  v13 = v10 & 0xFFFFF;
  v14 = v11;
  LOWORD(v14) = v11 & 0x7FF;
  v15 = v11 & 0x7FF;
  v16 = (unsigned __int16 *)((char *)&unk_13080 + 40 * v15);
  v17 = (__int16)v16[16];
  v18 = *((_QWORD *)v16 + 1);
  v19 = *v16;
  *(_WORD *)(a2 + 24) = v19;
  if ( a1 + 224 >= (unsigned __int64)(a1 + 352) )
    goto LABEL_31;
  v20 = (_BYTE *)(a1 + 351);
  v21 = (_BYTE *)(a1 + 224);
  v22 = (char *)*(&off_23B00 + v19);
  while ( 1 )
  {
    v23 = *v22++;
    *v21 = v23;
    if ( !v23 )
      break;
    if ( ++v21 == v20 )
    {
      *(_BYTE *)(a1 + 351) = 0;
      break;
    }
  }
  if ( (_DWORD)v13 )
  {
    v38 = a3;
    v24 = a1 + 352;
    v37 = v14;
    while ( 1 )
    {
      if ( (v13 & 1) != 0 )
      {
        v25 = (unsigned int *)&word_16EA0[8 * (int)v17];
        v14 = *((unsigned __int16 *)v25 + 4);
        v18 = ((unsigned __int64)*v25 << (*((_BYTE *)v25 + 14) & 0x3F))
            | ~((unsigned __int64)v25[1] << (*((_BYTE *)v25 + 14) & 0x3F)) & v18;
        v22 = (char *)*(&off_23B00 + v14);
        if ( *v22 )
        {
          if ( (unsigned __int64)v21 >= v24 )
          {
            if ( under_debugger )
              goto LABEL_35;
            interr(518, v17, v14, v22, v13, v21);
LABEL_31:
            if ( under_debugger )
              goto LABEL_35;
            interr(520, v17, v14, v19, v13, v8);
LABEL_33:
            if ( !under_debugger )
              interr(10217, v17, v14, v26, v13, v21);
            goto LABEL_35;
          }
          v14 = (unsigned __int64)(v21 + 1);
          *v21 = 46;
          if ( (unsigned __int64)(v21 + 1) >= v24 || (_BYTE *)v14 == v20 )
          {
LABEL_21:
            *(_BYTE *)(a1 + 351) = 0;
            v21 = (_BYTE *)(a1 + 351);
          }
          else
          {
            while ( 1 )
            {
              v35 = *v22++;
              *(_BYTE *)v14 = v35;
              if ( !v35 )
                break;
              if ( (_BYTE *)++v14 == v20 )
                goto LABEL_21;
            }
            v21 = (_BYTE *)v14;
          }
        }
        if ( (_DWORD)v13 == 1 )
          goto LABEL_16;
        v17 = word_16EA0[8 * (int)v17 + 6];
        if ( (v17 & 0x80000000) != 0LL )
        {
LABEL_14:
          while ( !under_debugger )
          {
            v18 = interr(10216, v17, v14, v22, v13, v21);
LABEL_16:
            v14 = v37;
            v12 = a1 + 224;
            v9 = v38;
            if ( (v17 & 0x80000000) == 0LL )
              goto LABEL_17;
          }
LABEL_35:
          BUG();
        }
      }
      else
      {
        v17 = word_16EA0[8 * v17 + 5];
        if ( (v17 & 0x80000000) != 0LL )
          goto LABEL_14;
      }
      v13 = (unsigned int)v13 >> 1;
    }
  }
LABEL_17:
  v26 = (const double *)((char *)&unk_13080 + 40 * v15);
  v27 = _mm_loadh_ps(v26 + 2);
  v17 = v9 & (_QWORD)v26[2];
  if ( v17 != v18 )
    goto LABEL_33;
  v28 = *((unsigned __int8 *)v26 + 2);
  v29 = *((unsigned __int8 *)v26 + 26);
  *(__m128 *)(a1 + 144) = v27;
  *(_QWORD *)(a1 + 128) = v12;
  *(_DWORD *)(a1 + 136) = v28;
  v30 = *((unsigned __int8 *)v26 + 3);
  v31 = _mm_cvtsi32_si128(v29);
  v32 = *((unsigned __int8 *)v26 + 27);
  *(_WORD *)(a1 + 182) = v14;
  *(_DWORD *)(a1 + 140) = v30;
  v33 = _mm_unpacklo_epi32(
          _mm_cvtsi32_si128(*((unsigned __int8 *)v26 + 24)),
          _mm_cvtsi32_si128(*((unsigned __int8 *)v26 + 25)));
  *(_DWORD *)(a1 + 176) = *((unsigned __int8 *)v26 + 28);
  LOWORD(v30) = *((_WORD *)v26 + 15);
  *(__m128i *)(a1 + 160) = _mm_unpacklo_epi64(v33, _mm_unpacklo_epi32(v31, _mm_cvtsi32_si128(v32)));
  *(_WORD *)(a1 + 180) = v30;
  return 1;
}
