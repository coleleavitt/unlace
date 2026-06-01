unsigned __int64 __fastcall sub_1E17E0(const __m128i *a1, __int64 *a2, __m128 a3)
{
  __int64 v5; // rax
  _QWORD *v6; // rbx
  int v7; // edx
  char v8; // al
  __int64 v9; // rsi
  unsigned __int64 v10; // rsi
  __int64 v11; // r15
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  __m128i *v14; // rdx
  __int64 v15; // rcx
  __m128i v16; // xmm0
  __m128i v17; // xmm4
  _QWORD *v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r8
  unsigned __int64 *v24; // rax
  __m128i v25; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v26; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v27[2]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v28; // [rsp+30h] [rbp-88h] BYREF
  __m128i v29; // [rsp+38h] [rbp-80h]
  __m128i v30; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v31[24]; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v32; // [rsp+78h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  if ( !a1[1].m128i_i8[8] && (!(unsigned __int8)sub_64880(a2) || a2[3]) )
  {
    v5 = a1->m128i_i64[1];
    if ( v5 )
    {
      if ( a1[1].m128i_i64[0] )
      {
        v6 = *(_QWORD **)(v5 + 8);
        if ( (_QWORD *)v5 != v6 )
        {
          v25 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4DEB28), (__m128i)(unsigned __int64)off_4DEB20);
          do
          {
            v28 = 0;
            v29 = 0;
            v7 = *((_DWORD *)v6 + 11);
            v27[1] = 0;
            v8 = *((_BYTE *)v6 + 32);
            v27[0] = 0;
            v9 = v6[3];
            if ( v8 == 1 )
            {
              v30 = 0u;
              sub_63E80(v30.m128i_i64, v9, v7, *(double *)a3.m128_u64);
              memset(v31, 0, sizeof(v31));
            }
            else if ( v8 == 5 )
            {
              v10 = *(_QWORD *)(a1->m128i_i64[0] + 1440) + v9;
              v30 = 0u;
              memset(v31, 0, sizeof(v31));
              if ( v7 + v10 - 1 >= v10 )
              {
                v26.m128i_i64[0] = v7;
                v22 = qvector_reserve((__int64)v31, 0, 1, 16);
                v23 = v26.m128i_i64[0];
                *(_QWORD *)v31 = v22;
                v24 = (unsigned __int64 *)(16LL * *(_QWORD *)&v31[8] + v22);
                *v24 = v10;
                v24[1] = v23;
                ++*(_QWORD *)&v31[8];
              }
            }
            else
            {
              v30 = 0u;
              memset(v31, 0, sizeof(v31));
            }
            sub_648D0(v27, (const void **)&v30, *(double *)a3.m128_u64);
            v11 = *(_QWORD *)v31;
            memset(v31, 0, sizeof(v31));
            v12 = _mm_loadu_si128((const __m128i *)&v31[8]);
            if ( v28 )
            {
              v26 = v12;
              v29.m128i_i64[0] = 0;
              qfree(v28);
              v13 = _mm_load_si128(&v26);
              v28 = v11;
              v29 = v13;
              if ( *(_QWORD *)v31 )
              {
                *(_QWORD *)&v31[8] = 0;
                qfree(*(__int64 *)v31);
              }
            }
            else
            {
              v28 = v11;
              v29 = v12;
            }
            qfree(v30.m128i_i64[0]);
            sub_64700(v27, a2);
            sub_3180C0(&v28, (__int64)(a2 + 2), v14, v15);
            v16 = _mm_loadl_epi64(a1);
            v17 = _mm_load_si128(&v25);
            *(_QWORD *)&v31[16] = v6;
            a3 = (__m128)_mm_unpacklo_epi64(v16, (__m128i)(unsigned __int64)a1);
            v30 = v17;
            *(__m128 *)v31 = a3;
            if ( (*v6 & 2) == 0 )
            {
              v18 = (_QWORD *)v6[2];
              if ( (*(_BYTE *)v18 & 2) != 0 )
              {
                v19 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFCLL);
                v20 = *v19;
                if ( (*v19 & 2) == 0 )
                {
                  while ( (_QWORD *)v19[2] == v6 )
                  {
                    v6 = v19;
                    v21 = v20 & 0xFFFFFFFFFFFFFFFCLL;
                    v20 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v20 & 2) != 0 )
                    {
                      v6 = (_QWORD *)v21;
                      goto LABEL_19;
                    }
                    v19 = (_QWORD *)v21;
                  }
                }
                v6 = v19;
              }
              else
              {
                do
                {
                  v6 = v18;
                  v18 = (_QWORD *)v18[1];
                }
                while ( (*(_BYTE *)v18 & 2) == 0 );
              }
            }
LABEL_19:
            if ( !(unsigned int)sub_64E60(v27, (__int64)&v30, 0) )
              sub_317450(&v28, (__int64 (__fastcall ***)(_QWORD, __int64))&v30.m128i_i64[1]);
            if ( v28 )
            {
              v29.m128i_i64[0] = 0;
              qfree(v28);
            }
            qfree(v27[0]);
          }
          while ( (_QWORD *)a1->m128i_i64[1] != v6 );
        }
      }
    }
  }
  return v32 - __readfsqword(0x28u);
}

