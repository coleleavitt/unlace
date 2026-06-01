__int64 __fastcall sub_A1880(__int64 a1, __int64 a2, double a3)
{
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  _QWORD *v6; // r12
  __int64 v7; // r13
  _QWORD *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int8 *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r12
  __int64 v20; // rsi
  int v21; // eax
  __int64 v22; // rbp
  unsigned __int8 *v23; // rsi
  __int64 v24; // r15
  __int64 v25; // rdx
  int v26; // ebp
  int v27; // r8d
  __int64 v28; // rdx
  __int64 v29; // [rsp+10h] [rbp-68h]
  char v30[4]; // [rsp+20h] [rbp-58h] BYREF
  int v31; // [rsp+24h] [rbp-54h]
  unsigned __int64 v32; // [rsp+38h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  if ( a2 == *(_QWORD *)(a1 + 32) + 64LL || *(_BYTE *)a2 == 4 )
    return 0;
  v4 = *(_QWORD **)(a1 + 48);
  v5 = (_QWORD *)*v4;
  if ( !*v4 )
    return 1;
  if ( !v4[1] )
    return 1;
  v6 = (_QWORD *)v5[1];
  if ( v5 == v6 )
    return 1;
  while ( 1 )
  {
    v7 = v6[3];
    v8 = v6 + 3;
    if ( sub_125B60((unsigned __int8 *)(v7 + 64), a2, 0) )
      break;
    if ( (*v6 & 2) != 0 )
    {
LABEL_10:
      if ( v6 == **(_QWORD ***)(a1 + 48) )
        return 1;
    }
    else
    {
      v11 = (_QWORD *)v6[2];
      if ( (*(_BYTE *)v11 & 2) == 0 )
      {
        do
        {
          v6 = v11;
          v11 = (_QWORD *)v11[1];
        }
        while ( (*(_BYTE *)v11 & 2) == 0 );
        goto LABEL_10;
      }
      v13 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFCLL);
      v14 = *v13;
      if ( (*v13 & 2) != 0 )
      {
LABEL_13:
        v6 = v13;
        if ( v13 == **(_QWORD ***)(a1 + 48) )
          return 1;
      }
      else
      {
        while ( 1 )
        {
          if ( (_QWORD *)v13[2] != v6 )
            goto LABEL_13;
          v6 = v13;
          v15 = v14 & 0xFFFFFFFFFFFFFFFCLL;
          v14 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v14 & 2) != 0 )
            break;
          v13 = (_QWORD *)v15;
        }
        v6 = (_QWORD *)v15;
        if ( v15 == **(_QWORD **)(a1 + 48) )
          return 1;
      }
    }
  }
  if ( *(_BYTE *)(a1 + 68) )
  {
    v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL) + 112LL);
    v16 = (unsigned __int8 *)(*(_QWORD *)(a1 + 56) + 64LL);
    sub_123A40((__int64)v30, v16, v9, v10);
    if ( v30[0] == 8 )
    {
      if ( !under_debugger )
        sub_383060(0xCA51u, a3);
      goto LABEL_50;
    }
    v19 = j__qalloc_or_throw(80, (__int64)v16, v17, v18);
    v20 = *(_QWORD *)(v7 + 24);
    *(_QWORD *)(v19 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v19 + 40) = 0;
    *(_QWORD *)(v19 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v19 + 56) = 0;
    *(_QWORD *)(v19 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v19 + 72) = 0;
    sub_330970(v19, v20);
    *(_DWORD *)v19 = *(_DWORD *)v7;
    v21 = *(_DWORD *)(v7 + 4);
    *(_DWORD *)(v19 + 68) = 1;
    *(_DWORD *)(v19 + 4) = v21;
    v22 = v8[1];
    if ( v22 )
    {
      sub_125180(v19 + 48, (unsigned __int8 *)(v7 + 48));
      v23 = (unsigned __int8 *)(v7 + 32);
      v24 = v19;
      if ( v22 != v7 + 32 )
      {
        while ( 1 )
        {
          sub_125180(v24 + 32, v23);
          if ( *(_BYTE *)(v7 + 32) != 4 )
            break;
          v7 = *(_QWORD *)(v7 + 40);
          v24 = *(_QWORD *)(v24 + 40);
          v23 = (unsigned __int8 *)(v7 + 32);
          if ( v7 + 32 == v22 )
            goto LABEL_26;
        }
        if ( !under_debugger )
          sub_383060(0xC363u, a3);
LABEL_50:
        BUG();
      }
LABEL_26:
      if ( !*(_DWORD *)(a1 + 64) )
      {
        v27 = *(_DWORD *)(v7 + 36);
        if ( v31 < v27 )
        {
          v28 = **(unsigned int **)(a1 + 56);
          if ( (unsigned int)(v28 - 8) > 1 || *(_BYTE *)(v7 + 32) != 4 || (_DWORD)v28 != **(_DWORD **)(v7 + 40) )
          {
            if ( !under_debugger )
              sub_383060(0xCDC6u, a3);
            goto LABEL_50;
          }
          sub_1207E0(v30, v29, v28, *(_QWORD *)(v7 + 24), v27);
        }
      }
      sub_11CA10((char *)(v24 + 32), v30);
    }
    else
    {
      sub_11CA10((char *)(v19 + 32), v30);
      if ( *(_DWORD *)v7 != 29 )
        sub_120A10(v19 + 48, v29, 0, *(_DWORD *)(v19 + 36), *(_QWORD *)(v19 + 24), 0);
      v24 = v19;
    }
    v25 = *(unsigned int *)(a1 + 64);
    if ( (_DWORD)v25 )
    {
      v26 = *(_DWORD *)(v7 + 36);
      if ( *(_DWORD *)(v24 + 36) <= v26 )
      {
        if ( !under_debugger )
          sub_383060(0xCB3Au, a3);
        goto LABEL_50;
      }
      sub_1207E0((char *)(v24 + 32), v29, v25, *(_QWORD *)(v7 + 24), v26);
      if ( *(_DWORD *)(v24 + 52) > v26 )
        sub_1207E0((char *)(v24 + 48), v29, 10, *(_QWORD *)(v7 + 24), v26);
    }
    sub_11CDA0(a2);
    *(_BYTE *)a2 = 4;
    *(_QWORD *)(a2 + 8) = v19;
    *(_DWORD *)(a2 + 4) = 1;
    *(_BYTE *)(a1 + 40) = 1;
    sub_11CDA0((__int64)v30);
  }
  return 0;
}

