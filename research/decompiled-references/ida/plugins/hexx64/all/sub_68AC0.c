__int64 __fastcall sub_68AC0(__int64 a1, int a2, char a3, __int64 a4, double a5)
{
  __int64 v5; // rbx
  _QWORD *i; // rcx
  __int64 v9; // rsi
  _DWORD *v10; // rdi
  _DWORD *v11; // rax
  __int64 v12; // rsi
  _DWORD *v13; // rdi
  _DWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // edx
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  _QWORD v32[5]; // [rsp+0h] [rbp-68h] BYREF
  char v33; // [rsp+28h] [rbp-40h]
  int v34; // [rsp+2Ch] [rbp-3Ch]
  int v35; // [rsp+30h] [rbp-38h]
  unsigned __int64 v36; // [rsp+34h] [rbp-34h]
  int v37; // [rsp+3Ch] [rbp-2Ch]
  unsigned __int64 v38; // [rsp+48h] [rbp-20h]

  v5 = a2;
  v38 = __readfsqword(0x28u);
  if ( a2 < 0 || *(_DWORD *)(a1 + 64) < a2 )
  {
    if ( !under_debugger )
      sub_383060(0xC5EBu, a5);
    goto LABEL_51;
  }
  if ( *(_DWORD *)(a1 + 64) == a2 )
    return sub_67FD0(a1, -1, 0, a4, a5);
  for ( i = *(_QWORD **)(a1 + 520); i; i = (_QWORD *)i[1] )
  {
    v9 = i[47];
    v10 = (_DWORD *)i[46];
    v11 = v10;
    if ( 4 * v9 )
    {
      do
      {
        if ( (int)v5 <= *v11 )
        {
          ++*v11;
          v10 = (_DWORD *)i[46];
          v9 = i[47];
        }
        ++v11;
      }
      while ( v11 != &v10[v9] );
    }
    v12 = i[44];
    v13 = (_DWORD *)i[43];
    v14 = v13;
    if ( 4 * v12 )
    {
      do
      {
        if ( (int)v5 <= *v14 )
        {
          ++*v14;
          v13 = (_DWORD *)i[43];
          v12 = i[44];
        }
        ++v14;
      }
      while ( v14 != &v13[v12] );
    }
  }
  sub_68480((int **)(a1 + 1448), v5);
  v15 = *(_QWORD *)(a1 + 432);
  v16 = 104LL * *(_QWORD *)(a1 + 440);
  v17 = v15 + v16;
  if ( a3 )
  {
    for ( ; v15 != v17; v15 += 104 )
    {
      v18 = *(_DWORD *)(v15 + 92);
      if ( v18 >= (int)v5 )
        *(_DWORD *)(v15 + 92) = v18 + 1;
    }
  }
  else if ( v16 )
  {
    while ( *(_DWORD *)(v15 + 92) < (int)v5 )
    {
      v15 += 104;
      if ( v15 == v17 )
        goto LABEL_19;
    }
    if ( !under_debugger )
      sub_383060(0xC81Du, a5);
LABEL_51:
    BUG();
  }
LABEL_19:
  v19 = *(_DWORD *)(a1 + 64);
  v20 = v5;
  if ( v19 > (int)v5 )
  {
    while ( 1 )
    {
      v21 = (unsigned int)v20++;
      if ( (unsigned int)v21 >= v19 )
        break;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v21) + 72LL) = v20;
      v19 = *(_DWORD *)(a1 + 64);
      if ( v20 >= v19 )
        goto LABEL_22;
    }
    if ( !under_debugger )
      sub_383060(0xCDEFu, a5);
    goto LABEL_51;
  }
LABEL_22:
  memset(&v32[1], 0, 32);
  v32[0] = &off_4DBB68;
  v33 = 0;
  v34 = v5;
  v35 = v19;
  v36 = 0xFFFFFFFF00000001LL;
  v37 = -1;
  sub_11FBB0(a1, (__int64)v32);
  if ( (*(_BYTE *)a1 & 4) != 0 )
  {
    v24 = j__qalloc_or_throw(728, (__int64)v32, v22, v23);
    sub_330B10(v24, *(_QWORD *)(a1 + 1496));
    a5 = 0.0;
    *(_QWORD *)(v24 + 536) = 0;
    *(_QWORD *)v24 = off_4DBB48;
    *(_QWORD *)(v24 + 528) = off_4EBC98;
    *(_BYTE *)(v24 + 560) = 0;
    *(_QWORD *)(v24 + 564) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v24 + 576) = 0;
    *(_QWORD *)(v24 + 600) = 0;
    *(_QWORD *)(v24 + 624) = 0;
    *(_QWORD *)(v24 + 648) = 0;
    *(_DWORD *)(v24 + 672) = 0;
    *(_QWORD *)(v24 + 680) = 0;
    *(_QWORD *)(v24 + 704) = 0;
    *(_OWORD *)(v24 + 544) = 0;
    *(_OWORD *)(v24 + 584) = 0;
    *(_OWORD *)(v24 + 608) = 0;
    *(_OWORD *)(v24 + 632) = 0;
    *(_OWORD *)(v24 + 656) = 0;
    *(_OWORD *)(v24 + 688) = 0;
    *(_OWORD *)(v24 + 712) = 0;
  }
  else
  {
    v24 = j__qalloc_or_throw(528, (__int64)v32, v22, v23);
    sub_330B10(v24, *(_QWORD *)(a1 + 1496));
  }
  *(_QWORD *)(v24 + 64) = a1;
  *(_QWORD *)(v24 + 416) = a1;
  *(_QWORD *)(v24 + 448) = a1;
  *(_QWORD *)(v24 + 328) = *(_QWORD *)(a1 + 152);
  v25 = *(_QWORD *)(a1 + 168);
  *(_DWORD *)(v24 + 72) = v5;
  *(_QWORD *)(v24 + 336) = v25;
  if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 64) )
    sub_65460(a5);
  v26 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v5);
  if ( v26 )
  {
    v27 = *(_QWORD *)(v26 + 16);
    *(_QWORD *)(v24 + 16) = v27;
    if ( v27 )
      *(_QWORD *)(v27 + 8) = v24;
    *(_QWORD *)(v26 + 16) = v24;
  }
  else
  {
    v30 = *(_QWORD *)(a1 + 520);
    v31 = 0;
    if ( v30 )
    {
      do
      {
        v31 = v30;
        v30 = *(_QWORD *)(v30 + 8);
      }
      while ( v30 );
      *(_QWORD *)(v31 + 8) = v24;
    }
    *(_QWORD *)(v24 + 16) = v31;
  }
  *(_QWORD *)(v24 + 8) = v26;
  if ( v26 == *(_QWORD *)(a1 + 520) )
    *(_QWORD *)(a1 + 520) = v24;
  ++*(_DWORD *)(a1 + 64);
  sub_653E0(a1);
  v28 = *(_QWORD *)(a1 + 784);
  if ( v28 )
    *(_DWORD *)(v28 + 48) = 63;
  return v24;
}

