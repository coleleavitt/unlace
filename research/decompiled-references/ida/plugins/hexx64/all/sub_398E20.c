__int64 __fastcall sub_398E20(__int64 a1, __int64 a2, _BYTE *a3, char a4, double a5, double a6, __m128i a7, double a8)
{
  __int64 v10; // rbx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // r13
  char *v15; // rsi
  char *v16; // rdx
  char *v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // r13
  __int64 v22; // rbx
  _QWORD *v23; // rbp
  __int64 v24; // rdi
  __int64 v25; // rdi
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rsi
  __int64 v31; // r15
  _BOOL8 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rcx
  unsigned int v35; // ebx
  unsigned int v37; // eax
  __int64 v38; // r15
  int *v39; // r14
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  unsigned __int64 v45; // [rsp+8h] [rbp-140h]
  __int64 v46; // [rsp+10h] [rbp-138h]
  __int64 tinfo_size; // [rsp+18h] [rbp-130h]
  bool v48; // [rsp+18h] [rbp-130h]
  __int64 v49; // [rsp+20h] [rbp-128h]
  char v50; // [rsp+20h] [rbp-128h]
  __int64 v51; // [rsp+28h] [rbp-120h]
  unsigned int v52; // [rsp+30h] [rbp-118h]
  char v53; // [rsp+37h] [rbp-111h]
  _BYTE *v54; // [rsp+38h] [rbp-110h]
  _QWORD v55[2]; // [rsp+40h] [rbp-108h] BYREF
  int v56; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v57; // [rsp+58h] [rbp-F0h]
  __int64 v58; // [rsp+60h] [rbp-E8h]
  __int64 v59; // [rsp+70h] [rbp-D8h] BYREF
  __int128 v60; // [rsp+78h] [rbp-D0h]
  __int128 v61; // [rsp+88h] [rbp-C0h]
  __int64 v62; // [rsp+98h] [rbp-B0h]
  __int128 v63; // [rsp+A0h] [rbp-A8h]
  _BYTE v64[24]; // [rsp+B0h] [rbp-98h] BYREF
  char v65; // [rsp+C8h] [rbp-80h]
  __int64 v66; // [rsp+E0h] [rbp-68h]
  int v67; // [rsp+E8h] [rbp-60h]
  __int64 v68; // [rsp+F0h] [rbp-58h]
  char v69; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v70; // [rsp+108h] [rbp-40h]

  v10 = a1;
  v70 = __readfsqword(0x28u);
  v56 = 0;
  copy_argloc();
  v12 = *(_QWORD *)(a2 + 16);
  v55[0] = 0;
  v58 = v12;
  v46 = a2 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 432LL);
  v13 = *(_DWORD *)(a2 + 24);
  v45 = 0x4EC4EC4EC4EC4EC5LL * (v46 >> 3);
  v52 = v13 & 0x100;
  if ( a3 )
  {
    if ( !a4 )
    {
      if ( (unsigned __int8)*(_QWORD *)a3 )
        goto LABEL_4;
      if ( (v13 & 0x40) != 0 )
      {
        v37 = v13 & 0xFFFFFFBF;
        *(_DWORD *)(a2 + 24) = v37;
        if ( (unsigned __int8)*(_QWORD *)a3 )
          goto LABEL_4;
LABEL_51:
        *(_DWORD *)(a2 + 24) = v37 & 0xFFFBFFFF;
        sub_2B9C00(*(_QWORD *)(a1 + 24));
        v27 = v52;
        v32 = 0;
        if ( !v52 )
          goto LABEL_39;
        sub_397480(a1, a5, a6, a7, a8);
        goto LABEL_53;
      }
      goto LABEL_42;
    }
LABEL_28:
    *(_DWORD *)(a2 + 24) = v13 | 0x40000;
    if ( (get_tinfo_property() & 0xF) == 0xA )
    {
      sub_32C270(&v59, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 112LL), *(_DWORD *)(a2 + 88));
      copy_tinfo_t();
      clear_tinfo_t();
    }
    if ( !(unsigned __int8)*(_QWORD *)a3 )
    {
      v50 = 0;
      v48 = 1;
      goto LABEL_32;
    }
LABEL_4:
    tinfo_size = get_tinfo_size();
    v51 = get_tinfo_size();
    if ( v52 )
    {
      v14 = *(_QWORD *)(a1 + 24);
      a5 = 0.0;
      v59 = 0;
      v61 = 0u;
      v62 = 0;
      memset(v64, 0, sizeof(v64));
      v65 = 16;
      v60 = 0;
      v63 = 0;
      v53 = sub_3760F0(v14, (__int64)&v59, 0.0);
      if ( v53 )
      {
        v15 = *(char **)(v14 + 456);
        v16 = &v15[4 * *(_QWORD *)(v14 + 464)];
        if ( v15 == v16 )
          goto LABEL_82;
        v17 = *(char **)(v14 + 456);
        while ( (_DWORD)v45 != *(_DWORD *)v17 )
        {
          v17 += 4;
          if ( v16 == v17 )
            goto LABEL_82;
        }
        v18 = v17 - v15;
        v19 = v18 >> 2;
        if ( v18 == -4 )
        {
LABEL_82:
          if ( !under_debugger )
            sub_383060(0xCC88u, 0.0);
          BUG();
        }
        if ( v19 < (unsigned __int64)v60 )
          v53 = sub_3736B0(v14, (__int64)&v59, v19, (__int64)a3);
      }
      if ( *(_QWORD *)v64 )
      {
        *(_QWORD *)&v64[8] = 0;
        qfree(*(__int64 *)v64);
      }
      cleanup_argloc();
      clear_tinfo_t();
      v20 = v59;
      if ( v59 )
      {
        if ( (_QWORD)v60 )
        {
          v54 = a3;
          v21 = 0;
          v49 = v10;
          v22 = v60;
          do
          {
            v23 = (_QWORD *)(v20 + 80 * v21);
            clear_tinfo_t();
            v24 = v23[5];
            if ( v24 )
            {
              v23[6] = 0;
              qfree(v24);
            }
            v25 = v23[2];
            if ( v25 )
            {
              v23[3] = 0;
              qfree(v25);
            }
            ++v21;
            cleanup_argloc();
            v20 = v59;
          }
          while ( v22 != v21 );
          v10 = v49;
          a3 = v54;
        }
        *(_QWORD *)&v60 = 0;
        qfree(v20);
      }
      if ( !v53 )
        goto LABEL_26;
    }
    if ( !(unsigned __int8)sub_217480(*(_QWORD *)(v10 + 24), a2, a3, tinfo_size, a5) )
    {
      if ( !v52 )
      {
        sub_2B4E70((__int64)"AUTOHIDE NONE\nSorry, cannot change variable type");
        goto LABEL_47;
      }
LABEL_26:
      sub_2B4E70((__int64)"AUTOHIDE NONE\n"
                          "Sorry, cannot change argument type.\n"
                          "Please edit the function prototype instead");
LABEL_47:
      v35 = 0;
      goto LABEL_43;
    }
    v50 = sub_38B550(v10, (int *)a2, a5);
    v48 = tinfo_size != v51;
    if ( !a4 )
    {
      v26 = *(_DWORD *)(a2 + 24) & 0xFFFBFFFF;
LABEL_33:
      *(_DWORD *)(a2 + 24) = v26;
      sub_2B9C00(*(_QWORD *)(v10 + 24));
      if ( v52 )
      {
        sub_397480(v10, a5, a6, a7, a8);
        v48 = 0;
        if ( !v50 )
          goto LABEL_53;
      }
      else if ( !v50 )
      {
        goto LABEL_38;
      }
      if ( v56 == 1 )
        v30 = v57;
      else
        v30 = -1;
      v31 = sub_1CFD50(*(_QWORD **)(v10 + 24), v30, a5);
      if ( v31 >= 0 )
      {
        sub_1CE9E0(*(_QWORD *)(v10 + 24));
        v55[1] = 0;
        tinfo_get_func_frame();
        a5 = 0.0;
        v59 = 8 * v31;
        v60 = 0u;
        v62 = 0;
        v66 = 1;
        v67 = -1;
        v68 = 0;
        v69 = 0;
        v61 = 0;
        v63 = 0;
        *(_OWORD *)v64 = 0;
        if ( (unsigned int)find_tinfo_udt_member() != -1 )
        {
          v40 = *(_QWORD *)(v10 + 32);
          if ( v40 )
            *(_DWORD *)(v40 + 108) |= 8u;
          if ( (int)set_tinfo_property4() < 0 )
            sub_2B4E70(
              (__int64)"Could not change type of the stack frame member.\n"
                       "Please edit the stack frame manually if necessary.\n",
              12);
          v44 = *(_QWORD *)(v10 + 32);
          if ( v44 )
          {
            *(_DWORD *)(v44 + 108) &= ~8u;
            if ( (*(_BYTE *)v10 & 2) == 0 )
            {
              sub_395A90(v10, 0, 0.0, v41, v42, v43, a6, a7, a8);
              v48 = 0;
            }
          }
        }
        sub_1CE9E0(*(_QWORD *)(v10 + 24));
        reanalyze_function();
        clear_tinfo_t();
        if ( v62 )
        {
          *(_QWORD *)&v63 = 0;
          qfree(v62);
        }
        if ( *((_QWORD *)&v60 + 1) )
        {
          *(_QWORD *)&v61 = 0;
          qfree(*((__int64 *)&v60 + 1));
        }
        clear_tinfo_t();
      }
LABEL_38:
      v32 = 0;
      if ( v48 )
      {
LABEL_39:
        sub_395A90(v10, v32, a5, v27, v28, v29, a6, a7, a8);
        v33 = *(_QWORD *)(v10 + 24);
        v34 = 0;
        if ( v45 < *(_QWORD *)(v33 + 440) )
          v34 = *(_QWORD *)(v33 + 432) + v46;
        sub_33E140(*(_QWORD *)(v10 + 128), 0x70u, v10, v34, a3);
        goto LABEL_42;
      }
LABEL_53:
      v38 = *(_QWORD *)(v10 + 24);
      v39 = *(int **)(v38 + 1256);
      if ( !(96LL * *(_QWORD *)(v38 + 1264)) )
        goto LABEL_80;
      while ( (unsigned int)sub_3307E0(v39, &v56, a5) )
      {
        v39 += 24;
        if ( v39 == (int *)(*(_QWORD *)(v38 + 1256) + 96LL * *(_QWORD *)(v38 + 1264)) )
          goto LABEL_80;
      }
      if ( v39 )
        v32 = (v39[22] & 1) == 0;
      else
LABEL_80:
        v32 = 1;
      goto LABEL_39;
    }
LABEL_32:
    v26 = *(_DWORD *)(a2 + 24) & 0xFFFFFFBF;
    goto LABEL_33;
  }
  if ( a4 )
  {
    a3 = v55;
    goto LABEL_28;
  }
  if ( (v13 & 0x40) != 0 )
  {
    v37 = v13 & 0xFFFFFFBF;
    a3 = v55;
    goto LABEL_51;
  }
LABEL_42:
  v35 = 1;
LABEL_43:
  clear_tinfo_t();
  cleanup_argloc();
  return v35;
}

