__int64 __fastcall sub_91B0(__m128i *a1, const char *a2, __int64 a3, unsigned int *a4, char a5)
{
  size_t v9; // rax
  size_t v10; // r15
  __int64 v11; // rdi
  unsigned __int8 scalar_bt; // al
  __m128i v13; // xmm8
  __m128i v14; // xmm7
  __m128i v15; // xmm6
  __m128i v16; // xmm5
  __m128i v17; // xmm4
  __m128i v18; // xmm9
  __m128i v19; // xmm3
  __m128i v20; // xmm2
  __m128i v21; // xmm1
  __m128i v22; // xmm9
  __m128i v23; // xmm0
  __m128i v24; // xmm9
  __m128i v25; // xmm9
  __m128i v26; // xmm9
  __m128i v27; // xmm9
  __m128i v28; // xmm9
  __m128i v29; // xmm9
  unsigned int v30; // ebx
  __int64 v32; // [rsp+0h] [rbp-190h]
  __int64 v33; // [rsp+10h] [rbp-180h] BYREF
  _QWORD v34[2]; // [rsp+18h] [rbp-178h] BYREF
  __m128i v35; // [rsp+28h] [rbp-168h] BYREF
  __m128i v36[2]; // [rsp+38h] [rbp-158h] BYREF
  __m128i v37; // [rsp+58h] [rbp-138h] BYREF
  __m128i v38; // [rsp+68h] [rbp-128h] BYREF
  __m128i si128; // [rsp+78h] [rbp-118h] BYREF
  __m128i v40; // [rsp+88h] [rbp-108h] BYREF
  __m128i v41; // [rsp+98h] [rbp-F8h] BYREF
  __m128i v42[10]; // [rsp+A8h] [rbp-E8h] BYREF
  unsigned __int64 v43; // [rsp+150h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v42[0].m128i_i8[8] = 0;
  memset(v36, 0, sizeof(v36));
  v41.m128i_i64[0] = 1;
  v41.m128i_i32[2] = -1;
  v42[0].m128i_i64[0] = 0;
  v35 = 0;
  v37 = 0;
  v38 = 0;
  if ( a2 )
  {
    v9 = strlen(a2);
    v10 = v9;
    if ( v9 )
    {
      v32 = v9 + 1;
      v36[0].m128i_i64[0] = qvector_reserve(v36, 0, v9 + 1, 1);
      v36[0].m128i_i64[1] = v32;
      memmove((void *)v36[0].m128i_i64[0], a2, v10);
      *(_BYTE *)(v36[0].m128i_i64[0] + v10) = 0;
    }
  }
  if ( !a5 )
    v35.m128i_i64[0] = 8 * a3;
  v11 = *a4;
  v35.m128i_i64[1] = 8 * v11;
  if ( (unsigned __int8)*((_QWORD *)a4 + 3) )
  {
    if ( (get_tinfo_property(*((_QWORD *)a4 + 3), 2) & 0x3F) != 1 )
    {
      copy_tinfo_t(&v38, a4 + 6);
      v35.m128i_i64[1] = 8 * get_tinfo_size(0, v38.m128i_i64[0], 0);
      goto LABEL_10;
    }
    LODWORD(v11) = *a4;
  }
  if ( (_DWORD)v11 )
  {
    scalar_bt = get_scalar_bt();
    if ( !scalar_bt )
    {
      v30 = 0;
      goto LABEL_13;
    }
    v34[0] = scalar_bt;
    copy_tinfo_t(&v38, v34);
    clear_tinfo_t(v34);
  }
  else
  {
    v34[0] = 0;
    v34[1] = 0;
    v33 = 50;
    copy_tinfo_t(v34, &v33);
    clear_tinfo_t(&v33);
    create_tinfo(&v38, 11, 11, v34);
    clear_tinfo_t(v34);
  }
LABEL_10:
  v42[0].m128i_i32[0] = 1 << a4[1];
  if ( (*((_QWORD *)a4 + 1) & 0xF00000LL) == 0x500000 )
  {
    v40.m128i_i32[2] = 9;
    v40.m128i_i64[0] = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_216F0);
  }
  v13 = _mm_loadu_si128(a1);
  v14 = _mm_loadu_si128(a1 + 1);
  v15 = _mm_loadu_si128(a1 + 2);
  *a1 = _mm_load_si128(&v35);
  v16 = _mm_loadu_si128(a1 + 3);
  v17 = _mm_loadu_si128(a1 + 4);
  v18 = _mm_load_si128(v36);
  v19 = _mm_loadu_si128(a1 + 5);
  v42[1] = v13;
  v20 = _mm_loadu_si128(a1 + 6);
  v21 = _mm_loadu_si128(a1 + 7);
  v42[2] = v14;
  a1[1] = v18;
  v22 = _mm_load_si128(&v36[1]);
  v23 = _mm_loadu_si128(a1 + 8);
  v42[3] = v15;
  a1[2] = v22;
  v24 = _mm_load_si128(&v37);
  v42[4] = v16;
  a1[3] = v24;
  v25 = _mm_load_si128(&v38);
  v42[5] = v17;
  a1[4] = v25;
  v26 = _mm_load_si128(&si128);
  v42[6] = v19;
  a1[5] = v26;
  v27 = _mm_load_si128(&v40);
  v42[7] = v20;
  a1[6] = v27;
  v42[8] = v21;
  v42[9] = v23;
  v28 = _mm_load_si128(&v41);
  v35 = v13;
  a1[7] = v28;
  v29 = _mm_load_si128(v42);
  v36[0] = v14;
  a1[8] = v29;
  v30 = 1;
  v36[1] = v15;
  v37 = v16;
  v38 = v17;
  si128 = v19;
  v40 = v20;
  v41 = v21;
  v42[0] = v23;
LABEL_13:
  clear_tinfo_t(&v38);
  if ( v36[1].m128i_i64[1] )
  {
    v37.m128i_i64[0] = 0;
    qfree(v36[1].m128i_i64[1]);
  }
  if ( v36[0].m128i_i64[0] )
  {
    v36[0].m128i_i64[1] = 0;
    qfree(v36[0].m128i_i64[0]);
  }
  return v30;
}

