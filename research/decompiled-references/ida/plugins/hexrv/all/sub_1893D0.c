signed __int64 __fastcall sub_1893D0(__int64 a1, __int64 a2)
{
  signed __int64 result; // rax
  __int64 v3; // r12
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rax

  if ( a2 < 0 )
  {
    if ( !under_debugger )
      sub_37DDE0(51747);
    BUG();
  }
  result = *(_QWORD *)(a1 + 152);
  v3 = *(_QWORD *)(a1 + 168);
  v5 = result;
  if ( a2 <= result )
    v5 = a2;
  if ( a2 >= v3 )
  {
    if ( a2 < result )
      return sub_189320((_QWORD *)a1, v5, v3);
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 144);
    if ( !*(_BYTE *)(a1 + 320) )
    {
      v7 = *(_QWORD *)(a1 + 936);
      if ( v7 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7) )
        {
          v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 936) + 40LL))(*(_QWORD *)(a1 + 936));
          if ( v6 > v8 )
            v6 = v8;
        }
        result = *(_QWORD *)(a1 + 152);
      }
    }
    if ( a2 >= v6 )
      v3 = v6;
    if ( v5 < result || *(_QWORD *)(a1 + 168) > v3 )
      return sub_189320((_QWORD *)a1, v5, v3);
  }
  return result;
}

