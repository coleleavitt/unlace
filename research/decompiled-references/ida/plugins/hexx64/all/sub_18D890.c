signed __int64 __fastcall sub_18D890(__int64 a1, __int64 a2, double a3)
{
  signed __int64 result; // rax
  __int64 v4; // r12
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rax

  if ( a2 < 0 )
  {
    if ( !under_debugger )
      sub_383060(0xCA23u, a3);
    BUG();
  }
  result = *(_QWORD *)(a1 + 152);
  v4 = *(_QWORD *)(a1 + 168);
  v6 = result;
  if ( a2 <= result )
    v6 = a2;
  if ( a2 >= v4 )
  {
    if ( a2 < result )
      return sub_18D7E0((_QWORD *)a1, v6, v4);
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 144);
    if ( !*(_BYTE *)(a1 + 320) )
    {
      v8 = *(_QWORD *)(a1 + 936);
      if ( v8 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 56LL))(v8) )
        {
          v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 936) + 40LL))(*(_QWORD *)(a1 + 936));
          if ( v7 > v9 )
            v7 = v9;
        }
        result = *(_QWORD *)(a1 + 152);
      }
    }
    if ( a2 >= v7 )
      v4 = v7;
    if ( v6 < result || *(_QWORD *)(a1 + 168) > v4 )
      return sub_18D7E0((_QWORD *)a1, v6, v4);
  }
  return result;
}

