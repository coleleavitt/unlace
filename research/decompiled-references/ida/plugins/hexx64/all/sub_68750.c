__int64 __fastcall sub_68750(__int64 a1, __int64 (__fastcall ***a2)(_QWORD, _QWORD, _QWORD))
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
  int v13; // r12d
  __int64 j; // rax
  __int64 v15; // rbx
  int v16; // eax
  _DWORD *v17; // rsi
  __int64 v18; // r12
  unsigned int v19; // ebx
  __int64 v20; // r13
  int v21; // eax
  unsigned int v22; // eax
  _QWORD v24[5]; // [rsp+8h] [rbp-98h] BYREF
  char v25; // [rsp+30h] [rbp-70h]
  __int64 (__fastcall ***v26)(_QWORD, _QWORD, _QWORD); // [rsp+38h] [rbp-68h]
  __int64 v27; // [rsp+40h] [rbp-60h]
  __int128 v28; // [rsp+48h] [rbp-58h]
  unsigned __int64 v29; // [rsp+60h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v25 = 0;
  memset(&v24[1], 0, 32);
  v24[0] = off_4DBB90;
  v26 = a2;
  v27 = 0;
  v28 = 0;
  sub_11FBB0(a1, (__int64)v24);
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
        sub_67CF0(a1, v8);
        --v3;
        v5 -= 8;
        if ( v3 == -1 )
          goto LABEL_9;
      }
      else
      {
        sub_662E0((__int64 *)(v8 + 368), a2, 1);
        v6 = sub_662E0((__int64 *)(v8 + 344), a2, 0);
        LOBYTE(v6) = *(_DWORD *)(v8 + 352) == 0;
        v4 |= v6;
        v7 = (**a2)(a2, *(unsigned int *)(v8 + 72), 0);
        *(_DWORD *)(v8 + 72) = v7;
        if ( v7 == -1 )
        {
          if ( !under_debugger )
            sub_383060(0xCAD1u, 0.0);
          goto LABEL_35;
        }
        --v3;
        v5 -= 8;
        if ( v3 == -1 )
          goto LABEL_9;
      }
      v2 = *(_DWORD *)(a1 + 64);
    }
    if ( !under_debugger )
      sub_383060(0xCDEFu, 0.0);
LABEL_35:
    BUG();
  }
  v4 = 0;
LABEL_9:
  sub_653E0(a1);
  sub_68660(a1 + 1448, (__int64)a2);
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
  v13 = 0;
  for ( j = 0; v13 < (unsigned __int64)v28; j = v13 )
  {
    while ( 1 )
    {
      v15 = *(_QWORD *)(v27 + 8 * j);
      if ( (unsigned int)sub_167810(v15, *(_QWORD *)(v15 + 56), 6) )
      {
        v16 = *(_DWORD *)(v15 + 24);
        v17 = *(_DWORD **)(v15 + 56);
        BYTE1(v16) &= ~2u;
        LOBYTE(v16) = v16 | 0x80;
        *(_DWORD *)(v15 + 24) = v16;
        if ( !*v17 )
          break;
      }
      j = ++v13;
      if ( v13 >= (unsigned __int64)v28 )
        goto LABEL_19;
    }
    sub_A3480(v15, (__int64)v17);
    ++v13;
  }
LABEL_19:
  v18 = 8;
  v19 = 1;
  if ( *(_DWORD *)(a1 + 64) - 1 > 1 )
  {
    do
    {
      v20 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + v18);
      v21 = sub_A8320(v20);
      if ( v21 )
      {
        LOBYTE(v21) = *(_QWORD *)(v20 + 48) == 0;
        v4 |= v21;
      }
      v22 = *(_DWORD *)(a1 + 64);
      if ( (int)(v22 - 1) <= (int)++v19 )
        goto LABEL_25;
      v18 += 8;
    }
    while ( v19 < v22 );
    if ( !under_debugger )
      sub_383060(0xCDEFu, 0.0);
    goto LABEL_35;
  }
LABEL_25:
  v24[0] = off_4DBB90;
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27);
  }
  return v4;
}

