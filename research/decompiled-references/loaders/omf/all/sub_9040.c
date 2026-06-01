unsigned __int64 __fastcall sub_9040(int a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r15
  __int64 v3; // rbx
  __int64 v4; // r13
  unsigned __int64 v5; // rbp
  const __m128i *v6; // rax
  __m128i v7; // xmm1
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 *v10; // rax
  int *v11; // rdi
  __int64 v12; // rcx
  __int64 *v13; // r14
  int *v14; // rax
  int *v15; // rsi
  __int64 v16; // rdx
  int *v17; // rax
  char v18; // al
  const char *v19; // rdx
  const char *v20; // rax
  char v21; // al
  __int64 v22; // rdi
  __int64 v24; // rsi
  const char *v25; // rdi
  const char *v26; // rdi
  __int64 v28; // [rsp+10h] [rbp-168h]
  unsigned __int64 v30; // [rsp+28h] [rbp-150h] BYREF
  const char *v31; // [rsp+30h] [rbp-148h] BYREF
  __int128 v32; // [rsp+38h] [rbp-140h]
  __m128i v33; // [rsp+50h] [rbp-128h] BYREF
  __m128i v34; // [rsp+60h] [rbp-118h]
  __m128i v35; // [rsp+70h] [rbp-108h]
  _BYTE v36[144]; // [rsp+80h] [rbp-F8h] BYREF
  _BYTE v37[40]; // [rsp+110h] [rbp-68h] BYREF
  unsigned __int64 v38; // [rsp+138h] [rbp-40h]

  v2 = 16385;
  v3 = 59;
  v38 = __readfsqword(0x28u);
  if ( (unsigned __int64)xmmword_14508 > 1 )
  {
    while ( 1 )
    {
      v4 = v3 + qword_14500;
      v5 = *(char *)(v3 + qword_14500 + 56);
      if ( (unsigned __int8)(v5 - 1) <= 0x5Eu && a1 == netnode_altval(qword_144A8, *(_QWORD *)(v4 + 48), 65) )
      {
        *(_QWORD *)&v36[136] = 0xFFFFFFFF00000000LL;
        v33 = 0;
        v34 = 0;
        v35 = 0u;
        *(_QWORD *)v36 = 0;
        memset(&v36[8], 255, 128);
        v6 = (const __m128i *)sub_8780(v5);
        v33 = _mm_loadu_si128(v6);
        v34 = _mm_loadu_si128(v6 + 1);
        v7 = _mm_loadu_si128(v6 + 2);
        v34.m128i_i64[0] = 0;
        v35 = v7;
        *(__m128i *)v36 = _mm_loadu_si128(v6 + 3);
        *(__m128i *)&v36[16] = _mm_loadu_si128(v6 + 4);
        *(__m128i *)&v36[32] = _mm_loadu_si128(v6 + 5);
        *(__m128i *)&v36[48] = _mm_loadu_si128(v6 + 6);
        *(__m128i *)&v36[64] = _mm_loadu_si128(v6 + 7);
        *(__m128i *)&v36[80] = _mm_loadu_si128(v6 + 8);
        *(__m128i *)&v36[96] = _mm_loadu_si128(v6 + 9);
        *(__m128i *)&v36[112] = _mm_loadu_si128(v6 + 10);
        *(__m128i *)&v36[128] = _mm_loadu_si128(v6 + 11);
        if ( v36[136] == 7 )
        {
          v32 = 0;
          v31 = nullptr;
          get_segm_class(&v31, &v33);
          v26 = src;
          if ( (_QWORD)v32 )
            v26 = v31;
          v36[136] = 2 * (stristr(v26, "CODE", 0.0) != 0);
          if ( v31 )
          {
            *(_QWORD *)&v32 = 0;
            qfree(v31);
          }
        }
        v8 = *(unsigned int *)(v4 + 24);
        v9 = getinf(20, 0.0);
        v33.m128i_i64[0] = find_free_chunk(v9, v8, 15);
        v33.m128i_i64[1] = v33.m128i_i64[0] + v8;
        *(_QWORD *)v36 = allocate_selector(a2 >> 4);
        qsnprintf(v37, 32, "VIRDEF%02zu", v2 - 0x4000);
        add_segm_ex(
          &v33,
          v37,
          0,
          dword_14370
        | (32 * (unsigned int)((int)((v33.m128i_i64[1] - v33.m128i_i64[0]) / (unsigned __int64)qword_145A8) > 5)));
        v10 = (__int64 *)getseg(v33.m128i_i64[0]);
        v11 = &dword_14548;
        v12 = *v10;
        v13 = v10;
        v14 = (int *)qword_14550;
        v30 = v2;
        if ( !qword_14550 )
          goto LABEL_15;
        do
        {
          while ( 1 )
          {
            v15 = *((int **)v14 + 2);
            v16 = *((_QWORD *)v14 + 3);
            if ( *((_QWORD *)v14 + 4) < v2 )
              break;
            v11 = v14;
            v14 = *((int **)v14 + 2);
            if ( !v15 )
              goto LABEL_13;
          }
          v14 = *((int **)v14 + 3);
        }
        while ( v16 );
LABEL_13:
        if ( v11 == &dword_14548 || v2 < *((_QWORD *)v11 + 4) )
        {
LABEL_15:
          v15 = v11;
          v28 = v12;
          v31 = (const char *)&v30;
          v17 = (int *)sub_47C0(&qword_14540, v11, (unsigned __int64 **)&v31);
          v12 = v28;
          v11 = v17;
        }
        *((_QWORD *)v11 + 5) = v12;
        v18 = *((_BYTE *)v13 + 184);
        if ( v18 == 2 )
        {
          v25 = src;
          if ( *(_QWORD *)(v4 + 8) )
            v25 = *(const char **)v4;
          if ( (unsigned int)get_mangled_name_type(v25, v15, v16) == 1 )
          {
            *((_BYTE *)v13 + 184) = 3;
            set_segm_class(v13, "DATA", 0);
          }
          v18 = *((_BYTE *)v13 + 184);
        }
        v19 = src;
        if ( *(_QWORD *)(v4 + 8) )
          v19 = *(const char **)v4;
        add_entry(*v13, *v13, v19, v18 == 2, 0);
        v20 = sub_86E0(v5);
        sub_4EF0(*v13, 1u, (__int64)"VIRDEF, segment %s\nNOTE: VIRDEF records cannot be represented in assembly!", v20);
        v21 = netnode_charval(qword_144A8, v2, 68);
        if ( ((v21 - 11) & 0xFD) == 0 )
        {
          v22 = *v13;
          if ( v21 == 13 )
          {
            sub_4EF0(v22, 1u, (__int64)"This segment represent Delphi resourcestring%s", " in UTF8");
            v24 = *v13;
            LOBYTE(v31) = 85;
            netnode_supset(qword_144A8, v24, &v31, 1, 68);
          }
          else
          {
            sub_4EF0(v22, 1u, (__int64)"This segment represent Delphi resourcestring%s", "");
          }
        }
      }
      v3 += 59;
      if ( v2 - 0x3FFF >= (unsigned __int64)xmmword_14508 )
        break;
      ++v2;
    }
  }
  return v38 - __readfsqword(0x28u);
}
