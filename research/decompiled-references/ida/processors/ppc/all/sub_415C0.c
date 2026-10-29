unsigned __int64 __fastcall sub_415C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 (__fastcall *a4)(const char *, __int64, double),
        __int64 a5)
{
  __m128i *v8; // rax
  __m128i v9; // xmm0
  __int64 v10; // rax
  __int64 segm_para; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  bool v14; // cl
  unsigned __int64 result; // rax
  int v16; // edi
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // r15d
  char v20; // r14
  __int8 v21; // si
  __int64 v22; // rdx
  const char *v23; // rdi
  __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rax
  __int128 v28; // [rsp+2h] [rbp-1A8h] BYREF
  __int64 v29; // [rsp+12h] [rbp-198h] BYREF
  __int64 v30; // [rsp+1Ah] [rbp-190h]
  __int64 v31; // [rsp+22h] [rbp-188h]
  __m128i v32; // [rsp+2Ah] [rbp-180h] BYREF
  __m128i v33; // [rsp+3Ah] [rbp-170h]
  int v34; // [rsp+4Ah] [rbp-160h]
  unsigned __int64 v35; // [rsp+16Ah] [rbp-40h] BYREF

  v35 = __readfsqword(0x28u);
  v8 = &v32;
  v28 = -1;
  v30 = 0;
  v9.m128i_i64[0] = 0;
  v31 = 0;
  do
  {
    v8->m128i_i16[0] = 0;
    v8 = (__m128i *)((char *)v8 + 40);
    v8[-3].m128i_i16[5] = 0;
    v8[-3].m128i_i16[6] = 0;
    v8[-1].m128i_i32[2] = 0;
    v8[-3].m128i_i16[7] = 0;
    v8[-2] = 0;
    v8[-1].m128i_i64[0] = 0;
  }
  while ( &v35 != (unsigned __int64 *)v8 );
  v29 = a2;
  v10 = getseg(a2);
  segm_para = get_segm_para(v10);
  v12 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)&v28 = segm_para;
  *((_QWORD *)&v28 + 1) = a2 - (*(_QWORD *)(v12 + 16) & (16 * segm_para));
  if ( !(unsigned int)sub_31310(a1, (__int64)&v28) )
    return -1;
  v13 = (unsigned __int16)v30;
  v14 = (_WORD)v30 == 320 || (_WORD)v30 == 13;
  if ( !v14 )
  {
    if ( (unsigned __int16)v30 > 0x150u )
    {
      if ( (_WORD)v30 != 2082 )
        return -1;
    }
    else
    {
      if ( (unsigned __int16)v30 > 0x13Fu )
      {
        LOWORD(v13) = v30 - 322;
        switch ( v13 )
        {
          case 0LL:
            v16 = 4;
            v17 = 80;
            v18 = 0;
            v19 = -1;
            v20 = 4;
            goto LABEL_12;
          case 1LL:
            v20 = 16;
            if ( v32.m128i_i8[1] != 11 )
              goto LABEL_35;
            goto LABEL_40;
          case 2LL:
            v16 = 0;
            v17 = 80;
            v18 = 0;
            v19 = -1;
            v20 = 8;
            goto LABEL_12;
          case 3LL:
            v16 = 0;
            v17 = 80;
            v18 = 0;
            v19 = -1;
            v20 = 0;
            goto LABEL_12;
          case 4LL:
            v14 = 1;
            v20 = 18;
            if ( v32.m128i_i8[1] == 11 )
            {
LABEL_40:
              v16 = 0;
              v17 = 80;
              v19 = -1;
              v18 = 0;
              goto LABEL_41;
            }
LABEL_35:
            if ( (*(_QWORD *)(a4("CTR", a5, 0.0) + 8) == 1) != v14 )
              return -1;
            break;
          case 5LL:
            v16 = 0;
            v17 = 80;
            v18 = 0;
            v19 = -1;
            v20 = 10;
            goto LABEL_12;
          case 6LL:
            v16 = 0;
            v17 = 80;
            v18 = 0;
            v19 = -1;
            v20 = 2;
            goto LABEL_12;
          case 7LL:
            v16 = 4;
            v17 = 80;
            v18 = 0;
            v19 = 0;
            v20 = 12;
            goto LABEL_12;
          case 8LL:
            v16 = 4;
            v17 = 80;
            v18 = 0;
            v19 = 1;
            v20 = 4;
            goto LABEL_12;
          case 9LL:
            v16 = 4;
            v17 = 80;
            v18 = 0;
            v19 = 2;
            v20 = 12;
            goto LABEL_12;
          case 10LL:
            v16 = 4;
            v17 = 80;
            v18 = 0;
            v19 = 0;
            v20 = 4;
            goto LABEL_12;
          case 11LL:
            v16 = 4;
            v17 = 80;
            v18 = 0;
            v19 = 1;
            v20 = 12;
            goto LABEL_12;
          case 12LL:
            v16 = 4;
            v17 = 80;
            v18 = 0;
            v19 = 2;
            v20 = 4;
            goto LABEL_12;
          case 13LL:
            v16 = 4;
            v17 = 80;
            v18 = 0;
            v19 = 3;
            v20 = 12;
            goto LABEL_12;
          case 14LL:
            v16 = 4;
            v17 = 80;
            v18 = 0;
            v19 = 3;
            v20 = 4;
            goto LABEL_12;
          default:
            v16 = 4;
            v17 = 80;
            v18 = 0;
            v19 = -1;
            v20 = 12;
            goto LABEL_12;
        }
        goto LABEL_17;
      }
      if ( (unsigned __int16)(v30 - 14) > 2u )
        return -1;
    }
    v17 = 120;
    v18 = 1;
    v19 = -1;
    v20 = v32.m128i_i8[8];
    v16 = v32.m128i_i8[8] & 4;
LABEL_12:
    v21 = v32.m128i_i8[40 * v18 + 1];
    if ( v21 == 12 )
    {
      v19 = v32.m128i_u16[20 * v18 + 3];
    }
    else if ( v21 == 11 )
    {
LABEL_41:
      v19 += 4 * v32.m128i_u16[20 * v18 + 3];
    }
    v32 = _mm_loadu_si128((const __m128i *)((char *)&v28 + v17));
    v9 = _mm_loadu_si128((const __m128i *)((char *)&v29 + v17));
    v33 = v9;
    v34 = *(_DWORD *)((char *)&v31 + v17);
    if ( !v16
      && (*(_QWORD *)(((__int64 (__fastcall *)(const char *, __int64))a4)("CTR", a5) + 8) == 1) != ((v20 & 2) != 0) )
    {
      return -1;
    }
    if ( (v20 & 0x10) == 0 )
    {
      v22 = *(_QWORD *)(((__int64 (__fastcall *)(const char *, __int64))a4)("CR", a5) + 8);
      if ( !_bittest64(&v22, (unsigned int)(31 - v19)) != ((v20 & 8) == 0) )
        return -1;
    }
  }
LABEL_17:
  if ( (v32.m128i_i8[1] & 0xF7) == 0 )
  {
    if ( (v30 & 0x10000000000LL) != 0 )
    {
      v23 = "LR";
LABEL_20:
      v24 = *(_QWORD *)(a4(v23, a5, *(double *)v9.m128i_i64) + 8);
      result = v24 & 0xFFFFFFFFFFFFFFFCLL;
      v25 = v24 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v30 & 0x200000000000LL) != 0 )
        return v25;
      return result;
    }
    v23 = "CTR";
    if ( (v30 & 0x20000000000LL) != 0 )
      goto LABEL_20;
    goto LABEL_9;
  }
  if ( v32.m128i_i8[1] != 7 )
  {
LABEL_9:
    sub_33700((__int64)"%a: unhandled instruction", *(double *)v9.m128i_i64);
    return -1;
  }
  v26 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
  v27 = v33.m128i_i64[0] + 16 * v28;
  if ( v27 != v26 )
  {
    v26 &= v27;
    if ( v27 == -1 )
      v26 = -1;
  }
  return use_mapping(v26);
}

