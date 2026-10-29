__int64 __fastcall sub_67FD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  int v5; // eax
  int v6; // r12d
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // [rsp+0h] [rbp-48h]
  char v21; // [rsp+11h] [rbp-37h]
  char v22; // [rsp+12h] [rbp-36h]

  v5 = *(_DWORD *)(a1 + 64);
  v6 = a3;
  if ( v5 > 0 )
  {
    a3 = *(_QWORD *)(a1 + 528);
    v7 = *(_QWORD *)(a3 + 8LL * (v5 - 1));
    if ( v6 )
    {
      if ( *(_QWORD *)(v7 + 40) == -1 )
      {
        v17 = *(_QWORD *)(v7 + 56);
        if ( v17 )
          v18 = *(_QWORD *)(v17 + 24) + 1LL;
        else
          v18 = *(_QWORD *)(v7 + 32);
        *(_QWORD *)(v7 + 40) = v18;
      }
      goto LABEL_9;
    }
    if ( *(_QWORD *)(v7 + 32) != a2 )
    {
      if ( *(_QWORD *)(v7 + 40) != -1 )
        goto LABEL_9;
      v8 = *(_QWORD *)(v7 + 56);
      if ( !v8 )
      {
        v9 = *(_QWORD *)(v7 + 32);
        LODWORD(a3) = *(_DWORD *)(v7 + 24);
        goto LABEL_7;
      }
LABEL_6:
      LODWORD(a3) = *(_DWORD *)(v7 + 24);
      v9 = *(_QWORD *)(v8 + 24) + 1LL;
LABEL_7:
      a3 &= 2u;
      *(_QWORD *)(v7 + 40) = v9;
      if ( (_DWORD)a3 || *(_QWORD *)(v7 + 32) != a2 )
        goto LABEL_9;
LABEL_35:
      if ( (*(_BYTE *)(a1 + 5) & 0x20) == 0 )
      {
        if ( !under_debugger )
          sub_383060(0xC5EAu, a5);
        BUG();
      }
      goto LABEL_9;
    }
    v8 = *(_QWORD *)(v7 + 56);
    if ( v8 )
    {
      if ( *(_QWORD *)(v7 + 40) != -1 )
      {
        if ( (*(_BYTE *)(v7 + 24) & 2) != 0 )
          goto LABEL_9;
        goto LABEL_35;
      }
      goto LABEL_6;
    }
    a3 = *(unsigned int *)(v7 + 24);
    if ( (a3 & 2) == 0 )
      return v7;
    if ( *(_QWORD *)(v7 + 40) == -1 )
    {
      v9 = a2;
      goto LABEL_7;
    }
  }
LABEL_9:
  if ( (*(_BYTE *)a1 & 4) != 0 )
  {
    v7 = j__qalloc_or_throw(728, a2, a3, a4);
    sub_330B10(v7, *(_QWORD *)(a1 + 1496));
    *(_QWORD *)(v7 + 536) = 0;
    *(_QWORD *)v7 = off_4DBB48;
    *(_QWORD *)(v7 + 528) = off_4EBC98;
    *(_BYTE *)(v7 + 560) = 0;
    *(_QWORD *)(v7 + 564) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v7 + 576) = 0;
    *(_QWORD *)(v7 + 600) = 0;
    *(_QWORD *)(v7 + 624) = 0;
    *(_QWORD *)(v7 + 648) = 0;
    *(_DWORD *)(v7 + 672) = 0;
    *(_QWORD *)(v7 + 680) = 0;
    *(_QWORD *)(v7 + 704) = 0;
    *(_OWORD *)(v7 + 544) = 0;
    *(_OWORD *)(v7 + 584) = 0;
    *(_OWORD *)(v7 + 608) = 0;
    *(_OWORD *)(v7 + 632) = 0;
    *(_OWORD *)(v7 + 656) = 0;
    *(_OWORD *)(v7 + 688) = 0;
    *(_OWORD *)(v7 + 712) = 0;
  }
  else
  {
    v7 = j__qalloc_or_throw(528, a2, a3, a4);
    sub_330B10(v7, *(_QWORD *)(a1 + 1496));
  }
  v10 = *(_DWORD *)(a1 + 64);
  *(_QWORD *)(v7 + 64) = a1;
  *(_QWORD *)(v7 + 416) = a1;
  *(_DWORD *)(v7 + 72) = v10;
  *(_QWORD *)(v7 + 448) = a1;
  *(_QWORD *)(v7 + 328) = *(_QWORD *)(a1 + 152);
  v11 = *(_QWORD *)(a1 + 168);
  *(_QWORD *)(v7 + 32) = a2;
  *(_QWORD *)(v7 + 336) = v11;
  v12 = *(_DWORD *)(v7 + 24);
  v13 = v12;
  LOBYTE(v13) = v12 | 0x80;
  *(_DWORD *)(v7 + 24) = v13;
  if ( v6 )
  {
    LOBYTE(v12) = v12 | 0x82;
    *(_DWORD *)(v7 + 24) = v12;
  }
  else if ( (unsigned __int8)xrefblk_t_first_to() )
  {
    while ( 1 )
    {
      if ( v22 )
      {
        if ( v21 == 19 )
        {
          v19 = sub_330F80((_QWORD *)a1, v20);
          if ( (unsigned __int8)sub_332920(a1 + 8, v19) )
            break;
        }
      }
      if ( !(unsigned __int8)xrefblk_t_next_to() )
        goto LABEL_13;
    }
    *(_DWORD *)(v7 + 24) |= 0x10000u;
  }
LABEL_13:
  v14 = *(_QWORD *)(a1 + 520);
  v15 = 0;
  if ( v14 )
  {
    do
    {
      v15 = v14;
      v14 = *(_QWORD *)(v14 + 8);
    }
    while ( v14 );
    *(_QWORD *)(v15 + 8) = v7;
  }
  *(_QWORD *)(v7 + 16) = v15;
  *(_QWORD *)(v7 + 8) = 0;
  if ( !*(_QWORD *)(a1 + 520) )
    *(_QWORD *)(a1 + 520) = v7;
  ++*(_DWORD *)(a1 + 64);
  sub_653E0(a1);
  return v7;
}

