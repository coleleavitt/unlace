bool __fastcall sub_16E00(__int64 a1, _DWORD *a2, unsigned int a3)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // rsi
  __int64 v8; // rdx
  unsigned __int64 *v9; // rax

  v5 = a3;
  if ( a2 )
  {
    v7 = a3;
    if ( *a2 == 3 )
      return qlseek(a2, v7, 0) != -1;
  }
  v8 = *(_QWORD *)(a1 + 16) - 1LL;
  if ( v8 >= 0 )
  {
    v9 = (unsigned __int64 *)(*(_QWORD *)(a1 + 8) + 32LL * *(_QWORD *)(a1 + 16) - 32);
    while ( v5 < *v9 || v5 >= v9[1] )
    {
      --v8;
      v9 -= 4;
      if ( v8 == -1 )
        goto LABEL_8;
    }
    v7 = v5 + v9[2] - *v9;
    if ( v7 != -1 )
      return qlseek(a2, v7, 0) != -1;
  }
LABEL_8:
  v7 = v5;
  if ( (signed __int64)v5 < *(_QWORD *)(a1 + 592) + *(unsigned int *)(a1 + 156) )
    return qlseek(a2, v7, 0) != -1;
  if ( !*(_BYTE *)(a1 + 985)
    && (int)sub_16C70(
              1u,
              (__int64)"HIDECANCEL\nCan't find translation for relative virtual address %08X, continue?",
              a3) <= 0 )
  {
    sub_16D50(0);
  }
  *(_BYTE *)(a1 + 985) = 1;
  qlseek(a2, v5, 0);
  return 0;
}

