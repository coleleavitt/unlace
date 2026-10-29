bool __fastcall sub_369B00(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  int v6; // r12d
  __int64 v7; // rbx
  __int64 v8; // rbp
  int v9; // r15d
  int v10; // esi
  _QWORD *v12; // [rsp+8h] [rbp-40h]

  v6 = *(_DWORD *)(a2 + 8);
  v7 = (unsigned int)(*(_DWORD *)(a3 + 8) - 1);
  v12 = (_QWORD *)(a1 + 296);
  v8 = 4 * v7;
  if ( (int)v7 < 0 )
    return 0;
  while ( 1 )
  {
    v10 = *(_DWORD *)(*(_QWORD *)a3 + v8);
    if ( v6 > (int)v7 )
      break;
    if ( !sub_64930(v12, v10) )
      return 1;
LABEL_5:
    LODWORD(v7) = v7 - 1;
    v8 -= 4;
    if ( (_DWORD)v7 == -1 )
      return 0;
  }
  v9 = *(_DWORD *)(*(_QWORD *)a2 + v8);
  if ( sub_64930(v12, v10) )
  {
    if ( v9 != -1 )
    {
      if ( !under_debugger )
        sub_383060(0xCA05u, a4);
      BUG();
    }
    goto LABEL_5;
  }
  return v9 == -1;
}

