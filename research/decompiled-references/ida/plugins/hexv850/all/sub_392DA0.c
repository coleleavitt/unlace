__int64 __fastcall sub_392DA0(
        __int64 a1,
        __int64 a2,
        _BYTE *a3,
        char a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v14; // rbx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // r13
  char *v19; // rsi
  char *v20; // rdx
  char *v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // r13
  __int64 v26; // rbx
  _QWORD *v27; // rbp
  __int64 v28; // rsi
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __m128 v34; // xmm4
  __m128 v35; // xmm5
  __int64 v36; // rsi
  __int64 v37; // r15
  _BOOL4 v38; // esi
  __int64 v39; // rax
  __int64 v40; // rcx
  unsigned int v41; // ebx
  unsigned int v43; // eax
  __int64 v44; // r9
  __m128 v45; // xmm4
  __m128 v46; // xmm5
  __int64 v47; // r15
  int *v48; // r14
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rax
  unsigned __int64 v54; // [rsp+8h] [rbp-140h]
  __int64 v55; // [rsp+10h] [rbp-138h]
  __int64 tinfo_size; // [rsp+18h] [rbp-130h]
  bool v57; // [rsp+18h] [rbp-130h]
  __int64 v58; // [rsp+20h] [rbp-128h]
  char v59; // [rsp+20h] [rbp-128h]
  __int64 v60; // [rsp+28h] [rbp-120h]
  unsigned int v61; // [rsp+30h] [rbp-118h]
  char v62; // [rsp+37h] [rbp-111h]
  _BYTE *v63; // [rsp+38h] [rbp-110h]
  _QWORD v64[2]; // [rsp+40h] [rbp-108h] BYREF
  int v65; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v66; // [rsp+58h] [rbp-F0h]
  __int64 v67; // [rsp+60h] [rbp-E8h]
  __int64 v68; // [rsp+70h] [rbp-D8h] BYREF
  __int128 v69; // [rsp+78h] [rbp-D0h]
  __int128 v70; // [rsp+88h] [rbp-C0h]
  __int64 v71; // [rsp+98h] [rbp-B0h]
  __int128 v72; // [rsp+A0h] [rbp-A8h]
  _BYTE v73[24]; // [rsp+B0h] [rbp-98h] BYREF
  char v74; // [rsp+C8h] [rbp-80h]
  __int64 v75; // [rsp+E0h] [rbp-68h]
  int v76; // [rsp+E8h] [rbp-60h]
  __int64 v77; // [rsp+F0h] [rbp-58h]
  char v78; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v79; // [rsp+108h] [rbp-40h]

  v14 = a1;
  v79 = __readfsqword(0x28u);
  v65 = 0;
  copy_argloc();
  v16 = *(_QWORD *)(a2 + 16);
  v64[0] = 0;
  v67 = v16;
  v55 = a2 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 432LL);
  v17 = *(_DWORD *)(a2 + 24);
  v54 = 0x4EC4EC4EC4EC4EC5LL * (v55 >> 3);
  v61 = v17 & 0x100;
  if ( a3 )
  {
    if ( !a4 )
    {
      if ( (unsigned __int8)*(_QWORD *)a3 )
        goto LABEL_4;
      if ( (v17 & 0x40) != 0 )
      {
        v43 = v17 & 0xFFFFFFBF;
        *(_DWORD *)(a2 + 24) = v43;
        if ( (unsigned __int8)*(_QWORD *)a3 )
          goto LABEL_4;
LABEL_51:
        *(_DWORD *)(a2 + 24) = v43 & 0xFFFBFFFF;
        sub_2B4840(*(_QWORD *)(a1 + 24));
        v30 = v61;
        v38 = 0;
        if ( !v61 )
          goto LABEL_39;
        sub_391400(a1, a5, a6, a7, a8, v45, v46, a11, a12, 0, v61, v31, v32, v44);
        goto LABEL_53;
      }
      goto LABEL_42;
    }
LABEL_28:
    *(_DWORD *)(a2 + 24) = v17 | 0x40000;
    if ( (get_tinfo_property() & 0xF) == 0xA )
    {
      sub_326800(&v68, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 112LL), *(_DWORD *)(a2 + 88));
      copy_tinfo_t();
      clear_tinfo_t();
    }
    v28 = *(_QWORD *)a3;
    if ( !(unsigned __int8)*(_QWORD *)a3 )
    {
      v59 = 0;
      v57 = 1;
      goto LABEL_32;
    }
LABEL_4:
    tinfo_size = get_tinfo_size();
    v60 = get_tinfo_size();
    if ( v61 )
    {
      v18 = *(_QWORD *)(a1 + 24);
      a5 = 0;
      v68 = 0;
      v70 = 0u;
      v71 = 0;
      memset(v73, 0, sizeof(v73));
      v74 = 16;
      v69 = 0;
      v72 = 0;
      v62 = sub_370070(v18, (__int64)&v68);
      if ( v62 )
      {
        v19 = *(char **)(v18 + 456);
        v20 = &v19[4 * *(_QWORD *)(v18 + 464)];
        if ( v19 == v20 )
          goto LABEL_82;
        v21 = *(char **)(v18 + 456);
        while ( (_DWORD)v54 != *(_DWORD *)v21 )
        {
          v21 += 4;
          if ( v20 == v21 )
            goto LABEL_82;
        }
        v22 = v21 - v19;
        v23 = v22 >> 2;
        if ( v22 == -4 )
        {
LABEL_82:
          if ( !under_debugger )
            sub_37CFE0(0xCC88u, 0.0);
          BUG();
        }
        if ( v23 < (unsigned __int64)v69 )
          v62 = sub_36D630(v18, (__int64)&v68, v23, (__int64)a3);
      }
      if ( *(_QWORD *)v73 )
      {
        *(_QWORD *)&v73[8] = 0;
        qfree();
      }
      cleanup_argloc();
      clear_tinfo_t();
      v24 = v68;
      if ( v68 )
      {
        if ( (_QWORD)v69 )
        {
          v63 = a3;
          v25 = 0;
          v58 = v14;
          v26 = v69;
          do
          {
            v27 = (_QWORD *)(v24 + 80 * v25);
            clear_tinfo_t();
            if ( v27[5] )
            {
              v27[6] = 0;
              qfree();
            }
            if ( v27[2] )
            {
              v27[3] = 0;
              qfree();
            }
            ++v25;
            cleanup_argloc();
            v24 = v68;
          }
          while ( v26 != v25 );
          v14 = v58;
          a3 = v63;
        }
        *(_QWORD *)&v69 = 0;
        qfree();
      }
      if ( !v62 )
        goto LABEL_26;
    }
    if ( !(unsigned __int8)sub_2120C0(*(_QWORD *)(v14 + 24), a2, a3, tinfo_size) )
    {
      if ( !v61 )
      {
        sub_2AFAB0((__int64)"AUTOHIDE NONE\nSorry, cannot change variable type");
        goto LABEL_47;
      }
LABEL_26:
      sub_2AFAB0((__int64)"AUTOHIDE NONE\n"
                          "Sorry, cannot change argument type.\n"
                          "Please edit the function prototype instead");
LABEL_47:
      v41 = 0;
      goto LABEL_43;
    }
    v28 = v60;
    v59 = sub_3854D0(v14, (int *)a2, *(double *)a5.m128_u64);
    v57 = tinfo_size != v60;
    if ( !a4 )
    {
      v29 = *(_DWORD *)(a2 + 24) & 0xFFFBFFFF;
LABEL_33:
      *(_DWORD *)(a2 + 24) = v29;
      sub_2B4840(*(_QWORD *)(v14 + 24));
      if ( v61 )
      {
        sub_391400(v14, a5, a6, a7, a8, v34, v35, a11, a12, v28, v30, v31, v32, v33);
        v57 = 0;
        if ( !v59 )
          goto LABEL_53;
      }
      else if ( !v59 )
      {
        goto LABEL_38;
      }
      if ( v65 == 1 )
        v36 = v66;
      else
        v36 = -1;
      v37 = sub_1CAED0(*(_QWORD **)(v14 + 24), v36);
      if ( v37 >= 0 )
      {
        sub_1C9B60(*(_QWORD *)(v14 + 24));
        v64[1] = 0;
        tinfo_get_func_frame();
        a5.m128_u64[0] = 0;
        v68 = 8 * v37;
        v69 = 0u;
        v71 = 0;
        v75 = 1;
        v76 = -1;
        v77 = 0;
        v78 = 0;
        v70 = 0;
        v72 = 0;
        *(_OWORD *)v73 = 0;
        if ( (unsigned int)find_tinfo_udt_member() != -1 )
        {
          v49 = *(_QWORD *)(v14 + 32);
          if ( v49 )
            *(_DWORD *)(v49 + 108) |= 8u;
          if ( (int)set_tinfo_property4() < 0 )
            sub_2AFAB0(
              (__int64)"Could not change type of the stack frame member.\n"
                       "Please edit the stack frame manually if necessary.\n",
              12);
          v53 = *(_QWORD *)(v14 + 32);
          if ( v53 )
          {
            *(_DWORD *)(v53 + 108) &= ~8u;
            if ( (*(_BYTE *)v14 & 2) == 0 )
            {
              sub_38FA10(v14, 0, 0.0, v50, v51, v52);
              v57 = 0;
            }
          }
        }
        sub_1C9B60(*(_QWORD *)(v14 + 24));
        reanalyze_function();
        clear_tinfo_t();
        if ( v71 )
        {
          *(_QWORD *)&v72 = 0;
          qfree();
        }
        if ( *((_QWORD *)&v69 + 1) )
        {
          *(_QWORD *)&v70 = 0;
          qfree();
        }
        clear_tinfo_t();
      }
LABEL_38:
      v38 = 0;
      if ( v57 )
      {
LABEL_39:
        sub_38FA10(v14, v38, *(double *)a5.m128_u64, v30, v31, v32);
        v39 = *(_QWORD *)(v14 + 24);
        v40 = 0;
        if ( v54 < *(_QWORD *)(v39 + 440) )
          v40 = *(_QWORD *)(v39 + 432) + v55;
        sub_3380C0(*(_QWORD *)(v14 + 128), 0x70u, v14, v40, a3);
        goto LABEL_42;
      }
LABEL_53:
      v47 = *(_QWORD *)(v14 + 24);
      v48 = *(int **)(v47 + 1256);
      if ( !(96LL * *(_QWORD *)(v47 + 1264)) )
        goto LABEL_80;
      while ( (unsigned int)sub_32AC50(v48, &v65) )
      {
        v48 += 24;
        if ( v48 == (int *)(*(_QWORD *)(v47 + 1256) + 96LL * *(_QWORD *)(v47 + 1264)) )
          goto LABEL_80;
      }
      if ( v48 )
        v38 = (v48[22] & 1) == 0;
      else
LABEL_80:
        v38 = 1;
      goto LABEL_39;
    }
LABEL_32:
    v29 = *(_DWORD *)(a2 + 24) & 0xFFFFFFBF;
    goto LABEL_33;
  }
  if ( a4 )
  {
    a3 = v64;
    goto LABEL_28;
  }
  if ( (v17 & 0x40) != 0 )
  {
    v43 = v17 & 0xFFFFFFBF;
    a3 = v64;
    goto LABEL_51;
  }
LABEL_42:
  v41 = 1;
LABEL_43:
  clear_tinfo_t();
  cleanup_argloc();
  return v41;
}

