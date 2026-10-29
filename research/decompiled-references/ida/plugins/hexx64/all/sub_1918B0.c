__int64 __fastcall sub_1918B0(__int64 a1, _QWORD *a2, double a3)
{
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r15
  int v8; // eax
  int v9; // r13d
  __int64 v10; // rdx
  __int64 v11; // rbp
  int *v12; // rbx
  __int64 v13; // rdx
  int v14; // esi
  __int64 v16; // [rsp+8h] [rbp-50h]
  __int64 v17[9]; // [rsp+10h] [rbp-48h] BYREF

  v17[1] = __readfsqword(0x28u);
  if ( !a2[1] )
  {
    if ( !under_debugger )
      sub_383060(0xC974u, a3);
LABEL_28:
    BUG();
  }
  if ( !(unsigned __int8)sub_159410(*(_QWORD *)(*a2 + 8LL) + 32LL, v17, 1) )
  {
    if ( !under_debugger )
      sub_383060(0xC975u, a3);
    goto LABEL_28;
  }
  v5 = *(_QWORD **)(a1 + 24);
  v6 = v17[0];
  v7 = v5[188];
  v8 = *(_DWORD *)(v7 + 84);
  if ( a2[1] )
  {
    v9 = 0;
    v10 = 0;
    while ( 1 )
    {
      v11 = *(_QWORD *)(*a2 + 24 * v10 + 8);
      v12 = *(int **)(v11 + 8);
      if ( v12 )
        break;
LABEL_17:
      v10 = ++v9;
      if ( (unsigned __int64)v9 >= a2[1] )
        return sub_138140(v5, v8, 1, a3);
    }
    while ( 1 )
    {
      if ( *((_QWORD *)v12 + 3) != *(_QWORD *)(v11 + 24) )
        goto LABEL_17;
      if ( v12[17] != v8 )
        goto LABEL_7;
      if ( *((_BYTE *)v12 + 64) != 1 )
        goto LABEL_7;
      if ( v12[18] < *(_DWORD *)(v7 + 68) )
        goto LABEL_7;
      if ( *((_BYTE *)v12 + 32) != 10 )
        goto LABEL_7;
      v13 = *((_QWORD *)v12 + 5);
      if ( *(_BYTE *)v13 != 6 )
        goto LABEL_7;
      v14 = *v12;
      if ( *v12 == 12 )
      {
        if ( *(_QWORD *)(v13 + 8) == v5[169] )
        {
          v16 = v6;
          if ( sub_125B60((unsigned __int8 *)v12 + 48, v11 + 32, 0, a3) )
            return (unsigned int)v12[18];
          v14 = *v12;
          v5 = *(_QWORD **)(a1 + 24);
          v6 = v16;
          goto LABEL_15;
        }
LABEL_7:
        v12 = *((int **)v12 + 1);
        if ( !v12 )
          goto LABEL_17;
      }
      else
      {
LABEL_15:
        if ( v14 == 4 && *(_QWORD *)(*((_QWORD *)v12 + 5) + 8LL) == v6 + v5[169] )
          return (unsigned int)v12[18];
        v12 = *((int **)v12 + 1);
        v8 = *(_DWORD *)(v7 + 84);
        if ( !v12 )
          goto LABEL_17;
      }
    }
  }
  return sub_138140(v5, v8, 1, a3);
}

