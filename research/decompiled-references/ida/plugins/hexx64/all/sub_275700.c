void __fastcall sub_275700(
        __m128i *a1,
        __m128i *a2,
        __int64 a3,
        __int64 (__fastcall *a4)(__int64, __int64),
        __int64 a5,
        __int64 a6)
{
  signed __int64 v7; // rdx
  __m128i *v8; // r14
  __m128i *v11; // rbx
  __m128i *v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int32 v16; // ecx
  __int64 v17; // rax
  __m128i *i; // rbp
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int32 v23; // edx
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int64 v29; // rsi
  __int64 v30; // rcx
  __int32 v31; // edx
  __int64 v32; // rax
  __m128i v33; // xmm0
  char v34; // al
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int32 v37; // ecx
  __int64 v38; // rdx
  char v39; // al
  __int64 v40; // r8
  __int64 v41; // rdi
  __int32 v42; // esi
  __int64 v43; // rcx
  __m128i v44; // xmm0
  __m128i v45; // xmm0
  __int64 m128i_i64; // [rsp+28h] [rbp-60h]

  v7 = (char *)a2 - (char *)a1;
  v8 = a2;
  if ( (char *)a2 - (char *)a1 > 512 )
  {
    if ( a3 )
    {
      while ( 1 )
      {
        v11 = a1 + 2;
        --a3;
        m128i_i64 = (__int64)v8[-2].m128i_i64;
        v12 = &a1[2 * (v7 >> 6)];
        v13 = (__int64)v8[-2].m128i_i64;
        if ( (unsigned __int8)a4((__int64)a1[2].m128i_i64, (__int64)v12) )
        {
          if ( (unsigned __int8)a4((__int64)v12, v13) )
          {
            v14 = a1->m128i_i64[0];
            v15 = a1->m128i_i64[1];
            v16 = a1[1].m128i_i32[0];
            v17 = a1[1].m128i_i64[1];
            *a1 = _mm_loadu_si128(v12);
            a1[1] = _mm_loadu_si128(v12 + 1);
            v12->m128i_i64[0] = v14;
            v12->m128i_i64[1] = v15;
            v12[1].m128i_i32[0] = v16;
            v12[1].m128i_i64[1] = v17;
          }
          else
          {
            v34 = a4((__int64)a1[2].m128i_i64, m128i_i64);
            v35 = a1->m128i_i64[0];
            v36 = a1->m128i_i64[1];
            v37 = a1[1].m128i_i32[0];
            v38 = a1[1].m128i_i64[1];
            if ( v34 )
            {
              *a1 = _mm_loadu_si128(v8 - 2);
              a1[1] = _mm_loadu_si128(v8 - 1);
              v8[-2].m128i_i64[0] = v35;
              v8[-2].m128i_i64[1] = v36;
              v8[-1].m128i_i32[0] = v37;
              v8[-1].m128i_i64[1] = v38;
            }
            else
            {
              v44 = _mm_loadu_si128(a1 + 2);
              a1[2].m128i_i64[0] = v35;
              a1[2].m128i_i64[1] = v36;
              *a1 = v44;
              v45 = _mm_loadu_si128(a1 + 3);
              a1[3].m128i_i32[0] = v37;
              a1[3].m128i_i64[1] = v38;
              a1[1] = v45;
            }
          }
        }
        else if ( (unsigned __int8)a4((__int64)a1[2].m128i_i64, v13) )
        {
          v29 = a1->m128i_i64[0];
          v30 = a1->m128i_i64[1];
          v31 = a1[1].m128i_i32[0];
          v32 = a1[1].m128i_i64[1];
          *a1 = _mm_loadu_si128(a1 + 2);
          v33 = _mm_loadu_si128(a1 + 3);
          a1[2].m128i_i64[0] = v29;
          a1[2].m128i_i64[1] = v30;
          a1[3].m128i_i32[0] = v31;
          a1[3].m128i_i64[1] = v32;
          a1[1] = v33;
        }
        else
        {
          v39 = a4((__int64)v12, m128i_i64);
          v40 = a1->m128i_i64[0];
          v41 = a1->m128i_i64[1];
          v42 = a1[1].m128i_i32[0];
          v43 = a1[1].m128i_i64[1];
          if ( v39 )
          {
            *a1 = _mm_loadu_si128(v8 - 2);
            a1[1] = _mm_loadu_si128(v8 - 1);
            v8[-2].m128i_i64[0] = v40;
            v8[-2].m128i_i64[1] = v41;
            v8[-1].m128i_i32[0] = v42;
            v8[-1].m128i_i64[1] = v43;
          }
          else
          {
            *a1 = _mm_loadu_si128(v12);
            a1[1] = _mm_loadu_si128(v12 + 1);
            v12->m128i_i64[0] = v40;
            v12->m128i_i64[1] = v41;
            v12[1].m128i_i32[0] = v42;
            v12[1].m128i_i64[1] = v43;
          }
        }
        for ( i = v8; ; i[1].m128i_i64[1] = v24 )
        {
          while ( (unsigned __int8)a4((__int64)v11, (__int64)a1) )
            v11 += 2;
          do
            i -= 2;
          while ( (unsigned __int8)a4((__int64)a1, (__int64)i) );
          if ( v11 >= i )
            break;
          v21 = v11->m128i_i64[0];
          v11 += 2;
          v22 = v11[-2].m128i_i64[1];
          v23 = v11[-1].m128i_i32[0];
          v24 = v11[-1].m128i_i64[1];
          v11[-2] = _mm_loadu_si128(i);
          v11[-1] = _mm_loadu_si128(i + 1);
          i->m128i_i64[0] = v21;
          i->m128i_i64[1] = v22;
          i[1].m128i_i32[0] = v23;
        }
        sub_275700(v11, v8, a3, a4, v19, v20);
        v7 = (char *)v11 - (char *)a1;
        if ( (char *)v11 - (char *)a1 <= 512 )
          break;
        v8 = v11;
        if ( !a3 )
          goto LABEL_14;
      }
    }
    else
    {
LABEL_14:
      sub_2755D0(a1, v8, (unsigned __int64)v8, a4, a5, a6);
      while ( (char *)v8 - (char *)a1 > 32 )
      {
        v8 -= 2;
        v27 = (__int128)_mm_loadu_si128(v8);
        *v8 = _mm_loadu_si128(a1);
        v28 = (__int128)_mm_loadu_si128(v8 + 1);
        v8[1] = _mm_loadu_si128(a1 + 1);
        sub_2753B0((__int64)a1, 0, ((char *)v8 - (char *)a1) >> 5, a4, v25, v26, v27, v28);
      }
    }
  }
}

