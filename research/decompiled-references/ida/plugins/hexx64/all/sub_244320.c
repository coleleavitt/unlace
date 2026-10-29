__int64 __fastcall sub_244320(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rbp
  signed int v6; // r12d
  __int64 v7; // rbx
  __int64 v8; // rax
  char tinfo_property; // al
  char v11; // al
  unsigned int v12; // [rsp+Ch] [rbp-2Ch]

  if ( !a2 )
  {
    if ( !under_debugger )
      sub_383060(0xCDA4u, a5);
    BUG();
  }
  v5 = a2;
  v6 = a3;
  if ( *(_DWORD *)(a2 + 8) != 52
    || (unsigned int)(*(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL) - 64) > 1
    || (a2 = 2, v12 = a4, tinfo_property = get_tinfo_property(), a4 = v12, (tinfo_property & 0xF) == 0xB)
    || (a2 = 2, v11 = get_tinfo_property(), a4 = v12, (v11 & 0xF) == 0xB) )
  {
    if ( v6 > 0 )
    {
      a2 = a1;
      sub_2411A0((__int64 *)v5, a1, v6, a4 + 2);
    }
    v7 = j__qalloc_or_throw(64, a2, a3, a4);
    *(_QWORD *)v7 = -1;
    *(_DWORD *)(v7 + 8) = 51;
    *(_QWORD *)(v7 + 12) = -1;
    *(_QWORD *)(v7 + 24) = v5;
    *(_QWORD *)(v7 + 32) = 0;
    *(_QWORD *)(v7 + 40) = 0;
    *(_QWORD *)(v7 + 48) = 0;
    *(_DWORD *)(v7 + 56) = 0;
    v8 = *(_QWORD *)v5;
    *(_DWORD *)(v7 + 40) = v6;
    *(_QWORD *)v7 = v8;
    sub_2441C0(v7, a1, 0, a5);
  }
  else
  {
    v7 = v5;
    sub_255850((__int64 *)v5, *(_QWORD *)(v5 + 24));
    *(_DWORD *)(v5 + 40) = v6;
  }
  return v7;
}

