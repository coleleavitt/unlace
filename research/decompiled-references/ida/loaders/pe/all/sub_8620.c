__int64 __fastcall sub_8620(__int64 a1, _DWORD *a2, unsigned int a3)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rdx
  unsigned __int64 *v7; // rax

  v5 = a3;
  if ( a2 && *a2 == 3 )
    goto LABEL_10;
  v6 = *(_QWORD *)(a1 + 16) - 1LL;
  if ( v6 < 0 )
    goto LABEL_8;
  v7 = (unsigned __int64 *)(*(_QWORD *)(a1 + 8) + 32LL * *(_QWORD *)(a1 + 16) - 32);
  while ( v5 < *v7 || v5 >= v7[1] )
  {
    --v6;
    v7 -= 4;
    if ( v6 == -1 )
      goto LABEL_8;
  }
  if ( v5 + v7[2] - *v7 != -1 )
  {
LABEL_10:
    qlseek();
    return 1;
  }
  else
  {
LABEL_8:
    qlseek();
    return 0;
  }
}
