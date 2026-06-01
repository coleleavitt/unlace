__int64 __fastcall sub_25CA60(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, char a6)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int enum_member_expr; // ebx
  size_t v11; // rbp
  __int64 v12; // r13
  size_t v13; // r14
  __int64 v14; // rsi
  size_t v15; // rdx
  unsigned int v17; // ebp
  unsigned __int64 v18; // xmm0_8
  __int64 v19; // rax
  unsigned __int64 v21; // [rsp+18h] [rbp-70h]
  __int128 v22; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v21 = 0;
  enum_member_expr = get_enum_member_expr();
  if ( !(_BYTE)enum_member_expr && a4 != sub_325C90(a4, a5, 1) )
  {
    v22 = 0;
    v17 = get_enum_member_expr();
    if ( (_BYTE)v17 )
    {
      v8 = 0;
      enum_member_expr = v17;
      v18 = _mm_loadh_ps((const double *)&v22 + 1).m128_u64[0];
      *((_QWORD *)&v22 + 1) = 0;
      v21 = v18;
    }
  }
  if ( a1 && (_BYTE)enum_member_expr )
  {
    if ( a6 )
    {
      sub_325AD0(a1, 32, v8, v9);
      if ( !v21 )
        goto LABEL_20;
      v11 = v21 - 1;
      if ( v21 == 1 )
        goto LABEL_20;
    }
    else
    {
      if ( !v21 )
        return enum_member_expr;
      v11 = v21 - 1;
      if ( v21 == 1 )
        return enum_member_expr;
    }
    v12 = a1[1];
    v13 = v11;
    if ( v12 )
      v13 = --v12 + v11;
    v14 = *a1;
    v15 = v13 + 1;
    if ( a1[2] < v13 + 1 )
    {
      v19 = qvector_reserve();
      *a1 = v19;
      v15 = v13 + 1;
      v14 = v19;
    }
    a1[1] = v15;
    *(_BYTE *)(v14 + v13) = 0;
    memcpy((void *)(v12 + *a1), nullptr, v11);
    if ( !a6 )
      return enum_member_expr;
LABEL_20:
    sub_325BB0(a1, 32);
  }
  return enum_member_expr;
}

