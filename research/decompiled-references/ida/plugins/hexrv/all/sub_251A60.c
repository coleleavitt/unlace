__int64 __fastcall sub_251A60(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rsi
  __int64 v3; // rdi

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 > 0x3F )
  {
LABEL_5:
    if ( v1 == 65 )
    {
      v2 = *(_QWORD *)(a1 + 24);
      v3 = *(_QWORD *)(v2 + 432) + 104LL * *(int *)(a1 + 32);
      return sub_1BE150(v3, v2, *(unsigned int *)(v3 + 88));
    }
    else
    {
      return 1;
    }
  }
  else
  {
    while ( v1 <= 0x3C )
    {
      if ( v1 - 58 > 1 )
        return 1;
      a1 = *(_QWORD *)(a1 + 24);
      v1 = *(_DWORD *)(a1 + 8);
      if ( v1 > 0x3F )
        goto LABEL_5;
    }
    return 0;
  }
}

