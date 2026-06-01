_BOOL8 __fastcall sub_2B23F0(__int64 a1, __int64 a2, unsigned __int64 a3, double a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int8 (*v7)(void); // rax
  __int64 v8; // rbp
  bool (__fastcall *v9)(__int64); // rax
  __int64 v10; // rbx

  if ( a3 >= *(_QWORD *)(a1 + 48) )
LABEL_9:
    sub_2ADE60(a4);
  v5 = 264 * a3;
  v6 = 264 * a3 + *(_QWORD *)(a1 + 40);
  v7 = **(unsigned __int8 (***)(void))v6;
  if ( (char *)v7 == (char *)sub_2AF040 )
  {
    if ( *(_DWORD *)(v6 + 120) == *(_DWORD *)(v6 + 248) && !sub_1377A0(v6 + 8, v6 + 136) )
      goto LABEL_9;
  }
  else if ( !v7() )
  {
    goto LABEL_9;
  }
  v8 = v5 + *(_QWORD *)(a2 + 40);
  v9 = **(bool (__fastcall ***)(__int64))v8;
  if ( v9 != sub_2AF040 )
  {
    if ( !v9(v5 + *(_QWORD *)(a2 + 40)) )
      goto LABEL_9;
    goto LABEL_11;
  }
  if ( *(_DWORD *)(v8 + 120) == *(_DWORD *)(v8 + 248) )
  {
    if ( !sub_1377A0(v8 + 8, v8 + 136) )
      goto LABEL_9;
LABEL_11:
    v8 = v5 + *(_QWORD *)(a2 + 40);
  }
  v10 = *(_QWORD *)(a1 + 40) + v5;
  switch_dbctx();
  return *(_DWORD *)(v10 + 120) != *(_DWORD *)(v8 + 120)
      || sub_1377A0(v10 + 8, v8 + 8)
      || *(_BYTE *)(v10 + 128) != *(_BYTE *)(v8 + 128);
}

