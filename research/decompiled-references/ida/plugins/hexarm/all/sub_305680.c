unsigned __int64 __fastcall sub_305680(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int8 (*v7)(void); // rax
  __int64 v8; // rdi
  unsigned __int8 (*v9)(void); // rax

  v3 = *(_QWORD *)(a1 + 48);
  if ( a3 >= v3 || *(_QWORD *)(a2 + 48) != v3 )
    goto LABEL_9;
  v5 = 192 * a3;
  v6 = 192 * a3 + *(_QWORD *)(a1 + 40);
  v7 = **(unsigned __int8 (***)(void))v6;
  if ( (char *)v7 == (char *)sub_2AD480 )
  {
    if ( *(_DWORD *)(v6 + 40) != 1 )
      goto LABEL_9;
  }
  else if ( !v7() )
  {
    goto LABEL_9;
  }
  v8 = v5 + *(_QWORD *)(a2 + 40);
  v9 = **(unsigned __int8 (***)(void))v8;
  if ( (char *)v9 != (char *)sub_2AD480 )
  {
    if ( v9() )
      goto LABEL_7;
LABEL_9:
    sub_2AE200();
  }
  if ( *(_DWORD *)(v8 + 40) != 1 )
    goto LABEL_9;
LABEL_7:
  switch_dbctx();
  return sub_305180(*(_QWORD *)(a1 + 40) + v5, v5 + *(_QWORD *)(a2 + 40), a1, a2);
}

