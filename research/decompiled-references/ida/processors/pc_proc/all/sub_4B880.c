__int64 __fastcall sub_4B880(__int64 a1, __int64 a2, const void *a3, char a4)
{
  _QWORD *v7; // rax
  __m128i si128; // xmm1
  __int64 v9; // rdi
  bool v10; // zf
  unsigned int v11; // r12d
  __int64 v13; // rcx
  int v14; // edx
  __int16 v15; // ax
  __int16 v16; // ax
  __int16 v17; // [rsp+0h] [rbp-42Ah]
  __int64 (__fastcall **v18)(); // [rsp+12h] [rbp-418h] BYREF
  char v19; // [rsp+1Ah] [rbp-410h]
  _BYTE v20[360]; // [rsp+22h] [rbp-408h] BYREF
  _QWORD v21[19]; // [rsp+18Ah] [rbp-2A0h] BYREF
  int v22; // [rsp+222h] [rbp-208h]
  char v23; // [rsp+32Bh] [rbp-FFh]
  void *v24; // [rsp+33Ah] [rbp-F0h]
  __int64 v25; // [rsp+342h] [rbp-E8h]
  __int128 v26; // [rsp+34Ah] [rbp-E0h]
  __int64 v27; // [rsp+35Ah] [rbp-D0h]
  __int128 v28; // [rsp+362h] [rbp-C8h]
  const __m128i *v29; // [rsp+372h] [rbp-B8h] BYREF
  __int128 v30; // [rsp+37Ah] [rbp-B0h]
  __int64 v31; // [rsp+38Ah] [rbp-A0h]
  __int64 v32; // [rsp+392h] [rbp-98h]
  char v33; // [rsp+39Ah] [rbp-90h]
  __int64 v34; // [rsp+3A2h] [rbp-88h]
  char v35; // [rsp+3AAh] [rbp-80h]
  __int128 v36; // [rsp+3B2h] [rbp-78h]
  __int64 v37; // [rsp+3C2h] [rbp-68h]
  __int128 v38; // [rsp+3CAh] [rbp-60h]
  __int16 v39; // [rsp+3DAh] [rbp-50h]
  char v40; // [rsp+3DCh] [rbp-4Eh]
  __int64 v41; // [rsp+3DEh] [rbp-4Ch]
  __int16 v42; // [rsp+3E6h] [rbp-44h]
  unsigned __int64 v43; // [rsp+3EAh] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v18 = off_18AA98;
  v7 = &v20[40];
  v19 = 1;
  *(_QWORD *)&v20[24] = 0;
  *(_QWORD *)&v20[32] = 0;
  memset(v20, 255, 24);
  do
  {
    *(_WORD *)v7 = 0;
    v7 += 5;
    *((_WORD *)v7 - 19) = 0;
    *((_WORD *)v7 - 18) = 0;
    *((_DWORD *)v7 - 2) = 0;
    *((_WORD *)v7 - 17) = 0;
    *((_OWORD *)v7 - 2) = 0;
    *(v7 - 2) = 0;
  }
  while ( v21 != v7 );
  v21[0] = a2;
  v22 = -1;
  v23 = 0;
  v24 = &unk_96D20;
  v25 = 0;
  v27 = 0;
  v29 = nullptr;
  v26 = 0;
  v28 = 0;
  v30 = 0;
  if ( a2 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_960E0);
    v9 = *(_QWORD *)(a2 + 96);
    *(_DWORD *)a2 = 0x800000;
    *(_WORD *)(a2 + 4) = 0;
    *(__m128i *)(a2 + 8) = si128;
    *(_DWORD *)(a2 + 40) = 0;
    *(_QWORD *)(a2 + 48) = 0;
    *(_QWORD *)(a2 + 56) = 0;
    *(_DWORD *)(a2 + 64) = -1;
    *(_BYTE *)(a2 + 68) = 0;
    *(_QWORD *)(a2 + 72) = 0;
    *(_DWORD *)(a2 + 80) = 2;
    *(_QWORD *)(a2 + 88) = -1;
    *(_OWORD *)(a2 + 24) = -1;
    if ( v9 )
    {
      *(_QWORD *)(a2 + 104) = 0;
      qfree();
      v10 = (_QWORD)v30 == 3;
      *(_QWORD *)(a2 + 96) = 0;
      *(_OWORD *)(a2 + 104) = 0;
      if ( v10 )
        goto LABEL_7;
    }
    else
    {
      *(_OWORD *)(a2 + 104) = 0;
    }
  }
  sub_48780(&v29, (const __m128i *)((char *)&dword_0 + 3));
LABEL_7:
  v18 = off_18AC40;
  v36 = -1;
  v39 = 256;
  v31 = a1;
  v22 = 0;
  v32 = -1;
  v33 = 0;
  v34 = -1;
  v35 = 0;
  v37 = 0;
  v40 = 0;
  v41 = -1;
  v42 = 10;
  v38 = -1;
  *(_DWORD *)v21[0] |= 0x40000u;
  qmemcpy(v20, a3, sizeof(v20));
  v18 = off_1814A8;
  if ( !(unsigned __int8)match_jpt() )
  {
LABEL_8:
    v11 = 0;
    goto LABEL_9;
  }
  v13 = v37;
  v14 = *(_DWORD *)v21[0] & 0x404;
  if ( v14 )
  {
    if ( v14 == 4 )
    {
      v13 = 4 * v37;
    }
    else if ( v14 != 1024 )
    {
      v13 = 8 * v37;
    }
  }
  else
  {
    v13 = 2 * v37;
  }
  *(_QWORD *)(v21[0] + 8LL) = *(_QWORD *)(*(_QWORD *)(v31 + 32) + 16LL) & (*(_QWORD *)(v21[0] + 8LL) - v13);
  if ( !HIBYTE(v42) )
    sub_37300();
  if ( v21[6] == -1 )
  {
    if ( !a4 )
      goto LABEL_8;
    *(_WORD *)(a2 + 4) = -1;
    v11 = check_flat_jump_table();
    v16 = *(_WORD *)(a2 + 4);
    if ( v11 )
    {
      if ( v16 )
        goto LABEL_32;
    }
    else if ( v16 == -1 )
    {
      goto LABEL_8;
    }
LABEL_26:
    netnode_supset();
    goto LABEL_8;
  }
  v17 = *(_WORD *)(a2 + 4);
  v11 = check_flat_jump_table();
  v15 = *(_WORD *)(a2 + 4);
  if ( !v11 || v17 != v15 )
  {
    if ( v15 == -1 )
      goto LABEL_8;
    goto LABEL_26;
  }
LABEL_32:
  sub_4B7A0((__int64)&v18);
  if ( v11 == 1 )
  {
    if ( *((_QWORD *)&v36 + 1) != -1 )
      sub_496A0(&v18);
    mark_switch_insns_jpt();
  }
LABEL_9:
  v18 = off_18AA98;
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree();
  }
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree();
  }
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  return v11;
}

