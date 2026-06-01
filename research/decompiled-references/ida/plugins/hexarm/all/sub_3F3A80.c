__int64 __fastcall sub_3F3A80(__int64 a1, double a2)
{
  int v3; // eax
  __int64 v4; // rbp
  char *v5; // r12
  _QWORD *v6; // rax
  int v7; // ecx
  __int64 *i; // rax
  __int64 v9; // rsi
  int v10; // edx
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  char *v15; // rsi
  char *v16; // rdx
  int v17; // eax
  int v18; // edi
  __int64 v19; // rdx
  __int64 result; // rax
  int v21; // esi

  v3 = *(_DWORD *)(a1 + 80);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
  {
    if ( v3 == 8 )
    {
      v4 = 234;
      v5 = (char *)&unk_42E600;
    }
    else
    {
      v4 = 147;
      v5 = (char *)&unk_42F4C0;
    }
  }
  else if ( v3 == 8 )
  {
    v4 = 234;
    v5 = (char *)&unk_42ED60;
  }
  else
  {
    v4 = 147;
    v5 = (char *)&unk_42F960;
  }
  qfree();
  v6 = (_QWORD *)qcalloc();
  *(_QWORD *)(a1 + 688) = v6;
  *v6 = *(_QWORD *)v5;
  v6[v4 - 1] = *(_QWORD *)&v5[v4 * 8 - 8];
  qmemcpy(
    (void *)((unsigned __int64)(v6 + 1) & 0xFFFFFFFFFFFFFFF8LL),
    (const void *)(v5 - ((char *)v6 - ((unsigned __int64)(v6 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
    8LL * (((unsigned int)(v4 * 8) + (_DWORD)v6 - (((_DWORD)v6 + 8) & 0xFFFFFFF8)) >> 3));
  v7 = 0;
  for ( i = *(__int64 **)(a1 + 688); *((_BYTE *)i + 8); v7 = v11 + v12 )
  {
    v9 = *i;
    if ( *i != -1 )
    {
      v10 = (*((__int16 *)i + 6) + v7 - 1) & -*((__int16 *)i + 6);
      *((_DWORD *)i + 4) = v10;
      *(_DWORD *)(a1 + v9) = v10;
    }
    v11 = *((__int16 *)i + 6);
    v12 = *((_DWORD *)i + 4);
    i += 3;
  }
  if ( (*(_BYTE *)(a1 + 620) & 0xF) != 0 )
  {
    if ( !under_debugger )
      sub_3835A0(0xC8EFu, a2);
LABEL_36:
    BUG();
  }
  if ( (*(_BYTE *)(a1 + 624) & 0xF) != 0 )
  {
    if ( !under_debugger )
      sub_3835A0(0xC8F0u, a2);
    goto LABEL_36;
  }
  v13 = *(_DWORD *)(a1 + 488);
  if ( (v13 & 0xF) != 0 )
  {
    if ( !under_debugger )
      sub_3835A0(0xC8F2u, a2);
    goto LABEL_36;
  }
  if ( *(_DWORD *)(a1 + 548) - v13 != 240 )
  {
    if ( !under_debugger )
      sub_3835A0(0xC8F3u, a2);
    goto LABEL_36;
  }
  if ( *(_DWORD *)(a1 + 548) != v13 + 240 )
  {
    if ( !under_debugger )
      sub_3835A0(0xC8F6u, a2);
    goto LABEL_36;
  }
  v14 = *(_DWORD *)(a1 + 356);
  if ( *(_DWORD *)(a1 + 80) == 8 )
  {
    v17 = *(_DWORD *)(a1 + 484);
    v18 = -1;
    v15 = "xsp";
    *(_DWORD *)(a1 + 656) = *(_DWORD *)(a1 + 476);
    v16 = "xbp";
    *(_DWORD *)(a1 + 60) = v17;
  }
  else
  {
    v15 = "sp";
    v16 = "bp";
    *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 408);
    *(_DWORD *)(a1 + 656) = *(_DWORD *)(a1 + 412);
    v17 = *(_DWORD *)(a1 + 416);
    v18 = v17;
  }
  *(_QWORD *)(a1 + 40) = v16;
  v19 = *(_QWORD *)(a1 + 96);
  *(_DWORD *)(a1 + 660) = v18;
  *(_QWORD *)(a1 + 32) = v15;
  if ( *(_BYTE *)(v19 + 145) )
  {
    v21 = v14;
    v14 = v17;
    v17 = v21;
  }
  if ( v14 != 8 )
  {
    if ( !under_debugger )
      sub_3835A0(0xC915u, a2);
    goto LABEL_36;
  }
  result = (unsigned int)((v17 - 8) / *(_DWORD *)(*(_QWORD *)(v19 + 112) + 80LL) + 1);
  *(_DWORD *)(a1 + 352) = result;
  return result;
}

