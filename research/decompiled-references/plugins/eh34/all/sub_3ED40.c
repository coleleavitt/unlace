__int64 __fastcall sub_3ED40(__int64 a1, __int64 *a2, int a3)
{
  int v6; // ebp
  __m128i si128; // xmm0
  __m128i *v8; // rax
  const __m128i *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // ecx
  __int64 v13; // rsi
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // rdi
  __m128i v18; // rax
  const __m128i *v19; // r14
  unsigned __int64 v20; // r15
  __int64 v21; // rax
  unsigned __int64 v22; // rsi
  __m128i *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rsi
  const __m128i *v26; // rdi
  __int64 v27; // rdx
  __m128i v28; // xmm0
  bool v29; // cf
  __int64 v30; // rax
  __int64 v31; // rsi
  const __m128i *v32; // rdi
  __int64 v33; // rdx
  __m128i v34; // xmm0
  __m128i v35; // xmm0
  __int64 v37; // rcx
  const __m128i *v38; // [rsp+28h] [rbp-98h] BYREF
  __int128 v39; // [rsp+30h] [rbp-90h]
  _QWORD v40[4]; // [rsp+48h] [rbp-78h] BYREF
  __m128i v41; // [rsp+68h] [rbp-58h] BYREF
  __int64 v42; // [rsp+78h] [rbp-48h]
  unsigned __int64 v43; // [rsp+80h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v39 = 0;
  v38 = nullptr;
  if ( a3 <= 0 )
  {
    v37 = 0;
    v10 = 0;
    v9 = nullptr;
LABEL_26:
    *(_QWORD *)a1 = v9;
    *(_QWORD *)(a1 + 8) = v10;
    *(_QWORD *)(a1 + 16) = v37;
    *(_BYTE *)(a1 + 24) = 0;
  }
  else
  {
    v6 = 0;
    while ( 1 )
    {
      v13 = a2[1];
      v14 = *a2;
      memset((char *)v40 + 4, 0, 20);
      v15 = sub_736F0(v14, v13);
      v16 = a2[1];
      v17 = *a2;
      LODWORD(v40[0]) = v15;
      a2[1] = v16 + 4;
      v18.m128i_i64[0] = sub_73650(v17);
      v19 = v38;
      v20 = *((_QWORD *)&v39 + 1);
      v41 = v18;
      *(__m128i *)&v40[1] = v18;
      v21 = v39;
      v22 = v39 + 1;
      a2[1] += 4;
      if ( v40 < (_QWORD *)v19 || v40 >= &v19->m128i_i64[3 * v20] )
      {
        if ( v20 < v22 )
        {
          v24 = qvector_reserve(&v38, 0, v22, 24);
          v25 = *((_QWORD *)&v39 + 1);
          v19 = (const __m128i *)v24;
          *((_QWORD *)&v39 + 1) = v20;
          v26 = v38;
          v27 = v39 - 1;
          if ( (__int64)v39 - 1 >= 0 )
          {
            do
            {
              v28 = _mm_loadu_si128(v26);
              v24 += 24;
              v26 = (const __m128i *)((char *)v26 + 24);
              *(__m128i *)(v24 - 24) = v28;
              *(_QWORD *)(v24 - 8) = v26[-1].m128i_i64[1];
              v29 = v27-- == 0;
            }
            while ( !v29 );
            v26 = v38;
          }
          qfree(v26);
          v21 = v39;
          v38 = v19;
          *((_QWORD *)&v39 + 1) = v25;
        }
        si128 = _mm_load_si128((const __m128i *)v40);
        v23 = (__m128i *)((char *)v19 + 24 * v21);
        v23[1].m128i_i64[0] = v40[2];
        *v23 = si128;
      }
      else
      {
        v41 = _mm_load_si128((const __m128i *)v40);
        v42 = v40[2];
        if ( v20 < v22 )
        {
          v30 = qvector_reserve(&v38, 0, v22, 24);
          v31 = *((_QWORD *)&v39 + 1);
          v19 = (const __m128i *)v30;
          *((_QWORD *)&v39 + 1) = v20;
          v32 = v38;
          v33 = v39 - 1;
          if ( (__int64)v39 - 1 >= 0 )
          {
            do
            {
              v34 = _mm_loadu_si128(v32);
              v30 += 24;
              v32 = (const __m128i *)((char *)v32 + 24);
              *(__m128i *)(v30 - 24) = v34;
              *(_QWORD *)(v30 - 8) = v32[-1].m128i_i64[1];
              v29 = v33-- == 0;
            }
            while ( !v29 );
            v32 = v38;
          }
          qfree(v32);
          v21 = v39;
          v38 = v19;
          *((_QWORD *)&v39 + 1) = v31;
        }
        si128 = _mm_load_si128(&v41);
        v8 = (__m128i *)((char *)v19 + 24 * v21);
        *v8 = si128;
        v8[1].m128i_i64[0] = v42;
      }
      v9 = v38;
      v10 = v39 + 1;
      v11 = 3 * (v39 + 1);
      *(_QWORD *)&v39 = v39 + 1;
      v12 = *((_DWORD *)&v38[-1] + 2 * v11 - 2);
      if ( v12 < -1 )
      {
        sub_19A90(
          (__int64)&v41,
          (__int64)"unwind_map_entry3[%a]: next_state = %d < -1",
          *(double *)si128.m128i_i64,
          a2[1]);
        goto LABEL_21;
      }
      if ( v12 >= v6 )
        break;
      if ( ++v6 == a3 )
      {
        v37 = *((_QWORD *)&v39 + 1);
        goto LABEL_26;
      }
    }
    sub_19A90(
      (__int64)&v41,
      (__int64)"unwind_map_entry3[%a]: next_state = %d >= entry_idx = %d",
      *(double *)si128.m128i_i64,
      a2[1],
      v12);
LABEL_21:
    *(_QWORD *)a1 = v41.m128i_i64[0];
    v35 = _mm_loadu_si128((const __m128i *)&v41.m128i_u64[1]);
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = v35;
    if ( v38 )
    {
      *(_QWORD *)&v39 = 0;
      qfree(v38);
    }
  }
  return a1;
}
