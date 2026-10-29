__int64 __fastcall sub_1A5C40(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rcx
  int v9; // r12d
  __int64 v10; // rdx
  int v11; // r14d
  __int64 v12; // rsi
  bool v13; // zf
  __int64 v14; // rax
  __int64 v15; // rdi
  char v16; // al
  __int64 v17; // rdi
  int v18; // eax
  int v19; // edx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // r15d
  int v24; // r14d
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  _DWORD *v30; // rbx
  __int64 v32; // rdx
  __int64 v33; // r12
  __int64 j; // rbp
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdi
  int v42; // eax
  __int64 v43; // rdx
  int v44; // ecx
  __int64 v45; // rax
  __int64 i; // rdx
  __int64 v47; // r15
  _QWORD *v48; // r13
  __m128i *v49; // rax
  _QWORD *v50; // r12
  __m128i *v51; // rax
  int v52; // eax
  __int64 v53; // rax
  unsigned int v54; // [rsp+0h] [rbp-E8h]
  __int64 v55; // [rsp+0h] [rbp-E8h]
  unsigned int v56; // [rsp+Ch] [rbp-DCh]
  __int64 v57[7]; // [rsp+10h] [rbp-D8h] BYREF
  __int128 v58; // [rsp+48h] [rbp-A0h]
  __int64 v59; // [rsp+58h] [rbp-90h]
  __int128 v60; // [rsp+60h] [rbp-88h]
  __int64 v61; // [rsp+70h] [rbp-78h]
  __int128 v62; // [rsp+78h] [rbp-70h]
  __int64 v63; // [rsp+88h] [rbp-60h]
  __int64 v64; // [rsp+90h] [rbp-58h]
  __int64 v65; // [rsp+98h] [rbp-50h]
  unsigned __int64 v66; // [rsp+A8h] [rbp-40h]

  v66 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 128) )
    return 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16));
  v7 = v6;
  if ( *(_BYTE *)(a2 + 320) )
  {
    v14 = *(_QWORD *)(a1 + 16);
    a3 = 0.0;
    v57[0] = 0;
    v58 = 0;
    v15 = v14 + 8;
    v13 = (*(_BYTE *)(v14 + 288) & 2) == 0;
    v57[1] = 0;
    if ( !v13 )
      v15 = v14 + 144;
    memset(&v57[2], 0, 40);
    v59 = 0;
    v61 = 0;
    v63 = 0;
    v64 = 0;
    v65 = 0;
    v60 = 0;
    v62 = 0;
    v16 = sub_D81C0(v15, v57, a2, (__m128)0LL, a4);
    v17 = *(_QWORD *)(a1 + 16);
    if ( v16 )
    {
      v18 = *(_DWORD *)(a1 + 312);
      if ( v18 > ((*(_BYTE *)(v17 + 288) & 2) == 0) + (int)v58 - 1 )
        v18 = ((*(_BYTE *)(v17 + 288) & 2) == 0) + (_DWORD)v58 - 1;
      v19 = v60;
      *(_DWORD *)(a1 + 184) = v18;
      v20 = *(_DWORD *)(a1 + 336);
      if ( v20 > v19 )
        v20 = v19;
      *(_DWORD *)(a1 + 208) = v20;
LABEL_21:
      if ( !(unsigned __int8)sub_64880(v57) )
      {
        v21 = sub_194CC0(a2);
        v22 = *(_QWORD *)(a1 + 352);
        if ( v22 > v21 )
          v22 = v21;
        *(_QWORD *)(a1 + 224) = v22;
      }
      sub_1990E0(v57);
      v12 = *(_QWORD *)(a1 + 200);
      v11 = *(_DWORD *)(a1 + 336);
      v10 = *(unsigned int *)(a1 + 208);
      v9 = *(_DWORD *)(a1 + 312);
      goto LABEL_26;
    }
    if ( (unsigned __int8)sub_1A56C0(v17, 1, 0) )
    {
      v40 = *(_QWORD *)(a1 + 16);
      v41 = v40 + 8;
      if ( (*(_BYTE *)(v40 + 288) & 2) != 0 )
        v41 = v40 + 144;
      if ( (unsigned __int8)sub_D81C0(v41, v57, a2, (__m128)0LL, a4) )
      {
        v42 = v58;
        v43 = *(_QWORD *)(a1 + 128);
        *(_DWORD *)(a1 + 336) = 0;
        *(_DWORD *)(a1 + 208) = 0;
        *(_DWORD *)(a1 + 312) = v42;
        v44 = v42;
        *(_DWORD *)(a1 + 184) = v42;
        v45 = *(_QWORD *)(a1 + 120);
        for ( i = v45 + (v43 << 7); v45 != i; *(_DWORD *)(v45 - 64) = 0 )
        {
          *(_DWORD *)(v45 + 40) = v44;
          v45 += 128;
        }
        goto LABEL_21;
      }
      if ( !under_debugger )
        sub_383060(0xC9B1u, 0.0);
    }
    else if ( !under_debugger )
    {
      sub_383060(0xCB69u, 0.0);
    }
LABEL_89:
    BUG();
  }
  v8 = *(_QWORD *)(a2 + 136);
  v9 = *(_DWORD *)(a1 + 312);
  if ( *(_DWORD *)(a1 + 184) < v9 && v8 < *(_QWORD *)(a1 + 176) + v9 * *(char *)(v6 + 12) )
  {
    *(_QWORD *)(a1 + 176) = -1;
    *(_DWORD *)(a1 + 184) = -1;
    v8 = *(_QWORD *)(a2 + 136);
  }
  v10 = *(unsigned int *)(a1 + 208);
  v11 = *(_DWORD *)(a1 + 336);
  v12 = *(_QWORD *)(a1 + 200);
  if ( (int)v10 < v11 && v12 + v11 * *(char *)(v6 + 13) > v8 )
  {
    v13 = *(_QWORD *)(a1 + 176) == -1;
    *(_QWORD *)(a1 + 200) = -1;
    *(_DWORD *)(a1 + 208) = -1;
    if ( !v13 )
    {
      if ( *(_DWORD *)(a1 + 184) == -1 )
        *(_DWORD *)(a1 + 184) = v9;
      *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 328);
      goto LABEL_12;
    }
    v13 = *(_DWORD *)(a1 + 184) == -1;
    *(_QWORD *)(a1 + 176) = *(_QWORD *)(a1 + 304);
    if ( v13 )
      *(_DWORD *)(a1 + 184) = v9;
    v10 = 0xFFFFFFFFLL;
    goto LABEL_76;
  }
LABEL_26:
  if ( *(_QWORD *)(a1 + 176) == -1 )
    *(_QWORD *)(a1 + 176) = *(_QWORD *)(a1 + 304);
  if ( *(_DWORD *)(a1 + 184) == -1 )
    *(_DWORD *)(a1 + 184) = v9;
  if ( v12 == -1 )
LABEL_76:
    *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 328);
  if ( (_DWORD)v10 == -1 )
LABEL_12:
    *(_DWORD *)(a1 + 208) = v11;
  if ( *(_QWORD *)(a1 + 224) == -1 )
    *(_QWORD *)(a1 + 224) = *(_QWORD *)(a1 + 352);
  if ( *(_BYTE *)(a2 + 320) )
  {
    if ( *(_DWORD *)(a1 + 184) )
      return 1;
    v25 = *(_QWORD *)(a1 + 224);
  }
  else
  {
    v23 = *(_DWORD *)(a1 + 208);
    if ( v23 < v11 )
    {
      v56 = *(char *)(v7 + 13);
      v50 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 120LL);
      v55 = *(_QWORD *)(a1 + 200);
      v51 = sub_D21A0(a2, v55, v10, v8, a3);
      v12 = v55;
      sub_198E60((__int64)v51, v55, v50, (unsigned int)v23, v11, v56, a3);
      v9 = *(_DWORD *)(a1 + 312);
      *(_DWORD *)(a1 + 208) = *(_DWORD *)(a1 + 336);
    }
    v24 = *(_DWORD *)(a1 + 184);
    if ( v24 < v9 )
    {
      v47 = *(_QWORD *)(a1 + 176);
      v54 = *(char *)(v7 + 12);
      v48 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 96LL);
      v49 = sub_D21A0(a2, v12, v10, v8, a3);
      sub_198E60((__int64)v49, v47, v48, (unsigned int)v24, v9, v54, a3);
      v24 = *(_DWORD *)(a1 + 312);
      *(_DWORD *)(a1 + 184) = v24;
    }
    v25 = *(_QWORD *)(a1 + 224);
    v26 = *(_QWORD *)(a2 + 144);
    if ( v25 > v26 )
    {
      v37 = *(_QWORD *)(a1 + 16);
      v38 = *(_QWORD *)(v37 + 24);
      if ( (int)v38 > v24 )
      {
        v39 = *(_QWORD *)(v37 + 48);
        if ( *(_DWORD *)(a1 + 208) < (int)v39
          && (*(_DWORD *)(a1 + 312) == (_DWORD)v38 || *(_DWORD *)(a1 + 336) == (_DWORD)v39) )
        {
          *(_QWORD *)(a1 + 224) = v26;
          v25 = v26;
        }
      }
    }
    if ( v24 )
      goto LABEL_46;
  }
  if ( *(_DWORD *)(a1 + 208) || *(_QWORD *)(a2 + 144) < v25 )
  {
LABEL_46:
    if ( !*(_BYTE *)(a2 + 320) )
    {
      v27 = *(_QWORD *)(a2 + 464);
      if ( v27 )
      {
        v28 = 13LL * *(int *)(*(_QWORD *)(a2 + 456) + 4 * v27 - 4);
        v29 = *(_QWORD *)(a2 + 432);
        v30 = (_DWORD *)(v29 + 8 * v28);
        if ( *v30 == 1 && v30[22] == 1 && (int)sub_1C3500((_DWORD *)(v29 + 8 * v28)) == v25 )
        {
          v52 = v30[6];
          BYTE1(v52) &= 0x7Eu;
          v30[6] = v52 | 0x100000;
          v53 = *(_QWORD *)(a2 + 464);
          if ( v53 )
            *(_QWORD *)(a2 + 464) = v53 - 1;
          sub_1EF680(v30, *(_QWORD **)(a2 + 1504), *(_DWORD *)(*(_QWORD *)(a2 + 1504) + 80LL), 0);
        }
      }
    }
    return 1;
  }
  if ( *(_QWORD *)(a2 + 144) != v25 )
  {
    if ( !under_debugger )
      sub_383060(0xC817u, a3);
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
  v32 = *(_QWORD *)(a1 + 120);
  if ( v32 )
  {
    v33 = *(_QWORD *)(a1 + 128);
    if ( v33 )
    {
      for ( j = 0; j != v33; ++j )
      {
        v35 = v32 + (j << 7);
        v36 = *(_QWORD *)(v35 + 96);
        if ( v36 )
        {
          *(_QWORD *)(v35 + 104) = 0;
          qfree(v36);
          v32 = *(_QWORD *)(a1 + 120);
        }
      }
    }
    *(_QWORD *)(a1 + 128) = 0;
    qfree(v32);
    *(_QWORD *)(a1 + 120) = 0;
    *(_QWORD *)(a1 + 136) = 0;
  }
  return 0;
}

