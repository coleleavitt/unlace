__int64 __fastcall sub_226340(__int64 a1, _QWORD *a2, int a3, signed int a4, _QWORD *a5)
{
  __int64 v8; // rbp
  unsigned int v10; // eax
  unsigned int v11; // r15d
  signed __int64 v13; // rsi
  signed __int64 v14; // rax
  int v15; // r14d
  int v16; // eax
  __int64 v17; // rdi
  int v18; // r14d
  __int64 *v20; // [rsp+10h] [rbp-78h]
  signed __int64 v21; // [rsp+18h] [rbp-70h]
  int v22; // [rsp+34h] [rbp-54h] BYREF
  __int64 v23; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v24[8]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-40h]

  v8 = *(_QWORD *)(a1 + 432) + 104LL * a3;
  v25 = __readfsqword(0x28u);
  if ( !(unsigned int)lexcompare_tinfo() )
    return 0;
  if ( a5 && *(_BYTE *)a5 )
  {
    v23 = 0;
    copy_tinfo_t();
  }
  else
  {
    sub_1E7770(&v23, (_DWORD *)v8, *(_QWORD **)(a1 + 1504), a4, 0);
  }
  LOBYTE(v10) = sub_1E8190(v8, *(_QWORD *)(a1 + 1504), &v23, 0);
  v11 = v10;
  if ( !(_BYTE)v10 )
    goto LABEL_8;
  if ( *(_DWORD *)v8 != 1 )
  {
    if ( ((*(_DWORD *)v8 - 2) & 0xFFFFFFFD) == 0 )
      goto LABEL_8;
LABEL_34:
    if ( !under_debugger )
      sub_37B760(51032);
    BUG();
  }
  v13 = *(_QWORD *)(v8 + 8);
  v14 = *(_QWORD *)(a1 + 144);
  if ( v13 >= v14 )
  {
    if ( *(_BYTE *)(a1 + 320) )
    {
      v18 = sub_1BCC80((_DWORD *)v8);
      if ( (int)sub_EC6C0(a1) > v18 )
        goto LABEL_8;
    }
    else if ( !(unsigned __int8)sub_221570((_QWORD *)a1, v13, a4, a5) )
    {
      goto LABEL_8;
    }
    if ( ((*(_DWORD *)v8 - 2) & 0xFFFFFFFD) == 0 )
      goto LABEL_8;
    if ( *(_DWORD *)v8 != 1 )
      goto LABEL_34;
    v14 = *(_QWORD *)(a1 + 144);
    v13 = *(_QWORD *)(v8 + 8);
  }
  v21 = a4 + v13;
  if ( v21 <= v14 || v14 <= v13 )
  {
    v15 = -1;
    v20 = (__int64 *)(a1 + 432);
    while ( 1 )
    {
      v16 = sub_1E9280(v20, (int *)v8, a4, -1, v15 + 1);
      v22 = v16;
      v15 = v16;
      if ( v16 == -1 )
        break;
      if ( v16 != a3 )
      {
        v17 = *(_QWORD *)(a1 + 432) + 104LL * v16;
        if ( (*(_BYTE *)(v17 + 24) & 2) != 0
          || ((*(_DWORD *)v17 - 2) & 0xFFFFFFFD) == 0
          || v21 < (int)sub_1BCD40((_DWORD *)v17, *(_DWORD *)(v17 + 88)) )
        {
          goto LABEL_8;
        }
        sub_BD500(a2, &v22);
      }
    }
    if ( (*(_BYTE *)(v8 + 25) & 8) == 0 )
      goto LABEL_9;
    sub_324B50(v24, *(_QWORD *)(a1 + 1496));
    if ( v24[0] )
    {
      clear_tinfo_t();
      goto LABEL_9;
    }
    clear_tinfo_t();
  }
LABEL_8:
  v11 = 0;
LABEL_9:
  clear_tinfo_t();
  return v11;
}

