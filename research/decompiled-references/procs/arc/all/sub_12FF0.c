__int64 __fastcall sub_12FF0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbp

  result = get_func(*(_QWORD *)(a2 + 16));
  if ( result )
  {
    v7 = result;
    result = sub_12E10(a1, a2, v3, v4, v5, v6);
    if ( result )
      return add_auto_stkpnt(v7, *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), result);
  }
  return result;
}
