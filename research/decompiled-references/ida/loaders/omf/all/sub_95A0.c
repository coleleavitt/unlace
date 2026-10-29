unsigned __int64 __fastcall sub_95A0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r15
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  __m128i v6; // xmm0
  __int64 v7; // r13
  __int64 v8; // rax
  int *v9; // rdx
  int *v10; // rsi
  __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rax
  bool v14; // zf
  char v15; // al
  const char *v16; // rax
  const char *v17; // rax
  __int64 v19; // rbx
  const char *v20; // rbx
  _BOOL8 v21; // rcx
  const char *v22; // rax
  const __m128i *v23; // rax
  __m128i v24; // xmm0
  const char *v25; // rcx
  const char *v26; // rdi
  __int64 v27; // rax
  char *v28; // [rsp+8h] [rbp-1B0h]
  unsigned __int64 v30; // [rsp+28h] [rbp-190h] BYREF
  const char *v31; // [rsp+30h] [rbp-188h] BYREF
  __int128 v32; // [rsp+38h] [rbp-180h]
  char v33[8]; // [rsp+50h] [rbp-168h] BYREF
  unsigned __int64 v34; // [rsp+58h] [rbp-160h]
  size_t v35; // [rsp+68h] [rbp-150h]
  unsigned int v36; // [rsp+7Dh] [rbp-13Bh]
  char v37; // [rsp+81h] [rbp-137h]
  unsigned __int8 v38; // [rsp+82h] [rbp-136h]
  __int8 v39; // [rsp+83h] [rbp-135h]
  __m128i v40; // [rsp+90h] [rbp-128h] BYREF
  __m128i v41; // [rsp+A0h] [rbp-118h]
  __m128i v42; // [rsp+B0h] [rbp-108h]
  _BYTE v43[144]; // [rsp+C0h] [rbp-F8h] BYREF
  _BYTE v44[40]; // [rsp+150h] [rbp-68h] BYREF
  unsigned __int64 v45; // [rsp+178h] [rbp-40h]

  v2 = 8193;
  v45 = __readfsqword(0x28u);
  if ( (unsigned __int64)qword_144B8 > 1 )
  {
    while ( 1 )
    {
      v4 = netnode_altval(qword_144C8, v2 - 0x2000, 65);
      netnode_supval(qword_144C8, v4, v33, 52, 83);
      v5 = v34;
      if ( a1 != netnode_altval(qword_144A8, v34, 65) )
        goto LABEL_3;
      v6.m128i_i64[0] = 0;
      v42.m128i_i64[1] = 1;
      v42.m128i_i64[0] = 0;
      *(_QWORD *)v43 = 0;
      *(_QWORD *)&v43[136] = 0xFFFFFFFF00000000LL;
      v40 = 0;
      v41 = 0;
      memset(&v43[8], 255, 128);
      if ( v5 == -2 )
        goto LABEL_33;
      if ( v5 != -1 )
      {
        if ( v5 == -4 )
        {
          v42.m128i_i8[11] = 1;
LABEL_33:
          v43[136] = 3;
          v28 = "DATA";
          goto LABEL_12;
        }
        if ( v5 != -3 )
        {
          v23 = (const __m128i *)sub_8780(v5);
          v40 = _mm_loadu_si128(v23);
          v41 = _mm_loadu_si128(v23 + 1);
          v24 = _mm_loadu_si128(v23 + 2);
          v41.m128i_i64[0] = 0;
          v42 = v24;
          *(__m128i *)v43 = _mm_loadu_si128(v23 + 3);
          *(__m128i *)&v43[16] = _mm_loadu_si128(v23 + 4);
          *(__m128i *)&v43[32] = _mm_loadu_si128(v23 + 5);
          *(__m128i *)&v43[48] = _mm_loadu_si128(v23 + 6);
          *(__m128i *)&v43[64] = _mm_loadu_si128(v23 + 7);
          *(__m128i *)&v43[80] = _mm_loadu_si128(v23 + 8);
          *(__m128i *)&v43[96] = _mm_loadu_si128(v23 + 9);
          *(__m128i *)&v43[112] = _mm_loadu_si128(v23 + 10);
          v6 = _mm_loadu_si128(v23 + 11);
          *(__m128i *)&v43[128] = v6;
          if ( v6.m128i_i8[8] == 7 )
          {
            v25 = "";
            if ( v4 )
            {
              if ( v4 < (unsigned __int64)xmmword_14598 )
              {
                v25 = src;
                v27 = qword_14590 + 32 * v4;
                if ( *(_QWORD *)(v27 + 8) )
                  v25 = *(const char **)v27;
              }
            }
            sub_4EF0(v40.m128i_i64[0], 1u, (__int64)"This segment is used by COMDAT record %s", v25);
            v6.m128i_i64[0] = 0;
            v43[136] = 0;
            v31 = nullptr;
            v32 = 0;
            if ( get_segm_class(&v31, &v40) > 0 )
            {
              v26 = src;
              if ( (_QWORD)v32 )
                v26 = v31;
              if ( stristr(v26, "CODE", 0.0) )
                v43[136] = 2;
            }
            if ( v31 )
            {
              *(_QWORD *)&v32 = 0;
              qfree(v31);
            }
          }
          v28 = nullptr;
          goto LABEL_12;
        }
        v42.m128i_i8[11] = 1;
      }
      v43[136] = 2;
      v28 = "CODE";
LABEL_12:
      v7 = v36;
      v8 = getinf(20, *(double *)v6.m128i_i64);
      v40.m128i_i64[0] = find_free_chunk(v8, v7, 15);
      v40.m128i_i64[1] = v40.m128i_i64[0] + v7;
      *(_QWORD *)v43 = allocate_selector(a2 >> 4);
      if ( v39 )
        v42.m128i_i8[8] = v39;
      qsnprintf(v44, 32, "COMDAT%02zu", v2 - 0x2000);
      add_segm_ex(
        &v40,
        v44,
        v28,
        dword_14370
      | (32 * (unsigned int)((int)((v40.m128i_i64[1] - v40.m128i_i64[0]) / (unsigned __int64)qword_145A8) > 5)));
      v9 = (int *)qword_14550;
      v30 = v2;
      v10 = &dword_14548;
      v11 = v40.m128i_i64[0];
      if ( !qword_14550 )
        goto LABEL_21;
      do
      {
        while ( 1 )
        {
          v12 = *((_QWORD *)v9 + 2);
          v13 = *((_QWORD *)v9 + 3);
          if ( *((_QWORD *)v9 + 4) < v2 )
            break;
          v10 = v9;
          v9 = *((int **)v9 + 2);
          if ( !v12 )
            goto LABEL_19;
        }
        v9 = *((int **)v9 + 3);
      }
      while ( v13 );
LABEL_19:
      if ( v10 == &dword_14548 || v2 < *((_QWORD *)v10 + 4) )
      {
LABEL_21:
        v31 = (const char *)&v30;
        v10 = (int *)sub_47C0(&qword_14540, v10, (unsigned __int64 **)&v31);
      }
      v14 = byte_145C0 == 0;
      *((_QWORD *)v10 + 5) = v11;
      if ( v14 )
      {
        if ( !v4 || v4 >= (unsigned __int64)xmmword_14508 )
          sub_52E0("get_omf_extdef");
        v19 = qword_14500 + 59 * v4;
        if ( !*(_QWORD *)(v19 + 8) )
          goto LABEL_25;
      }
      else
      {
        if ( !v4 )
          goto LABEL_25;
        if ( v4 >= (unsigned __int64)xmmword_14598 )
          goto LABEL_25;
        v19 = qword_14590 + 32 * v4;
        if ( !*(_QWORD *)(v19 + 8) )
          goto LABEL_25;
      }
      v20 = *(const char **)v19;
      if ( *v20 )
      {
        sub_4D20(v20);
        v21 = 0;
        if ( v43[136] == 2 )
          v21 = (v37 & 8) == 0;
        add_entry(v40.m128i_i64[0], v40.m128i_i64[0], v20, v21, 0);
        if ( v28 )
          goto LABEL_26;
LABEL_42:
        v22 = sub_86E0(v5);
        sub_4EF0(
          v40.m128i_i64[0],
          1u,
          (__int64)"COMDAT, segment %s (COMDAT records can't be represented in assembly!)",
          v22);
        goto LABEL_26;
      }
LABEL_25:
      if ( !v28 )
        goto LABEL_42;
LABEL_26:
      v15 = v37;
      if ( (v37 & 4) != 0 )
      {
        sub_4EF0(v40.m128i_i64[0], 1u, (__int64)"Local COMDAT (effectively LCOMDAT)");
        v15 = v37;
      }
      if ( (v15 & 8) != 0 )
        sub_4EF0(v40.m128i_i64[0], 1u, (__int64)"Data in code segment. Can't be placed in the overlayed module.");
      v16 = (const char *)strarray(&unk_13A20, 5, v38 >> 4);
      sub_4EF0(v40.m128i_i64[0], 1u, (__int64)"Selection : %s", v16);
      v17 = (const char *)strarray(&unk_139C0, 6, v38 & 0xF);
      sub_4EF0(v40.m128i_i64[0], 1u, (__int64)"Allocation: %s", v17);
      if ( v35 )
        sub_4EF0(v40.m128i_i64[0], 1u, (__int64)"Type idx: %zu", v35);
LABEL_3:
      if ( v2 - 0x1FFF >= qword_144B8 )
        return v45 - __readfsqword(0x28u);
      ++v2;
    }
  }
  return v45 - __readfsqword(0x28u);
}

