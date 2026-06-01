unsigned __int64 __fastcall sub_461E0(__m128i *a1, __m128i *a2, __int64 (__fastcall *a3)(__m128 *, __m128i *))
{
  __int64 m128i_i64; // r15
  __m128i v6; // xmm0
  size_t v7; // rbp
  __int32 v8; // eax
  __m128i v9; // xmm0
  size_t v10; // rbp
  char v11; // r14
  __int64 v12; // rbp
  __int64 v13; // rax
  __m128i v14; // xmm5
  __m128i v15; // xmm4
  unsigned __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // r13
  __m128i v20; // xmm0
  __int64 v21; // rdx
  int v22; // edx
  __int64 v23; // rdi
  __m128i v24; // xmm4
  __int32 v25; // eax
  void *v27; // rax
  const void *v28; // rsi
  void *v29; // rax
  const void *v30; // rsi
  __m128i v31; // [rsp+0h] [rbp-108h] BYREF
  __m128i *v32; // [rsp+18h] [rbp-F0h]
  __m128i *v33; // [rsp+20h] [rbp-E8h]
  __m128 *v34; // [rsp+28h] [rbp-E0h]
  __int64 v35; // [rsp+30h] [rbp-D8h]
  __int32 v36; // [rsp+3Ch] [rbp-CCh]
  __m128i v37; // [rsp+40h] [rbp-C8h] BYREF
  __m128i v38; // [rsp+50h] [rbp-B8h] BYREF
  __m128i v39; // [rsp+60h] [rbp-A8h] BYREF
  void *v40; // [rsp+70h] [rbp-98h]
  __int128 v41; // [rsp+78h] [rbp-90h]
  __int32 v42; // [rsp+88h] [rbp-80h]
  __m128i v43; // [rsp+90h] [rbp-78h] BYREF
  void *v44; // [rsp+A0h] [rbp-68h]
  __int128 v45; // [rsp+A8h] [rbp-60h]
  int v46; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v47; // [rsp+C8h] [rbp-40h]

  v32 = a2;
  v47 = __readfsqword(0x28u);
  if ( a1 != a2 )
  {
    m128i_i64 = (__int64)a1[3].m128i_i64;
    if ( a2 != &a1[3] )
    {
      v33 = &v39;
      v34 = (__m128 *)&v43;
      while ( 1 )
      {
        v6 = _mm_loadu_si128(a1);
        v7 = a1[1].m128i_u64[1];
        v40 = nullptr;
        v41 = 0;
        v39 = v6;
        if ( v7 )
        {
          v29 = (void *)qalloc_or_throw(v7);
          v30 = (const void *)a1[1].m128i_i64[0];
          *((_QWORD *)&v41 + 1) = v7;
          v40 = v29;
          memcpy(v29, v30, v7);
          *(_QWORD *)&v41 = v7;
        }
        v8 = a1[2].m128i_i32[2];
        v9 = _mm_loadu_si128((const __m128i *)m128i_i64);
        v44 = nullptr;
        v10 = *(_QWORD *)(m128i_i64 + 24);
        v45 = 0;
        v42 = v8;
        v43 = v9;
        if ( v10 )
        {
          v27 = (void *)qalloc_or_throw(v10);
          v28 = *(const void **)(m128i_i64 + 16);
          v44 = v27;
          *((_QWORD *)&v45 + 1) = v10;
          memcpy(v27, v28, v10);
          *(_QWORD *)&v45 = v10;
        }
        v46 = *(_DWORD *)(m128i_i64 + 40);
        v11 = a3(v34, v33);
        if ( v44 )
        {
          *(_QWORD *)&v45 = 0;
          qfree(v44);
        }
        if ( v40 )
        {
          *(_QWORD *)&v41 = 0;
          qfree(v40);
        }
        v12 = m128i_i64 + 48;
        if ( v11 )
        {
          v13 = *(_QWORD *)(m128i_i64 + 16);
          v14 = _mm_loadu_si128((const __m128i *)(m128i_i64 + 24));
          v15 = _mm_loadu_si128((const __m128i *)m128i_i64);
          *(_OWORD *)(m128i_i64 + 24) = 0;
          v35 = v13;
          LODWORD(v13) = *(_DWORD *)(m128i_i64 + 40);
          *(_QWORD *)(m128i_i64 + 16) = 0;
          v36 = v13;
          v38 = v15;
          v16 = 0xAAAAAAAAAAAAAAABLL * ((m128i_i64 - (__int64)a1) >> 4);
          v37 = v14;
          if ( m128i_i64 - (__int64)a1 > 0 )
          {
            do
            {
              v17 = *(_QWORD *)(m128i_i64 - 48);
              v18 = *(_QWORD *)(m128i_i64 + 16);
              m128i_i64 -= 48;
              v19 = *(_QWORD *)(m128i_i64 + 16);
              v20 = _mm_loadu_si128((const __m128i *)(m128i_i64 + 24));
              *(_QWORD *)(m128i_i64 + 16) = 0;
              *(_QWORD *)(m128i_i64 + 48) = v17;
              v21 = *(_QWORD *)(m128i_i64 + 8);
              *(_OWORD *)(m128i_i64 + 24) = 0;
              *(_QWORD *)(m128i_i64 + 56) = v21;
              if ( v18 )
              {
                *(_QWORD *)(m128i_i64 + 72) = 0;
                v31 = v20;
                qfree(v18);
                v20 = _mm_load_si128(&v31);
              }
              v22 = *(_DWORD *)(m128i_i64 + 40);
              *(_QWORD *)(m128i_i64 + 64) = v19;
              *(__m128i *)(m128i_i64 + 72) = v20;
              *(_DWORD *)(m128i_i64 + 88) = v22;
              --v16;
            }
            while ( v16 );
          }
          v23 = a1[1].m128i_i64[0];
          *a1 = _mm_load_si128(&v38);
          if ( v23 )
          {
            a1[1].m128i_i64[1] = 0;
            qfree(v23);
          }
          v24 = _mm_load_si128(&v37);
          a1[1].m128i_i64[0] = v35;
          v25 = v36;
          *(__m128i *)((char *)a1 + 24) = v24;
          a1[2].m128i_i32[2] = v25;
          if ( v32 == (__m128i *)v12 )
            return v47 - __readfsqword(0x28u);
        }
        else
        {
          sub_45F30(m128i_i64, a3);
          if ( v32 == (__m128i *)v12 )
            return v47 - __readfsqword(0x28u);
        }
        m128i_i64 = v12;
      }
    }
  }
  return v47 - __readfsqword(0x28u);
}
