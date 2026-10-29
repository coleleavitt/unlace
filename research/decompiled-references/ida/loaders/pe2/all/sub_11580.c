unsigned __int64 __fastcall sub_11580(__int64 a1)
{
  __int16 *v1; // rbp
  char v2; // r14
  __int64 v3; // rbx
  const __m128i *v4; // r15
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  __m128i v9; // xmm0
  const __m128i *v10; // rax
  __int64 v11; // rdx
  const __m128i *v12; // r15
  __m128i v13; // xmm0
  unsigned __int64 head; // r15
  __int16 v16; // [rsp+3Eh] [rbp-10Ah] BYREF
  __m128i v17; // [rsp+40h] [rbp-108h] BYREF
  __m128i v18; // [rsp+50h] [rbp-F8h]
  __m128i v19; // [rsp+60h] [rbp-E8h]
  __m128i v20; // [rsp+70h] [rbp-D8h]
  __m128i v21; // [rsp+80h] [rbp-C8h]
  __m128i v22; // [rsp+90h] [rbp-B8h]
  __m128i v23; // [rsp+A0h] [rbp-A8h]
  __m128i v24; // [rsp+B0h] [rbp-98h]
  __m128i v25; // [rsp+C0h] [rbp-88h]
  __m128i v26; // [rsp+D0h] [rbp-78h]
  __m128i v27; // [rsp+E0h] [rbp-68h]
  __m128i v28; // [rsp+F0h] [rbp-58h]
  unsigned __int64 v29; // [rsp+108h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( (word_379D0 & 0x20) != 0 )
  {
    v16 = 256;
    v1 = &v16;
    do
    {
      v2 = *(_BYTE *)v1;
      v3 = a1 + 648;
      if ( *(_BYTE *)v1 )
        v3 = a1 + 816;
      if ( *(_QWORD *)(v3 + 120) < *(_QWORD *)(v3 + 128) )
      {
        v4 = (const __m128i *)getseg();
        if ( v4 )
        {
          v5 = *(_QWORD *)(v3 + 128);
          if ( v5 - 1 >= v4->m128i_i64[0] && v5 - 1 < v4->m128i_i64[1] )
          {
            v6 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (qword_379D8 + *(unsigned int *)(a1 + 112));
            if ( v6 < *(_QWORD *)(v3 + 120) || v6 >= v5 )
            {
              get_segm_name();
              v7 = *(_QWORD *)(v3 + 120);
              if ( next_head() == -1 )
              {
                v7 = v4->m128i_i64[1];
                next_head();
              }
              v8 = *(_QWORD *)(v3 + 128);
              if ( v8 != v4->m128i_i64[1] )
              {
                v7 = 0;
                v17 = _mm_loadu_si128(v4);
                v18 = _mm_loadu_si128(v4 + 1);
                v19 = _mm_loadu_si128(v4 + 2);
                v20 = _mm_loadu_si128(v4 + 3);
                v21 = _mm_loadu_si128(v4 + 4);
                v22 = _mm_loadu_si128(v4 + 5);
                v23 = _mm_loadu_si128(v4 + 6);
                v24 = _mm_loadu_si128(v4 + 7);
                v25 = _mm_loadu_si128(v4 + 8);
                v26 = _mm_loadu_si128(v4 + 9);
                v27 = _mm_loadu_si128(v4 + 10);
                v9 = _mm_loadu_si128(v4 + 11);
                v17.m128i_i64[0] = v8;
                v28 = v9;
                add_segm_ex();
              }
              v10 = (const __m128i *)getseg();
              v11 = *(_QWORD *)(v3 + 120);
              v12 = v10;
              if ( v11 == v10->m128i_i64[0] )
              {
                set_segm_name();
                v12[11].m128i_i8[8] = 1;
                update_segm();
              }
              else
              {
                if ( !v2 )
                {
                  sub_A980(
                    (__int64)"AUTOHIDE REGISTRY\n"
                             "The imports segment seems to be destroyed. This MAY mean that\n"
                             "the file was packed or otherwise modified in order to make it\n"
                             "more difficult to analyze. If you want to see the imports\n"
                             "segment in the original form, please reload it with the\n"
                             "'make imports section' checkbox cleared.",
                    v7,
                    v11);
                  v11 = *(_QWORD *)(v3 + 120);
                }
                v17 = _mm_loadu_si128(v12);
                v18 = _mm_loadu_si128(v12 + 1);
                v19 = _mm_loadu_si128(v12 + 2);
                v20 = _mm_loadu_si128(v12 + 3);
                v21 = _mm_loadu_si128(v12 + 4);
                v22 = _mm_loadu_si128(v12 + 5);
                v23 = _mm_loadu_si128(v12 + 6);
                v24 = _mm_loadu_si128(v12 + 7);
                v25 = _mm_loadu_si128(v12 + 8);
                v26 = _mm_loadu_si128(v12 + 9);
                v27 = _mm_loadu_si128(v12 + 10);
                v13 = _mm_loadu_si128(v12 + 11);
                v17.m128i_i64[0] = v11;
                v28 = v13;
                v28.m128i_i8[8] = 1;
                add_segm_ex();
              }
              head = *(_QWORD *)(v3 + 120);
              do
              {
                if ( head >= *(_QWORD *)(v3 + 128) || (unsigned __int64)next_that() >= *(_QWORD *)(v3 + 128) )
                  break;
                head = next_head();
                if ( head == -1 )
                  head = *(_QWORD *)(v3 + 128);
              }
              while ( (unsigned __int8)create_data() );
            }
          }
        }
      }
      v1 = (__int16 *)((char *)v1 + 1);
    }
    while ( v1 != (__int16 *)&v17 );
  }
  return v29 - __readfsqword(0x28u);
}

