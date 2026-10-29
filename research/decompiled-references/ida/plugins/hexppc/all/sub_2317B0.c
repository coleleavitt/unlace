__int64 __fastcall sub_2317B0(__int64 a1, __int64 a2, int a3, __int16 a4)
{
  __int64 v7; // r15
  __int64 v8; // r9
  int v9; // r8d
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rsi
  int v14; // edx
  unsigned __int64 v15; // r8
  __int64 v16; // r15
  _BYTE *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  char *v20; // r15
  __int64 v21; // r14
  _BYTE *v22; // rsi
  __int64 v23; // r15
  __int64 v24; // rdx
  char *v25; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  signed int v29; // ecx
  __int64 v30; // rcx
  int v31; // r8d
  int v32; // r9d
  _QWORD *v33; // r13
  __int64 v34; // r12
  __int64 v35; // rsi
  unsigned __int64 v36; // r14
  __int64 v37; // r15
  __int64 v38; // r12
  unsigned __int64 v39; // r12
  _QWORD *v40; // r13
  size_t v41; // r15
  __int64 v42; // r14
  size_t v43; // r8
  __int64 v44; // rsi
  __int64 v45; // rax
  char tinfo_property; // al
  __int64 v47; // r9
  int v48; // r8d
  __int64 v49; // rax
  __int64 v50; // [rsp+8h] [rbp-A8h]
  signed int v51; // [rsp+10h] [rbp-A0h]
  __int64 v52; // [rsp+10h] [rbp-A0h]
  _DWORD *v53; // [rsp+18h] [rbp-98h]
  __int64 v54; // [rsp+18h] [rbp-98h]
  __int64 v55; // [rsp+20h] [rbp-90h]
  unsigned __int64 v56; // [rsp+28h] [rbp-88h]
  __int64 v57; // [rsp+28h] [rbp-88h]
  size_t v58; // [rsp+28h] [rbp-88h]
  unsigned int v59; // [rsp+34h] [rbp-7Ch]
  int v60; // [rsp+34h] [rbp-7Ch]
  __int64 v62; // [rsp+38h] [rbp-78h]
  char v63; // [rsp+4Fh] [rbp-61h] BYREF
  __int64 v64; // [rsp+50h] [rbp-60h] BYREF
  __int64 v65; // [rsp+58h] [rbp-58h]
  void *src; // [rsp+60h] [rbp-50h] BYREF
  __int128 v67; // [rsp+68h] [rbp-48h]
  unsigned __int64 v68; // [rsp+78h] [rbp-38h]

  v68 = __readfsqword(0x28u);
  v63 = 0;
  v55 = a3;
  if ( a3 == get_tinfo_size() )
  {
    tinfo_property = get_tinfo_property();
    v47 = *(_QWORD *)(a2 + 40);
    v48 = *(_DWORD *)(a2 + 48);
    src = nullptr;
    v7 = *(_QWORD *)(a1 + 8);
    v57 = v47;
    v60 = v48;
    a4 |= 32 * ((tinfo_property & 0x2F) == 13);
    copy_tinfo_t();
    v8 = v57;
    v9 = v60;
  }
  else
  {
    src = nullptr;
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(_QWORD *)(a2 + 40);
    v9 = *(_DWORD *)(a2 + 48);
  }
  v59 = sub_22F010(v7, *(_QWORD *)(a2 + 32), a3, (__int64)&src, v9, v8, a4, &v63);
  clear_tinfo_t();
  if ( v63 )
  {
    if ( !under_debugger )
      sub_37EEE0(52280);
    BUG();
  }
  v10 = *(_QWORD *)(a1 + 8);
  v62 = *(_QWORD *)(v10 + 432) + 104LL * (int)v59;
  if ( (*(_BYTE *)(a1 + 201) & 4) != 0 && *(_BYTE *)(a1 + 168) )
  {
    v11 = *(_QWORD *)(v10 + 432) + 104LL * (int)v59;
    *(_DWORD *)(v11 + 24) = *(_DWORD *)(v11 + 24) & 0xFFFBFFFD | 2;
    v10 = *(_QWORD *)(a1 + 8);
  }
  if ( *(_DWORD *)v62 == 1 )
  {
    v12 = *(_QWORD *)(v62 + 8);
    v56 = v12;
  }
  else
  {
    v56 = -1;
    v12 = -1;
  }
  src = nullptr;
  v67 = 0;
  v13 = *(int *)(v62 + 88);
  v14 = *(_DWORD *)(v62 + 88);
  if ( *(_DWORD *)(v10 + 116) )
  {
    if ( *(_DWORD *)(v62 + 88) )
    {
      v15 = *(_QWORD *)(v10 + 136);
      if ( *(int *)(v10 + 116) + v15 - 1 >= v56
        && v13 + v56 - 1 >= v15
        && (v15 != v12 || (_DWORD)v13 != *(_DWORD *)(v10 + 116)) )
      {
        v50 = *(_QWORD *)(v10 + 136);
        v51 = *(_DWORD *)(v10 + 116);
        v53 = *(_DWORD **)(v10 + 1504);
        v64 = 0;
        v65 = 0;
        cleanup_argloc();
        LODWORD(v64) = 1;
        v65 = v50;
        sub_1C4140((__int64)&v64, v53, (__int64 *)&src, v51, 2);
        cleanup_argloc();
        v16 = v67;
        if ( (_QWORD)v67 )
        {
          v19 = v67 + 8;
          v18 = v67 + 9;
          v17 = src;
          v16 = v67 - 1;
          if ( *((_QWORD *)&v67 + 1) >= (unsigned __int64)(v67 + 9) )
            goto LABEL_15;
        }
        else
        {
          v17 = src;
          v18 = 10;
          v19 = 9;
          if ( *((_QWORD *)&v67 + 1) >= 0xAu )
          {
LABEL_15:
            *(_QWORD *)&v67 = v18;
            v17[v19] = 0;
            v20 = (char *)src + v16;
            *(_QWORD *)v20 = 0x7264646174657228LL;
            v20[8] = 41;
            v10 = *(_QWORD *)(a1 + 8);
            v14 = *(_DWORD *)(v62 + 88);
            goto LABEL_16;
          }
        }
        v52 = v19;
        v54 = v18;
        src = (void *)qvector_reserve();
        v19 = v52;
        v17 = src;
        v18 = v54;
        goto LABEL_15;
      }
    }
  }
LABEL_16:
  if ( sub_223350(v10, v12, v14) )
  {
    v21 = v67;
    if ( (unsigned __int64)v67 > 1 )
    {
      v22 = src;
      v23 = v67 - 1;
      v24 = v67 + 5;
      if ( *((_QWORD *)&v67 + 1) < (unsigned __int64)(v67 + 5) )
      {
        src = (void *)qvector_reserve();
        v24 = v21 + 5;
        v22 = src;
      }
      *(_QWORD *)&v67 = v24;
      v22[v21 + 4] = 0;
      v25 = (char *)src + v23;
      *(_DWORD *)v25 = 1684955424;
      v25[4] = 32;
    }
    sub_F7090((__int64 *)&src);
  }
  if ( (unsigned __int64)v67 <= 1 )
  {
    if ( (*(_BYTE *)(v62 + 25) & 4) != 0 )
    {
      v27 = *(_QWORD *)(a2 + 32);
      if ( *(_DWORD *)(v62 + 88) )
      {
        if ( v27 >= v56 && *(int *)(v62 + 88) + v56 - 1 >= v55 + v27 - 1 )
          sub_1F0930(*(_QWORD *)(a1 + 8), *(_QWORD *)(v62 + 16), v62);
      }
    }
    goto LABEL_24;
  }
  v28 = *(_QWORD *)(a1 + 8);
  v29 = *(_DWORD *)(v62 + 88);
  v64 = 0;
  v65 = 0;
  sub_1EBD90(*(_DWORD **)(v28 + 1504), (__int64 *)(v28 + 496), v62, v29, &v64, 0);
  cleanup_argloc();
  v33 = *(_QWORD **)(a1 + 8);
  v34 = v33[63];
  if ( v34 )
  {
    v37 = v34 + 4;
    v36 = v34 + 5;
    v35 = v33[62];
    --v34;
    if ( v33[64] >= v36 )
      goto LABEL_35;
  }
  else
  {
    v35 = v33[62];
    v36 = 6;
    v37 = 5;
    if ( v33[64] >= 6u )
      goto LABEL_35;
  }
  v45 = qvector_reserve();
  v33[62] = v45;
  v35 = v45;
LABEL_35:
  v33[63] = v36;
  *(_BYTE *)(v35 + v37) = 0;
  v38 = v33[62] + v34;
  *(_DWORD *)v38 = 1684955424;
  *(_BYTE *)(v38 + 4) = 32;
  v39 = v67;
  v40 = *(_QWORD **)(a1 + 8);
  if ( (_QWORD)v67 )
  {
    v41 = v67 - 1;
    if ( (_QWORD)v67 != 1 )
    {
      v42 = v40[63];
      v43 = v67 - 1;
      if ( v42 )
      {
        --v42;
        v43 = v41 + v42;
        v39 = v67 + v42;
      }
      v44 = v40[62];
      if ( v40[64] < v39 )
      {
        v58 = v43;
        v49 = qvector_reserve();
        v40[62] = v49;
        v43 = v58;
        v44 = v49;
      }
      v40[63] = v39;
      *(_BYTE *)(v44 + v43) = 0;
      memcpy((void *)(v42 + v40[62]), src, v41);
      v40 = *(_QWORD **)(a1 + 8);
    }
  }
  sub_1ECC30((__int64)v40, *(_QWORD *)(v62 + 16), 20, v30, v31, v32);
  *(_DWORD *)(v62 + 24) |= 0x400u;
LABEL_24:
  if ( src )
  {
    *(_QWORD *)&v67 = 0;
    qfree();
  }
  return v59;
}

