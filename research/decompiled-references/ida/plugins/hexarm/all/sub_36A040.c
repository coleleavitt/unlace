bool __fastcall sub_36A040(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // r12d
  __int64 v6; // rbx
  __int64 v7; // rbp
  int v8; // r15d
  int v9; // esi
  _QWORD *v11; // [rsp+8h] [rbp-40h]

  v5 = *(_DWORD *)(a2 + 8);
  v6 = (unsigned int)(*(_DWORD *)(a3 + 8) - 1);
  v11 = (_QWORD *)(a1 + 296);
  v7 = 4 * v6;
  if ( (int)v6 < 0 )
    return 0;
  while ( 1 )
  {
    v9 = *(_DWORD *)(*(_QWORD *)a3 + v7);
    if ( v5 > (int)v6 )
      break;
    if ( !sub_64330(v11, v9) )
      return 1;
LABEL_5:
    LODWORD(v6) = v6 - 1;
    v7 -= 4;
    if ( (_DWORD)v6 == -1 )
      return 0;
  }
  v8 = *(_DWORD *)(*(_QWORD *)a2 + v7);
  if ( sub_64330(v11, v9) )
  {
    if ( v8 != -1 )
    {
      if ( !under_debugger )
        sub_3835A0(51717);
      BUG();
    }
    goto LABEL_5;
  }
  return v8 == -1;
}

