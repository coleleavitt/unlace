__int64 __fastcall sub_ED4E0(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdx
  _DWORD *v8; // rax
  __int64 v9; // rdx

  v3 = *(_DWORD *)(a2 + 8);
  if ( v3 != 48 )
  {
LABEL_2:
    if ( v3 == 59 )
    {
      v5 = *(_QWORD *)(a2 + 24);
      if ( *(_DWORD *)(v5 + 8) == 51 )
      {
        sub_251BD0(v5, *(_QWORD *)(v5 + 24));
        *(_DWORD *)(a2 + 8) = 60;
      }
    }
    return 0;
  }
  if ( (unsigned int)lexcompare_tinfo() || (v6 = *(_QWORD *)(a2 + 24), *(_DWORD *)(v6 + 8) != 65) )
  {
LABEL_8:
    v3 = *(_DWORD *)(a2 + 8);
    goto LABEL_2;
  }
  v7 = *(_QWORD *)(a1 + 88);
  v8 = *(_DWORD **)v7;
  v9 = *(_QWORD *)v7 + 4LL * *(_QWORD *)(v7 + 8);
  if ( v8 != (_DWORD *)v9 )
  {
    while ( *(_DWORD *)(v6 + 32) != *v8 )
    {
      if ( (_DWORD *)v9 == ++v8 )
        return 0;
    }
    if ( (_DWORD *)v9 != v8 )
    {
      sub_251BD0(a2, v6);
      goto LABEL_8;
    }
  }
  return 0;
}

