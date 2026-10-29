bool __fastcall sub_3E6920(__int64 a1, int a2, int a3, double a4)
{
  __int64 v7; // rdx
  _DWORD *v8; // rsi
  __int64 v9; // rdi
  _DWORD *v10; // r8

  if ( *(_DWORD *)(a1 + 676) > a2 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
    {
      if ( a2 >= *(_DWORD *)(a1 + 480) && a2 <= *(_DWORD *)(a1 + 356) + *(_DWORD *)(a1 + 80) - 1 )
        goto LABEL_6;
    }
    else if ( a2 >= *(_DWORD *)(a1 + 356) && a2 <= *(_DWORD *)(a1 + 480) + *(_DWORD *)(a1 + 80) - 1 )
    {
      goto LABEL_6;
    }
    if ( a2 < *(_DWORD *)(a1 + 484) || a2 > *(_DWORD *)(a1 + 608) + *(_DWORD *)(a1 + 80) - 1 )
      return 0;
LABEL_6:
    v7 = *(_QWORD *)(a1 + 736);
    if ( !v7 || (v8 = (_DWORD *)(a1 + *(_QWORD *)v7), *(_QWORD *)v7 == 692) )
    {
LABEL_20:
      if ( !under_debugger )
        sub_37E160(0xCCF1u, a4);
      BUG();
    }
    while ( 1 )
    {
      v9 = *(_QWORD *)(v7 + 16);
      v10 = v8;
      v8 = (_DWORD *)(a1 + v9);
      if ( a2 < *(_DWORD *)(a1 + v9) )
        break;
      v7 += 16;
      if ( v9 == 692 )
        goto LABEL_20;
    }
    if ( a2 == *v10 )
      return a3 <= *(char *)(v7 + 15);
    return 0;
  }
  return 1;
}

