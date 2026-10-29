__int64 __fastcall sub_266500(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // eax
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdi

  v5 = *(_DWORD *)(a3 + 8);
  if ( v5 != 47 )
  {
    if ( v5 == 61 )
    {
      if ( sub_2511B0(*(__int64 **)(a3 + 24)) < 0 )
      {
        v10 = a2;
        v11 = a1;
        v12 = a3;
        return sub_23C350(v12, v11, v10, v8, v9);
      }
    }
    else if ( v5 == 37 )
    {
      v7 = *(_QWORD *)(a3 + 24);
      if ( *(_DWORD *)(v7 + 8) == 61 || (v7 = *(_QWORD *)(a3 + 32), *(_DWORD *)(v7 + 8) == 61) )
      {
        if ( v7 && sub_2511B0(*(__int64 **)(v7 + 24)) < 0 )
        {
          v10 = a2;
          v11 = a1;
          v12 = v7;
          return sub_23C350(v12, v11, v10, v8, v9);
        }
      }
    }
    return 0;
  }
  sub_250FD0((__int64 *)a3, *(_QWORD *)(a3 + 24));
  if ( *(_DWORD *)(a3 + 8) == 48 && a4 == 35 && (unsigned int)get_tinfo_property() == 1 )
    sub_250FD0((__int64 *)a3, *(_QWORD *)(a3 + 24));
  return 1;
}

