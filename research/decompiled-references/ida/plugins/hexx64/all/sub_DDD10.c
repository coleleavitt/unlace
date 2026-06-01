__int64 __fastcall sub_DDD10(__int64 a1, __int64 a2, double a3)
{
  _QWORD *v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // bp
  int v7; // eax
  __int64 v8; // rax
  __int64 *v9; // rax
  __int64 v11; // rdx
  bool v12; // al
  unsigned __int64 v13; // r15
  unsigned int v14; // r14d
  __int64 v15; // rax
  unsigned __int64 v16; // r8
  __int64 v17; // r13
  char v18; // al
  int v19; // eax
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+18h] [rbp-50h]
  _QWORD v22[9]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *(_QWORD **)(a1 + 48);
  v22[1] = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 142) = 0;
  *(_WORD *)(a1 + 140) = 0;
  if ( (unsigned __int64)(int)a2 >= v3[1] )
    return 0;
  *(_DWORD *)(a1 + 124) = a2;
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(*v3 + 4LL * (int)a2);
  *(_DWORD *)(a1 + 132) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4LL * (int)a2);
  if ( sub_DBC70(a1) )
    return 1;
  v6 = *(_BYTE *)(a1 + 141);
  if ( v6 )
    goto LABEL_5;
  v7 = *(_DWORD *)(a1 + 120);
  if ( (v7 & 0x10) != 0 )
    goto LABEL_5;
  v11 = *(_QWORD *)(a1 + 40);
  if ( (v7 & 4) != 0
    || (v12 = sub_1D2A70(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 480LL), *(_QWORD *)(v11 + 24)),
        v11 = *(_QWORD *)(a1 + 40),
        !v12)
    || *(_DWORD *)v11 != 57 )
  {
    v13 = *(_QWORD *)(v11 + 24);
    v14 = *(_DWORD *)(a1 + 128);
    v15 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 480LL);
    v16 = v13 + 1;
    v21 = v13 + 1;
    v17 = *(_QWORD *)(v15 + 112);
    if ( *(char *)(*(_QWORD *)(v15 + 8) + 10LL) >= 0 || (LOBYTE(v22[0]) = 1, v20 = sub_CFF70(), v16 = v13 + 1, v20 != 1) )
      v21 = -1;
    v18 = sub_32E840(v22, v17, v14, v13, v16, 0);
    if ( !v18 )
    {
      if ( v21 == -1 )
        goto LABEL_35;
      v18 = sub_32E840(v22, v17, v14, v21, v21 + 1, 0);
    }
    if ( (v18 & 2) != 0 )
    {
      *(_QWORD *)(a1 + 112) = v22[0];
      if ( v18 == 2 )
        return 0;
      v11 = *(_QWORD *)(a1 + 40);
      goto LABEL_27;
    }
LABEL_35:
    *(_QWORD *)(a1 + 112) = -1;
    v11 = *(_QWORD *)(a1 + 40);
    goto LABEL_27;
  }
  if ( *(_BYTE *)(v11 + 48) == 1 && *(_DWORD *)(a1 + 132) == *(_DWORD *)(v11 + 56) )
    return 0;
LABEL_27:
  a2 = *(_QWORD *)(a1 + 32);
  v19 = sub_DC7D0(a1, a2, *(_QWORD *)(v11 + 16), *(_QWORD *)(v11 + 24), a3);
  if ( v19 == 1 )
  {
    *(_DWORD *)(a1 + 136) = -1;
    return 1;
  }
  if ( !v19 || *(_BYTE *)(a1 + 141) )
  {
LABEL_5:
    v8 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 16) = 0;
    *(_BYTE *)(a1 + 24) = 0;
    v9 = (__int64 *)sub_670E0(*(_QWORD **)(v8 + 64), a2, v4, v5);
    if ( (int)sub_6F590((__int64 *)a1, v9, *(_DWORD *)(*(_QWORD *)(a1 + 32) + 72LL), 1) <= 0 )
    {
      if ( (*(_BYTE *)(a1 + 120) & 6) != 0 )
        return 0;
      if ( !v6 || !*(_BYTE *)(a1 + 140) )
      {
        if ( !(unsigned __int8)sub_DBA20(a1) )
          return 0;
        goto LABEL_32;
      }
    }
    return 1;
  }
  if ( (*(_BYTE *)(a1 + 120) & 6) != 0 || v19 != 3 )
    return 0;
LABEL_32:
  *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4LL * *(int *)(a1 + 124)) = *(_DWORD *)(a1 + 124) + 1;
  return 0;
}

