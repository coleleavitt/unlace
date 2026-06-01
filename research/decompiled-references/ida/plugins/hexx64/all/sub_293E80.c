__int64 __fastcall sub_293E80(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // al
  unsigned __int64 tinfo_size; // r13
  __int64 v9; // rcx
  unsigned __int8 v10; // [rsp+Fh] [rbp-39h]
  _QWORD v11[7]; // [rsp+10h] [rbp-38h] BYREF

  v11[1] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) != 51 )
    return 0;
  v3 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v3 + 8) != 48 )
    return 0;
  v5 = *(_QWORD *)(v3 + 24);
  if ( *(_DWORD *)(v5 + 8) != 52 )
    return 0;
  if ( *(_DWORD *)(*(_QWORD *)(v5 + 24) + 8LL) != 57 )
    return 0;
  v6 = *(_QWORD *)(a1[2] + 8LL * a1[3] - 8);
  if ( (unsigned int)(*(_DWORD *)(v6 + 8) - 2) <= 0xD && *(_QWORD *)(v6 + 24) == a2 )
    return 0;
  v11[0] = get_tinfo_property();
  if ( (unsigned __int8)get_tinfo_property()
    && (unsigned __int8)get_tinfo_property()
    && ((get_tinfo_property() & 0xF) == 9 || (get_tinfo_property() & 0xF) == 9) )
  {
    tinfo_size = get_tinfo_size();
    if ( tinfo_size < get_tinfo_size() )
    {
      if ( !under_debugger )
        sub_383060(0xCB78u, a3);
      BUG();
    }
    sub_255850((__int64 *)a2, *(_QWORD *)(a2 + 24), a3);
    sub_255850((__int64 *)a2, *(_QWORD *)(a2 + 24), a3);
    sub_255850((__int64 *)a2, *(_QWORD *)(a2 + 24), a3);
    sub_246640(a1[9], a2, (__int64)v11, v9);
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  v10 = v7;
  clear_tinfo_t();
  return v10;
}

