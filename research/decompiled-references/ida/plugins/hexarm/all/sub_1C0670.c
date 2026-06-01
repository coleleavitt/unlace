__int64 __fastcall sub_1C0670(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 *v3; // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // rbp
  unsigned __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rdx
  bool v12; // zf
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx

  v3 = *(unsigned __int64 **)a1;
  if ( !*(_QWORD *)a1 )
    return 0;
  if ( !*(_QWORD *)(a1 + 8) )
    return 0;
  v4 = v3[1];
  if ( v3 == (unsigned __int64 *)v4 )
    return 0;
  v5 = *(_QWORD *)(v4 + 24);
  v7 = v4 + 24;
  if ( *(_DWORD *)(v4 + 32) == -1 )
    goto LABEL_13;
LABEL_5:
  if ( (int)decode_insn() <= 0 )
  {
    if ( !under_debugger )
      sub_3835A0(50440);
LABEL_27:
    BUG();
  }
  v8 = *(unsigned int *)(v7 + 8);
  if ( (unsigned int)v8 >= *(_DWORD *)(a3 + 64) )
  {
    if ( !under_debugger )
      sub_3835A0(52719);
    goto LABEL_27;
  }
  a2[2] = *(_QWORD *)(*(_QWORD *)(a3 + 528) + 8 * v8);
  if ( !(unsigned int)sub_1BEB00(a2, v5, (int *)(v4 + 32), a1) )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)v4;
      v10 = v4;
      if ( (*(_QWORD *)v4 & 2) == 0 )
      {
        v11 = *(_QWORD *)(v4 + 16);
        if ( (*(_BYTE *)v11 & 2) != 0 )
        {
          v10 = v9 & 0xFFFFFFFFFFFFFFFCLL;
          v17 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v17 & 2) == 0 )
          {
            v18 = v4;
            do
            {
              if ( *(_QWORD *)(v10 + 16) != v18 )
                break;
              v18 = v10;
              v19 = v17 & 0xFFFFFFFFFFFFFFFCLL;
              v17 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCLL);
              v10 = v19;
            }
            while ( (v17 & 2) == 0 );
          }
        }
        else
        {
          do
          {
            v10 = v11;
            v11 = *(_QWORD *)(v11 + 8);
          }
          while ( (*(_BYTE *)v11 & 2) == 0 );
        }
      }
      sub_1BAC80((unsigned __int64 **)a1, (__int64 *)v4);
      if ( *(_QWORD *)a1 == v10 )
        return 0;
      v4 = v10;
      v12 = *(_DWORD *)(v10 + 32) == -1;
      v5 = *(_QWORD *)(v10 + 24);
      v7 = v4 + 24;
      if ( !v12 )
        goto LABEL_5;
LABEL_13:
      if ( (unsigned __int8)netnode_charval() == 3 )
        sub_331510(a3, v5, 39, v13, v14, v15);
    }
  }
  return 4294967289LL;
}

