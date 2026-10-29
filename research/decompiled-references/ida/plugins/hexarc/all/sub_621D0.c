__int64 __fastcall sub_621D0(__int64 a1, __int64 (__fastcall ***a2)(_QWORD, _QWORD, _QWORD))
{
  unsigned int v2; // eax
  unsigned int v3; // r12d
  unsigned int v4; // r14d
  __int64 v5; // r13
  unsigned __int64 v6; // rax
  int v7; // eax
  __int64 v8; // r15
  int v9; // r12d
  __int64 i; // rax
  __int64 v11; // r13
  int v12; // eax
  __int64 v13; // r12
  unsigned int v14; // ebx
  __int64 v15; // r13
  int v16; // eax
  unsigned int v17; // eax

  sub_1194F0();
  v2 = *(_DWORD *)(a1 + 64);
  v3 = v2 - 1;
  if ( (int)(v2 - 1) >= 0 )
  {
    v4 = 0;
    v5 = 8LL * (int)v3;
    while ( v3 < v2 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + v5);
      if ( (unsigned int)(**a2)(a2, *(unsigned int *)(v8 + 72), 0) == -1 )
      {
        sub_61770(a1, v8);
        --v3;
        v5 -= 8;
        if ( v3 == -1 )
          goto LABEL_9;
      }
      else
      {
        sub_5FD60((__int64 *)(v8 + 368), a2, 1);
        v6 = sub_5FD60((__int64 *)(v8 + 344), a2, 0);
        LOBYTE(v6) = *(_DWORD *)(v8 + 352) == 0;
        v4 |= v6;
        v7 = (**a2)(a2, *(unsigned int *)(v8 + 72), 0);
        *(_DWORD *)(v8 + 72) = v7;
        if ( v7 == -1 )
        {
          if ( !under_debugger )
            sub_37B760(51921);
          goto LABEL_27;
        }
        --v3;
        v5 -= 8;
        if ( v3 == -1 )
          goto LABEL_9;
      }
      v2 = *(_DWORD *)(a1 + 64);
    }
    if ( !under_debugger )
      sub_37B760(52719);
LABEL_27:
    BUG();
  }
  v4 = 0;
LABEL_9:
  sub_5EE60(a1);
  sub_620E0(a1 + 1448, (__int64)a2);
  v9 = 0;
  for ( i = 0; (unsigned __int64)v9 < *(_QWORD *)(a1 + 440); i = v9 )
  {
    v11 = *(_QWORD *)(a1 + 432) + 104 * i;
    v12 = (**a2)(a2, *(unsigned int *)(v11 + 92), 0);
    if ( v12 == -1 )
      v12 = 0;
    ++v9;
    *(_DWORD *)(v11 + 92) = v12;
  }
  v13 = 8;
  v14 = 1;
  if ( *(_DWORD *)(a1 + 64) - 1 > 1 )
  {
    do
    {
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + v13);
      v16 = sub_A1C60(v15);
      if ( v16 )
      {
        LOBYTE(v16) = *(_QWORD *)(v15 + 48) == 0;
        v4 |= v16;
      }
      v17 = *(_DWORD *)(a1 + 64);
      if ( (int)(v17 - 1) <= (int)++v14 )
        return v4;
      v13 += 8;
    }
    while ( v14 < v17 );
    if ( !under_debugger )
      sub_37B760(52719);
    goto LABEL_27;
  }
  return v4;
}

