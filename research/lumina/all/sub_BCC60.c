__int64 __fastcall sub_BCC60(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r12
  int v4; // eax

  v2 = *a1;
  v3 = *(_QWORD *)(*a1 + 16);
  v4 = mysql_stmt_fetch(*(_QWORD *)(v3 + 24));
  if ( v4 == 1 )
  {
    sub_BCB40(a2, *(_QWORD *)(v3 + 16), v2 + 16);
    return 0;
  }
  else
  {
    if ( v4 > 1 )
    {
      if ( v4 == 100 )
        return 0;
      if ( v4 == 101 )
      {
        if ( !unk_2439A0 )
          sub_198E10(1609);
        goto LABEL_13;
      }
LABEL_11:
      if ( !unk_2439A0 )
        sub_198E10(1610);
LABEL_13:
      BUG();
    }
    if ( v4 )
      goto LABEL_11;
    return 1;
  }
}
