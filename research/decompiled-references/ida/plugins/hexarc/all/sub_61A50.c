__int64 __fastcall sub_61A50(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  __int64 v5; // rbx
  __int64 v6; // rax
  int v7; // edx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  char v19; // [rsp+11h] [rbp-37h]
  char v20; // [rsp+12h] [rbp-36h]

  v3 = *(_DWORD *)(a1 + 64);
  if ( v3 > 0 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * (v3 - 1));
    if ( a3 )
    {
      if ( *(_QWORD *)(v5 + 40) == -1 )
      {
        v16 = *(_QWORD *)(v5 + 56);
        if ( v16 )
          v17 = *(_QWORD *)(v16 + 24) + 1LL;
        else
          v17 = *(_QWORD *)(v5 + 32);
        *(_QWORD *)(v5 + 40) = v17;
      }
      goto LABEL_9;
    }
    if ( *(_QWORD *)(v5 + 32) != a2 )
    {
      if ( *(_QWORD *)(v5 + 40) != -1 )
        goto LABEL_9;
      v6 = *(_QWORD *)(v5 + 56);
      if ( !v6 )
      {
        v8 = *(_QWORD *)(v5 + 32);
        v7 = *(_DWORD *)(v5 + 24);
        goto LABEL_7;
      }
LABEL_6:
      v7 = *(_DWORD *)(v5 + 24);
      v8 = *(_QWORD *)(v6 + 24) + 1LL;
LABEL_7:
      *(_QWORD *)(v5 + 40) = v8;
      if ( (v7 & 2) != 0 || *(_QWORD *)(v5 + 32) != a2 )
        goto LABEL_9;
LABEL_35:
      if ( (*(_BYTE *)(a1 + 5) & 0x20) == 0 )
      {
        if ( !under_debugger )
          sub_37B760(50666);
        BUG();
      }
      goto LABEL_9;
    }
    v6 = *(_QWORD *)(v5 + 56);
    if ( v6 )
    {
      if ( *(_QWORD *)(v5 + 40) != -1 )
      {
        if ( (*(_BYTE *)(v5 + 24) & 2) != 0 )
          goto LABEL_9;
        goto LABEL_35;
      }
      goto LABEL_6;
    }
    v7 = *(_DWORD *)(v5 + 24);
    if ( (v7 & 2) == 0 )
      return v5;
    if ( *(_QWORD *)(v5 + 40) == -1 )
    {
      v8 = a2;
      goto LABEL_7;
    }
  }
LABEL_9:
  if ( (*(_BYTE *)a1 & 4) != 0 )
  {
    v5 = j__qalloc_or_throw();
    sub_3294C0(v5, *(_QWORD *)(a1 + 1496));
    *(_QWORD *)(v5 + 536) = 0;
    *(_QWORD *)v5 = off_4A8388;
    *(_QWORD *)(v5 + 528) = off_4B7AD8;
    *(_BYTE *)(v5 + 560) = 0;
    *(_QWORD *)(v5 + 564) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v5 + 576) = 0;
    *(_QWORD *)(v5 + 600) = 0;
    *(_QWORD *)(v5 + 624) = 0;
    *(_QWORD *)(v5 + 648) = 0;
    *(_DWORD *)(v5 + 672) = 0;
    *(_QWORD *)(v5 + 680) = 0;
    *(_QWORD *)(v5 + 704) = 0;
    *(_OWORD *)(v5 + 544) = 0;
    *(_OWORD *)(v5 + 584) = 0;
    *(_OWORD *)(v5 + 608) = 0;
    *(_OWORD *)(v5 + 632) = 0;
    *(_OWORD *)(v5 + 656) = 0;
    *(_OWORD *)(v5 + 688) = 0;
    *(_OWORD *)(v5 + 712) = 0;
  }
  else
  {
    v5 = j__qalloc_or_throw();
    sub_3294C0(v5, *(_QWORD *)(a1 + 1496));
  }
  v9 = *(_DWORD *)(a1 + 64);
  *(_QWORD *)(v5 + 64) = a1;
  *(_QWORD *)(v5 + 416) = a1;
  *(_DWORD *)(v5 + 72) = v9;
  *(_QWORD *)(v5 + 448) = a1;
  *(_QWORD *)(v5 + 328) = *(_QWORD *)(a1 + 152);
  v10 = *(_QWORD *)(a1 + 168);
  *(_QWORD *)(v5 + 32) = a2;
  *(_QWORD *)(v5 + 336) = v10;
  v11 = *(_DWORD *)(v5 + 24);
  v12 = v11;
  LOBYTE(v12) = v11 | 0x80;
  *(_DWORD *)(v5 + 24) = v12;
  if ( a3 )
  {
    LOBYTE(v11) = v11 | 0x82;
    *(_DWORD *)(v5 + 24) = v11;
  }
  else if ( (unsigned __int8)xrefblk_t_first_to() )
  {
    while ( 1 )
    {
      if ( v20 )
      {
        if ( v19 == 19 )
        {
          v18 = sub_329920(a1);
          if ( (unsigned __int8)sub_32B2E0(a1 + 8, v18) )
            break;
        }
      }
      if ( !(unsigned __int8)xrefblk_t_next_to() )
        goto LABEL_13;
    }
    *(_DWORD *)(v5 + 24) |= 0x10000u;
  }
LABEL_13:
  v13 = *(_QWORD *)(a1 + 520);
  v14 = 0;
  if ( v13 )
  {
    do
    {
      v14 = v13;
      v13 = *(_QWORD *)(v13 + 8);
    }
    while ( v13 );
    *(_QWORD *)(v14 + 8) = v5;
  }
  *(_QWORD *)(v5 + 16) = v14;
  *(_QWORD *)(v5 + 8) = 0;
  if ( !*(_QWORD *)(a1 + 520) )
    *(_QWORD *)(a1 + 520) = v5;
  ++*(_DWORD *)(a1 + 64);
  sub_5EE60(a1);
  return v5;
}

