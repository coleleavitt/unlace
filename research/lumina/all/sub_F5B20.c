__int64 __fastcall sub_F5B20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  v7 = *(_QWORD *)a1;
  if ( *(int *)(*(_QWORD *)(v7 + 24) + 136LL) < a2 )
  {
    *(_DWORD *)(a1 + 36) = 18;
    sub_F11D0(v7, "string or blob too big", -1, 1, nullptr, a6);
    return 0;
  }
  else
  {
    result = sub_D1E10(a2, a2);
    if ( !result )
    {
      sub_E1560(a1, a2, v9, v10, v11, v12);
      return 0;
    }
  }
  return result;
}
