__int64 __fastcall sub_157230(__int64 a1, __int64 a2, int a3, char a4, __int64 a5, _QWORD *a6, _QWORD *a7)
{
  __int64 v13; // rdi
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rsi
  unsigned int v20; // ebp
  __int64 v21; // rdi
  __int64 v23; // [rsp-10h] [rbp-58h]
  __int64 v24; // [rsp-8h] [rbp-50h]
  bool v25; // [rsp+7h] [rbp-41h]
  int v26; // [rsp+8h] [rbp-40h]
  unsigned int v27; // [rsp+8h] [rbp-40h]

  *a6 = 0;
  v25 = (unsigned int)sub_EA7B0(a1) == 0 || a2 == 0;
  if ( v25 )
  {
    sub_E8BB0(
      0x15u,
      "%s at line %d of [%.10s]",
      "misuse",
      134996,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    return 21;
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 24);
    if ( v13 )
      xmmword_241500(v13);
    if ( !*(_BYTE *)(a1 + 111) )
      sub_CC760(a1);
    v26 = 2;
    while ( 1 )
    {
      v14 = sub_156CB0(a1, a2, a3, a4, a5, a6, a7);
      v18 = v23;
      v19 = v24;
      if ( !v14 )
        break;
      if ( *(_BYTE *)(a1 + 103) )
        goto LABEL_16;
      if ( v14 != 513 )
      {
        if ( v14 != 17 )
          goto LABEL_16;
        v15 = *(unsigned int *)(a1 + 72);
        if ( !(_DWORD)v15 )
        {
          sub_D8C60(a1, v24);
          v14 = 17;
        }
        if ( v26 == 1 )
        {
LABEL_16:
          if ( *(_BYTE *)(a1 + 111) )
          {
LABEL_17:
            v19 = v14;
            v20 = sub_D42C0(a1, v14, v15, v18, v16, v17);
            goto LABEL_13;
          }
          v25 = v14 != 0;
          goto LABEL_25;
        }
        v26 = 1;
      }
    }
    if ( *(_BYTE *)(a1 + 111) )
      goto LABEL_11;
LABEL_25:
    v27 = v14;
    sub_CC7E0(a1, v24, v15);
    v14 = v27;
LABEL_11:
    if ( *(_BYTE *)(a1 + 103) )
      goto LABEL_17;
    v20 = 0;
    if ( v25 )
      goto LABEL_17;
LABEL_13:
    v21 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 648) = 0;
    if ( v21 )
      xmmword_241510(v21, v19, v15);
  }
  return v20;
}
