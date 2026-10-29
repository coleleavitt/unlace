__int64 __fastcall sub_22D6C0(__int64 a1, _QWORD *a2, int a3, int a4, _QWORD *a5, double a6)
{
  __int64 v9; // rbp
  unsigned int v11; // eax
  unsigned int v12; // r15d
  signed __int64 v14; // rsi
  signed __int64 v15; // rax
  int v16; // r14d
  int v17; // eax
  __int64 v18; // rdi
  int v19; // r14d
  __int64 *v21; // [rsp+10h] [rbp-78h]
  signed __int64 v22; // [rsp+18h] [rbp-70h]
  int v23; // [rsp+34h] [rbp-54h] BYREF
  __int64 v24; // [rsp+38h] [rbp-50h] BYREF
  __int64 v25[9]; // [rsp+40h] [rbp-48h] BYREF

  v9 = *(_QWORD *)(a1 + 432) + 104LL * a3;
  v25[1] = __readfsqword(0x28u);
  if ( !(unsigned int)lexcompare_tinfo() )
    return 0;
  if ( a5 && *(_BYTE *)a5 )
  {
    v24 = 0;
    copy_tinfo_t();
  }
  else
  {
    sub_1EEAF0(&v24, (_DWORD *)v9, *(_QWORD **)(a1 + 1504), a4, 0, a6);
  }
  LOBYTE(v11) = sub_1EF510(v9, *(_QWORD *)(a1 + 1504), &v24, 0, a6);
  v12 = v11;
  if ( !(_BYTE)v11 )
    goto LABEL_8;
  if ( *(_DWORD *)v9 != 1 )
  {
    if ( ((*(_DWORD *)v9 - 2) & 0xFFFFFFFD) == 0 )
      goto LABEL_8;
LABEL_34:
    if ( !under_debugger )
      sub_383060(0xC758u, a6);
    BUG();
  }
  v14 = *(_QWORD *)(v9 + 8);
  v15 = *(_QWORD *)(a1 + 144);
  if ( v14 >= v15 )
  {
    if ( *(_BYTE *)(a1 + 320) )
    {
      v19 = sub_1C3500((_DWORD *)v9, a6);
      if ( (int)sub_F2D80(a1) > v19 )
        goto LABEL_8;
    }
    else if ( !(unsigned __int8)sub_2288F0((_QWORD *)a1, v14, a4, a5, a6) )
    {
      goto LABEL_8;
    }
    if ( ((*(_DWORD *)v9 - 2) & 0xFFFFFFFD) == 0 )
      goto LABEL_8;
    if ( *(_DWORD *)v9 != 1 )
      goto LABEL_34;
    v15 = *(_QWORD *)(a1 + 144);
    v14 = *(_QWORD *)(v9 + 8);
  }
  v22 = a4 + v14;
  if ( v22 <= v15 || v15 <= v14 )
  {
    v16 = -1;
    v21 = (__int64 *)(a1 + 432);
    while ( 1 )
    {
      v17 = sub_1F0600(v21, (int *)v9, a4, -1, v16 + 1, a6);
      v23 = v17;
      v16 = v17;
      if ( v17 == -1 )
        break;
      if ( v17 != a3 )
      {
        v18 = *(_QWORD *)(a1 + 432) + 104LL * v17;
        if ( (*(_BYTE *)(v18 + 24) & 2) != 0
          || ((*(_DWORD *)v18 - 2) & 0xFFFFFFFD) == 0
          || v22 < (int)sub_1C35C0((_DWORD *)v18, *(_DWORD *)(v18 + 88), a6) )
        {
          goto LABEL_8;
        }
        sub_C3BC0(a2, &v23);
      }
    }
    if ( (*(_BYTE *)(v9 + 25) & 8) == 0 )
      goto LABEL_9;
    sub_32C080(v25, *(_QWORD *)(a1 + 1496), a4);
    if ( LOBYTE(v25[0]) )
    {
      clear_tinfo_t();
      goto LABEL_9;
    }
    clear_tinfo_t();
  }
LABEL_8:
  v12 = 0;
LABEL_9:
  clear_tinfo_t();
  return v12;
}

