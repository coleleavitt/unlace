__int64 __fastcall sub_1C0C30(__int64 a1, _QWORD *a2, __int64 a3, double a4)
{
  unsigned __int64 *v4; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  unsigned __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rdx
  bool v13; // zf
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx

  v4 = *(unsigned __int64 **)a1;
  if ( !*(_QWORD *)a1 )
    return 0;
  if ( !*(_QWORD *)(a1 + 8) )
    return 0;
  v5 = v4[1];
  if ( v4 == (unsigned __int64 *)v5 )
    return 0;
  v6 = *(_QWORD *)(v5 + 24);
  v8 = v5 + 24;
  if ( *(_DWORD *)(v5 + 32) == -1 )
    goto LABEL_13;
LABEL_5:
  if ( (int)decode_insn() <= 0 )
  {
    if ( !under_debugger )
      sub_383060(0xC508u, a4);
LABEL_27:
    BUG();
  }
  v9 = *(unsigned int *)(v8 + 8);
  if ( (unsigned int)v9 >= *(_DWORD *)(a3 + 64) )
  {
    if ( !under_debugger )
      sub_383060(0xCDEFu, a4);
    goto LABEL_27;
  }
  a2[2] = *(_QWORD *)(*(_QWORD *)(a3 + 528) + 8 * v9);
  if ( !(unsigned int)sub_1BF0C0(a2, v6, (int *)(v5 + 32), a1) )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)v5;
      v11 = v5;
      if ( (*(_QWORD *)v5 & 2) == 0 )
      {
        v12 = *(_QWORD *)(v5 + 16);
        if ( (*(_BYTE *)v12 & 2) != 0 )
        {
          v11 = v10 & 0xFFFFFFFFFFFFFFFCLL;
          v15 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v15 & 2) == 0 )
          {
            v16 = v5;
            do
            {
              if ( *(_QWORD *)(v11 + 16) != v16 )
                break;
              v16 = v11;
              v17 = v15 & 0xFFFFFFFFFFFFFFFCLL;
              v15 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
              v11 = v17;
            }
            while ( (v15 & 2) == 0 );
          }
        }
        else
        {
          do
          {
            v11 = v12;
            v12 = *(_QWORD *)(v12 + 8);
          }
          while ( (*(_BYTE *)v12 & 2) == 0 );
        }
      }
      sub_1BB240((unsigned __int64 **)a1, (__int64 *)v5);
      if ( *(_QWORD *)a1 == v11 )
        return 0;
      v5 = v11;
      v13 = *(_DWORD *)(v11 + 32) == -1;
      v6 = *(_QWORD *)(v11 + 24);
      v8 = v5 + 24;
      if ( !v13 )
        goto LABEL_5;
LABEL_13:
      if ( (unsigned __int8)netnode_charval() == 3 )
        sub_3311F0((_QWORD *)a3, v6, 0x27u);
    }
  }
  return 4294967289LL;
}

