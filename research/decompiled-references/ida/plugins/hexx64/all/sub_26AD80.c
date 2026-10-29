__int64 __fastcall sub_26AD80(__int64 a1, __int64 a2, __int64 a3, int a4, double a5)
{
  int v6; // eax
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdi

  v6 = *(_DWORD *)(a3 + 8);
  if ( v6 != 47 )
  {
    if ( v6 == 61 )
    {
      if ( sub_255A30(*(__int64 **)(a3 + 24)) < 0 )
      {
        v9 = a2;
        v10 = a1;
        v11 = a3;
        return sub_240BD0(v11, v10, v9, a5);
      }
    }
    else if ( v6 == 37 )
    {
      v8 = *(_QWORD *)(a3 + 24);
      if ( *(_DWORD *)(v8 + 8) == 61 || (v8 = *(_QWORD *)(a3 + 32), *(_DWORD *)(v8 + 8) == 61) )
      {
        if ( v8 && sub_255A30(*(__int64 **)(v8 + 24)) < 0 )
        {
          v9 = a2;
          v10 = a1;
          v11 = v8;
          return sub_240BD0(v11, v10, v9, a5);
        }
      }
    }
    return 0;
  }
  sub_255850((__int64 *)a3, *(_QWORD *)(a3 + 24), a5);
  if ( *(_DWORD *)(a3 + 8) == 48 && a4 == 35 && (unsigned int)get_tinfo_property() == 1 )
    sub_255850((__int64 *)a3, *(_QWORD *)(a3 + 24), a5);
  return 1;
}

