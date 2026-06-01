__int64 __fastcall sub_1A1640(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // rcx
  int v7; // r12d
  int v8; // edx
  int v9; // r14d
  __int64 v10; // rsi
  bool v11; // zf
  __int64 v12; // rax
  __int64 v13; // rdi
  char v14; // al
  __int64 v15; // rdi
  int v16; // eax
  int v17; // edx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // r15d
  int v22; // r14d
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  _DWORD *v28; // rbx
  __int64 v30; // rdx
  __int64 v31; // r12
  __int64 j; // rbp
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdi
  int v39; // eax
  __int64 v40; // rdx
  int v41; // ecx
  __int64 v42; // rax
  __int64 i; // rdx
  __int64 v44; // r15
  _QWORD *v45; // r13
  __m128i *v46; // rax
  _QWORD *v47; // r12
  __m128i *v48; // rax
  int v49; // eax
  __int64 v50; // rax
  unsigned int v51; // [rsp+0h] [rbp-E8h]
  __int64 v52; // [rsp+0h] [rbp-E8h]
  unsigned int v53; // [rsp+Ch] [rbp-DCh]
  __int64 v54[7]; // [rsp+10h] [rbp-D8h] BYREF
  __int128 v55; // [rsp+48h] [rbp-A0h]
  __int64 v56; // [rsp+58h] [rbp-90h]
  __int128 v57; // [rsp+60h] [rbp-88h]
  __int64 v58; // [rsp+70h] [rbp-78h]
  __int128 v59; // [rsp+78h] [rbp-70h]
  __int64 v60; // [rsp+88h] [rbp-60h]
  __int64 v61; // [rsp+90h] [rbp-58h]
  __int64 v62; // [rsp+98h] [rbp-50h]
  unsigned __int64 v63; // [rsp+A8h] [rbp-40h]

  v63 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 128) )
    return 0;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16));
  v5 = v4;
  if ( *(_BYTE *)(a2 + 320) )
  {
    v12 = *(_QWORD *)(a1 + 16);
    v54[0] = 0;
    v55 = 0;
    v13 = v12 + 8;
    v11 = (*(_BYTE *)(v12 + 288) & 2) == 0;
    v54[1] = 0;
    if ( !v11 )
      v13 = v12 + 144;
    memset(&v54[2], 0, 40);
    v56 = 0;
    v58 = 0;
    v60 = 0;
    v61 = 0;
    v62 = 0;
    v57 = 0;
    v59 = 0;
    v14 = sub_D3D00(v13, v54, a2);
    v15 = *(_QWORD *)(a1 + 16);
    if ( v14 )
    {
      v16 = *(_DWORD *)(a1 + 312);
      if ( v16 > ((*(_BYTE *)(v15 + 288) & 2) == 0) + (int)v55 - 1 )
        v16 = ((*(_BYTE *)(v15 + 288) & 2) == 0) + (_DWORD)v55 - 1;
      v17 = v57;
      *(_DWORD *)(a1 + 184) = v16;
      v18 = *(_DWORD *)(a1 + 336);
      if ( v18 > v17 )
        v18 = v17;
      *(_DWORD *)(a1 + 208) = v18;
LABEL_21:
      if ( !(unsigned __int8)sub_60500(v54) )
      {
        v19 = sub_190800(a2);
        v20 = *(_QWORD *)(a1 + 352);
        if ( v20 > v19 )
          v20 = v19;
        *(_QWORD *)(a1 + 224) = v20;
      }
      sub_194C20(v54);
      v10 = *(_QWORD *)(a1 + 200);
      v9 = *(_DWORD *)(a1 + 336);
      v8 = *(_DWORD *)(a1 + 208);
      v7 = *(_DWORD *)(a1 + 312);
      goto LABEL_26;
    }
    if ( (unsigned __int8)sub_1A10C0(v15, 1, 0) )
    {
      v37 = *(_QWORD *)(a1 + 16);
      v38 = v37 + 8;
      if ( (*(_BYTE *)(v37 + 288) & 2) != 0 )
        v38 = v37 + 144;
      if ( (unsigned __int8)sub_D3D00(v38, v54, a2) )
      {
        v39 = v55;
        v40 = *(_QWORD *)(a1 + 128);
        *(_DWORD *)(a1 + 336) = 0;
        *(_DWORD *)(a1 + 208) = 0;
        *(_DWORD *)(a1 + 312) = v39;
        v41 = v39;
        *(_DWORD *)(a1 + 184) = v39;
        v42 = *(_QWORD *)(a1 + 120);
        for ( i = v42 + (v40 << 7); v42 != i; *(_DWORD *)(v42 - 64) = 0 )
        {
          *(_DWORD *)(v42 + 40) = v41;
          v42 += 128;
        }
        goto LABEL_21;
      }
      if ( !under_debugger )
        sub_37DDE0(51633);
    }
    else if ( !under_debugger )
    {
      sub_37DDE0(52073);
    }
LABEL_89:
    BUG();
  }
  v6 = *(_QWORD *)(a2 + 136);
  v7 = *(_DWORD *)(a1 + 312);
  if ( *(_DWORD *)(a1 + 184) < v7 && v6 < *(_QWORD *)(a1 + 176) + v7 * *(char *)(v4 + 12) )
  {
    *(_QWORD *)(a1 + 176) = -1;
    *(_DWORD *)(a1 + 184) = -1;
    v6 = *(_QWORD *)(a2 + 136);
  }
  v8 = *(_DWORD *)(a1 + 208);
  v9 = *(_DWORD *)(a1 + 336);
  v10 = *(_QWORD *)(a1 + 200);
  if ( v8 < v9 && v10 + v9 * *(char *)(v4 + 13) > v6 )
  {
    v11 = *(_QWORD *)(a1 + 176) == -1;
    *(_QWORD *)(a1 + 200) = -1;
    *(_DWORD *)(a1 + 208) = -1;
    if ( !v11 )
    {
      if ( *(_DWORD *)(a1 + 184) == -1 )
        *(_DWORD *)(a1 + 184) = v7;
      *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 328);
      goto LABEL_12;
    }
    v11 = *(_DWORD *)(a1 + 184) == -1;
    *(_QWORD *)(a1 + 176) = *(_QWORD *)(a1 + 304);
    if ( v11 )
      *(_DWORD *)(a1 + 184) = v7;
    v8 = -1;
    goto LABEL_76;
  }
LABEL_26:
  if ( *(_QWORD *)(a1 + 176) == -1 )
    *(_QWORD *)(a1 + 176) = *(_QWORD *)(a1 + 304);
  if ( *(_DWORD *)(a1 + 184) == -1 )
    *(_DWORD *)(a1 + 184) = v7;
  if ( v10 == -1 )
LABEL_76:
    *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 328);
  if ( v8 == -1 )
LABEL_12:
    *(_DWORD *)(a1 + 208) = v9;
  if ( *(_QWORD *)(a1 + 224) == -1 )
    *(_QWORD *)(a1 + 224) = *(_QWORD *)(a1 + 352);
  if ( *(_BYTE *)(a2 + 320) )
  {
    if ( *(_DWORD *)(a1 + 184) )
      return 1;
    v23 = *(_QWORD *)(a1 + 224);
  }
  else
  {
    v21 = *(_DWORD *)(a1 + 208);
    if ( v21 < v9 )
    {
      v53 = *(char *)(v5 + 13);
      v47 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 120LL);
      v52 = *(_QWORD *)(a1 + 200);
      v48 = sub_CDCE0(a2);
      sub_1949A0((__int64)v48, v52, v47, v21, v9, v53);
      v7 = *(_DWORD *)(a1 + 312);
      *(_DWORD *)(a1 + 208) = *(_DWORD *)(a1 + 336);
    }
    v22 = *(_DWORD *)(a1 + 184);
    if ( v22 < v7 )
    {
      v44 = *(_QWORD *)(a1 + 176);
      v51 = *(char *)(v5 + 12);
      v45 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 96LL);
      v46 = sub_CDCE0(a2);
      sub_1949A0((__int64)v46, v44, v45, v22, v7, v51);
      v22 = *(_DWORD *)(a1 + 312);
      *(_DWORD *)(a1 + 184) = v22;
    }
    v23 = *(_QWORD *)(a1 + 224);
    v24 = *(_QWORD *)(a2 + 144);
    if ( v23 > v24 )
    {
      v34 = *(_QWORD *)(a1 + 16);
      v35 = *(_QWORD *)(v34 + 24);
      if ( (int)v35 > v22 )
      {
        v36 = *(_QWORD *)(v34 + 48);
        if ( *(_DWORD *)(a1 + 208) < (int)v36
          && (*(_DWORD *)(a1 + 312) == (_DWORD)v35 || *(_DWORD *)(a1 + 336) == (_DWORD)v36) )
        {
          *(_QWORD *)(a1 + 224) = v24;
          v23 = v24;
        }
      }
    }
    if ( v22 )
      goto LABEL_46;
  }
  if ( *(_DWORD *)(a1 + 208) || *(_QWORD *)(a2 + 144) < v23 )
  {
LABEL_46:
    if ( !*(_BYTE *)(a2 + 320) )
    {
      v25 = *(_QWORD *)(a2 + 464);
      if ( v25 )
      {
        v26 = 13LL * *(int *)(*(_QWORD *)(a2 + 456) + 4 * v25 - 4);
        v27 = *(_QWORD *)(a2 + 432);
        v28 = (_DWORD *)(v27 + 8 * v26);
        if ( *v28 == 1 && v28[22] == 1 && (int)sub_1BEE80(v27 + 8 * v26) == v23 )
        {
          v49 = v28[6];
          BYTE1(v49) &= 0x7Eu;
          v28[6] = v49 | 0x100000;
          v50 = *(_QWORD *)(a2 + 464);
          if ( v50 )
            *(_QWORD *)(a2 + 464) = v50 - 1;
          sub_1EAA80(v28, *(_QWORD *)(a2 + 1504), *(unsigned int *)(*(_QWORD *)(a2 + 1504) + 80LL), 0);
        }
      }
    }
    return 1;
  }
  if ( *(_QWORD *)(a2 + 144) != v23 )
  {
    if ( !under_debugger )
      sub_37DDE0(51223);
    goto LABEL_89;
  }
  if ( *(_DWORD *)(a1 + 312) )
  {
    *(_DWORD *)(a1 + 184) = 1;
    goto LABEL_46;
  }
  if ( *(_DWORD *)(a1 + 336) )
  {
    *(_DWORD *)(a1 + 208) = 1;
    goto LABEL_46;
  }
  v30 = *(_QWORD *)(a1 + 120);
  if ( v30 )
  {
    v31 = *(_QWORD *)(a1 + 128);
    if ( v31 )
    {
      for ( j = 0; j != v31; ++j )
      {
        v33 = v30 + (j << 7);
        if ( *(_QWORD *)(v33 + 96) )
        {
          *(_QWORD *)(v33 + 104) = 0;
          qfree();
          v30 = *(_QWORD *)(a1 + 120);
        }
      }
    }
    *(_QWORD *)(a1 + 128) = 0;
    qfree();
    *(_QWORD *)(a1 + 120) = 0;
    *(_QWORD *)(a1 + 136) = 0;
  }
  return 0;
}

