__int64 __fastcall sub_2DF10(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // r13
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v11; // rax
  __int64 v12; // r15
  unsigned int v13; // eax
  __int64 v14; // r9
  const char *v15; // rcx
  __int64 v16; // rbp
  unsigned int v17; // r12d
  bool v18; // zf
  __int16 v19; // ax
  unsigned __int8 v21; // [rsp+7h] [rbp-41h] BYREF
  unsigned __int64 v22; // [rsp+8h] [rbp-40h]

  v5 = a2 + 16;
  v8 = a2 + 16;
  v9 = *(_QWORD *)(a2 + 8);
  v22 = __readfsqword(0x28u);
  v11 = sub_4A750(v8, v9, 1);
  if ( !v11 )
    return 0;
  v12 = v11;
  v13 = *((_DWORD *)a1 + 4);
  if ( v13 == 9 )
  {
    v14 = 1;
    v15 = "_ptpoff";
  }
  else
  {
    if ( v13 <= 9 )
    {
      if ( v13 == 8 )
      {
        v14 = 1;
        v15 = "_tpoff";
        goto LABEL_6;
      }
      if ( v13 > 5 )
      {
        v14 = 2;
        v15 = "_tlsind";
        goto LABEL_6;
      }
LABEL_23:
      if ( under_debugger )
        goto LABEL_27;
      interr(20124);
LABEL_25:
      if ( !under_debugger )
        interr(20083);
LABEL_27:
      BUG();
    }
    if ( v13 != 10 )
      goto LABEL_23;
    v14 = 2;
    v15 = "_tlsdesc";
  }
LABEL_6:
  v16 = sub_54BB0(v5, *(_QWORD *)(a2 + 8), a3, v15, &v21, v14);
  if ( !v16 )
    goto LABEL_25;
  if ( a4 )
    v12 = a1[8];
  else
    a1[8] = v12;
  sub_42050(*(_QWORD *)(*a1 + 240LL), a1[3], v16, 0, 0, *((unsigned __int16 *)a1 + 10), v12, 0x40000000, 0);
  v17 = v21;
  if ( !v21 )
    return 0;
  v18 = *((_DWORD *)a1 + 4) == 9;
  a1[3] = v16;
  if ( v18 )
  {
    v19 = sub_43FB0(*a1);
  }
  else
  {
    v19 = 4;
    if ( *((_BYTE *)a1 + 73) )
      v19 = 12;
  }
  *((_WORD *)a1 + 10) = v19;
  return v17;
}
