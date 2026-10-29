__int64 __fastcall sub_185E70(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // rax
  __int64 v3; // rbx
  unsigned int v4; // ebp
  char v6; // al
  char *v7; // r13
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // rsi
  int v11; // eax
  int v12; // r15d
  __int64 v13; // r13
  int v14; // eax
  __int64 v15; // [rsp-8h] [rbp-60h]
  char *s1; // [rsp+0h] [rbp-58h] BYREF
  __int128 v17; // [rsp+8h] [rbp-50h]
  unsigned __int64 v18; // [rsp+18h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v2 = sub_11B7C0(a2, 1);
  if ( !v2 )
    return 0;
  v3 = (__int64)v2;
  if ( *(_DWORD *)v2 != 56 || v2[64] != 8 || *(_QWORD *)(*((_QWORD *)v2 + 9) + 32LL) != 3 )
    return 0;
  if ( (unsigned __int8)sub_11B9A0((__int64)v2, "memcmp") )
    goto LABEL_14;
  if ( *(_BYTE *)(v3 + 32) != 6 )
    return 0;
  s1 = nullptr;
  v17 = 0;
  v6 = sub_1CDDD0(&s1, *(_QWORD *)(v3 + 40), 0, 0);
  v7 = s1;
  if ( !v6 || !(_QWORD)v17 || strcmp(s1, "memcmp") )
  {
    if ( v7 )
    {
      *(_QWORD *)&v17 = 0;
      qfree();
    }
    return 0;
  }
  if ( v7 )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
LABEL_14:
  v8 = *(_QWORD *)(v3 + 72);
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL);
  v4 = sub_11B1C0((char *)(*(_QWORD *)(v8 + 24) + 160LL), &s1, 1u);
  if ( !(_BYTE)v4 )
    return 0;
  v10 = 0;
  if ( *(_BYTE *)(v3 + 64) == 8 )
    v10 = *(unsigned int *)(*(_QWORD *)(v3 + 72) + 284LL);
  v11 = sub_329F70(*(_QWORD *)(a1 + 480), v10);
  v12 = v11;
  if ( v11 == -1 )
    return 0;
  if ( (unsigned int)(v11 - 1) > 1 && v11 != 4 )
  {
    if ( !under_debugger )
      sub_37CFE0(52502);
    BUG();
  }
  s1 = (char *)((_QWORD)s1 * v11);
  if ( !(unsigned __int8)sub_182220(v9, *(unsigned __int8 **)(v8 + 24), (int)s1, v11)
    && !(unsigned __int8)sub_182220(v9, (unsigned __int8 *)(*(_QWORD *)(v8 + 24) + 80LL), (int)s1, v12) )
  {
    return 0;
  }
  copy_tinfo_t();
  copy_tinfo_t();
  v13 = sub_32FDB0(
          *(_QWORD *)(a1 + 64),
          *(_QWORD *)(v3 + 24),
          (unsigned int)"strcmp",
          (int)v8 + 72,
          2,
          *(_QWORD *)(v8 + 24),
          1,
          v15,
          (_DWORD)s1,
          v17,
          DWORD2(v17),
          v18);
  *(_DWORD *)(v13 + 68) = *(_DWORD *)(v3 + 68);
  sub_118CD0(v13, v3);
  if ( v13 )
  {
    sub_1181E0(v13 + 64);
    sub_1181E0(v13 + 48);
    sub_1181E0(v13 + 32);
    j__qfree();
  }
  v14 = *(_DWORD *)(a1 + 24);
  BYTE1(v14) &= ~2u;
  LOBYTE(v14) = v14 | 0x80;
  *(_DWORD *)(a1 + 24) = v14;
  return v4;
}

