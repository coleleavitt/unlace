__int64 __fastcall sub_5EB20(__int64 *a1, _QWORD *a2, const __m128i *a3, __int64 a4)
{
  unsigned int v5; // edx
  int v7; // edi
  __int64 v8; // rax
  __int64 *v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // r14
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // r13
  __int64 v22; // rax
  __m128i si128; // xmm0
  __m128i *v24; // rax
  __int64 *v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rbp
  __int64 *v28; // rdx
  __int64 *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __m128i v33[3]; // [rsp+0h] [rbp-38h] BYREF

  v5 = 0;
  if ( *(_BYTE *)(a4 + 1) == 4 )
  {
    v7 = *(unsigned __int16 *)(a4 + 6);
    v8 = a1[3];
    if ( v8 )
    {
      v10 = a1 + 2;
      do
      {
        while ( 1 )
        {
          v11 = *(_QWORD *)(v8 + 16);
          v12 = *(_QWORD *)(v8 + 24);
          if ( v7 > *(_DWORD *)(v8 + 32) )
            break;
          v10 = (__int64 *)v8;
          v8 = *(_QWORD *)(v8 + 16);
          if ( !v11 )
            goto LABEL_7;
        }
        v8 = *(_QWORD *)(v8 + 24);
      }
      while ( v12 );
LABEL_7:
      v5 = 0;
      if ( v10 != a1 + 2 && v7 >= *((_DWORD *)v10 + 8) )
      {
        v13 = v10[5];
        if ( a3[1].m128i_i8[12] >= 0 )
          v13 += *(_QWORD *)(a4 + 16);
        *a2 = v13;
        if ( (a3[1].m128i_i8[12] & 0xA0) != 0 )
        {
          v15 = *(_QWORD *)(a4 + 16);
          v16 = *a1;
          v17 = v15 + v10[5];
          if ( *a1 )
          {
            v18 = *((_DWORD *)v10 + 8);
            if ( v18 == 161 )
            {
              if ( v15 > 0 )
              {
                *(_BYTE *)(v16 + 312) = 1;
              }
              else
              {
                v19 = v15 + *(_QWORD *)(v16 + 128);
                *(_QWORD *)(v16 + 128) = v19;
                if ( v15 )
                {
                  v20 = *(_QWORD *)(v16 + 288);
                  v21 = -v15;
                  v22 = *(_QWORD *)(v16 + 296);
                  si128 = _mm_unpacklo_epi64(_mm_loadl_epi64(a3 + 1), (__m128i)(unsigned __int64)-v19);
                  if ( *(_QWORD *)(v16 + 304) < (unsigned __int64)(v22 + 1) )
                  {
                    v33[0] = si128;
                    v30 = qvector_reserve();
                    si128 = _mm_load_si128(v33);
                    *(_QWORD *)(v16 + 288) = v30;
                    v20 = v30;
                    v22 = *(_QWORD *)(v16 + 296);
                  }
                  v24 = (__m128i *)(v20 + 32 * v22);
                  v24[1].m128i_i64[0] = v21;
                  v24[1].m128i_i32[2] = -1;
                  *v24 = si128;
                  v25 = *(__int64 **)(v16 + 56);
                  v26 = *(_QWORD *)(v16 + 64);
                  ++*(_QWORD *)(v16 + 296);
                  v27 = a3[1].m128i_i64[0];
                  v28 = &v25[v26];
                  if ( v25 == v28 )
                    goto LABEL_25;
                  v29 = v25;
                  while ( v27 != *v29 )
                  {
                    if ( v28 == ++v29 )
                      goto LABEL_25;
                  }
                  if ( v28 == v29 )
                  {
LABEL_25:
                    if ( *(_QWORD *)(v16 + 72) < (unsigned __int64)(v26 + 1) )
                    {
                      v31 = qvector_reserve();
                      v32 = *(_QWORD *)(v16 + 64);
                      *(_QWORD *)(v16 + 56) = v31;
                      v28 = (__int64 *)(v31 + 8 * v32);
                    }
                    *v28 = v27;
                    ++*(_QWORD *)(v16 + 64);
                  }
                }
              }
            }
            else if ( v18 == 158 && v17 == *(_QWORD *)(v16 + 136) && !*(_QWORD *)(v16 + 144) )
            {
              *(_QWORD *)(v16 + 144) = v17;
              *(_QWORD *)(v16 + 152) = a3[1].m128i_i64[0];
            }
          }
          v10[5] = v17;
        }
        return 1;
      }
    }
  }
  return v5;
}

