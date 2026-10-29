__int64 __fastcall sub_2406A0(__int64 a1, __int64 a2, int a3, unsigned __int8 a4, int a5, int a6)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  char tinfo_property; // al
  char v11; // al
  unsigned __int8 v12; // [rsp+Ch] [rbp-2Ch]

  if ( !a2 )
  {
    if ( !under_debugger )
      sub_37EEE0(52644);
    BUG();
  }
  if ( *(_DWORD *)(a2 + 8) != 52
    || (unsigned int)(*(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL) - 64) > 1
    || (v12 = a4, tinfo_property = get_tinfo_property(), a4 = v12, (tinfo_property & 0xF) == 0xB)
    || (v11 = get_tinfo_property(), a4 = v12, (v11 & 0xF) == 0xB) )
  {
    if ( a3 > 0 )
      sub_23D520((__int64 *)a2, a1, a3, a4 + 2, a5, a6);
    v7 = j__qalloc_or_throw();
    *(_QWORD *)v7 = -1;
    *(_DWORD *)(v7 + 8) = 51;
    *(_QWORD *)(v7 + 12) = -1;
    *(_QWORD *)(v7 + 24) = a2;
    *(_QWORD *)(v7 + 32) = 0;
    *(_QWORD *)(v7 + 40) = 0;
    *(_QWORD *)(v7 + 48) = 0;
    *(_DWORD *)(v7 + 56) = 0;
    v8 = *(_QWORD *)a2;
    *(_DWORD *)(v7 + 40) = a3;
    *(_QWORD *)v7 = v8;
    sub_240540(v7, a1, 0);
  }
  else
  {
    v7 = a2;
    sub_251BD0(a2, *(_QWORD *)(a2 + 24));
    *(_DWORD *)(a2 + 40) = a3;
  }
  return v7;
}

