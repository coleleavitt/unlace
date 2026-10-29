__int64 __fastcall sub_231430(__int64 a1, int a2, __int64 a3, int a4, _QWORD *a5, char a6, double a7)
{
  int v10; // r15d
  __int64 v11; // r12
  __int64 v12; // rdi
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  bool v17; // zf
  __int64 v18; // rax
  unsigned int v19; // r15d
  int v21; // r11d
  __int64 v22; // r9
  int v23; // r10d
  unsigned int v24; // eax
  int v25; // r11d
  int v26; // ecx
  __int64 v27; // r9
  int v28; // r10d
  int v29; // esi
  unsigned __int64 v30; // rbx
  int v31; // r11d
  __int64 v32; // r9
  __int64 v33; // rsi
  _QWORD *v34; // r13
  int v35; // eax
  __int64 v36; // r9
  int v37; // r10d
  int v38; // r11d
  bool v39; // al
  __int64 v40; // rbx
  int v41; // r11d
  _QWORD *v42; // rax
  unsigned __int64 v43; // rdx
  char v44; // al
  _QWORD *v45; // rcx
  int v46; // ebp
  __int64 v47; // r13
  int v48; // eax
  unsigned __int64 v49; // r8
  __int64 v50; // rax
  int v51; // eax
  unsigned __int64 v52; // r9
  char v53; // al
  int v54; // r11d
  unsigned __int64 v55; // r8
  __int64 v56; // rdi
  signed int v57; // ecx
  _DWORD *v58; // rdi
  __int64 v59; // rbx
  __int64 v60; // r8
  __int64 v61; // rax
  __int64 v62; // rax
  size_t v63; // r9
  __int64 v64; // rbx
  __int64 v65; // r8
  unsigned __int64 v66; // r13
  __int64 v67; // rax
  char v68; // al
  unsigned __int64 v69; // rbx
  __int64 v70; // rdi
  char v71; // al
  unsigned __int64 *v72; // rax
  unsigned __int64 *v73; // rax
  __int64 v74; // rax
  _QWORD *v76; // [rsp+0h] [rbp-B8h]
  int v77; // [rsp+0h] [rbp-B8h]
  size_t v78; // [rsp+0h] [rbp-B8h]
  __int64 v80; // [rsp+8h] [rbp-B0h]
  int v81; // [rsp+10h] [rbp-A8h]
  int v82; // [rsp+10h] [rbp-A8h]
  __int64 v83; // [rsp+10h] [rbp-A8h]
  __int64 v84; // [rsp+10h] [rbp-A8h]
  int v85; // [rsp+10h] [rbp-A8h]
  int v86; // [rsp+10h] [rbp-A8h]
  int v87; // [rsp+10h] [rbp-A8h]
  int v88; // [rsp+10h] [rbp-A8h]
  __int64 v89; // [rsp+10h] [rbp-A8h]
  int v90; // [rsp+10h] [rbp-A8h]
  int v91; // [rsp+10h] [rbp-A8h]
  int v92; // [rsp+10h] [rbp-A8h]
  __int64 v93; // [rsp+18h] [rbp-A0h]
  __int64 v94; // [rsp+18h] [rbp-A0h]
  int v95; // [rsp+18h] [rbp-A0h]
  int v96; // [rsp+18h] [rbp-A0h]
  __int64 v97; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v98; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v99; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v100; // [rsp+18h] [rbp-A0h]
  int v101; // [rsp+20h] [rbp-98h]
  int v102; // [rsp+20h] [rbp-98h]
  int v103; // [rsp+20h] [rbp-98h]
  __int64 v104; // [rsp+20h] [rbp-98h]
  int v105; // [rsp+20h] [rbp-98h]
  unsigned __int64 v106; // [rsp+20h] [rbp-98h]
  __int64 v107; // [rsp+30h] [rbp-88h] BYREF
  signed __int64 v108; // [rsp+38h] [rbp-80h] BYREF
  __int64 v109; // [rsp+40h] [rbp-78h] BYREF
  __int64 v110; // [rsp+48h] [rbp-70h]
  void *src; // [rsp+50h] [rbp-68h] BYREF
  __int128 v112; // [rsp+58h] [rbp-60h] BYREF
  __int128 v113; // [rsp+68h] [rbp-50h]
  unsigned __int64 v114; // [rsp+78h] [rbp-40h]

  v114 = __readfsqword(0x28u);
  v10 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
  v11 = *(_QWORD *)(a1 + 432) + 104LL * a2;
  if ( !(unsigned __int8)sub_1C34E0(v11, &v107, &v108, *(_DWORD *)(v11 + 88), a7) )
  {
    if ( !under_debugger )
      sub_383060(0xCC2Eu, a7);
    goto LABEL_129;
  }
  v12 = *(_QWORD *)(a1 + 936);
  v13 = v107;
  if ( v12 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 40LL))(v12);
    v15 = *(_QWORD *)(a1 + 144);
    v16 = v14;
    if ( v15 <= v14 )
      v16 = *(_QWORD *)(a1 + 144);
    v17 = v14 == -1;
    v18 = v16;
    if ( v17 )
      v18 = *(_QWORD *)(a1 + 144);
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 144);
    v18 = v15;
  }
  if ( a3 < v18 != v13 < v18 )
    return 0;
  v21 = 1;
  v22 = *(_QWORD *)(a1 + 1504);
  if ( a4 > 0 )
    v21 = a4;
  v23 = v21 + a3;
  if ( v107 > a3 )
  {
    if ( v15 > a3 || *(_BYTE *)(a1 + 320) )
      return (unsigned int)-1;
    if ( !*(_BYTE *)(*(_QWORD *)(v22 + 96) + 145LL) )
      return 0;
    v24 = *(_DWORD *)(a1 + 72);
    if ( v24 <= 0x10 )
    {
      v105 = v21 + a3;
      v97 = *(_QWORD *)(a1 + 1504);
      v87 = v21;
      v24 = getinf();
      v23 = v105;
      v22 = v97;
      v21 = v87;
    }
    v101 = v23;
    v93 = v22;
    v81 = v21;
    if ( v24 == 176
      || v24 == 256
      || (unsigned __int8)getinf_flag()
      || !(v107 % v10)
      || v108 % v10
      || *(_DWORD *)v11 != 1 )
    {
      return 0;
    }
    v25 = v81;
    v26 = v10;
    v27 = v93;
    v28 = v101;
    if ( v81 >= v10 )
      v26 = v81;
    v29 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
    if ( v26 == a4 )
    {
      if ( a4 % v29 )
        v29 = a4;
      v26 = v29;
      if ( a5 )
      {
        src = nullptr;
        copy_tinfo_t();
        v28 = v101;
        v27 = v93;
        v26 = v29;
        v25 = v81;
LABEL_35:
        v102 = v28;
        v94 = v27;
        v82 = v25;
        v30 = sub_227D30(a1, a3, &src, v26);
        clear_tinfo_t();
        v31 = v82;
        v32 = v94;
        if ( *(_DWORD *)(v11 + 88) >= v10 )
        {
          if ( !under_debugger )
            sub_383060(0xCC2Fu, a7);
        }
        else
        {
          v33 = v94;
          v95 = v102;
          v83 = v32;
          v34 = (_QWORD *)(a1 + 432);
          v103 = v31;
          v35 = sub_228FE0((_QWORD *)(a1 + 432), v33, v30, (int)v107 - (int)v30, a7);
          v36 = v83;
          v37 = v95;
          if ( v35 == -1 )
          {
            v107 = v30;
            if ( v95 < v108 )
              v37 = v108;
            v38 = v37 - v30;
            goto LABEL_66;
          }
          if ( v103 > v10 || *(_DWORD *)(*(_QWORD *)(a1 + 432) + 104LL * v35) == 2 )
            return (unsigned int)-1;
          if ( !under_debugger )
            sub_383060(0xCC30u, a7);
        }
LABEL_129:
        BUG();
      }
    }
    else if ( !(v26 % v29) )
    {
      v26 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
    }
    src = nullptr;
    goto LABEL_35;
  }
  if ( v23 <= v108 )
    return 1;
  if ( v15 <= a3 && *(_BYTE *)(a1 + 320) )
    return (unsigned int)-1;
  v19 = *(_DWORD *)v11;
  if ( *(_DWORD *)v11 != 1 )
    return (unsigned int)-1;
  v104 = v15;
  v96 = v21 + a3;
  v34 = (_QWORD *)(a1 + 432);
  v84 = *(_QWORD *)(a1 + 1504);
  if ( (unsigned int)sub_228FE0((_QWORD *)(a1 + 432), v84, v108, v23 - (int)v108, a7) != -1 )
    return (unsigned int)-1;
  v36 = v84;
  v38 = v96 - v107;
  if ( v104 > a3 )
  {
    v85 = v96 - v107;
    v39 = sub_226FD0(a1, v107, v96 - v107);
    v40 = v107;
    v41 = v85;
    if ( v39 )
    {
      v19 = -1;
      v41 = v107 - *(_DWORD *)(a1 + 144) + v85;
    }
    goto LABEL_47;
  }
LABEL_66:
  if ( (*(_BYTE *)(v36 + 50) & 8) != 0 )
  {
    v48 = 16;
    if ( v38 > 15 )
      goto LABEL_69;
  }
  else if ( v38 >= 2 * *(_DWORD *)(v36 + 80) )
  {
LABEL_68:
    v48 = 2 * *(_DWORD *)(v36 + 80);
    goto LABEL_69;
  }
  v89 = v36;
  v51 = sub_11CA90(v38, a7);
  v36 = v89;
  v38 = v51;
  v48 = 16;
  if ( (*(_BYTE *)(v89 + 50) & 8) == 0 )
    goto LABEL_68;
LABEL_69:
  if ( v38 > v48 )
    return (unsigned int)-1;
  v88 = v38;
  if ( (unsigned int)sub_228FE0(v34, v36, v108, (int)v107 + v38 - (int)v108, a7) != -1 )
    return (unsigned int)-1;
  v40 = v107;
  v41 = v88;
  v19 = 1;
LABEL_47:
  if ( (*(_BYTE *)(a1 + 2) & 4) == 0 )
    goto LABEL_48;
  v49 = v41;
  v50 = *(_QWORD *)(a1 + 128);
  if ( v41 + v40 > v50 )
    goto LABEL_73;
  a7 = 0.0;
  v52 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 16LL) & (v40 + *(_QWORD *)(a1 + 1440));
  v113 = 0;
  src = nullptr;
  v112 = 0u;
  if ( v52 + v41 - 1 >= v52 )
  {
    v106 = v41;
    v99 = v52;
    v91 = v41;
    *((_QWORD *)&v112 + 1) = qvector_reserve((__int64)&v112 + 8, 0, 1, 16);
    v49 = v106;
    v41 = v91;
    v72 = (unsigned __int64 *)(16 * v113 + *((_QWORD *)&v112 + 1));
    *v72 = v99;
    v72[1] = v106;
    *(_QWORD *)&v113 = v113 + 1;
  }
  v98 = v49;
  v90 = v41;
  v53 = sub_64780((_QWORD *)(a1 + 832), &src);
  v54 = v90;
  v55 = v98;
  if ( v53 )
  {
    v56 = *((_QWORD *)&v112 + 1);
    if ( !*((_QWORD *)&v112 + 1) )
      goto LABEL_93;
  }
  else
  {
    v68 = sub_318470((unsigned __int64 **)(a1 + 848), (__int64)&v112 + 8);
    v56 = *((_QWORD *)&v112 + 1);
    v54 = v90;
    if ( !v68 )
    {
      if ( *((_QWORD *)&v112 + 1) )
      {
        *(_QWORD *)&v113 = 0;
        qfree(*((__int64 *)&v112 + 1));
      }
      goto LABEL_117;
    }
    v55 = v98;
    if ( !*((_QWORD *)&v112 + 1) )
      goto LABEL_93;
  }
  v98 = v55;
  v90 = v54;
  *(_QWORD *)&v113 = 0;
  qfree(v56);
LABEL_93:
  qfree((__int64)src);
  v41 = v90;
  v49 = v98;
  v50 = *(_QWORD *)(a1 + 128);
LABEL_73:
  if ( v50 <= v40 )
  {
    v40 = v107;
    goto LABEL_48;
  }
  a7 = 0.0;
  v69 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(a1 + 1440) + v40);
  src = nullptr;
  v112 = 0u;
  v113 = 0;
  if ( v69 + v49 - 1 >= v69 )
  {
    v100 = v49;
    v92 = v41;
    *((_QWORD *)&v112 + 1) = qvector_reserve((__int64)&v112 + 8, 0, 1, 16);
    v41 = v92;
    v73 = (unsigned __int64 *)(16 * v113 + *((_QWORD *)&v112 + 1));
    *v73 = v69;
    v73[1] = v100;
    *(_QWORD *)&v113 = v113 + 1;
  }
  v90 = v41;
  if ( !(unsigned __int8)sub_64820(&src, (_QWORD *)(a1 + 832)) )
  {
    v70 = *((_QWORD *)&v112 + 1);
    if ( !*((_QWORD *)&v112 + 1) )
    {
LABEL_111:
      qfree((__int64)src);
      return (unsigned int)-1;
    }
LABEL_110:
    *(_QWORD *)&v113 = 0;
    qfree(v70);
    goto LABEL_111;
  }
  v71 = sub_317F40((__int64 *)(a1 + 848), (__int64)&v112 + 8);
  v70 = *((_QWORD *)&v112 + 1);
  if ( !v71 )
  {
    if ( !*((_QWORD *)&v112 + 1) )
      goto LABEL_111;
    goto LABEL_110;
  }
  if ( *((_QWORD *)&v112 + 1) )
  {
    *(_QWORD *)&v113 = 0;
    qfree(*((__int64 *)&v112 + 1));
  }
LABEL_117:
  qfree((__int64)src);
  v40 = v107;
  v41 = v90;
LABEL_48:
  v42 = nullptr;
  if ( v41 == a4 )
    v42 = a5;
  v76 = v42;
  if ( *(_DWORD *)v11 != 1 )
  {
    if ( !under_debugger )
      sub_383060(0xCC2Du, a7);
    goto LABEL_129;
  }
  v43 = *(_QWORD *)(v11 + 8);
  if ( !*(_DWORD *)(v11 + 88) || v40 < v43 || *(int *)(v11 + 88) + v43 - 1 < v40 + v41 - 1 )
  {
    src = nullptr;
    v112 = 0;
    if ( *(_QWORD *)(a1 + 144) <= v40 )
    {
      v109 = v40;
      LOBYTE(v110) = 5;
      v86 = v41;
      v44 = sub_227ED0(a1, (__int64)&v109, v42, v41, 0.0);
      v41 = v86;
      if ( !v44 )
        goto LABEL_76;
    }
    v45 = v76;
    v77 = v41;
    v46 = sub_2309F0(a1, v40, v41, v45, 3, (__int64 *)&src);
    if ( v46 == -1 && (!a6 || (*(_BYTE *)(*(_QWORD *)(a1 + 1496) + 604LL) & 0x10) == 0) )
      goto LABEL_76;
    if ( *(_DWORD *)v11 == 1 )
      v47 = *(_QWORD *)(v11 + 8);
    else
      v47 = -1;
    cleanup_argloc();
    *(_QWORD *)(v11 + 8) = v40;
    *(_DWORD *)v11 = 1;
    if ( !(unsigned __int8)sub_1EF680((_DWORD *)v11, *(_QWORD **)(a1 + 1504), v77, 2, 0.0) )
    {
      cleanup_argloc();
      *(_DWORD *)v11 = 1;
      *(_QWORD *)(v11 + 8) = v47;
LABEL_76:
      if ( src )
      {
        *(_QWORD *)&v112 = 0;
        qfree((__int64)src);
      }
      return (unsigned int)-1;
    }
    if ( v46 == -1 )
    {
      v57 = *(_DWORD *)(v11 + 88);
      v58 = *(_DWORD **)(a1 + 1504);
      v109 = 0;
      v110 = 0;
      sub_1EFA10(v58, (__int64 *)(a1 + 496), v11, v57, &v109, 0);
      cleanup_argloc();
      if ( (unsigned __int64)v112 > 1 )
      {
        v59 = (*(_QWORD *)(a1 + 504) == 0) + *(_QWORD *)(a1 + 504) - 1LL;
        v60 = v59 + 12;
        if ( *(_QWORD *)(a1 + 512) < (unsigned __int64)(v59 + 13) )
        {
          *(_QWORD *)(a1 + 496) = qvector_reserve(a1 + 496, *(_QWORD *)(a1 + 496), v59 + 13, 1);
          v60 = v59 + 12;
        }
        v61 = *(_QWORD *)(a1 + 496);
        *(_QWORD *)(a1 + 504) = v59 + 13;
        *(_BYTE *)(v61 + v60) = 0;
        qmemcpy((void *)(*(_QWORD *)(a1 + 496) + v59), " and stkvar ", 12);
        if ( (_QWORD)v112 )
        {
          v62 = v112 - 1;
          v63 = v112 - 1;
          if ( (_QWORD)v112 != 1 )
          {
            v64 = (*(_QWORD *)(a1 + 504) == 0) + *(_QWORD *)(a1 + 504) - 1LL;
            v65 = v62 + v64;
            v66 = v62 + (*(_QWORD *)(a1 + 504) == 0) + *(_QWORD *)(a1 + 504);
            if ( *(_QWORD *)(a1 + 512) < v66 )
            {
              v80 = v62 + v64;
              v78 = v112 - 1;
              v74 = qvector_reserve(
                      a1 + 496,
                      *(_QWORD *)(a1 + 496),
                      v62 + (*(_QWORD *)(a1 + 504) == 0) + *(_QWORD *)(a1 + 504),
                      1);
              v65 = v80;
              v63 = v78;
              *(_QWORD *)(a1 + 496) = v74;
            }
            v67 = *(_QWORD *)(a1 + 496);
            *(_QWORD *)(a1 + 504) = v66;
            *(_BYTE *)(v67 + v65) = 0;
            memcpy((void *)(*(_QWORD *)(a1 + 496) + v64), src, v63);
          }
        }
      }
      sub_1F08B0((_QWORD *)a1, *(_QWORD *)(v11 + 16), 0x14u);
      *(_DWORD *)(v11 + 24) |= 0x400u;
    }
    if ( src )
    {
      *(_QWORD *)&v112 = 0;
      qfree((__int64)src);
    }
  }
  return v19;
}

