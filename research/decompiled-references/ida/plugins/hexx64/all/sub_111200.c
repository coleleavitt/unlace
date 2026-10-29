__int64 __fastcall sub_111200(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned __int64 *v9; // r14
  int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // edx
  unsigned int v19; // [rsp+8h] [rbp-B8h]
  __m128 v20; // [rsp+10h] [rbp-B0h] BYREF
  unsigned __int8 *v21; // [rsp+20h] [rbp-A0h]
  __int64 v22; // [rsp+28h] [rbp-98h]
  __int64 v23; // [rsp+30h] [rbp-90h]
  __int64 v24; // [rsp+38h] [rbp-88h]
  int v25; // [rsp+40h] [rbp-80h]
  __m128 v26; // [rsp+50h] [rbp-70h] BYREF
  _DWORD *v27; // [rsp+60h] [rbp-60h]
  __int64 v28; // [rsp+68h] [rbp-58h]
  __int64 v29; // [rsp+70h] [rbp-50h]
  __int64 v30; // [rsp+78h] [rbp-48h]
  int v31; // [rsp+80h] [rbp-40h]
  unsigned __int64 v32; // [rsp+88h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a3 + 4) != *(_DWORD *)(a4 + 4) )
    return 0;
  if ( (a5 & 0x20) != 0
    && (unsigned __int8)sub_11FD80((char *)a4, nullptr, 1u)
    && (unsigned __int8)sub_11FD80((char *)a3, nullptr, 1u) )
  {
    return 4;
  }
  v9 = *(unsigned __int64 **)(a1[30].m128i_i64[0] + 112);
  if ( sub_125B60((unsigned __int8 *)a3, a4, 0) )
    return 0;
  v10 = a5 & 2;
  if ( !v10 )
    goto LABEL_14;
  if ( (unsigned __int8)sub_11FD80((char *)a4, &v26, 0) && !v26.m128_u64[0] )
    return 4;
  if ( (unsigned __int8)sub_130BC0(a1, a2, a3, a2, a4, 0) )
    return 2 * (unsigned int)(*(_BYTE *)a4 != 1) + 3;
  sub_123A40((__int64)&v26, (unsigned __int8 *)a3, v11, v12);
  if ( !(unsigned __int8)sub_12CD10((__int16 *)&v26, v9, 1)
    || !(unsigned __int8)sub_12EA80((__int64)v9, a1, a2, a4, a2, (__int64)&v26, 2) )
  {
    sub_11CDA0((__int64)&v26);
LABEL_14:
    v13 = a1[4].m128i_i64[0];
    v20.m128_u64[0] = (unsigned __int64)a1;
    v20.m128_u64[1] = a2;
    v21 = nullptr;
    v22 = a4;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    if ( !(unsigned __int8)sub_12A160(v13, &v20, 1) )
      return 0;
    if ( (const __m128i *)v20.m128_u64[0] != a1 )
      goto LABEL_16;
    if ( !sub_30D8F0((__int64)v9, (__int64)a1, v20.m128_i64[1], v21, a2, a3) )
    {
      if ( (const __m128i *)v20.m128_u64[0] == a1 && *(_DWORD *)v21 == 11 )
      {
        sub_123A40((__int64)&v26, v21 + 32, v15, v16);
        v17 = *(_DWORD *)(a3 + 4);
        if ( v26.m128_i32[1] == v17 + *(_DWORD *)(a4 + 4)
          && (unsigned __int8)sub_12AB50((unsigned __int8 *)&v26, (__int64)v9, v17, 1)
          && (unsigned __int8)sub_12EA80((__int64)v9, a1, a2, a3, v20.m128_i64[1], (__int64)&v26, 0) )
        {
          sub_11CDA0((__int64)&v26);
          return 5;
        }
        sub_11CDA0((__int64)&v26);
      }
LABEL_16:
      if ( v10 )
      {
        v14 = a1[4].m128i_i64[0];
        v26.m128_u64[0] = (unsigned __int64)a1;
        v26.m128_u64[1] = a2;
        v27 = nullptr;
        v28 = a3;
        v29 = 0;
        v30 = 0;
        v31 = 0;
        if ( (unsigned __int8)sub_12A160(v14, &v26, 1) )
        {
          if ( v26.m128_u64[0] == v20.m128_u64[0]
            && *(_DWORD *)v21 == 2
            && *v27 == 2
            && sub_132370(
                 (const __m128i *)v20.m128_u64[0],
                 v26.m128_i64[1],
                 (__int64)v27,
                 v20.m128_i64[1],
                 (__int64)v21,
                 0) )
          {
            return 5;
          }
        }
      }
      return 0;
    }
    return 4;
  }
  v19 = 2 * (*(_BYTE *)a3 != 1) + 3;
  sub_11CDA0((__int64)&v26);
  return v19;
}

