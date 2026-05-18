__int64 __fastcall sub_56330(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rcx
  int v5; // eax
  unsigned int v7; // ebx
  _WORD *v8; // rax
  _BYTE *v9; // rdx
  char *v10; // r13
  _BYTE *v11; // rax
  __int64 v12; // r14
  __int64 v13; // rax
  size_t v14; // r8
  size_t v15; // r15
  __int64 v16; // rsi
  size_t v17; // rdx
  _BYTE *v18; // r13
  _BYTE *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r14
  size_t v23; // r8
  size_t v24; // r15
  __int64 v25; // rsi
  size_t v26; // rdx
  _BYTE *v27; // r13
  _BYTE *v28; // rax
  __int64 v29; // rax
  __int64 v30; // r14
  size_t v31; // r8
  size_t v32; // r15
  __int64 v33; // rsi
  size_t v34; // rdx
  unsigned int v35; // eax
  int v36; // r14d
  int v37; // r15d
  __m128i *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rsi
  __m128i si128; // xmm0
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  size_t v45; // [rsp+8h] [rbp-C0h]
  size_t v46; // [rsp+8h] [rbp-C0h]
  size_t v47; // [rsp+8h] [rbp-C0h]
  void *src[2]; // [rsp+10h] [rbp-B8h] BYREF
  int v49; // [rsp+2Ah] [rbp-9Eh]
  __int16 v50; // [rsp+2Eh] [rbp-9Ah]
  __m128i v51; // [rsp+30h] [rbp-98h] BYREF
  __m128i v52[2]; // [rsp+40h] [rbp-88h] BYREF
  __m128i v53; // [rsp+60h] [rbp-68h] BYREF
  __m128i v54; // [rsp+70h] [rbp-58h] BYREF
  __int64 v55; // [rsp+80h] [rbp-48h]
  unsigned __int64 v56; // [rsp+88h] [rbp-40h]

  v2 = *a2;
  v3 = a2[1];
  v56 = __readfsqword(0x28u);
  v4 = v2 + v3;
  *(__m128i *)src = _mm_unpacklo_epi64((__m128i)v2, (__m128i)v4);
  v5 = sub_196ED0(src, v4);
  if ( v5 <= 3 )
  {
    v7 = v5;
    v8 = src[0];
    v9 = src[1];
    v10 = (char *)src[0] + 6;
    if ( src[1] >= (char *)src[0] + 6 )
    {
      src[0] = (char *)src[0] + 6;
      *(_DWORD *)(a1 + 2) = *(_DWORD *)v8;
      *(_WORD *)(a1 + 6) = v8[2];
      v11 = v10;
      while ( v9 != v11 )
      {
        if ( !*v11++ )
        {
          src[0] = v11;
          v12 = *(_QWORD *)(a1 + 16);
          v13 = v11 - v10;
          v14 = v13 - 1;
          v15 = v13 - 1;
          if ( v12 )
          {
            --v12;
            v15 = v14 + v12;
          }
          v16 = *(_QWORD *)(a1 + 8);
          v17 = v15 + 1;
          if ( *(_QWORD *)(a1 + 24) < v15 + 1 )
          {
            v45 = v13 - 1;
            v20 = sub_1987B0(a1 + 8, v16, v17, 1);
            v14 = v45;
            v17 = v15 + 1;
            *(_QWORD *)(a1 + 8) = v20;
            v16 = v20;
          }
          *(_QWORD *)(a1 + 16) = v17;
          *(_BYTE *)(v16 + v15) = 0;
          memmove((void *)(v12 + *(_QWORD *)(a1 + 8)), v10, v14);
          v18 = src[0];
          v19 = src[0];
          while ( v19 < src[1] )
          {
            if ( !*v19++ )
            {
              src[0] = v19;
              if ( v18 )
              {
                v21 = v19 - v18;
                v22 = *(_QWORD *)(a1 + 40);
                v23 = v21 - 1;
                v24 = v21 - 1;
                if ( v22 )
                {
                  --v22;
                  v24 = v23 + v22;
                }
                v25 = *(_QWORD *)(a1 + 32);
                v26 = v24 + 1;
                if ( *(_QWORD *)(a1 + 48) < v24 + 1 )
                {
                  v47 = v21 - 1;
                  v44 = sub_1987B0(a1 + 32, v25, v26, 1);
                  v23 = v47;
                  v26 = v24 + 1;
                  *(_QWORD *)(a1 + 32) = v44;
                  v25 = v44;
                }
                *(_QWORD *)(a1 + 40) = v26;
                *(_BYTE *)(v25 + v24) = 0;
                memmove((void *)(v22 + *(_QWORD *)(a1 + 32)), v18, v23);
                v27 = src[0];
                v28 = src[0];
                while ( v28 < src[1] )
                {
                  if ( !*v28++ )
                  {
                    src[0] = v28;
                    if ( v27 )
                    {
                      v29 = v28 - v27;
                      v30 = *(_QWORD *)(a1 + 64);
                      v31 = v29 - 1;
                      v32 = v29 - 1;
                      if ( v30 )
                      {
                        --v30;
                        v32 = v31 + v30;
                      }
                      v33 = *(_QWORD *)(a1 + 56);
                      v34 = v32 + 1;
                      if ( *(_QWORD *)(a1 + 72) < v32 + 1 )
                      {
                        v46 = v29 - 1;
                        v43 = sub_1987B0(a1 + 56, v33, v34, 1);
                        v31 = v46;
                        v34 = v32 + 1;
                        *(_QWORD *)(a1 + 56) = v43;
                        v33 = v43;
                      }
                      *(_QWORD *)(a1 + 64) = v34;
                      *(_BYTE *)(v33 + v32) = 0;
                      memmove((void *)(v30 + *(_QWORD *)(a1 + 56)), v27, v31);
                      v35 = sub_196ED0(src, src[1]);
                      *(_QWORD *)(a1 + 80) = v35;
                      if ( v35 )
                      {
                        v36 = sub_196ED0(src, src[1]);
                        if ( v36 <= 0 )
                          return 1;
                        v37 = 0;
                        while ( 1 )
                        {
                          v53.m128i_i32[0] = 0;
                          v53.m128i_i16[2] = 0;
                          v51.m128i_i16[2] = 0;
                          v50 = 0;
                          v52[0].m128i_i16[0] = 0;
                          v49 = 0;
                          v51.m128i_i32[0] = 0;
                          v51.m128i_i64[1] = 0;
                          *(__m128i *)((char *)v52 + 8) = 0;
                          if ( !(unsigned __int8)sub_62B30(&v51, src, (char *)src[1] - (char *)src[0], v7) )
                            break;
                          v39 = *(_QWORD *)(a1 + 96);
                          v40 = *(_QWORD *)(a1 + 88);
                          v53 = _mm_load_si128(&v51);
                          si128 = _mm_load_si128(v52);
                          v55 = v52[1].m128i_i64[0];
                          v54 = si128;
                          if ( *(_QWORD *)(a1 + 104) < (unsigned __int64)(v39 + 1) )
                          {
                            v42 = sub_1987B0(a1 + 88, v40, v39 + 1, 40);
                            v39 = *(_QWORD *)(a1 + 96);
                            *(_QWORD *)(a1 + 88) = v42;
                            v40 = v42;
                          }
                          ++v37;
                          v38 = (__m128i *)(v40 + 40 * v39);
                          *v38 = _mm_load_si128(&v53);
                          v38[1] = _mm_load_si128(&v54);
                          v38[2].m128i_i64[0] = v55;
                          ++*(_QWORD *)(a1 + 96);
                          if ( v36 == v37 )
                            return 1;
                        }
                      }
                    }
                    return 0;
                  }
                }
              }
              return 0;
            }
          }
          return 0;
        }
      }
    }
  }
  return 0;
}
