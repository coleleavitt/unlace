__int64 __fastcall sub_131A0(__int64 a1, _DWORD *a2, unsigned int a3)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 *v8; // rax

  v5 = a3;
  if ( a2 )
  {
    v6 = a3;
    if ( *a2 == 3 )
      goto LABEL_10;
  }
  v7 = *(_QWORD *)(a1 + 16) - 1LL;
  if ( v7 < 0 )
    goto LABEL_8;
  v8 = (unsigned __int64 *)(*(_QWORD *)(a1 + 8) + 32LL * *(_QWORD *)(a1 + 16) - 32);
  while ( v5 < *v8 || v5 >= v8[1] )
  {
    --v7;
    v8 -= 4;
    if ( v7 == -1 )
      goto LABEL_8;
  }
  v6 = v5 + v8[2] - *v8;
  if ( v6 != -1 )
  {
LABEL_10:
    qlseek(a2, v6, 0);
    return 1;
  }
  else
  {
LABEL_8:
    qlseek(a2, v5, 0);
    return 0;
  }
}

