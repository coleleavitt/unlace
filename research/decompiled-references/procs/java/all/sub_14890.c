unsigned __int64 __fastcall sub_14890(__int64 a1)
{
  unsigned int v2; // ebp
  unsigned int v3; // r14d
  unsigned int v4; // r12d
  unsigned int v5; // ebx
  unsigned __int16 v6; // ax
  __int64 v7; // rdi
  unsigned int v8; // r12d
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  __int64 v11; // r12
  unsigned int v12; // eax
  unsigned int v13; // ebp
  unsigned __int16 v14; // ax
  int v15; // ebx
  unsigned __int16 v16; // ax
  int v17; // esi
  int v18; // ebx
  __int64 v19; // r12
  __int64 v20; // rdi
  __int64 v22; // rdi
  unsigned __int16 v23; // [rsp+Eh] [rbp-27Ah]
  unsigned int v24; // [rsp+18h] [rbp-270h]
  unsigned int v25; // [rsp+1Ch] [rbp-26Ch]
  _BYTE v26[2]; // [rsp+28h] [rbp-260h] BYREF
  unsigned __int16 v27; // [rsp+2Ah] [rbp-25Eh]
  __int16 v28; // [rsp+2Eh] [rbp-25Ah]
  unsigned __int16 v29; // [rsp+32h] [rbp-256h]
  _BYTE v30[2]; // [rsp+34h] [rbp-254h] BYREF
  unsigned __int16 v31; // [rsp+36h] [rbp-252h]
  _BYTE v32[520]; // [rsp+40h] [rbp-248h] BYREF
  unsigned __int64 v33; // [rsp+248h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  sub_E500((__int64)"Sorting external references...");
  if ( !*(_WORD *)(a1 + 33081) )
  {
    v3 = 0;
    netnode_supdel_all(*(_QWORD *)(a1 + 33328), 48);
    if ( !*(_WORD *)(a1 + 33017) )
    {
      *(_WORD *)(a1 + 33081) = 0;
LABEL_39:
      netnode_kill(a1 + 33328);
      v22 = *(_QWORD *)(a1 + 33065);
      *(_QWORD *)(a1 + 33073) = 0;
      del_segm(v22, 1);
      *(_QWORD *)(a1 + 33065) = 0;
      goto LABEL_34;
    }
LABEL_14:
    v15 = 1;
    while ( 1 )
    {
      while ( 1 )
      {
        netnode_supval(*(_QWORD *)(a1 + 33336), (unsigned __int16)v15, v26, 12, 83);
        if ( v26[0] > 6u )
          break;
        LOWORD(v15) = v15 - ((v26[0] < 5u) - 1);
LABEL_16:
        v16 = *(_WORD *)(a1 + 33017);
        if ( v16 < (unsigned __int16)++v15 )
          goto LABEL_23;
      }
      if ( v26[0] != 7 || v29 != (_WORD)v15 || *(_WORD *)(a1 + 33023) == (_WORD)v15 || v27 )
        goto LABEL_16;
      ++v3;
      v17 = (unsigned __int16)v15++;
      sub_1D360(a1, v17, (unsigned int)v26, v3, (unsigned int)v32, 512, 1, 3);
      v16 = *(_WORD *)(a1 + 33017);
      if ( v16 < (unsigned __int16)v15 )
      {
LABEL_23:
        if ( !v16 )
          goto LABEL_32;
        v18 = 1;
        while ( 2 )
        {
          while ( 1 )
          {
            v19 = (unsigned __int16)v18;
            netnode_supval(*(_QWORD *)(a1 + 33336), (unsigned __int16)v18, v26, 12, 83);
            if ( v26[0] <= 6u )
              break;
            if ( v26[0] != 7 || !v29 || v29 == (_WORD)v18 )
              goto LABEL_26;
            ++v18;
            netnode_supval(*(_QWORD *)(a1 + 33336), v29, v30, 12, 83);
            v20 = *(_QWORD *)(a1 + 33336);
            v27 = v31;
            netnode_supset(v20, v19, v26, 12, 83);
            if ( *(_WORD *)(a1 + 33017) < (unsigned __int16)v18 )
              goto LABEL_32;
          }
          LOWORD(v18) = v18 - ((v26[0] < 5u) - 1);
LABEL_26:
          if ( *(_WORD *)(a1 + 33017) < (unsigned __int16)++v18 )
            goto LABEL_32;
          continue;
        }
      }
    }
  }
  v2 = 1;
  v3 = 0;
  do
  {
    v4 = netnode_altval(*(_QWORD *)(a1 + 33328), v2, 48);
    v5 = v4;
    v6 = v2++;
    if ( !v4 )
      goto LABEL_36;
    show_auto(*(unsigned __int16 *)(a1 + 33081) - v6, 0);
    netnode_supval(*(_QWORD *)(a1 + 33336), v4, v26, 12, 83);
    v7 = *(_QWORD *)(a1 + 33336);
    if ( v28 == *(_WORD *)(a1 + 33023) )
    {
      v27 = 0;
      netnode_supset(v7, v4, v26, 12, 83);
LABEL_36:
      v14 = *(_WORD *)(a1 + 33081);
      continue;
    }
    v8 = v27;
    v23 = v27;
    v24 = v27;
    netnode_supval(v7, v27, v30, 12, 83);
    v9 = v3 + 1;
    v3 += 2;
    sub_1D360(a1, v8, (unsigned int)v30, v9, (unsigned int)v32, 512, 1, 3);
    sub_1D360(a1, v5, (unsigned int)v26, v3, (unsigned int)v32, 512, 0, 3);
    sub_1A6B0(a1, v2, v8, v3, v26);
    if ( *(_WORD *)(a1 + 33081) < (unsigned __int16)v2 )
      break;
    v25 = v2;
    v10 = v2;
    do
    {
      v11 = v10++;
      v12 = netnode_altval(*(_QWORD *)(a1 + 33328), v11, 48);
      v13 = v12;
      if ( v12 )
      {
        netnode_supval(*(_QWORD *)(a1 + 33336), v12, v30, 12, 83);
        if ( v23 == v31 )
        {
          sub_1D360(a1, v13, (unsigned int)v30, ++v3, (unsigned int)v32, 512, 0, 3);
          netnode_supdel(*(_QWORD *)(a1 + 33328), v11, 48);
          sub_1A6B0(a1, v10, v24, v3, v26);
        }
      }
      v14 = *(_WORD *)(a1 + 33081);
    }
    while ( v14 >= (unsigned __int16)v10 );
    v2 = v25;
  }
  while ( v14 >= (unsigned __int16)v2 );
  netnode_supdel_all(*(_QWORD *)(a1 + 33328), 48);
  if ( *(_WORD *)(a1 + 33017) )
    goto LABEL_14;
LABEL_32:
  *(_WORD *)(a1 + 33081) = v3;
  if ( !(_WORD)v3 )
    goto LABEL_39;
  set_segm_end(*(_QWORD *)(a1 + 33065), *(_QWORD *)(a1 + 33065) + (unsigned __int16)v3 + 1LL, 1);
  create_data(*(_QWORD *)(a1 + 33065), 0, 1, -1);
LABEL_34:
  sub_E500((__int64)"OK\n");
  return v33 - __readfsqword(0x28u);
}
