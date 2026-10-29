__int64 __fastcall sub_17D930(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // eax
  int v6; // r13d
  unsigned int v7; // ebx
  char v9; // al
  int v10; // r12d
  __int64 v11; // rsi
  int v12; // r8d
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r15
  int v17; // r13d
  unsigned __int8 v18; // al
  _QWORD v19[11]; // [rsp+0h] [rbp-58h] BYREF

  v19[3] = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 20) = 0;
  v5 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 == 4 )
  {
LABEL_9:
    v9 = *(_BYTE *)(a3 + 32);
    if ( v9 == 4 )
    {
      v16 = *(_QWORD *)(a3 + 40);
      if ( *(_DWORD *)v16 == 2 )
      {
        v17 = *(_DWORD *)(v16 + 68);
        sub_11D380((__int64)v19, (unsigned __int8 *)(v16 + 48));
        sub_17CF50(*(_QWORD *)(a2 + 480), (__int64)v19);
        v7 = sub_136120(a2, a1, (int *)v16, v16 + 32, (__int64)v19, 0xFFFFFFFF);
        if ( (_BYTE)v7 )
          *(_DWORD *)(a1 + 4) = v17;
        goto LABEL_7;
      }
    }
    else if ( v9 == 6 && (unsigned __int8)is_spec_ea() )
    {
      return 0;
    }
    sub_11EAC0(a1, (unsigned __int8 *)(a3 + 32));
    return 1;
  }
  if ( v5 <= 4 )
  {
    if ( v5 != 1 )
    {
      if ( v5 == 2 )
      {
        v6 = *(_DWORD *)(a3 + 68);
        sub_11D380((__int64)v19, (unsigned __int8 *)(a3 + 48));
        sub_17CF50(*(_QWORD *)(a2 + 480), (__int64)v19);
        v7 = sub_136120(a2, a1, (int *)a3, a3 + 32, (__int64)v19, 0xFFFFFFFF);
        if ( (_BYTE)v7 )
          *(_DWORD *)(a1 + 4) = v6;
LABEL_7:
        sub_1166E0((__int64)v19);
        return v7;
      }
      return 0;
    }
    goto LABEL_9;
  }
  if ( v5 != 56 )
    return 0;
  v10 = sub_17D780(*(_QWORD *)(a2 + 480), a3, 0);
  if ( v10 < 0 )
    return 0;
  v11 = 0;
  if ( *(_BYTE *)(a3 + 64) == 8 )
    v11 = *(unsigned int *)(*(_QWORD *)(a3 + 72) + 284LL);
  v12 = sub_3284B0(*(_QWORD *)(a2 + 480), v11);
  v13 = *(_DWORD *)(a1 + 124);
  if ( v13 )
  {
    if ( v13 != v12 )
      return 0;
  }
  *(_DWORD *)(a1 + 124) = v12;
  v14 = *(_QWORD *)(a3 + 72);
  v15 = *(_QWORD *)(v14 + 24);
  if ( *(_BYTE *)(a3 + 64) == 8 && *(_DWORD *)(v14 + 284) == 2 )
  {
    if ( !(unsigned __int8)sub_1196C0((char *)(v15 + 80), v19, 0)
      || (unsigned __int8)(LOBYTE(v19[0]) - 32) > 0x5Fu && (unsigned __int8)(LOBYTE(v19[0]) - 9) > 1u )
    {
      return 0;
    }
    v18 = v19[0];
    *(_BYTE *)(a1 + 20) = 1;
    *(_DWORD *)(a1 + 16) = v18;
    *(_DWORD *)(a1 + 4) = v10;
    return 1;
  }
  return sub_17D030(*(_QWORD *)(a2 + 480), a1, (unsigned __int8 *)(v15 + 80), v10, v12);
}

