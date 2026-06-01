__int64 __fastcall sub_2C940(__m128i *a1, __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v4; // r12
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rbp
  bool v9; // zf
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rax
  void *v13; // rdi
  _QWORD *v14; // r13
  __int64 v15; // r12
  _QWORD *v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // r12
  __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r15
  void *v23; // rax
  void *v24; // rax
  const void *v25; // rsi
  void *v26; // rax
  const void *v27; // rsi
  __int64 v28; // r14
  unsigned __int64 v29; // rax
  __int64 v30; // rsi
  unsigned __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // r14d
  __int64 v35; // rsi
  __int64 v36; // rcx
  size_t v37; // r8
  _QWORD *v38; // rdx
  _QWORD *v39; // rax
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rax
  size_t n; // [rsp+8h] [rbp-280h]
  const void **v44; // [rsp+10h] [rbp-278h]
  __int64 v45; // [rsp+20h] [rbp-268h] BYREF
  void *v46; // [rsp+28h] [rbp-260h]
  __int128 v47; // [rsp+30h] [rbp-258h]
  __int64 v48; // [rsp+40h] [rbp-248h]
  __int32 v49; // [rsp+48h] [rbp-240h]
  void *v50; // [rsp+50h] [rbp-238h]
  __int128 v51; // [rsp+58h] [rbp-230h]
  __int64 v52; // [rsp+68h] [rbp-220h]
  __int128 v53; // [rsp+70h] [rbp-218h]
  __int32 v54; // [rsp+80h] [rbp-208h]
  __int64 v55; // [rsp+88h] [rbp-200h]
  __m128i v56; // [rsp+90h] [rbp-1F8h]
  __int64 v57; // [rsp+A0h] [rbp-1E8h]
  __int32 v58; // [rsp+A8h] [rbp-1E0h]
  __m128i v59; // [rsp+B0h] [rbp-1D8h]
  __int64 v60; // [rsp+C0h] [rbp-1C8h]
  __int64 v61; // [rsp+C8h] [rbp-1C0h]
  __int32 v62; // [rsp+D0h] [rbp-1B8h]
  _BYTE v63[360]; // [rsp+E0h] [rbp-1A8h] BYREF
  unsigned __int64 v64; // [rsp+248h] [rbp-40h]

  v64 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 28) & 8) != 0 && (a1->m128i_i32[0] & 2) == 0 )
  {
    v4 = a1[1].m128i_i64[0];
    LODWORD(v45) = a1->m128i_i32[0];
    v47 = 0;
    v46 = 0;
    qmemcpy(v63, (const void *)a2, sizeof(v63));
    if ( v4 )
    {
      v24 = (void *)qalloc_or_throw();
      v25 = (const void *)a1->m128i_i64[1];
      *((_QWORD *)&v47 + 1) = v4;
      v46 = v24;
      memcpy(v24, v25, 32 * v4);
      *(_QWORD *)&v47 = v4;
    }
    v6 = a1[2].m128i_i64[0];
    v7 = a1[3].m128i_i64[1];
    v50 = 0;
    v51 = 0;
    v48 = v6;
    v49 = a1[2].m128i_i32[2];
    if ( v7 )
    {
      v26 = (void *)qalloc_or_throw();
      v27 = (const void *)a1[3].m128i_i64[0];
      v50 = v26;
      *((_QWORD *)&v51 + 1) = v7;
      memcpy(v26, v27, 8 * v7);
      *(_QWORD *)&v51 = v7;
    }
    v8 = a1[5].m128i_i64[0];
    v52 = 0;
    v53 = 0;
    if ( v8 )
    {
      v52 = qalloc_or_throw();
      v18 = v52;
      v19 = 0;
      *((_QWORD *)&v53 + 1) = v8;
      do
      {
        v20 = a1[4].m128i_i64[1];
        *(_QWORD *)v18 = 0;
        *(_OWORD *)(v18 + 8) = 0;
        v21 = v20 + 24 * v19;
        v22 = *(_QWORD *)(v21 + 8);
        if ( v22 )
        {
          v44 = (const void **)v21;
          v23 = (void *)qalloc_or_throw();
          *(_QWORD *)v18 = v23;
          *(_QWORD *)(v18 + 16) = v22;
          memcpy(v23, *v44, 8 * v22);
          *(_QWORD *)(v18 + 8) = v22;
        }
        ++v19;
        v18 += 24;
      }
      while ( v8 != v19 );
      *(_QWORD *)&v53 = v8;
    }
    v9 = *(_WORD *)(a2 + 24) == 143;
    v54 = a1[6].m128i_i32[0];
    v10 = a1[6].m128i_i64[1];
    v56 = _mm_loadu_si128(a1 + 7);
    v11 = _mm_loadu_si128(a1 + 9);
    v55 = v10;
    v12 = a1[8].m128i_i64[0];
    v59 = v11;
    v57 = v12;
    v58 = a1[8].m128i_i32[2];
    v60 = a1[10].m128i_i64[0];
    v61 = a1[10].m128i_i64[1];
    v62 = a1[11].m128i_i32[0];
    if ( v9 && *(_BYTE *)(a2 + 41) == 5 && (get_flags_ex() & 0xF00000) == 0x500000 )
    {
      v28 = *(_QWORD *)(a2 + 16);
      v29 = sub_22F00((__int64)a1);
      v30 = a1->m128i_i64[1];
      v31 = v29;
      v32 = a1[1].m128i_i64[0];
      if ( a1[1].m128i_i64[1] < (unsigned __int64)(v32 + 1) )
      {
        v41 = qvector_reserve();
        a1->m128i_i64[1] = v41;
        v30 = v41;
        v32 = a1[1].m128i_i64[0];
      }
      v33 = v30 + 32 * v32;
      *(_QWORD *)v33 = v28;
      *(_QWORD *)(v33 + 8) = v31;
      *(_QWORD *)(v33 + 16) = 4;
      *(_DWORD *)(v33 + 24) = 0xFFFF;
      ++a1[1].m128i_i64[0];
      if ( (unsigned __int8)sub_2C800(a1, a2, -1) )
      {
        v34 = *(unsigned __int16 *)(a2 + 46);
        if ( *(_BYTE *)(a2 + 81) == 2
          && *(_BYTE *)(a2 + 32) == 33
          && *(_WORD *)(a2 + 24) == 122
          && *(_BYTE *)(a2 + 41) == 1
          && !*(_QWORD *)(a2 + 96) )
        {
          v35 = a1[3].m128i_i64[0];
          v36 = a1[3].m128i_i64[1];
          v37 = *(_QWORD *)(a2 + 16);
          v38 = (_QWORD *)(v35 + 8 * v36);
          if ( (_QWORD *)v35 == v38 )
            goto LABEL_47;
          v39 = (_QWORD *)a1[3].m128i_i64[0];
          while ( v37 != *v39 )
          {
            if ( v38 == ++v39 )
              goto LABEL_47;
          }
          if ( v38 == v39 )
          {
LABEL_47:
            if ( a1[4].m128i_i64[0] < (unsigned __int64)(v36 + 1) )
            {
              n = *(_QWORD *)(a2 + 16);
              v42 = qvector_reserve();
              a1[3].m128i_i64[0] = v42;
              v37 = n;
              v35 = v42;
            }
            *(_QWORD *)(v35 + 8 * a1[3].m128i_i64[1]++) = v37;
          }
          if ( (unsigned __int8)sub_2C800(a1, a2, v34)
            && *(_WORD *)(a2 + 24) == 143
            && *(_BYTE *)(a2 + 41) == 1
            && v34 == *(unsigned __int16 *)(a2 + 46) )
          {
            sub_22F60(a1, *(_QWORD *)(a2 + 16), -1, 4);
            v2 = sub_2C800(a1, a2, -1);
            v40 = sub_21560(
                    *(_WORD *)(a2 + 24),
                    *(_BYTE *)(a2 + 32),
                    *(_BYTE *)(a2 + 41),
                    *(_QWORD *)(a2 + 56),
                    *(_BYTE *)(a2 + 81),
                    *(_WORD *)(a2 + 86));
            if ( (_BYTE)v2 && v40 == 4 )
            {
              sub_216A0(a1[3].m128i_i64, *(_QWORD *)(a2 + 16));
              sub_226C0();
              if ( (unsigned int)decode_insn() )
              {
                a1->m128i_i32[0] |= 2u;
                sub_22CF0(&v45);
                return v2;
              }
            }
            else if ( v40 != -1 && (debug & 8) != 0 )
            {
              sub_224B0((__int64)"%a: unhandled mov fs:0,r\n", *(double *)v11.m128i_i64);
            }
          }
        }
      }
    }
    sub_21B00((__int64)a1, (__int64)&v45);
    v13 = (void *)a2;
    v14 = (_QWORD *)v52;
    qmemcpy(v13, v63, 0x168u);
    if ( v14 )
    {
      v15 = v53;
      v16 = v14;
      v17 = 0;
      if ( (_QWORD)v53 )
      {
        do
        {
          if ( *v16 )
          {
            v16[1] = 0;
            qfree();
          }
          ++v17;
          v16 += 3;
        }
        while ( v15 != v17 );
      }
      qfree();
    }
    if ( v50 )
      qfree();
    if ( v46 )
      qfree();
  }
  return 0;
}
