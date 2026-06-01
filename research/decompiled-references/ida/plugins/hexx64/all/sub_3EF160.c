__int64 __fastcall sub_3EF160(__int64 a1, __int64 a2, __int64 a3, int a4, const char *a5, char a6)
{
  __int64 v8; // r14
  int v9; // ebp
  char *v11; // rbp
  __int64 v12; // rax
  __m128i v13; // xmm4
  __m128i v14; // xmm3
  __m128i v15; // xmm2
  __m128i v16; // xmm1
  __m128i *v17; // rax
  __m128i v18; // xmm0
  const __m128i *v19; // rdx
  __m128i v20; // xmm3
  __m128i v21; // xmm2
  __m128i v22; // xmm5
  __m128i v23; // xmm1
  __m128i v24; // xmm0
  __m128i v25; // xmm5
  __m128i v26; // xmm5
  __m128i v27; // xmm5
  __int64 v29[2]; // [rsp+10h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+20h] [rbp-D8h] BYREF
  __m128i v31[2]; // [rsp+30h] [rbp-C8h] BYREF
  __m128i v32; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v33; // [rsp+60h] [rbp-98h]
  __m128i v34; // [rsp+70h] [rbp-88h]
  __m128i v35; // [rsp+80h] [rbp-78h]
  __m128i v36; // [rsp+90h] [rbp-68h]
  __m128i v37; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v38; // [rsp+B8h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(a2 + 72);
  if ( a4 < 0 )
  {
    v29[0] = 0;
    copy_tinfo_t();
  }
  else
  {
    v29[0] = (unsigned __int8)a4;
  }
  v9 = lexcompare_tinfo();
  clear_tinfo_t();
  if ( v9 )
    return 0;
  if ( strcmp(*(const char **)(a3 + 40), a5) )
    return 0;
  v11 = sub_3EE630(*(char **)(a2 + 40), a6);
  if ( !v11 )
    return 0;
  qfree(*(_QWORD *)(a2 + 40));
  *(_QWORD *)(a2 + 40) = v11;
  v29[1] = 0;
  v29[0] = 0xFFFFFFFF00000000LL;
  v12 = *(_QWORD *)(a3 + 72);
  si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v13 = _mm_load_si128((const __m128i *)v29);
  v14 = _mm_load_si128(&si128);
  memset(v31, 0, sizeof(v31));
  v15 = _mm_load_si128(v31);
  v16 = _mm_load_si128(&v31[1]);
  v32.m128i_i64[0] = 0;
  v32.m128i_i32[2] = 0;
  v17 = *(__m128i **)(v12 + 24);
  v18 = _mm_load_si128(&v32);
  *(__m128i *)v29 = _mm_loadu_si128(v17);
  si128 = _mm_loadu_si128(v17 + 1);
  v31[0] = _mm_loadu_si128(v17 + 2);
  v31[1] = _mm_loadu_si128(v17 + 3);
  v32 = _mm_loadu_si128(v17 + 4);
  *v17 = v13;
  v17[1] = v14;
  v17[2] = v15;
  v17[3] = v16;
  v17[4] = v18;
  v19 = *(const __m128i **)(v8 + 24);
  v20 = _mm_load_si128(&si128);
  v21 = _mm_load_si128(v31);
  v22 = _mm_loadu_si128(v19 + 5);
  v23 = _mm_load_si128(&v31[1]);
  v33 = _mm_load_si128((const __m128i *)v29);
  v24 = _mm_load_si128(&v32);
  v34 = v20;
  *(__m128i *)v29 = v22;
  v25 = _mm_loadu_si128(v19 + 6);
  v35 = v21;
  si128 = v25;
  v26 = _mm_loadu_si128(v19 + 7);
  v36 = v23;
  v31[0] = v26;
  v27 = _mm_loadu_si128(v19 + 8);
  v37 = v24;
  v31[1] = v27;
  v32 = _mm_loadu_si128(v19 + 9);
  v19[5] = v33;
  v19[6] = v20;
  v19[7] = v21;
  v19[8] = v23;
  v19[9] = v24;
  cleanup_argloc();
  if ( v31[0].m128i_i64[0] )
  {
    v31[0].m128i_i64[1] = 0;
    qfree(v31[0].m128i_i64[0]);
  }
  clear_tinfo_t();
  sub_11CDA0((__int64)v29);
  return 1;
}

