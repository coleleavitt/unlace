void __fastcall sub_638D0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  _QWORD *v4; // rbp

  v2 = a1[155];
  if ( v2 )
  {
    v3 = a1[65];
    if ( v3 )
    {
      while ( (*(_BYTE *)(v3 + 24) & 8) == 0 )
      {
        v3 = *(_QWORD *)(v3 + 8);
        if ( !v3 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      v4 = (_QWORD *)a1[156];
      a1[155] = 0;
      if ( v4 )
      {
        if ( *v4 )
        {
          v4[1] = 0;
          qfree();
        }
        qfree();
      }
      a1[156] = 0;
    }
  }
}

