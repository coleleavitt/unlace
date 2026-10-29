__int64 __fastcall sub_18D3F0(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // r15
  int v7; // eax
  int v8; // r13d
  __int64 v9; // rdx
  __int64 v10; // rbp
  int *v11; // rbx
  __int64 v12; // rdx
  int v13; // esi
  __int64 v15; // [rsp+8h] [rbp-50h]
  _QWORD v16[9]; // [rsp+10h] [rbp-48h] BYREF

  v16[1] = __readfsqword(0x28u);
  if ( !a2[1] )
  {
    if ( !under_debugger )
      sub_37DDE0(51572);
LABEL_28:
    BUG();
  }
  if ( !(unsigned __int8)sub_154F50(*(_QWORD *)(*a2 + 8LL) + 32LL, v16, 1u) )
  {
    if ( !under_debugger )
      sub_37DDE0(51573);
    goto LABEL_28;
  }
  v4 = *(_QWORD **)(a1 + 24);
  v5 = v16[0];
  v6 = v4[188];
  v7 = *(_DWORD *)(v6 + 84);
  if ( a2[1] )
  {
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      v10 = *(_QWORD *)(*a2 + 24 * v9 + 8);
      v11 = *(int **)(v10 + 8);
      if ( v11 )
        break;
LABEL_17:
      v9 = ++v8;
      if ( (unsigned __int64)v8 >= a2[1] )
        return sub_133C80(v4, v7, 1);
    }
    while ( 1 )
    {
      if ( *((_QWORD *)v11 + 3) != *(_QWORD *)(v10 + 24) )
        goto LABEL_17;
      if ( v11[17] != v7 )
        goto LABEL_7;
      if ( *((_BYTE *)v11 + 64) != 1 )
        goto LABEL_7;
      if ( v11[18] < *(_DWORD *)(v6 + 68) )
        goto LABEL_7;
      if ( *((_BYTE *)v11 + 32) != 10 )
        goto LABEL_7;
      v12 = *((_QWORD *)v11 + 5);
      if ( *(_BYTE *)v12 != 6 )
        goto LABEL_7;
      v13 = *v11;
      if ( *v11 == 12 )
      {
        if ( *(_QWORD *)(v12 + 8) == v4[169] )
        {
          v15 = v5;
          if ( sub_1216A0((unsigned __int8 *)v11 + 48, v10 + 32, 0) )
            return (unsigned int)v11[18];
          v13 = *v11;
          v4 = *(_QWORD **)(a1 + 24);
          v5 = v15;
          goto LABEL_15;
        }
LABEL_7:
        v11 = *((int **)v11 + 1);
        if ( !v11 )
          goto LABEL_17;
      }
      else
      {
LABEL_15:
        if ( v13 == 4 && *(_QWORD *)(*((_QWORD *)v11 + 5) + 8LL) == v5 + v4[169] )
          return (unsigned int)v11[18];
        v11 = *((int **)v11 + 1);
        v7 = *(_DWORD *)(v6 + 84);
        if ( !v11 )
          goto LABEL_17;
      }
    }
  }
  return sub_133C80(v4, v7, 1);
}

