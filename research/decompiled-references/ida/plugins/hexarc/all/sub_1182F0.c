__int64 __fastcall sub_1182F0(__int64 a1, __int64 a2, __int64 a3, bool a4)
{
  _BOOL4 v4; // r14d
  __int64 v5; // rax
  __int64 v6; // r13
  unsigned int v7; // ebp
  unsigned __int8 v9; // al
  _QWORD *v10; // rdx
  __int64 v11; // r13
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // r13
  _QWORD *v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // r13
  unsigned int v19; // eax
  __int64 tinfo_property; // rax
  __int64 v21; // rdi
  _QWORD v22[9]; // [rsp+0h] [rbp-48h] BYREF

  while ( 1 )
  {
    v4 = a4;
    v5 = *(_QWORD *)a2;
    v22[1] = __readfsqword(0x28u);
    v6 = a3;
    *(_BYTE *)(a2 + 40) = 0;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, bool))(v5 + 16))(a2, a1, a3, a4);
    if ( v7 || *(_BYTE *)(a2 + 40) )
      return v7;
    v9 = *(_BYTE *)a1;
    if ( *(_BYTE *)a1 != 10 )
      break;
    if ( v6 && (get_tinfo_property() & 0xF) == 0xA )
    {
      v22[0] = 0;
      tinfo_property = get_tinfo_property();
      v21 = *(_QWORD *)(a1 + 8);
      v22[0] = tinfo_property;
      v7 = sub_1182F0(v21, a2, v22, *(_DWORD *)(v21 + 20) > 0);
      clear_tinfo_t();
      return v7;
    }
    a1 = *(_QWORD *)(a1 + 8);
    a4 = *(_DWORD *)(a1 + 20) > 0;
LABEL_22:
    a3 = 0;
  }
  if ( v9 > 0xAu )
  {
    if ( v9 != 14 )
      return v7;
    v7 = sub_1182F0(*(_QWORD *)(a1 + 8), a2, 0, v4);
    if ( v7 )
      return v7;
    if ( *(_BYTE *)a1 != 14 )
    {
      if ( !under_debugger )
        sub_37B760(52565);
      goto LABEL_34;
    }
    a4 = v4;
    a1 = *(_QWORD *)(a1 + 8) + 16LL;
    goto LABEL_22;
  }
  if ( v9 == 4 )
  {
    v18 = *(_QWORD *)(a2 + 32);
    v19 = sub_118240(*(_BYTE **)(a1 + 8), a2);
    *(_QWORD *)(a2 + 32) = v18;
    return v19;
  }
  else if ( v9 == 8 )
  {
    v10 = *(_QWORD **)(a1 + 8);
    v11 = v10[3];
    v12 = v11 + 80LL * v10[4];
    if ( v11 != v12 )
    {
      while ( 1 )
      {
        v17 = sub_1182F0(v11, a2, v11 + 24, 0);
        if ( v17 )
          return v17;
        if ( *(_BYTE *)a1 != 8 )
          break;
        v11 += 80;
        if ( v12 == v11 )
        {
          v10 = *(_QWORD **)(a1 + 8);
          goto LABEL_9;
        }
      }
      if ( !under_debugger )
        sub_37B760(52562);
LABEL_34:
      BUG();
    }
LABEL_9:
    v13 = v10[7];
    v14 = v10[6];
    v15 = v14 + 16 * v13;
    if ( v15 != v14 )
    {
      while ( 1 )
      {
        v16 = v10 + 9;
        if ( v13 != 1 )
          v16 = nullptr;
        v17 = sub_1182F0(v14, a2, v16, 1);
        if ( v17 )
          break;
        v14 += 16;
        if ( v15 == v14 )
          return v7;
        v10 = *(_QWORD **)(a1 + 8);
        v13 = v10[7];
      }
      return v17;
    }
  }
  return v7;
}

