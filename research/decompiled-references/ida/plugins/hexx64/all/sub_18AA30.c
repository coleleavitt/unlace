__int64 __fastcall sub_18AA30(__int64 a1, _BYTE *a2, double a3)
{
  _BYTE *v3; // rax
  __int64 v4; // rbx
  unsigned int v5; // ebp
  char v7; // al
  char *v8; // r13
  __int64 v9; // r14
  __int64 v10; // r13
  int v11; // esi
  int v12; // eax
  int v13; // r15d
  __int64 v14; // r13
  int v15; // eax
  char *s1; // [rsp+0h] [rbp-58h] BYREF
  __int128 v17; // [rsp+8h] [rbp-50h]
  unsigned __int64 v18; // [rsp+18h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v3 = sub_120380(a2, 1);
  if ( !v3 )
    return 0;
  v4 = (__int64)v3;
  if ( *(_DWORD *)v3 != 56 || v3[64] != 8 || *(_QWORD *)(*((_QWORD *)v3 + 9) + 32LL) != 3 )
    return 0;
  if ( (unsigned __int8)sub_120560((__int64)v3, "memcmp") )
    goto LABEL_14;
  if ( *(_BYTE *)(v4 + 32) != 6 )
    return 0;
  a3 = 0.0;
  s1 = nullptr;
  v17 = 0;
  v7 = sub_1D2AB0((__int64 *)&s1, *(_QWORD *)(v4 + 40), 0);
  v8 = s1;
  if ( !v7 || !(_QWORD)v17 || strcmp(s1, "memcmp") )
  {
    if ( v8 )
    {
      *(_QWORD *)&v17 = 0;
      qfree((__int64)v8);
    }
    return 0;
  }
  if ( v8 )
  {
    *(_QWORD *)&v17 = 0;
    qfree((__int64)v8);
  }
LABEL_14:
  v9 = *(_QWORD *)(v4 + 72);
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL);
  v5 = sub_11FD80((char *)(*(_QWORD *)(v9 + 24) + 160LL), (__int64 *)&s1, 1);
  if ( !(_BYTE)v5 )
    return 0;
  v11 = 0;
  if ( *(_BYTE *)(v4 + 64) == 8 )
    v11 = *(_DWORD *)(*(_QWORD *)(v4 + 72) + 284LL);
  v12 = sub_32FB00(*(_QWORD *)(a1 + 480), v11);
  v13 = v12;
  if ( v12 == -1 )
    return 0;
  if ( (unsigned int)(v12 - 1) > 1 && v12 != 4 )
  {
    if ( !under_debugger )
      sub_383060(0xCD16u, a3);
    BUG();
  }
  s1 = (char *)((_QWORD)s1 * v12);
  if ( !(unsigned __int8)sub_186DE0(v10, *(unsigned __int8 **)(v9 + 24), (unsigned int)s1, v12)
    && !(unsigned __int8)sub_186DE0(v10, (unsigned __int8 *)(*(_QWORD *)(v9 + 24) + 80LL), (unsigned int)s1, v13) )
  {
    return 0;
  }
  copy_tinfo_t();
  copy_tinfo_t();
  v14 = sub_335B10(*(_QWORD *)(a1 + 64), *(_QWORD *)(v4 + 24), (__int64)"strcmp", v9 + 72, 2, *(_QWORD *)(v9 + 24), 1);
  *(_DWORD *)(v14 + 68) = *(_DWORD *)(v4 + 68);
  sub_11D890(v14, v4);
  if ( v14 )
  {
    sub_11CDA0(v14 + 64);
    sub_11CDA0(v14 + 48);
    sub_11CDA0(v14 + 32);
    j__qfree(v14);
  }
  v15 = *(_DWORD *)(a1 + 24);
  BYTE1(v15) &= ~2u;
  LOBYTE(v15) = v15 | 0x80;
  *(_DWORD *)(a1 + 24) = v15;
  return v5;
}

