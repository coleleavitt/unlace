__int64 __fastcall sub_18DE0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r13
  __int64 v5; // r14
  __int64 v6; // rsi
  const char *v8; // rdx
  __int64 result; // rax
  const char *v10; // rsi
  __int64 range; // rax
  unsigned __int8 v12; // [rsp+Fh] [rbp-59h]
  const char *v13; // [rsp+10h] [rbp-58h] BYREF
  __int64 v14; // [rsp+18h] [rbp-50h]
  unsigned __int64 v15; // [rsp+28h] [rbp-40h]

  v3 = a1 + 1704;
  v5 = *a3;
  v6 = *(_QWORD *)(a1 + 1784);
  v15 = __readfsqword(0x28u);
  if ( v5 == v6 )
  {
LABEL_2:
    v8 = s;
    if ( a3[3] )
      v8 = (const char *)a3[2];
    result = sub_2D950(v3, v6, v8, a3 + 5, a2);
    goto LABEL_5;
  }
  if ( *(_QWORD *)(a1 + 1880) )
  {
    range = rangeset_t_find_range();
    v6 = *a3;
    if ( range )
      goto LABEL_2;
    v5 = *a3;
  }
  sub_2A150(&v13, a1, a3);
  v10 = s;
  if ( v14 )
    v10 = v13;
  result = sub_2D8D0(v3, v10, v5, a2, a3 + 5);
  if ( !v13 )
  {
LABEL_5:
    if ( (_BYTE)result )
      return result;
    return sub_3A190(v3, *a3, a2, 0);
  }
  v12 = result;
  v14 = 0;
  qfree();
  result = v12;
  if ( !v12 )
    return sub_3A190(v3, *a3, a2, 0);
  return result;
}

