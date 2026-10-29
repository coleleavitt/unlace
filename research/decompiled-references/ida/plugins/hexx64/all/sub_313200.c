unsigned __int64 __fastcall sub_313200(__int64 a1, int a2, unsigned __int64 a3, double a4, __m128 a5)
{
  unsigned __int64 v6; // rax
  __int64 v7; // r12
  int v8; // ecx
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbp
  int v15; // edx
  __int64 v16; // rax
  int v17; // edx
  int v18; // ecx
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  __int64 *v24; // rdi
  __int64 v25; // rax
  int v26; // edx
  __int64 v27; // rax
  int v28; // ecx
  int v29; // edx
  __int64 v30; // rax
  int v31; // ecx
  __int64 v32; // rax
  __m128i v33; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v34; // [rsp+18h] [rbp-30h]

  v34 = __readfsqword(0x28u);
  v6 = sub_312A60(a1, a3, a4);
  v7 = v6;
  switch ( a2 )
  {
    case 0:
      sub_312B80(a1, a4);
      *(_DWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 16) = 0;
      if ( !v7 )
      {
        v18 = *(_DWORD *)(a1 + 4);
        v19 = -1;
        if ( v18 == 8 )
          goto LABEL_27;
        goto LABEL_25;
      }
      v33.m128i_i64[1] = v7;
      v33.m128i_i64[0] = 0;
      sub_316BB0((__int64 *)(a1 + 8), &v33, 0.0, a5);
      v18 = *(_DWORD *)(a1 + 4);
      v19 = -1;
      if ( v18 != 8 )
LABEL_25:
        v19 = (1LL << (8 * (unsigned __int8)v18)) - 1;
      if ( v7 == v19 )
        return v34 - __readfsqword(0x28u);
LABEL_27:
      v33.m128i_i64[0] = v7 + 1;
      v33.m128i_i64[1] = v19 - v7;
      sub_316BB0((__int64 *)(a1 + 8), &v33, 0.0, a5);
      return v34 - __readfsqword(0x28u);
    case 1:
      sub_312B80(a1, a4);
      *(_DWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 16) = 0;
      v33.m128i_i64[0] = v7;
      v33.m128i_i64[1] = 1;
      sub_316BB0((__int64 *)(a1 + 8), &v33, 0.0, a5);
      return v34 - __readfsqword(0x28u);
    case 2:
      goto LABEL_5;
    case 3:
      if ( !v6 )
        goto LABEL_44;
      v10 = *(_DWORD *)(a1 + 4);
      if ( v10 == 8 )
        goto LABEL_43;
      v7 = v6 - 1;
LABEL_40:
      v27 = (1LL << (8 * (unsigned __int8)v10)) - 1;
LABEL_41:
      if ( v27 == v7 )
        goto LABEL_6;
      ++v7;
LABEL_43:
      sub_312B80(a1, a4);
      *(_DWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 16) = 0;
      v33.m128i_i64[0] = 0;
      v33.m128i_i64[1] = v7;
      sub_316BB0((__int64 *)(a1 + 8), &v33, 0.0, a5);
      return v34 - __readfsqword(0x28u);
    case 4:
      v8 = *(_DWORD *)(a1 + 4);
      if ( v8 == 8 )
      {
        if ( v6 == -1 )
          goto LABEL_44;
        v7 = v6 + 1;
      }
      else
      {
        if ( v6 == (1LL << (8 * (unsigned __int8)v8)) - 1 )
          goto LABEL_44;
        v7 = v6 + 1;
LABEL_5:
        if ( !v7 )
        {
LABEL_6:
          *(_DWORD *)a1 = 1;
          return v34 - __readfsqword(0x28u);
        }
      }
      sub_312B80(a1, a4);
      v28 = *(_DWORD *)(a1 + 4);
      v24 = (__int64 *)(a1 + 8);
      *(_DWORD *)a1 = 2;
      v25 = -1;
      *(_QWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 16) = 0;
      if ( v28 != 8 )
        v25 = (1LL << (8 * (unsigned __int8)v28)) - 1;
      goto LABEL_36;
    case 5:
      v10 = *(_DWORD *)(a1 + 4);
      v27 = -1;
      if ( v10 != 8 )
        goto LABEL_40;
      goto LABEL_41;
    case 6:
      v20 = *(_DWORD *)(a1 + 4);
      if ( v20 == 8 )
      {
        if ( v6 == 0x7FFFFFFFFFFFFFFFLL )
        {
LABEL_44:
          *(_DWORD *)a1 = 0;
          return v34 - __readfsqword(0x28u);
        }
        v7 = v6 + 1;
      }
      else
      {
        v21 = 1LL << (8 * (unsigned __int8)v20 - 1);
        if ( v7 == v21 - 1 )
          goto LABEL_44;
        v7 = ~(-1LL << (8 * (unsigned __int8)v20)) & (v7 + 1);
LABEL_32:
        if ( v21 == v7 )
          goto LABEL_6;
      }
      sub_312B80(a1, a4);
      v22 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 16) = 0;
      if ( v22 == 8 )
      {
        if ( v7 >= 0 )
        {
          v25 = 0x7FFFFFFFFFFFFFFFLL;
          v24 = (__int64 *)(a1 + 8);
          goto LABEL_36;
        }
        v23 = 0x8000000000000000LL;
      }
      else
      {
        v23 = 1LL << (8 * (unsigned __int8)v22 - 1);
        if ( (v7 & v23) == 0 )
        {
          v24 = (__int64 *)(a1 + 8);
          v25 = v23 - 1;
LABEL_36:
          v33.m128i_i64[0] = v7;
          v33.m128i_i64[1] = v25 - v7 + 1;
          sub_316BB0(v24, &v33, 0.0, a5);
          return v34 - __readfsqword(0x28u);
        }
      }
      v33.m128i_i64[1] = v23;
      v33.m128i_i64[0] = 0;
      sub_316BB0((__int64 *)(a1 + 8), &v33, 0.0, a5);
      v31 = *(_DWORD *)(a1 + 4);
      v32 = -1;
      if ( v31 != 8 )
        v32 = (1LL << (8 * (unsigned __int8)v31)) - 1;
      v33.m128i_i64[0] = v7;
      v33.m128i_i64[1] = v32 - v7 + 1;
      sub_316BB0((__int64 *)(a1 + 8), &v33, 0.0, a5);
      return v34 - __readfsqword(0x28u);
    case 7:
      v21 = 0x8000000000000000LL;
      v26 = *(_DWORD *)(a1 + 4);
      if ( v26 != 8 )
        v21 = 1LL << (8 * (unsigned __int8)v26 - 1);
      goto LABEL_32;
    case 8:
      v11 = *(_DWORD *)(a1 + 4);
      if ( v11 == 8 )
      {
        if ( v6 == 0x8000000000000000LL )
          goto LABEL_44;
        v14 = v6;
        v7 = v6 - 1;
      }
      else
      {
        v12 = 1LL << (8 * (unsigned __int8)v11 - 1);
        if ( v7 == v12 )
          goto LABEL_44;
        v7 = ~(-1LL << (8 * (unsigned __int8)v11)) & (v7 - 1);
LABEL_14:
        v13 = v12 - 1;
LABEL_15:
        if ( v7 == v13 )
          goto LABEL_6;
        v14 = v7 + 1;
      }
      sub_312B80(a1, a4);
      v15 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = 2;
      v16 = 0x8000000000000000LL;
      *(_OWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 8) = 0;
      if ( v15 != 8 )
        v16 = 1LL << (8 * (unsigned __int8)v15 - 1);
      if ( (v7 & v16) != 0 )
      {
        v33.m128i_i64[0] = v16;
        v33.m128i_i64[1] = v14 - v16;
        sub_316BB0((__int64 *)(a1 + 8), &v33, 0.0, a5);
      }
      else
      {
        v33.m128i_i64[1] = v14;
        v33.m128i_i64[0] = 0;
        sub_316BB0((__int64 *)(a1 + 8), &v33, 0.0, a5);
        v29 = *(_DWORD *)(a1 + 4);
        v30 = 0x8000000000000000LL;
        if ( v29 != 8 )
          v30 = 1LL << (8 * (unsigned __int8)v29 - 1);
        v33 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v30, (__m128i)(unsigned __int64)v30);
        sub_316BB0((__int64 *)(a1 + 8), &v33, *(double *)v33.m128i_i64, a5);
      }
      return v34 - __readfsqword(0x28u);
    case 9:
      v13 = 0x7FFFFFFFFFFFFFFFLL;
      v17 = *(_DWORD *)(a1 + 4);
      if ( v17 == 8 )
        goto LABEL_15;
      v12 = 1LL << (8 * (unsigned __int8)v17 - 1);
      goto LABEL_14;
    default:
      if ( !under_debugger )
        sub_383060(0xCA20u, a4);
      BUG();
  }
}

