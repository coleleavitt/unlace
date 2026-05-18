unsigned __int64 __fastcall sub_143AA0(__m128i *a1, const __m128i *a2, __int64 a3, int a4, int a5, int a6, int a7)
{
  __int64 v10; // rbp
  int v11; // eax
  int v12; // r12d
  unsigned __int8 *v13; // r15
  __int8 v14; // al
  const __m128i *v15; // r10
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 *v18; // r13
  __int32 v19; // eax
  unsigned int v20; // r15d
  int v21; // eax
  int v22; // r9d
  _BYTE *v23; // rdx
  __int64 *v24; // rbp
  int v25; // eax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  const char *v30; // rsi
  __int64 *v31; // rax
  __m128i v32; // xmm0
  char *v33; // rdx
  const char *v34; // rdx
  unsigned __int8 *v35; // r13
  __int64 v36; // rax
  char *v37; // rdx
  unsigned int v38; // [rsp+8h] [rbp-60h]
  __int64 v40; // [rsp+8h] [rbp-60h]
  int v41; // [rsp+10h] [rbp-58h]
  __int64 v42; // [rsp+10h] [rbp-58h]
  unsigned int v44; // [rsp+1Ch] [rbp-4Ch]
  const __m128i *v45; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v46; // [rsp+28h] [rbp-40h]

  v10 = a1->m128i_i64[0];
  v46 = __readfsqword(0x28u);
  if ( *(_BYTE *)(v10 + 197) && *(_DWORD *)(v10 + 192) == 1 )
  {
    v12 = *(unsigned __int8 *)(v10 + 196);
    v30 = "sqlite_master";
    if ( v12 == 1 )
      v30 = "sqlite_temp_master";
    v31 = sub_DC720(v10, v30);
    v15 = a2;
    v13 = (unsigned __int8 *)v31;
    v45 = a2;
  }
  else
  {
    v11 = sub_E4190(a1->m128i_i64, (__int64)a2, a3, (__int64 *)&v45);
    v12 = v11;
    if ( v11 < 0 )
      return __readfsqword(0x28u) ^ v46;
    if ( a4 )
    {
      if ( *(_DWORD *)(a3 + 8) && v11 != 1 )
      {
        sub_DBD10((__int64)a1, "temporary table name must be unqualified");
        return __readfsqword(0x28u) ^ v46;
      }
      v12 = 1;
    }
    v13 = (unsigned __int8 *)sub_DCE50(v10, (__int64)v45);
    v14 = a1[18].m128i_i8[4];
    v15 = v45;
    if ( (unsigned __int8)v14 > 1u && v14 != 3 )
    {
      sub_DC5F0(a1->m128i_i64, (__int64)v13, v45);
      v15 = v45;
    }
  }
  v32 = _mm_loadu_si128(v15);
  a1[16] = v32;
  if ( v13 )
  {
    v33 = "table";
    if ( a5 )
      v33 = "view";
    if ( (unsigned int)sub_E6FB0(a1, v13, v33, v13) )
      goto LABEL_49;
    v42 = 32LL * v12;
    v40 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + v42);
    if ( *(_BYTE *)(v10 + 196) == 1 )
    {
      a4 = 1;
      v34 = "sqlite_temp_master";
    }
    else
    {
      v34 = "sqlite_master";
      if ( a4 == 1 )
        v34 = "sqlite_temp_master";
    }
    if ( (unsigned int)sub_E4020((__int64)a1, 18, (__int64)v34, 0, v40)
      || !a6 && (unsigned int)sub_E4020((__int64)a1, byte_1BACE6[2 * a5 + a4], (__int64)v13, 0, v40) )
    {
      goto LABEL_49;
    }
    if ( !a1[18].m128i_i8[4] )
    {
      v35 = *(unsigned __int8 **)(*(_QWORD *)(v10 + 32) + 32LL * v12);
      if ( (unsigned int)sub_143A40((__int64 **)a1, *(double *)v32.m128i_i64) )
      {
LABEL_49:
        a1[1].m128i_i8[13] = 1;
        sub_C9250(v10, v13);
        return __readfsqword(0x28u) ^ v46;
      }
      v36 = sub_CA640(v10, v13, v35);
      if ( v36 )
      {
        if ( a7 )
        {
          sub_11C860((__int64)a1, v12);
          sub_E23E0((__int64)a1);
        }
        else
        {
          v37 = "table";
          if ( *(_BYTE *)(v36 + 63) == 2 )
            v37 = "view";
          sub_DBD10((__int64)a1, "%s %T already exists", v37, v45);
        }
        goto LABEL_49;
      }
      if ( sub_CF360(v10, v13, v35) )
      {
        sub_DBD10((__int64)a1, "there is already an index named %s", (const char *)v13);
        goto LABEL_49;
      }
    }
    v16 = sub_DC1C0(v10, 0x68u);
    if ( !v16 )
    {
      a1[1].m128i_i32[2] = 7;
      ++a1[3].m128i_i32[0];
      goto LABEL_49;
    }
    *v16 = (__int64)v13;
    *((_WORD *)v16 + 26) = -1;
    v17 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + v42 + 24);
    *((_DWORD *)v16 + 11) = 1;
    *((_WORD *)v16 + 29) = 200;
    v16[12] = v17;
    a1[21].m128i_i64[0] = (__int64)v16;
    if ( !*(_BYTE *)(v10 + 197) )
    {
      v18 = (__int64 *)a1[1].m128i_i64[0];
      if ( v18 || (v18 = sub_E2050(a1->m128i_i64)) != nullptr )
      {
        sub_11C930((__int64)a1, 1, v12);
        if ( a6 )
          sub_E1710((__int64)v18, 170, 0, 0, 0);
        v19 = a1[3].m128i_i32[2];
        v20 = v19 + 3;
        v38 = v19 + 1;
        a1[7].m128i_i32[2] = v19 + 1;
        a1[3].m128i_i32[2] = v19 + 3;
        v44 = v19 + 2;
        a1[7].m128i_i32[3] = v19 + 2;
        sub_E1710((__int64)v18, 99, v12, v19 + 3, 2u);
        *((_DWORD *)v18 + 50) |= 1 << v12;
        if ( v12 != 1 && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v18 + 32) + v42 + 8) + 17LL) )
          *((_DWORD *)v18 + 51) |= 1 << v12;
        v41 = sub_E1710((__int64)v18, 15, v20, 0, 0);
        sub_E1710((__int64)v18, 100, v12, 2u, (*(_QWORD *)(v10 + 48) & 2LL) == 0 ? 4 : 1);
        sub_E1710((__int64)v18, 100, v12, 5u, *(unsigned __int8 *)(v10 + 100));
        v21 = *((_DWORD *)v18 + 36);
        v22 = v41;
        if ( v41 < 0 )
          v22 = v21 - 1;
        v23 = byte_241F50;
        if ( !*(_BYTE *)(*v18 + 103) )
          v23 = (_BYTE *)(v18[17] + 24LL * v22);
        *((_DWORD *)v23 + 2) = v21;
        if ( a5 | a6 )
          sub_E1710((__int64)v18, 71, 0, v44, 0);
        else
          a1[12].m128i_i32[0] = sub_E1710((__int64)v18, 147, v12, v44, 1u);
        v24 = (__int64 *)a1[1].m128i_i64[0];
        if ( !v24 )
          v24 = sub_E2050(a1->m128i_i64);
        if ( v12 != 1 )
          sub_E30E0((__int64)a1, v12, 1, 1u, (__int64)"sqlite_master");
        sub_E1770(v24, 113, 0, 1u, v12, 5);
        if ( !a1[3].m128i_i32[1] )
          a1[3].m128i_i32[1] = 1;
        sub_E1710((__int64)v18, 127, 0, v38, 0);
        v25 = sub_E1710((__int64)v18, 77, 6u, v20, 0);
        sub_DCC50((__int64)v18, v25, (__int64)&unk_1BACE0, 0xFFFFFFFFLL, v26, v27);
        sub_E1710((__int64)v18, 128, 0, v20, v38);
        v28 = *((int *)v18 + 36);
        if ( (int)v28 > 0 )
          *(_WORD *)(v18[17] + 24 * v28 - 22) = 8;
        sub_E1710((__int64)v18, 122, 0, 0, 0);
      }
    }
  }
  return __readfsqword(0x28u) ^ v46;
}
