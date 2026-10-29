__int64 __fastcall sub_16EA60(__int64 a1, double a2)
{
  unsigned int v3; // ebp
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // r13
  __int64 v9; // r12
  unsigned int v10; // eax
  __int64 v11; // r14
  __int64 *v12; // r11
  __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  __int64 v15; // r9
  _QWORD *v16; // rdx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // r12
  __int64 *v20; // rbp
  _QWORD *v21; // r14
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r13
  _QWORD *v24; // rdi
  char *v25; // r13
  int v26; // eax
  int v27; // eax
  int v28; // eax
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // r10
  __int64 v32; // r8
  __int64 v33; // rdx
  _QWORD *v34; // rax
  __int64 v35; // r12
  unsigned __int64 v36; // rax
  __int64 *v37; // rax
  __int64 v38; // rdi
  int v39; // eax
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // [rsp+0h] [rbp-A8h]
  __int64 v44; // [rsp+8h] [rbp-A0h]
  __int64 *v45; // [rsp+8h] [rbp-A0h]
  __int64 *v46; // [rsp+8h] [rbp-A0h]
  char *v47; // [rsp+10h] [rbp-98h]
  __int64 v48; // [rsp+20h] [rbp-88h]
  __int64 *v49; // [rsp+20h] [rbp-88h]
  __int64 *v50; // [rsp+20h] [rbp-88h]
  __int64 *v51; // [rsp+20h] [rbp-88h]
  __int64 v52; // [rsp+28h] [rbp-80h]
  __int64 v53; // [rsp+30h] [rbp-78h]
  unsigned __int8 v54; // [rsp+3Fh] [rbp-69h]
  __int64 v55[2]; // [rsp+48h] [rbp-60h] BYREF
  __int128 v56; // [rsp+58h] [rbp-50h]
  unsigned __int64 v57; // [rsp+68h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 76) != 5 || **(_DWORD **)(a1 + 48) != 53 || *(_DWORD *)(a1 + 352) != 1 )
    return 0;
  v5 = *(_QWORD *)(a1 + 64);
  v6 = **(unsigned int **)(a1 + 344);
  if ( (unsigned int)v6 >= *(_DWORD *)(v5 + 64) )
    sub_167AF0(a2);
  v7 = *(_QWORD *)(*(_QWORD *)(v5 + 528) + 8 * v6);
  if ( *(_DWORD *)(v7 + 76) != 4 )
    return 0;
  v8 = *(_QWORD *)(v7 + 56);
  v9 = v8 + 48;
  if ( !(unsigned __int8)sub_11FD80((char *)(v8 + 48), v55, 0) )
    return 0;
  if ( *(_DWORD *)v8 == 48 )
  {
    ++v55[0];
  }
  else if ( *(_DWORD *)v8 != 46 )
  {
    return 0;
  }
  if ( *(_BYTE *)(v8 + 64) != 7 )
    return 0;
  if ( *(_DWORD *)(a1 + 72) != *(_DWORD *)(v8 + 72) )
    return 0;
  v47 = (char *)(v8 + 32);
  v43 = *(_QWORD *)(a1 + 48);
  LOBYTE(v10) = sub_125B60((unsigned __int8 *)(v43 + 32), v8 + 32, 0, a2);
  v3 = v10;
  if ( !(_BYTE)v10 )
    return 0;
  v11 = *(_QWORD *)(v7 + 8);
  v12 = *(__int64 **)(v43 + 56);
  v13 = *v12;
  v14 = v12[1];
  v15 = *v12;
  if ( !v14 )
  {
    if ( !v55[0] )
      goto LABEL_59;
    return 0;
  }
  v16 = (_QWORD *)(v13 + 8);
  v17 = 0;
  while ( *v16 )
  {
    ++v17;
    v16 += 3;
    if ( v14 == v17 )
      goto LABEL_40;
  }
  v18 = *(_DWORD *)(v12[3] + 4 * v17);
  if ( v18 != -1 )
  {
    if ( *(_DWORD *)(v11 + 72) != v18 )
      return 0;
    goto LABEL_20;
  }
LABEL_40:
  v31 = v13 + 24 * v14;
  if ( v31 == v13 )
  {
    v33 = 0;
  }
  else
  {
    v32 = *v12;
    v33 = 0;
    do
    {
      v34 = *(_QWORD **)v32;
      v35 = *(_QWORD *)v32 + 8LL * *(_QWORD *)(v32 + 8);
      if ( v35 != *(_QWORD *)v32 )
      {
        do
          v33 += *v34++ < v55[0];
        while ( (_QWORD *)v35 != v34 );
      }
      v32 += 24;
    }
    while ( v31 != v32 );
    v9 = v8 + 48;
  }
  if ( v33 != v55[0] )
    return 0;
  v36 = 0;
  while ( *(_DWORD *)(v12[3] + 4 * v36) != *(_DWORD *)(v11 + 72) )
  {
    if ( v14 == ++v36 )
      goto LABEL_59;
  }
  if ( v36 < v14 )
  {
    v37 = (__int64 *)(v13 + 24 * v36);
    v38 = *v37;
    if ( !*v37 )
    {
LABEL_20:
      v44 = v11 + 344;
      goto LABEL_21;
    }
    v49 = *(__int64 **)(v43 + 56);
    v37[1] = 0;
    v45 = v37;
    qfree(v38);
    v12 = v49;
    *v45 = 0;
    v45[2] = 0;
    v44 = v11 + 344;
    goto LABEL_53;
  }
LABEL_59:
  v40 = v12[2];
  v55[1] = 0;
  v56 = 0;
  if ( v40 < v14 + 1 )
  {
    v46 = v12;
    v42 = qvector_reserve((__int64)v12, v13, v14 + 1, 24);
    v12 = v46;
    v15 = v42;
    *v46 = v42;
    v14 = v46[1];
  }
  a2 = 0.0;
  v41 = v15 + 24 * v14;
  *(_QWORD *)v41 = 0;
  *(_OWORD *)(v41 + 8) = 0;
  ++v12[1];
  v51 = v12;
  sub_167D40(v12 + 3, *(_DWORD *)(v11 + 72));
  sub_167D40((__int64 *)(a1 + 368), *(_DWORD *)(v11 + 72));
  v44 = v11 + 344;
  sub_167D40((__int64 *)(v11 + 344), *(_DWORD *)(a1 + 72));
  v12 = v51;
LABEL_53:
  if ( v12[1] )
  {
    v13 = *v12;
LABEL_21:
    v48 = v9;
    v54 = v3;
    v19 = 0;
    v20 = v12;
    v52 = v8;
    v53 = v11;
    while ( 1 )
    {
      v21 = (_QWORD *)(v13 + 24 * v19);
      v22 = v21[1];
      if ( v22 )
      {
        v23 = 0;
        do
        {
          v24 = (_QWORD *)(*v21 + 8 * v23);
          if ( *v24 < v55[0] )
          {
            v22 = v21[1];
            ++v23;
          }
          else
          {
            memmove(v24, v24 + 1, 8 * (v22 - v23) - 8);
            v22 = v21[1] - 1LL;
            v21[1] = v22;
          }
        }
        while ( v23 < v22 );
        if ( !v22 )
          sub_122440(v20, a1, v19, a2);
      }
      if ( ++v19 >= (unsigned __int64)v20[1] )
        break;
      v13 = *v20;
    }
    v12 = v20;
    v9 = v48;
    v8 = v52;
    v11 = v53;
    v3 = v54;
  }
  if ( v12[4] == 1 && !*(_QWORD *)(*v12 + 8) )
  {
    v50 = v12;
    sub_159B40(v43, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL), a1, v43, 0, a2);
    *(_DWORD *)v43 = 55;
    LODWORD(v50) = *(_DWORD *)v50[3];
    sub_11CDA0(v43 + 32);
    *(_BYTE *)(v43 + 32) = 7;
    *(_DWORD *)(v43 + 40) = (_DWORD)v50;
    sub_11CDA0(v43 + 48);
    v39 = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 76) = 3;
    BYTE1(v39) &= ~2u;
    LOBYTE(v39) = v39 | 0x80;
    *(_DWORD *)(a1 + 24) = v39;
  }
  *(_DWORD *)v8 = 55;
  v25 = (char *)(v8 + 64);
  sub_11CA10(v47, v25);
  sub_11CDA0(v9);
  sub_11CDA0((__int64)v25);
  sub_167CE0(v7 + 368, *(_DWORD *)(v11 + 72));
  sub_167CE0(v44, *(_DWORD *)(v7 + 72));
  *(_DWORD *)(v7 + 76) = 3;
  v26 = *(_DWORD *)(a1 + 24);
  BYTE1(v26) &= ~2u;
  LOBYTE(v26) = v26 | 0x80;
  *(_DWORD *)(a1 + 24) = v26;
  v27 = *(_DWORD *)(v7 + 24);
  BYTE1(v27) &= ~2u;
  LOBYTE(v27) = v27 | 0x80;
  *(_DWORD *)(v7 + 24) = v27;
  if ( *(_DWORD *)(v11 + 76) != 1 )
  {
    v28 = *(_DWORD *)(v11 + 24);
    BYTE1(v28) &= ~2u;
    LOBYTE(v28) = v28 | 0x80;
    *(_DWORD *)(v11 + 24) = v28;
  }
  **(_DWORD **)(a1 + 64) |= 0x400u;
  v29 = *(_QWORD *)(a1 + 64);
  v30 = *(_QWORD *)(v29 + 784);
  if ( v30 )
  {
    *(_DWORD *)(v30 + 48) = 63;
    v29 = *(_QWORD *)(a1 + 64);
  }
  sub_66FA0(v29, 1);
  return v3;
}

