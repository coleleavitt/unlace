__int64 __fastcall sub_23D1B0(__int64 a1, _QWORD *a2, __m128 a3, __m128 a4)
{
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 result; // rax
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rdi

  if ( *(_QWORD *)(a1 + 120) == *(_QWORD *)(a1 + 112) )
    return 1;
  *(_QWORD *)(a1 + 120) = *a2;
  v5 = sub_23C1C0(a1, a3, a4);
  if ( !v5 )
    return 1;
  if ( v5 == 1 )
  {
    *a2 = *(_QWORD *)(a1 + 120);
    v6 = *(_QWORD *)(a1 + 112);
    v7 = *(_QWORD *)(a1 + 144);
    *(_QWORD *)(a1 + 120) = v6;
    *(_QWORD *)(a1 + 128) = -1;
    *(_DWORD *)(a1 + 136) = 0;
    *(_DWORD *)(a1 + 296) = 0;
    if ( v7 )
    {
      *(_QWORD *)(a1 + 152) = 0;
      qfree(v7);
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
    v9 = *(_DWORD *)(a1 + 300);
    if ( *(_DWORD *)(a1 + 296) != v9 && (v9 != 1 || (*(_BYTE *)(*(_QWORD *)(a1 + 112) + 80LL) & 2) != 0) )
    {
      *a2 = *(_QWORD *)(a1 + 112);
      v10 = *(_QWORD *)(a1 + 112);
      v11 = *(_QWORD *)(a1 + 144);
      *(_QWORD *)(a1 + 120) = v10;
      ++*(_DWORD *)(a1 + 296);
      *(_QWORD *)(a1 + 128) = -1;
      *(_DWORD *)(a1 + 136) = 0;
      if ( v11 )
      {
        *(_QWORD *)(a1 + 152) = 0;
        qfree(v11);
      }
      goto LABEL_6;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL) + 604LL) & 0x10) != 0 )
    {
      if ( !under_debugger )
        sub_383060(0xCC3Fu, *(double *)a3.m128_u64);
      BUG();
    }
    return 0;
  }
  return result;
}

