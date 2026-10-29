__int64 __fastcall sub_68500(__int64 a1, int a2, char a3)
{
  __int64 v3; // rbx
  _QWORD *i; // rcx
  __int64 v7; // rsi
  _DWORD *v8; // rdi
  _DWORD *v9; // rax
  __int64 v10; // rsi
  _DWORD *v11; // rdi
  _DWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // edx
  int v17; // ecx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  _QWORD v28[5]; // [rsp+0h] [rbp-68h] BYREF
  char v29; // [rsp+28h] [rbp-40h]
  int v30; // [rsp+2Ch] [rbp-3Ch]
  int v31; // [rsp+30h] [rbp-38h]
  unsigned __int64 v32; // [rsp+34h] [rbp-34h]
  int v33; // [rsp+3Ch] [rbp-2Ch]
  unsigned __int64 v34; // [rsp+48h] [rbp-20h]

  v3 = a2;
  v34 = __readfsqword(0x28u);
  if ( a2 < 0 || *(_DWORD *)(a1 + 64) < a2 )
  {
    if ( !under_debugger )
      sub_3835A0(50667);
    goto LABEL_51;
  }
  if ( *(_DWORD *)(a1 + 64) == a2 )
    return sub_679D0(a1, -1, 0);
  for ( i = *(_QWORD **)(a1 + 520); i; i = (_QWORD *)i[1] )
  {
    v7 = i[47];
    v8 = (_DWORD *)i[46];
    v9 = v8;
    if ( 4 * v7 )
    {
      do
      {
        if ( (int)v3 <= *v9 )
        {
          ++*v9;
          v8 = (_DWORD *)i[46];
          v7 = i[47];
        }
        ++v9;
      }
      while ( v9 != &v8[v7] );
    }
    v10 = i[44];
    v11 = (_DWORD *)i[43];
    v12 = v11;
    if ( 4 * v10 )
    {
      do
      {
        if ( (int)v3 <= *v12 )
        {
          ++*v12;
          v11 = (_DWORD *)i[43];
          v10 = i[44];
        }
        ++v12;
      }
      while ( v12 != &v11[v10] );
    }
  }
  sub_67E80((int **)(a1 + 1448), v3);
  v13 = *(_QWORD *)(a1 + 432);
  v14 = 104LL * *(_QWORD *)(a1 + 440);
  v15 = v13 + v14;
  if ( a3 )
  {
    for ( ; v13 != v15; v13 += 104 )
    {
      v16 = *(_DWORD *)(v13 + 92);
      if ( v16 >= (int)v3 )
        *(_DWORD *)(v13 + 92) = v16 + 1;
    }
  }
  else if ( v14 )
  {
    while ( *(_DWORD *)(v13 + 92) < (int)v3 )
    {
      v13 += 104;
      if ( v13 == v15 )
        goto LABEL_19;
    }
    if ( !under_debugger )
      sub_3835A0(51229);
LABEL_51:
    BUG();
  }
LABEL_19:
  v17 = *(_DWORD *)(a1 + 64);
  v18 = v3;
  if ( v17 > (int)v3 )
  {
    while ( 1 )
    {
      v19 = (unsigned int)v18++;
      if ( (unsigned int)v19 >= v17 )
        break;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v19) + 72LL) = v18;
      v17 = *(_DWORD *)(a1 + 64);
      if ( v18 >= v17 )
        goto LABEL_22;
    }
    if ( !under_debugger )
      sub_3835A0(52719);
    goto LABEL_51;
  }
LABEL_22:
  memset(&v28[1], 0, 32);
  v28[0] = off_4D6228;
  v29 = 0;
  v30 = v3;
  v31 = v17;
  v32 = 0xFFFFFFFF00000001LL;
  v33 = -1;
  ((void (__fastcall *)(__int64, _QWORD *))sub_11F5F0)(a1, v28);
  if ( (*(_BYTE *)a1 & 4) != 0 )
  {
    v20 = j__qalloc_or_throw();
    sub_330E30(v20, *(_QWORD *)(a1 + 1496));
    *(_QWORD *)(v20 + 536) = 0;
    *(_QWORD *)v20 = off_4D6208;
    *(_QWORD *)(v20 + 528) = off_4E7B78;
    *(_BYTE *)(v20 + 560) = 0;
    *(_QWORD *)(v20 + 564) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v20 + 576) = 0;
    *(_QWORD *)(v20 + 600) = 0;
    *(_QWORD *)(v20 + 624) = 0;
    *(_QWORD *)(v20 + 648) = 0;
    *(_DWORD *)(v20 + 672) = 0;
    *(_QWORD *)(v20 + 680) = 0;
    *(_QWORD *)(v20 + 704) = 0;
    *(_OWORD *)(v20 + 544) = 0;
    *(_OWORD *)(v20 + 584) = 0;
    *(_OWORD *)(v20 + 608) = 0;
    *(_OWORD *)(v20 + 632) = 0;
    *(_OWORD *)(v20 + 656) = 0;
    *(_OWORD *)(v20 + 688) = 0;
    *(_OWORD *)(v20 + 712) = 0;
  }
  else
  {
    v20 = j__qalloc_or_throw();
    sub_330E30(v20, *(_QWORD *)(a1 + 1496));
  }
  *(_QWORD *)(v20 + 64) = a1;
  *(_QWORD *)(v20 + 416) = a1;
  *(_QWORD *)(v20 + 448) = a1;
  *(_QWORD *)(v20 + 328) = *(_QWORD *)(a1 + 152);
  v21 = *(_QWORD *)(a1 + 168);
  *(_DWORD *)(v20 + 72) = v3;
  *(_QWORD *)(v20 + 336) = v21;
  if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 64) )
    sub_64E60();
  v22 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v3);
  if ( v22 )
  {
    v23 = *(_QWORD *)(v22 + 16);
    *(_QWORD *)(v20 + 16) = v23;
    if ( v23 )
      *(_QWORD *)(v23 + 8) = v20;
    *(_QWORD *)(v22 + 16) = v20;
  }
  else
  {
    v26 = *(_QWORD *)(a1 + 520);
    v27 = 0;
    if ( v26 )
    {
      do
      {
        v27 = v26;
        v26 = *(_QWORD *)(v26 + 8);
      }
      while ( v26 );
      *(_QWORD *)(v27 + 8) = v20;
    }
    *(_QWORD *)(v20 + 16) = v27;
  }
  *(_QWORD *)(v20 + 8) = v22;
  if ( v22 == *(_QWORD *)(a1 + 520) )
    *(_QWORD *)(a1 + 520) = v20;
  ++*(_DWORD *)(a1 + 64);
  sub_64DE0(a1);
  v24 = *(_QWORD *)(a1 + 784);
  if ( v24 )
    *(_DWORD *)(v24 + 48) = 63;
  return v20;
}

