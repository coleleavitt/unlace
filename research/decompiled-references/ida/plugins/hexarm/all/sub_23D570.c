__int64 __fastcall sub_23D570(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 result; // rax
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdi

  if ( *(_QWORD *)(a1 + 120) == *(_QWORD *)(a1 + 112) )
    return 1;
  *(_QWORD *)(a1 + 120) = *a2;
  v3 = sub_23C580(a1);
  if ( !v3 )
    return 1;
  if ( v3 == 1 )
  {
    *a2 = *(_QWORD *)(a1 + 120);
    v4 = *(_QWORD *)(a1 + 112);
    v5 = *(_QWORD *)(a1 + 144);
    *(_QWORD *)(a1 + 120) = v4;
    *(_QWORD *)(a1 + 128) = -1;
    *(_DWORD *)(a1 + 136) = 0;
    *(_DWORD *)(a1 + 296) = 0;
    if ( v5 )
    {
      *(_QWORD *)(a1 + 152) = 0;
      qfree();
    }
LABEL_6:
    *(_QWORD *)(a1 + 144) = 0;
    *(_OWORD *)(a1 + 152) = 0;
    copy_tinfo_t();
    *(_QWORD *)(a1 + 176) = -1;
    *(_QWORD *)(a1 + 184) = -1;
    *(_QWORD *)(a1 + 192) = 0xFFFFFFFFLL;
    *(_DWORD *)(a1 + 200) = 0;
    clear_tinfo_t();
    if ( !*(_DWORD *)(a1 + 296) )
      *(_DWORD *)(a1 + 300) = 1;
    return 1;
  }
  result = 0;
  if ( (*(_BYTE *)(a1 + 136) & 4) == 0 )
  {
    v7 = *(_DWORD *)(a1 + 300);
    if ( *(_DWORD *)(a1 + 296) != v7 && (v7 != 1 || (*(_BYTE *)(*(_QWORD *)(a1 + 112) + 80LL) & 2) != 0) )
    {
      *a2 = *(_QWORD *)(a1 + 112);
      v8 = *(_QWORD *)(a1 + 112);
      v9 = *(_QWORD *)(a1 + 144);
      *(_QWORD *)(a1 + 120) = v8;
      ++*(_DWORD *)(a1 + 296);
      *(_QWORD *)(a1 + 128) = -1;
      *(_DWORD *)(a1 + 136) = 0;
      if ( v9 )
      {
        *(_QWORD *)(a1 + 152) = 0;
        qfree();
      }
      goto LABEL_6;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL) + 604LL) & 0x10) != 0 )
    {
      if ( !under_debugger )
        sub_3835A0(52287);
      BUG();
    }
    return 0;
  }
  return result;
}

