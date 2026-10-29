unsigned __int64 __fastcall sub_305420(__int64 a1, __int64 a2, unsigned __int64 a3, double a4)
{
  unsigned __int64 v4; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned __int8 (*v8)(void); // rax
  __int64 v9; // rdi
  unsigned __int8 (*v10)(void); // rax

  v4 = *(_QWORD *)(a1 + 48);
  if ( a3 >= v4 || *(_QWORD *)(a2 + 48) != v4 )
    goto LABEL_9;
  v6 = 192 * a3;
  v7 = 192 * a3 + *(_QWORD *)(a1 + 40);
  v8 = **(unsigned __int8 (***)(void))v7;
  if ( (char *)v8 == (char *)sub_2AD0E0 )
  {
    if ( (unsigned int)(*(_DWORD *)(v7 + 40) - 3) > 1 )
      goto LABEL_9;
  }
  else if ( !v8() )
  {
    goto LABEL_9;
  }
  v9 = v6 + *(_QWORD *)(a2 + 40);
  v10 = **(unsigned __int8 (***)(void))v9;
  if ( (char *)v10 != (char *)sub_2AD0E0 )
  {
    if ( v10() )
      goto LABEL_7;
LABEL_9:
    sub_2ADE40(a4);
  }
  if ( (unsigned int)(*(_DWORD *)(v9 + 40) - 3) > 1 )
    goto LABEL_9;
LABEL_7:
  switch_dbctx();
  return sub_304DC0(*(_QWORD *)(a1 + 40) + v6, v6 + *(_QWORD *)(a2 + 40), a1, a2);
}

