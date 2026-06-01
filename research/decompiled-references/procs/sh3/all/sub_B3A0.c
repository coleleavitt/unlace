__int64 __fastcall sub_B3A0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbp
  __int64 v8; // rdx

  result = get_func(*(_QWORD *)(a2 + 16));
  if ( result )
  {
    v7 = result;
    result = sub_B210(a1, a2, v3, v4, v5, v6);
    v8 = result;
    if ( result )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
        v8 = (int)result;
      return add_auto_stkpnt(v7, *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), v8);
    }
  }
  return result;
}
