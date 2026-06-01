__int64 __fastcall sub_192680(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4, double a5)
{
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v10; // rdx
  __int64 v11; // rax
  char v12; // dl
  char v13; // cl
  __int64 v14; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // r14
  __int64 v20; // r12
  __int64 v21; // rsi
  int v22; // eax
  unsigned __int64 v23; // [rsp+0h] [rbp-58h] BYREF
  __int64 v24; // [rsp+8h] [rbp-50h]
  unsigned __int64 v25; // [rsp+18h] [rbp-40h]

  v7 = *(_QWORD **)(a1 + 128);
  v8 = *(_QWORD *)(a1 + 136);
  v25 = __readfsqword(0x28u);
  v10 = &v7[v8];
  if ( v7 != v10 )
  {
    while ( a2[1] != *v7 )
    {
      if ( v10 == ++v7 )
        goto LABEL_6;
    }
    if ( v10 != v7 )
    {
      if ( !under_debugger )
        sub_383060(0xC951u, a5);
LABEL_27:
      BUG();
    }
  }
LABEL_6:
  sub_191D40((_QWORD *)(a1 + 16), a2);
  v11 = sub_1922B0(a1 + 16, a2[1], nullptr, a5);
  v13 = v12;
  v14 = *(unsigned __int8 *)(a3 + 8);
  if ( (_BYTE)v14 == v13 && *(_QWORD *)a3 == v11 )
  {
    sub_191AA0(a1, a2, a3, a4);
    return 1;
  }
  if ( a4 != -1 )
    return 0;
  v16 = a2[1];
  if ( *(_DWORD *)v16 != 12 )
  {
    if ( !under_debugger )
      sub_383060(0xC9D3u, a5);
    goto LABEL_27;
  }
  v17 = *(unsigned __int8 *)(v16 + 32);
  if ( (_BYTE)v17 == 1 )
  {
    v18 = *(int *)(v16 + 40);
  }
  else
  {
    if ( (_BYTE)v17 == 5 )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(v16 + 40) + 8LL);
      if ( (_BYTE)v14 != 5 )
        goto LABEL_14;
LABEL_20:
      v19 = v16 + 32;
      if ( v18 == *(_QWORD *)a3 )
        goto LABEL_15;
      goto LABEL_14;
    }
    v17 = 0;
    v18 = -1;
  }
  if ( (_BYTE)v14 == (_BYTE)v17 )
    goto LABEL_20;
LABEL_14:
  v19 = v16 + 48;
LABEL_15:
  v24 = 0;
  v23 = 0xFFFFFFFF00000000LL;
  v20 = j__qalloc_or_throw(80, v18, v14, v17);
  v21 = *(_QWORD *)(a2[1] + 24);
  *(_QWORD *)(v20 + 40) = 0;
  *(_QWORD *)(v20 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v20 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v20 + 56) = 0;
  *(_QWORD *)(v20 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v20 + 72) = 0;
  sub_330970(v20, v21);
  LOBYTE(v23) = 4;
  v24 = v20;
  *(_DWORD *)v20 = 13;
  sub_125180((unsigned __int8 *)(v20 + 32), (unsigned __int8 *)v19);
  sub_125180((unsigned __int8 *)(v20 + 48), (unsigned __int8 *)(a1 + 192));
  v22 = *(_DWORD *)(v19 + 4);
  *(_DWORD *)(v20 + 68) = v22;
  HIDWORD(v23) = v22;
  sub_11CA10((char *)v19, (char *)&v23);
  sub_11CDA0((__int64)&v23);
  return 1;
}

