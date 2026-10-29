__int64 __fastcall sub_235430(__int64 a1, __int64 a2, int a3, __int16 a4, double a5, __m128 a6)
{
  __int64 v9; // r15
  __int64 v10; // r9
  int v11; // r8d
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rsi
  int v16; // edx
  unsigned __int64 v17; // r8
  __int64 v18; // r15
  _BYTE *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r8
  char *v22; // r15
  __int64 v23; // r14
  _BYTE *v24; // rsi
  __int64 v25; // r15
  __int64 v26; // rdx
  char *v27; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  signed int v31; // ecx
  _QWORD *v32; // r13
  __int64 v33; // r12
  __int64 v34; // rsi
  unsigned __int64 v35; // r14
  __int64 v36; // r15
  __int64 v37; // r12
  unsigned __int64 v38; // r12
  _QWORD *v39; // r13
  size_t v40; // r15
  __int64 v41; // r14
  size_t v42; // r8
  __int64 v43; // rsi
  __int64 v44; // rax
  char tinfo_property; // al
  __int64 v46; // r9
  int v47; // r8d
  __int64 v48; // rax
  __int64 v49; // [rsp+8h] [rbp-A8h]
  signed int v50; // [rsp+10h] [rbp-A0h]
  __int64 v51; // [rsp+10h] [rbp-A0h]
  _DWORD *v52; // [rsp+18h] [rbp-98h]
  __int64 v53; // [rsp+18h] [rbp-98h]
  __int64 v54; // [rsp+20h] [rbp-90h]
  unsigned __int64 v55; // [rsp+28h] [rbp-88h]
  __int64 v56; // [rsp+28h] [rbp-88h]
  size_t v57; // [rsp+28h] [rbp-88h]
  unsigned int v58; // [rsp+34h] [rbp-7Ch]
  int v59; // [rsp+34h] [rbp-7Ch]
  __int64 v61; // [rsp+38h] [rbp-78h]
  char v62; // [rsp+4Fh] [rbp-61h] BYREF
  __int64 v63; // [rsp+50h] [rbp-60h] BYREF
  __int64 v64; // [rsp+58h] [rbp-58h]
  void *src; // [rsp+60h] [rbp-50h] BYREF
  __int128 v66; // [rsp+68h] [rbp-48h]
  unsigned __int64 v67; // [rsp+78h] [rbp-38h]

  v67 = __readfsqword(0x28u);
  v62 = 0;
  v54 = a3;
  if ( a3 == get_tinfo_size() )
  {
    tinfo_property = get_tinfo_property();
    v46 = *(_QWORD *)(a2 + 40);
    v47 = *(_DWORD *)(a2 + 48);
    src = nullptr;
    v9 = *(_QWORD *)(a1 + 8);
    v56 = v46;
    v59 = v47;
    a4 |= 32 * ((tinfo_property & 0x2F) == 13);
    copy_tinfo_t();
    v10 = v56;
    v11 = v59;
  }
  else
  {
    src = nullptr;
    v9 = *(_QWORD *)(a1 + 8);
    v10 = *(_QWORD *)(a2 + 40);
    v11 = *(_DWORD *)(a2 + 48);
  }
  v58 = sub_232C90(v9, *(_QWORD *)(a2 + 32), a3, (__int64)&src, v11, v10, a5, a6, a4, &v62);
  clear_tinfo_t();
  if ( v62 )
  {
    if ( !under_debugger )
      sub_383060(0xCC38u, a5);
    BUG();
  }
  v12 = *(_QWORD *)(a1 + 8);
  v61 = *(_QWORD *)(v12 + 432) + 104LL * (int)v58;
  if ( (*(_BYTE *)(a1 + 201) & 4) != 0 && *(_BYTE *)(a1 + 168) )
  {
    v13 = *(_QWORD *)(v12 + 432) + 104LL * (int)v58;
    *(_DWORD *)(v13 + 24) = *(_DWORD *)(v13 + 24) & 0xFFFBFFFD | 2;
    v12 = *(_QWORD *)(a1 + 8);
  }
  if ( *(_DWORD *)v61 == 1 )
  {
    v14 = *(_QWORD *)(v61 + 8);
    v55 = v14;
  }
  else
  {
    v55 = -1;
    v14 = -1;
  }
  src = nullptr;
  v66 = 0;
  v15 = *(int *)(v61 + 88);
  v16 = *(_DWORD *)(v61 + 88);
  if ( *(_DWORD *)(v12 + 116) )
  {
    if ( *(_DWORD *)(v61 + 88) )
    {
      v17 = *(_QWORD *)(v12 + 136);
      if ( *(int *)(v12 + 116) + v17 - 1 >= v55
        && v15 + v55 - 1 >= v17
        && (v17 != v14 || (_DWORD)v15 != *(_DWORD *)(v12 + 116)) )
      {
        v49 = *(_QWORD *)(v12 + 136);
        v50 = *(_DWORD *)(v12 + 116);
        v52 = *(_DWORD **)(v12 + 1504);
        v63 = 0;
        v64 = 0;
        cleanup_argloc();
        LODWORD(v63) = 1;
        v64 = v49;
        sub_1C7B80((__int64)&v63, v52, (__int64 *)&src, v50, 2);
        cleanup_argloc();
        v18 = v66;
        if ( (_QWORD)v66 )
        {
          v21 = v66 + 8;
          v20 = v66 + 9;
          v19 = src;
          v18 = v66 - 1;
          if ( *((_QWORD *)&v66 + 1) >= (unsigned __int64)(v66 + 9) )
            goto LABEL_15;
        }
        else
        {
          v19 = src;
          v20 = 10;
          v21 = 9;
          if ( *((_QWORD *)&v66 + 1) >= 0xAu )
          {
LABEL_15:
            *(_QWORD *)&v66 = v20;
            v19[v21] = 0;
            v22 = (char *)src + v18;
            *(_QWORD *)v22 = 0x7264646174657228LL;
            v22[8] = 41;
            v12 = *(_QWORD *)(a1 + 8);
            v16 = *(_DWORD *)(v61 + 88);
            goto LABEL_16;
          }
        }
        v51 = v21;
        v53 = v20;
        src = (void *)qvector_reserve((__int64)&src, (__int64)v19, v20, 1);
        v21 = v51;
        v19 = src;
        v20 = v53;
        goto LABEL_15;
      }
    }
  }
LABEL_16:
  if ( sub_226FD0(v12, v14, v16) )
  {
    v23 = v66;
    if ( (unsigned __int64)v66 > 1 )
    {
      v24 = src;
      v25 = v66 - 1;
      v26 = v66 + 5;
      if ( *((_QWORD *)&v66 + 1) < (unsigned __int64)(v66 + 5) )
      {
        src = (void *)qvector_reserve((__int64)&src, (__int64)src, v26, 1);
        v26 = v23 + 5;
        v24 = src;
      }
      *(_QWORD *)&v66 = v26;
      v24[v23 + 4] = 0;
      v27 = (char *)src + v25;
      *(_DWORD *)v27 = 1684955424;
      v27[4] = 32;
    }
    sub_FAAD0((__int64 *)&src);
  }
  if ( (unsigned __int64)v66 <= 1 )
  {
    if ( (*(_BYTE *)(v61 + 25) & 4) != 0 )
    {
      v29 = *(_QWORD *)(a2 + 32);
      if ( *(_DWORD *)(v61 + 88) )
      {
        if ( v29 >= v55 && *(int *)(v61 + 88) + v55 - 1 >= v54 + v29 - 1 )
          sub_1F45B0(*(_QWORD *)(a1 + 8), *(_QWORD *)(v61 + 16), v61);
      }
    }
    goto LABEL_24;
  }
  v30 = *(_QWORD *)(a1 + 8);
  v31 = *(_DWORD *)(v61 + 88);
  v63 = 0;
  v64 = 0;
  sub_1EFA10(*(_DWORD **)(v30 + 1504), (__int64 *)(v30 + 496), v61, v31, &v63, 0);
  cleanup_argloc();
  v32 = *(_QWORD **)(a1 + 8);
  v33 = v32[63];
  if ( v33 )
  {
    v36 = v33 + 4;
    v35 = v33 + 5;
    v34 = v32[62];
    --v33;
    if ( v32[64] >= v35 )
      goto LABEL_35;
  }
  else
  {
    v34 = v32[62];
    v35 = 6;
    v36 = 5;
    if ( v32[64] >= 6u )
      goto LABEL_35;
  }
  v44 = qvector_reserve((__int64)(v32 + 62), v34, v35, 1);
  v32[62] = v44;
  v34 = v44;
LABEL_35:
  v32[63] = v35;
  *(_BYTE *)(v34 + v36) = 0;
  v37 = v32[62] + v33;
  *(_DWORD *)v37 = 1684955424;
  *(_BYTE *)(v37 + 4) = 32;
  v38 = v66;
  v39 = *(_QWORD **)(a1 + 8);
  if ( (_QWORD)v66 )
  {
    v40 = v66 - 1;
    if ( (_QWORD)v66 != 1 )
    {
      v41 = v39[63];
      v42 = v66 - 1;
      if ( v41 )
      {
        --v41;
        v42 = v40 + v41;
        v38 = v66 + v41;
      }
      v43 = v39[62];
      if ( v39[64] < v38 )
      {
        v57 = v42;
        v48 = qvector_reserve((__int64)(v39 + 62), v43, v38, 1);
        v39[62] = v48;
        v42 = v57;
        v43 = v48;
      }
      v39[63] = v38;
      *(_BYTE *)(v43 + v42) = 0;
      memcpy((void *)(v41 + v39[62]), src, v40);
      v39 = *(_QWORD **)(a1 + 8);
    }
  }
  sub_1F08B0(v39, *(_QWORD *)(v61 + 16), 0x14u);
  *(_DWORD *)(v61 + 24) |= 0x400u;
LABEL_24:
  if ( src )
  {
    *(_QWORD *)&v66 = 0;
    qfree((__int64)src);
  }
  return v58;
}

