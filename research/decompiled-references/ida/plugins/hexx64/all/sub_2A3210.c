__int64 __fastcall sub_2A3210(
        __int64 a1,
        int *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 (__fastcall ***a5)(_QWORD, __int64),
        double a6)
{
  int v9; // eax
  int v11; // esi
  unsigned __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // r14
  unsigned __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // r14
  __int64 v21; // rdi
  int v22; // edx
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  char v27; // r8
  __int64 v28; // rdx
  int v29; // ebp
  int v30; // r12d
  __int64 v31; // rax
  char v32; // al
  __int64 v33; // r14
  int *v34; // rcx
  unsigned int v35; // ebp
  __int64 v36; // rbp
  int v37; // eax
  unsigned int v39; // ebp
  int v40; // r12d
  __int64 v41; // r14
  int *v42; // rdi
  __int64 v43; // rax
  char tinfo_property; // al
  int v45; // edx
  int v46; // edx
  __int64 v47; // [rsp+8h] [rbp-90h]
  char v48; // [rsp+8h] [rbp-90h]
  __int64 v49; // [rsp+8h] [rbp-90h]
  char *v50; // [rsp+10h] [rbp-88h]
  int *v51; // [rsp+20h] [rbp-78h] BYREF
  __int128 v52; // [rsp+28h] [rbp-70h]
  char *s1; // [rsp+40h] [rbp-58h]
  __int128 v54; // [rsp+48h] [rbp-50h]
  unsigned __int64 v55; // [rsp+58h] [rbp-40h]

  v9 = *(_DWORD *)(a4 + 40) & 0x68;
  v55 = __readfsqword(0x28u);
  *a2 = v9;
  v11 = *(_DWORD *)(a4 + 36);
  if ( *(_DWORD *)(a4 + 32) != v11 )
    *a2 = ((*(_DWORD *)(a4 + 32) > v11) + 1) | v9;
  v12 = *(_QWORD *)(a4 + 16);
  if ( !v12 )
    return 0;
  v13 = *(_QWORD *)(a4 + 8);
  v14 = v13 + 32 * v12;
  if ( v13 != v14 )
  {
    do
    {
      v15 = v13;
      v13 += 32;
      sub_29C470(v15, a3, *(_DWORD *)(a4 + 40), a6);
    }
    while ( v14 != v13 );
    v12 = *(_QWORD *)(a4 + 16);
    v16 = *(_QWORD *)(a4 + 8);
    v17 = 32 * v12;
    v14 = v16 + 32 * v12;
    if ( v16 != v14 )
    {
      if ( v17 >> 5 )
      {
        _BitScanReverse64(&v18, v17 >> 5);
        v47 = *(_QWORD *)(a4 + 8);
        sub_2A23A0(v16, v16 + v17, 2LL * (int)v18, a6);
        v19 = v47;
        if ( v17 > 512 )
        {
          v20 = v47 + 512;
          sub_2A0A30(v47, v47 + 512, a6);
          do
          {
            v21 = v20;
            v20 += 32;
            sub_2A0830(v21, a6);
          }
          while ( v14 != v20 );
          v14 = *(_QWORD *)(a4 + 8);
          v12 = *(_QWORD *)(a4 + 16);
          goto LABEL_12;
        }
      }
      else
      {
        v49 = *(_QWORD *)(a4 + 8);
        sub_2A23A0(v16, v16 + v17, -2, a6);
        v19 = v49;
      }
      sub_2A0A30(v19, v14, a6);
      v14 = *(_QWORD *)(a4 + 8);
      v12 = *(_QWORD *)(a4 + 16);
    }
LABEL_12:
    if ( !v12 )
      goto LABEL_22;
  }
  v22 = 0;
  v23 = -1;
  v24 = 0;
  do
  {
    v25 = v14 + 32 * v24;
    if ( *(_DWORD *)v25 == 2 )
    {
      v26 = *(_QWORD *)(v25 + 8);
      if ( *(_DWORD *)v26 == 3 )
      {
        if ( *(_QWORD *)(v26 + 8) )
        {
          if ( (_DWORD)v23 != -1 )
            goto LABEL_22;
          v23 = v22;
        }
      }
    }
    v24 = ++v22;
  }
  while ( v22 < v12 );
  if ( (_DWORD)v23 != -1 )
    sub_29F880(v14 + 32 * v23, *(_QWORD *)(a3 + 1504), a6);
LABEL_22:
  v27 = *(_BYTE *)(a4 + 40);
  v52 = 0;
  v51 = nullptr;
  sub_29DAA0(a3, (__int64 *)&v51, (__int64 *)(a4 + 8), a5, (v27 & 8) == 0, 0.0);
  v28 = v52;
  if ( (unsigned __int64)v52 <= 1 )
  {
    v34 = v51;
    goto LABEL_34;
  }
  v48 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  do
  {
    while ( 1 )
    {
      s1 = nullptr;
      v33 = v31;
      v54 = 0;
      if ( (*(_QWORD *)(*(_QWORD *)(a4 + 8) + 32LL * v51[v31] + 16) & 0x100) == 0 || !get_tinfo_pdata() )
        goto LABEL_24;
      if ( !(_QWORD)v54 || (v50 = s1, strcmp(s1, "LPVOID")) )
      {
        tinfo_property = get_tinfo_property();
        v45 = v30;
        v30 |= 2u;
        v46 = v45 | 1;
        if ( (unsigned __int8)((tinfo_property & 0xF) - 10) <= 2u )
          v30 = v46;
LABEL_24:
        v32 = get_tinfo_property();
        if ( (v32 & 0x3E) != 0 && ((v32 & 0xFu) <= 8 || (v32 & 0x3F) == 0x2D) )
          v48 |= !(*(_BYTE *)(*(_QWORD *)(a4 + 8) + 32LL * v51[v33] + 4) >> 7);
        if ( s1 )
        {
          *(_QWORD *)&v54 = 0;
          qfree((__int64)s1);
        }
        goto LABEL_29;
      }
      if ( v50 )
        break;
LABEL_29:
      ++v29;
      v28 = v52;
      v31 = v29;
      if ( v29 >= (unsigned __int64)v52 )
        goto LABEL_47;
    }
    *(_QWORD *)&v54 = 0;
    ++v29;
    qfree((__int64)v50);
    v28 = v52;
    v31 = v29;
  }
  while ( v29 < (unsigned __int64)v52 );
LABEL_47:
  v34 = v51;
  if ( v30 )
  {
    v39 = v28 - 1;
    if ( (int)v28 - 1 >= 0 )
    {
      v40 = v30 & 2;
      v41 = v39;
      while ( 1 )
      {
        v42 = &v34[v41];
        if ( (*(_BYTE *)(*(_QWORD *)(a4 + 8) + 32LL * v34[v41] + 16) & 0xF) != 0xA )
          goto LABEL_50;
        if ( !v40 )
        {
          s1 = nullptr;
          v43 = get_tinfo_property();
          s1 = (char *)v43;
          if ( (_BYTE)v43 && ((v43 & 0xE) != 0 || (v43 & 0x30) == 0) && (v43 & 0x3F) != 1 )
          {
            clear_tinfo_t();
            v34 = v51;
LABEL_50:
            if ( !v48 )
              goto LABEL_53;
            v42 = &v34[v41];
            if ( *(char *)(*(_QWORD *)(a4 + 8) + 32LL * v34[v41] + 4) >= 0 )
              goto LABEL_53;
            goto LABEL_52;
          }
          clear_tinfo_t();
          v42 = &v51[v41];
        }
LABEL_52:
        memmove(v42, v42 + 1, 4 * v52 - 4 - v41 * 4);
        *(_QWORD *)&v52 = v52 - 1;
        v34 = v51;
LABEL_53:
        --v39;
        --v41;
        if ( v39 == -1 )
        {
          v28 = v52;
          break;
        }
      }
    }
  }
LABEL_34:
  v35 = 0;
  if ( v28 )
  {
    v36 = 32LL * *v34;
    copy_tinfo_t();
    v37 = *(_DWORD *)(*(_QWORD *)(a4 + 8) + v36 + 4);
    if ( (v37 & 4) != 0 )
    {
      *a2 |= 4u;
      v37 = *(_DWORD *)(*(_QWORD *)(a4 + 8) + v36 + 4);
    }
    v34 = v51;
    if ( (v37 & 0x80u) != 0 )
      *a2 |= 0x80u;
    v35 = 1;
  }
  if ( v34 )
  {
    *(_QWORD *)&v52 = 0;
    qfree((__int64)v34);
  }
  return v35;
}

