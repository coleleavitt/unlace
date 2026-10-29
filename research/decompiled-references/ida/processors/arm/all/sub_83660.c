__int64 __fastcall sub_83660(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rbp
  __int64 result; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __m128i v10; // xmm0
  int v11; // ebx
  int v12; // r13d
  __m128i *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  char v20; // al
  __m128i *v21; // rax
  __int64 v22; // rdx
  __m128i *v23; // rax
  __m128i v24; // [rsp+0h] [rbp-58h] BYREF
  __m128i v25; // [rsp+10h] [rbp-48h] BYREF
  __int64 v26; // [rsp+20h] [rbp-38h]
  unsigned __int64 v27; // [rsp+28h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 616) )
    return 0;
  v6 = (_QWORD *)a2;
  switch ( *(_BYTE *)(a4 + 1) )
  {
    case 1:
      goto LABEL_7;
    case 2:
    case 3:
    case 4:
      if ( !sub_82140(a1, a2, a4, a3, 1) )
        return 0;
      get_dtype_size();
      sub_81190(a3);
      reg_finder_emulate_mem_read();
      goto LABEL_9;
    case 5:
      *(_BYTE *)(a2 + 24) = 10;
      *(_QWORD *)(a2 + 8) = 0;
      goto LABEL_12;
    case 7:
      *(_BYTE *)(a2 + 24) = 10;
      *(_QWORD *)(a2 + 8) = 0;
LABEL_12:
      v10 = (__m128i)_mm_loadh_ps((const double *)(a3 + 16));
      v11 = 0;
      v25 = v10;
      v12 = *(unsigned __int16 *)(a3 + 24);
      LOWORD(v26) = *(_WORD *)(a3 + 24);
      if ( *(_BYTE *)(a3 + 81) == 5 )
        v11 = *(_BYTE *)(a3 + 121) == 0;
      WORD1(v26) = v11;
      v13 = *(__m128i **)a2;
      v14 = v6[2];
      if ( (unsigned __int64)&v25 < *v6 || &v25 >= (__m128i *)((char *)v13 + 24 * v14) )
      {
        if ( !v14 )
        {
          v15 = qvector_reserve((__int64)v6, (__int64)v13, 1, 24);
          v16 = v6[1];
          *v6 = v15;
          v13 = (__m128i *)(v15 + 24 * v16);
        }
        *v13 = _mm_load_si128(&v25);
        v13[1].m128i_i64[0] = v26;
      }
      else
      {
        if ( !v14 )
        {
          v24 = v10;
          v17 = qvector_reserve((__int64)v6, (__int64)v13, 1, 24);
          v18 = v6[1];
          v10 = _mm_load_si128(&v24);
          *v6 = v17;
          v13 = (__m128i *)(v17 + 24 * v18);
        }
        *v13 = v10;
        v13[1].m128i_i32[0] = v12 | (v11 << 16);
      }
      ++v6[1];
      goto LABEL_9;
    case 8:
      if ( (*(_BYTE *)(a3 + 28) & 8) != 0 || *(_BYTE *)(a4 + 33) > 1u )
        return 0;
LABEL_7:
      sub_81F70(a1, a2, *(_QWORD *)(a3 + 16), *(unsigned __int16 *)(a4 + 6));
      if ( (unsigned __int8)(*(_BYTE *)(a2 + 24) - 10) > 3u )
        return 0;
      if ( *(_BYTE *)(a4 + 1) != 8 )
        goto LABEL_9;
      v19 = *(_QWORD *)(a4 + 8);
      if ( !v19 )
        goto LABEL_9;
      v20 = *(_BYTE *)(a4 + 33);
      if ( v20 )
      {
        if ( v20 != 1 )
          goto LABEL_9;
        v21 = *(__m128i **)a2;
        v22 = *(_QWORD *)a2 + 24LL * *(_QWORD *)(a2 + 8);
        if ( *(_QWORD *)a2 != v22 )
        {
          a2 = ((_BYTE)v22 - (_BYTE)v21) & 8;
          if ( (((_BYTE)v22 - (_BYTE)v21) & 8) == 0
            || (v21->m128i_i64[0] = (unsigned __int64)v21->m128i_i64[0] >> v19,
                v21 = (__m128i *)((char *)v21 + 24),
                (__m128i *)v22 != v21) )
          {
            do
            {
              v21->m128i_i64[0] = (unsigned __int64)v21->m128i_i64[0] >> v19;
              v21[1].m128i_i64[1] = (unsigned __int64)v21[1].m128i_i64[1] >> v19;
              v21 += 3;
            }
            while ( (__m128i *)v22 != v21 );
          }
        }
      }
      else
      {
        v23 = *(__m128i **)a2;
        v22 = *(_QWORD *)a2 + 24LL * *(_QWORD *)(a2 + 8);
        if ( *(_QWORD *)a2 != v22 )
        {
          a2 = ((_BYTE)v22 - (_BYTE)v23) & 8;
          if ( (((_BYTE)v22 - (_BYTE)v23) & 8) == 0
            || (v23->m128i_i64[0] <<= v19, v23 = (__m128i *)((char *)v23 + 24), (__m128i *)v22 != v23) )
          {
            do
            {
              v23->m128i_i64[0] <<= v19;
              v23[1].m128i_i64[1] <<= v19;
              v23 += 3;
            }
            while ( (__m128i *)v22 != v23 );
          }
        }
      }
      sub_83300((__int64)v6, a2, v22, v19, v8, v9);
LABEL_9:
      result = 1;
      break;
    default:
      return 0;
  }
  return result;
}
