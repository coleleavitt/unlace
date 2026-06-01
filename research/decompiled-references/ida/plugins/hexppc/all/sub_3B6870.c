__int64 __fastcall sub_3B6870(__int64 a1, __int64 a2, double a3)
{
  int v3; // eax
  __int64 v4; // rbp
  __int64 v6; // rdi
  int v7; // eax
  __int64 result; // rax
  __int64 v9; // rax

  v3 = *(_DWORD *)(a2 + 8);
  if ( v3 == 10 )
  {
    v9 = *(_QWORD *)(a2 + 200);
    if ( v9 && *(_QWORD *)(v9 + 8) )
      return 3;
    else
      return 7;
  }
  else
  {
    if ( v3 == 58 )
    {
      if ( (unsigned __int8)get_tinfo_property() )
        return 3;
      return 7;
    }
    v4 = *(_QWORD *)a2;
    v6 = sub_385A70(*(_QWORD *)(a1 + 16), *(_QWORD *)a2);
    if ( !v6 )
      return 6;
    v7 = *(_DWORD *)(a1 + 24);
    if ( !v7 )
      goto LABEL_20;
    if ( v7 != 1 )
      sub_3B6850(a3);
    result = 6;
    if ( v4 == *(_QWORD *)(v6 + 8) )
    {
LABEL_20:
      if ( (unsigned __int8)sub_3A9420(v6, 0, nullptr) )
        return 3;
      return 7;
    }
  }
  return result;
}

