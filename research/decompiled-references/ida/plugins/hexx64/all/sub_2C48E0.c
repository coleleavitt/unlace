__int64 __fastcall sub_2C48E0(__int64 a1, __int64 *a2, __int64 a3, __int64 *a4, double a5)
{
  char v8; // al
  unsigned int v9; // edx
  int v11; // eax
  unsigned __int64 v12; // r14
  int *v13; // rbp
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r12
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int128 v24; // xmm1
  __int64 v25; // rsi
  __m128i v26; // xmm0
  __int64 v27; // rsi
  __m128i v28; // xmm0
  __int64 v29; // rdi
  __int64 v31; // [rsp+0h] [rbp-68h]
  __int64 v32; // [rsp+8h] [rbp-60h]
  int v33; // [rsp+14h] [rbp-54h]
  __int64 v34; // [rsp+18h] [rbp-50h]
  __int64 v36; // [rsp+28h] [rbp-40h]

  v8 = is_cvt64();
  v9 = 0;
  if ( *(_QWORD *)(a3 + 8) - *(_QWORD *)a3 >= (unsigned __int64)(v8 == 0 ? 4 : 0) + 5 )
  {
    v11 = unpack_dd();
    if ( !v11 )
    {
      if ( !under_debugger )
        sub_383060(0xC7F4u, a5);
      BUG();
    }
    v12 = 0;
    sub_EABB0(a2, v11);
    if ( a2[1] )
    {
      do
      {
        while ( 1 )
        {
          v13 = (int *)(*a2 + 80 * v12);
          sub_2B2DE0((__int64)v13, (const void **)a3, *(_QWORD *)(a3 + 8));
          v14 = unpack_dd();
          v15 = 0;
          v33 = v14;
          if ( a4 )
          {
            v16 = a4[1];
            v17 = a4[2];
            if ( v17 < v16 + 1 )
            {
              v18 = qvector_reserve((__int64)a4, 0, v16 + 1, 48);
              v19 = a4[2];
              v20 = a4[1];
              a4[2] = v17;
              v34 = v18;
              v21 = *a4;
              v36 = v19;
              v22 = v20 - 1;
              if ( v22 >= 0 )
              {
                v23 = v18;
                v24 = 0;
                do
                {
                  v25 = *(_QWORD *)v21;
                  v26 = _mm_loadu_si128((const __m128i *)(v21 + 8));
                  *(_QWORD *)v21 = 0;
                  *(_OWORD *)(v21 + 8) = v24;
                  *(_QWORD *)v23 = v25;
                  *(__m128i *)(v23 + 8) = v26;
                  v27 = *(_QWORD *)(v21 + 24);
                  v28 = _mm_loadu_si128((const __m128i *)(v21 + 32));
                  *(_QWORD *)(v21 + 24) = 0;
                  *(_QWORD *)(v23 + 24) = v27;
                  *(__m128i *)(v23 + 32) = v28;
                  v29 = *(_QWORD *)v21;
                  *(_QWORD *)(v21 + 40) = 0;
                  if ( v29 )
                  {
                    *(_QWORD *)(v21 + 8) = 0;
                    v32 = v22;
                    v31 = v23;
                    qfree(v29);
                    v22 = v32;
                    v23 = v31;
                    v24 = 0;
                  }
                  v21 += 48;
                  v23 += 48;
                }
                while ( v22-- != 0 );
                v21 = *a4;
              }
              qfree(v21);
              *a4 = v34;
              a4[2] = v36;
              v16 = a4[1];
            }
            else
            {
              v34 = *a4;
            }
            v15 = 48 * v16 + v34;
            *(_QWORD *)v15 = 0;
            *(_QWORD *)(v15 + 24) = 0;
            *(_OWORD *)(v15 + 8) = 0;
            *(_OWORD *)(v15 + 32) = 0;
            ++a4[1];
          }
          if ( !(unsigned __int8)sub_2B6F30((const void **)a3, *(_QWORD *)(a3 + 8), (__int64)(v13 + 16), (__int64 *)v15) )
            break;
          if ( ++v12 >= a2[1] )
            return 1;
        }
        ++v12;
        sub_2B79B0(a1, (__int64)(v13 + 16), v13, v33);
      }
      while ( v12 < a2[1] );
    }
    return 1;
  }
  return v9;
}

