__int64 __fastcall sub_2612E0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  unsigned int enum_member_expr; // ebx
  size_t v9; // rbp
  __int64 v10; // r13
  size_t v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rdx
  unsigned int v15; // ebp
  unsigned __int64 v16; // xmm0_8
  __int64 v17; // rax
  unsigned __int64 v19; // [rsp+18h] [rbp-70h]
  __int128 v20; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v19 = 0;
  enum_member_expr = get_enum_member_expr();
  if ( !(_BYTE)enum_member_expr && a4 != sub_32ABC0(a4, a5, 1) )
  {
    v20 = 0;
    v15 = get_enum_member_expr();
    if ( (_BYTE)v15 )
    {
      enum_member_expr = v15;
      v16 = _mm_loadh_ps((const double *)&v20 + 1).m128_u64[0];
      *((_QWORD *)&v20 + 1) = 0;
      v19 = v16;
    }
  }
  if ( a1 && (_BYTE)enum_member_expr )
  {
    if ( a6 )
    {
      sub_32AA00(a1, 32);
      if ( !v19 )
        goto LABEL_20;
      v9 = v19 - 1;
      if ( v19 == 1 )
        goto LABEL_20;
    }
    else
    {
      if ( !v19 )
        return enum_member_expr;
      v9 = v19 - 1;
      if ( v19 == 1 )
        return enum_member_expr;
    }
    v10 = a1[1];
    v11 = v9;
    if ( v10 )
      v11 = --v10 + v9;
    v12 = *a1;
    v13 = v11 + 1;
    if ( a1[2] < v11 + 1 )
    {
      v17 = qvector_reserve((__int64)a1, v12, v13, 1);
      *a1 = v17;
      v13 = v11 + 1;
      v12 = v17;
    }
    a1[1] = v13;
    *(_BYTE *)(v12 + v11) = 0;
    memcpy((void *)(v10 + *a1), nullptr, v9);
    if ( !a6 )
      return enum_member_expr;
LABEL_20:
    sub_32AAE0(a1, 32);
  }
  return enum_member_expr;
}

