__int64 __fastcall sub_26B730(__int64 a1, __int64 tinfo_property, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rbp
  unsigned __int64 v6; // rax
  __int64 v7; // rbx
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax

  v5 = tinfo_property;
  if ( !*(_DWORD *)(a1 + 440) && !*(_BYTE *)(a1 + 453) )
  {
    if ( !under_debugger )
      sub_383060(0xC411u, a5);
    goto LABEL_16;
  }
  *(_DWORD *)(a1 + 440) = 0;
  v6 = (unsigned int)(*(_DWORD *)(tinfo_property + 8) - 51);
  if ( (unsigned int)v6 > 0xE || (a3 = 25473, !_bittest64(&a3, v6)) )
  {
    if ( (*(_BYTE *)(tinfo_property + 56) & 2) == 0 )
    {
      if ( (get_tinfo_property() & 0x2F) != 0xD
        || (v9 = get_tinfo_property(), tinfo_property = v9, !(unsigned __int8)sub_32A490(v5 + 48, v9)) )
      {
        if ( (get_tinfo_property() & 0x2F) == 0xD )
        {
          v12 = j__qalloc_or_throw(64, 2, v10, v11);
          *(_QWORD *)(v12 + 24) = v5;
          *(_QWORD *)v12 = -1;
          v5 = v12;
          *(_DWORD *)(v12 + 8) = 59;
          *(_QWORD *)(v12 + 12) = -1;
          *(_QWORD *)(v12 + 32) = 0;
          *(_QWORD *)(v12 + 40) = 0;
          *(_QWORD *)(v12 + 48) = 0;
          *(_DWORD *)(v12 + 56) = 0;
          tinfo_property = *(_QWORD *)(*(_QWORD *)a1 + 112LL);
          sub_2441C0(v12, tinfo_property, 0, a5);
          goto LABEL_5;
        }
        if ( !under_debugger )
          sub_383060(0xC412u, a5);
LABEL_16:
        BUG();
      }
    }
  }
LABEL_5:
  v7 = j__qalloc_or_throw(64, tinfo_property, a3, a4);
  *(_QWORD *)(v7 + 12) = -1;
  *(_QWORD *)(v7 + 24) = v5;
  *(_QWORD *)v7 = -1;
  *(_DWORD *)(v7 + 8) = 52;
  *(_QWORD *)(v7 + 32) = 0;
  *(_QWORD *)(v7 + 40) = 0;
  *(_QWORD *)(v7 + 48) = 0;
  *(_DWORD *)(v7 + 56) = 0;
  sub_2441C0(v7, *(_QWORD *)(*(_QWORD *)a1 + 112LL), 0, a5);
  *(_DWORD *)(v7 + 56) |= 1u;
  return v7;
}

