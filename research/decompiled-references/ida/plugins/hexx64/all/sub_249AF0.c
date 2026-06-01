__int64 __fastcall sub_249AF0(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4, _BYTE *a5, char a6, double a7)
{
  __int64 v11; // rax
  __int64 v12; // rdx
  char v13; // al
  __int64 v14; // rcx
  char v15; // r9
  __int64 v16; // r8
  unsigned int v17; // ecx
  int v18; // edx
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // edx
  __int64 v26; // rax
  signed int v27; // r15d
  __int64 v28; // rcx
  int v29; // esi
  __int64 v30; // rax
  int v31; // r8d
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rax
  int v36; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // r10
  __int64 v42; // rdx
  __int64 v43; // r13
  __int64 v44; // rdx
  __int64 v45; // rcx
  int v46; // edx
  __int64 v47; // rdx
  __int64 v48; // rcx
  char v49; // di
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // r13
  __int64 v54; // rsi
  __int64 v55; // rdx
  __int64 *v56; // rsi
  __int64 v57; // r15
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rdx
  _QWORD *v62; // rax
  int v63; // ecx
  int v64; // ecx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rdx
  _QWORD *v74; // rax
  int v75; // ecx
  int v76; // ecx
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 *v85; // rax
  __int64 v86; // rdx
  unsigned __int64 v87; // rax
  int v88; // eax
  int tinfo_size; // eax
  int v90; // edx
  int v91; // eax
  __int64 v92; // rdi
  unsigned __int64 v93; // rsi
  char v94; // al
  __int64 v95; // [rsp+8h] [rbp-98h]
  _QWORD **v96; // [rsp+8h] [rbp-98h]
  int tinfo_property; // [rsp+10h] [rbp-90h]
  __int64 v98; // [rsp+10h] [rbp-90h]
  __int64 v99; // [rsp+10h] [rbp-90h]
  char v100; // [rsp+1Ch] [rbp-84h]
  unsigned __int8 *v101; // [rsp+20h] [rbp-80h]
  _DWORD *v102; // [rsp+28h] [rbp-78h]
  __int64 v105; // [rsp+38h] [rbp-68h]
  __int64 v106; // [rsp+40h] [rbp-60h] BYREF
  __int64 v107; // [rsp+48h] [rbp-58h] BYREF
  __int64 v108; // [rsp+50h] [rbp-50h] BYREF
  __int128 v109; // [rsp+58h] [rbp-48h]
  unsigned __int64 v110; // [rsp+68h] [rbp-38h]

  v110 = __readfsqword(0x28u);
  v11 = *(_QWORD *)(a1 + 176);
  v106 = 0;
  v101 = *(unsigned __int8 **)(v11 + 8);
  v102 = *((_DWORD **)v101 + 188);
  copy_tinfo_t();
  sub_23F100(&v106, (__int64)v101, (unsigned __int64)a2, a3, *(_DWORD *)(a3 + 4), 0, a7);
  v12 = a6 & 1;
  v13 = a6 & 1 | 8;
  v14 = a6 & 4;
  if ( (a6 & 4) == 0 )
    v13 = a6 & 1;
  v15 = a6 & 4;
  v100 = v13;
  switch ( *(_BYTE *)a3 )
  {
    case 0:
    case 7:
    case 8:
      if ( !under_debugger )
        sub_383060(0xC4D8u, a7);
      goto LABEL_95;
    case 1:
      if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, _QWORD, __int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v102
                                                                                                 + 264LL))(
             v102,
             *(unsigned int *)(a3 + 8),
             v12,
             a6 & 4,
             v16,
             a6 & 4) )
      {
        v17 = *(_DWORD *)(a3 + 4);
        a7 = 0.0;
        v18 = *(_DWORD *)(a3 + 8);
        v108 = 0;
        v109 = 0;
        sub_1338F0(v102, &v108, v18, v17);
        qstrupr();
        sub_32C270(&v107, (__int64)v102, *(_DWORD *)(a3 + 4));
        v19 = sub_2426C0(1);
        clear_tinfo_t();
        if ( v108 )
        {
          *(_QWORD *)&v109 = 0;
          qfree(v108);
        }
LABEL_58:
        v34 = *(_DWORD *)(a3 + 4);
        goto LABEL_21;
      }
      if ( !under_debugger )
        sub_383060(0xC4D7u, a7);
      goto LABEL_95;
    case 2:
      v20 = j__qalloc_or_throw(64, (__int64)v101, v12, v14);
      *(_QWORD *)v20 = -1;
      v19 = v20;
      *(_QWORD *)(v20 + 8) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v20 + 16) = 0xFFFFFFFFLL;
      *(_QWORD *)(v20 + 40) = 0;
      *(_QWORD *)(v20 + 48) = 0;
      *(_DWORD *)(v20 + 56) = 0;
      *(_OWORD *)(v20 + 24) = 0;
      v21 = **(_QWORD **)(a3 + 8);
      *(_DWORD *)(v19 + 8) = 61;
      *(_QWORD *)v19 = v21;
      v24 = j__qalloc_or_throw(48, (__int64)v101, v22, v23);
      a7 = 0.0;
      v25 = *(_DWORD *)(*(_QWORD *)(a3 + 8) + 8LL);
      *(_QWORD *)v24 = 0;
      *(_DWORD *)(v24 + 8) = 0;
      *(_WORD *)(v24 + 12) = (unsigned __int8)v25;
      *(_WORD *)(v24 + 14) = 0;
      *(_QWORD *)(v24 + 16) = 0;
      *(_QWORD *)(v24 + 40) = 0;
      *(_OWORD *)(v24 + 24) = 0;
      *(_QWORD *)(v19 + 24) = v24;
      tinfo_property = get_tinfo_property();
      v26 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL), *(_DWORD *)(a3 + 4), tinfo_property != 2);
      v27 = *(_DWORD *)(a3 + 4);
      v28 = v26;
      if ( (a6 & 2) != 0 )
      {
        v29 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 328) + 130LL);
        if ( v27 < v29 && tinfo_property == 1 )
        {
          v95 = v26;
          v30 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 24LL), v29, 1);
          v28 = v95;
          if ( v30 != v95 )
          {
            v27 = v29;
            v28 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL);
          }
        }
      }
      if ( v27 < v102[22] )
      {
        v105 = v28;
        v91 = sub_11CA90(v27, 0.0);
        v28 = v105;
        v31 = v91;
      }
      else
      {
        v31 = v27;
      }
      sub_240A20(v19, *(_QWORD *)(a1 + 328), *(_QWORD *)(a1 + 176), v28, v31, tinfo_property, 0.0);
      if ( v27 == (unsigned int)get_tinfo_size() )
        goto LABEL_58;
      v107 = 0;
      copy_tinfo_t();
      if ( !*(_BYTE *)a4 )
      {
        sub_32C430(&v108, (__int64)v102, v27, 2);
        copy_tinfo_t();
        clear_tinfo_t();
      }
      v19 = sub_244E70(v19, (__int64)&v107, v32, v33);
      if ( v27 != (unsigned int)get_tinfo_size() )
        sub_248280(*(_QWORD *)(a1 + 328), v19, &v107, 0.0);
      goto LABEL_19;
    case 3:
      v35 = j__qalloc_or_throw(64, (__int64)v101, v12, v14);
      *(_QWORD *)v35 = -1;
      v19 = v35;
      a7 = 0.0;
      *(_QWORD *)(v35 + 8) = 0xFFFFFFFF0000003FLL;
      *(_QWORD *)(v35 + 16) = 0xFFFFFFFFLL;
      *(_QWORD *)(v35 + 40) = 0;
      *(_QWORD *)(v35 + 48) = 0;
      *(_DWORD *)(v35 + 56) = 0;
      *(_OWORD *)(v35 + 24) = 0;
      *(_QWORD *)(v35 + 24) = qstrdup();
      v36 = strlen(*(const char **)(a3 + 8));
      LODWORD(v109) = 0;
      v107 = 50;
      DWORD1(v109) = v36 + 1;
      v108 = 0;
      copy_tinfo_t();
      create_tinfo();
      clear_tinfo_t();
      clear_tinfo_t();
      v34 = *(_DWORD *)(a3 + 4);
      goto LABEL_21;
    case 4:
      v19 = (__int64)sub_24EE70(a1, *(__int64 **)(a3 + 8), (__int64)&v106, 0);
      if ( v19 )
        goto LABEL_58;
      if ( !under_debugger )
        sub_383060(0xC4D9u, a7);
      goto LABEL_95;
    case 5:
      v108 = 0;
      copy_tinfo_t();
      v19 = sub_249970(v101, *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL), *(_DWORD *)(a3 + 4), &v108, a7);
      clear_tinfo_t();
      v34 = *(_DWORD *)(a3 + 4);
      goto LABEL_21;
    case 6:
      v38 = j__qalloc_or_throw(64, (__int64)v101, v12, v14);
      *(_QWORD *)v38 = -1;
      a7 = 0.0;
      *(_QWORD *)(v38 + 40) = 0;
      *(_QWORD *)(v38 + 8) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v38 + 16) = 0xFFFFFFFFLL;
      *(_QWORD *)(v38 + 48) = 0;
      *(_DWORD *)(v38 + 56) = 0;
      *(_OWORD *)(v38 + 24) = 0;
      v39 = sub_247D90(
              *(_QWORD *)(a1 + 328),
              (__int64)a2,
              v38,
              *(_QWORD *)(a3 + 8),
              &v106,
              *(_DWORD *)(a3 + 4),
              0.0,
              v100);
      goto LABEL_28;
    case 9:
      v40 = j__qalloc_or_throw(64, (__int64)v101, v12, v14);
      a7 = 0.0;
      *(_QWORD *)v40 = -1;
      *(_QWORD *)(v40 + 12) = -1;
      *(_QWORD *)(v40 + 48) = 0;
      *(_DWORD *)(v40 + 56) = 0;
      *(_OWORD *)(v40 + 32) = 0;
      if ( (a6 & 1) == 0 )
        *(_QWORD *)v40 = a2;
      *(_DWORD *)(v40 + 8) = 65;
      *(_QWORD *)(v40 + 24) = v101;
      *(_DWORD *)(v40 + 32) = *(_DWORD *)(*(_QWORD *)(a3 + 8) + 16LL);
      if ( *(_QWORD *)(**(_QWORD **)(a3 + 8) + 440LL) < (unsigned __int64)*(int *)(*(_QWORD *)(a3 + 8) + 16LL) )
        sub_23E380(0.0);
      v98 = v40;
      copy_tinfo_t();
      v41 = v98;
      if ( (*(_BYTE *)(a3 + 1) & 0x10) != 0 )
        *(_DWORD *)(v98 + 56) |= 0x40u;
      if ( *a5 && (a6 & 8) == 0 )
      {
        sub_23F100(&v106, (__int64)v101, (unsigned __int64)a2, a3, *(_DWORD *)(a3 + 4), 0, 0.0);
        v41 = v98;
      }
      v39 = sub_2476A0(
              *(_QWORD *)(a1 + 328),
              (__int64)a2,
              v41,
              *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL),
              &v106,
              *(_DWORD *)(a3 + 4),
              0.0,
              v100);
LABEL_28:
      v19 = v39;
      v34 = *(_DWORD *)(a3 + 4);
      goto LABEL_21;
    case 0xA:
      v42 = *(_QWORD *)(a3 + 8);
      if ( *(_BYTE *)v42 != 6 )
        goto LABEL_39;
      v92 = *(_QWORD *)(a1 + 328);
      v93 = *(_QWORD *)(v42 + 8);
      if ( *(_QWORD *)(*(_QWORD *)(v92 + 24) + 16LL) < v93 )
        goto LABEL_80;
      v99 = *(_QWORD *)(a3 + 8);
      v94 = is_mapped();
      v15 = a6 & 4;
      v42 = v99;
      if ( v94 )
      {
LABEL_39:
        v108 = 0;
        v107 = 0;
        v43 = sub_249AF0(a1, a2, v42, &v107, &v108, v15);
        clear_tinfo_t();
        clear_tinfo_t();
        v19 = sub_247510((__int64)v102, v43, v44, v45, a7);
      }
      else
      {
        v93 = *(_QWORD *)(v99 + 8);
        v92 = *(_QWORD *)(a1 + 328);
LABEL_80:
        v19 = sub_240F50(v92, v93, 0, -1, 0, 2, *(_DWORD *)(*((_QWORD *)v101 + 188) + 80LL));
      }
      v46 = *(_DWORD *)(a3 + 4);
      v34 = v102[21];
      if ( v46 != v34 )
      {
        sub_32C270(&v108, (__int64)v102, v46);
        v19 = sub_244E70(v19, (__int64)&v108, v47, v48);
        clear_tinfo_t();
        v34 = *(_DWORD *)(a3 + 4);
      }
      goto LABEL_21;
    case 0xB:
      v49 = 1;
      if ( (a6 & 0x10) != 0 )
        v49 = (unsigned int)lexcompare_tinfo() == 0;
      v19 = sub_2426C0(v49);
      v34 = *(_DWORD *)(a3 + 4);
      goto LABEL_21;
    case 0xD:
      sub_32C150(&v108, (__int64)v102, *(_DWORD *)(a3 + 4));
      v19 = sub_23E7E0(*(const __m128i **)(a3 + 8), (__int64)&v108, v50, v51);
      clear_tinfo_t();
      v34 = *(_DWORD *)(a3 + 4);
      goto LABEL_21;
    case 0xE:
      if ( (v13 & 1) != 0 )
      {
        if ( !under_debugger )
          sub_383060(0xC4DAu, a7);
LABEL_95:
        BUG();
      }
      sub_32C430(&v107, (__int64)v102, *(_DWORD *)(*(_QWORD *)(a3 + 8) + 4LL), 2);
      v52 = *(_QWORD *)(a3 + 8);
      v108 = 0;
      v53 = sub_249AF0(a1, a2, v52, &v108, &v107, 0);
      clear_tinfo_t();
      v54 = *(_QWORD *)(a3 + 8);
      v108 = 0;
      v55 = v54 + 16;
      v56 = a2;
      v57 = sub_249AF0(a1, a2, v55, &v108, &v107, 0);
      clear_tinfo_t();
      v60 = qalloc_or_throw(40, (__int64)v56, v58, v59);
      *(_QWORD *)v60 = 0;
      a7 = 0.0;
      *(_QWORD *)(v60 + 24) = 0;
      *(_DWORD *)(v60 + 32) = 0;
      *(_OWORD *)(v60 + 8) = 0;
      v96 = (_QWORD **)v60;
      sub_246200((__int64 *)v60, 2u);
      v61 = *(_QWORD *)v57;
      v62 = *v96;
      *(_QWORD *)v57 = **v96;
      v63 = *((_DWORD *)v62 + 2);
      *v62 = v61;
      LODWORD(v61) = *(_DWORD *)(v57 + 8);
      *(_DWORD *)(v57 + 8) = v63;
      v64 = *((_DWORD *)v62 + 3);
      *((_DWORD *)v62 + 2) = v61;
      LODWORD(v61) = *(_DWORD *)(v57 + 12);
      *(_DWORD *)(v57 + 12) = v64;
      v65 = v62[3];
      *((_DWORD *)v62 + 3) = v61;
      v66 = *(_QWORD *)(v57 + 24);
      *(_QWORD *)(v57 + 24) = v65;
      v67 = v62[4];
      v62[3] = v66;
      v68 = *(_QWORD *)(v57 + 32);
      *(_QWORD *)(v57 + 32) = v67;
      v69 = v62[5];
      v62[4] = v68;
      v70 = *(_QWORD *)(v57 + 40);
      *(_QWORD *)(v57 + 40) = v69;
      v71 = v62[6];
      v62[5] = v70;
      v72 = *(_QWORD *)(v57 + 48);
      *(_QWORD *)(v57 + 48) = v71;
      LODWORD(v71) = *((_DWORD *)v62 + 14);
      v62[6] = v72;
      LODWORD(v72) = *(_DWORD *)(v57 + 56);
      *(_DWORD *)(v57 + 56) = v71;
      *((_DWORD *)v62 + 14) = v72;
      if ( v57 )
      {
        sub_255630(v57);
        clear_tinfo_t();
        j__qfree(v57);
      }
      v73 = *(_QWORD *)v53;
      v74 = *v96;
      *(_QWORD *)v53 = (*v96)[9];
      v75 = *((_DWORD *)v74 + 20);
      v74[9] = v73;
      LODWORD(v73) = *(_DWORD *)(v53 + 8);
      *(_DWORD *)(v53 + 8) = v75;
      v76 = *((_DWORD *)v74 + 21);
      *((_DWORD *)v74 + 20) = v73;
      LODWORD(v73) = *(_DWORD *)(v53 + 12);
      *(_DWORD *)(v53 + 12) = v76;
      v77 = v74[12];
      *((_DWORD *)v74 + 21) = v73;
      v78 = *(_QWORD *)(v53 + 24);
      *(_QWORD *)(v53 + 24) = v77;
      v79 = v74[13];
      v74[12] = v78;
      v80 = *(_QWORD *)(v53 + 32);
      *(_QWORD *)(v53 + 32) = v79;
      v81 = v74[14];
      v74[13] = v80;
      v82 = *(_QWORD *)(v53 + 40);
      *(_QWORD *)(v53 + 40) = v81;
      v83 = v74[15];
      v74[14] = v82;
      v84 = *(_QWORD *)(v53 + 48);
      *(_QWORD *)(v53 + 48) = v83;
      LODWORD(v83) = *((_DWORD *)v74 + 32);
      v74[15] = v84;
      LODWORD(v84) = *(_DWORD *)(v53 + 56);
      *(_DWORD *)(v53 + 56) = v83;
      *((_DWORD *)v74 + 32) = v84;
      if ( v53 )
      {
        sub_255630(v53);
        clear_tinfo_t();
        j__qfree(v53);
      }
      sub_32C430(&v108, (__int64)v102, *(_DWORD *)(a3 + 4), 2);
      copy_tinfo_t();
      clear_tinfo_t();
      sub_246AC0((__int64)&v108);
      v19 = sub_F1640((__int64)&v107, (__int64)v96);
      if ( v108 )
      {
        *(_QWORD *)&v109 = 0;
        qfree(v108);
      }
LABEL_19:
      clear_tinfo_t();
      v34 = *(_DWORD *)(a3 + 4);
LABEL_21:
      if ( v34 == -1 )
        goto LABEL_25;
      if ( *(_BYTE *)a3 != 9 )
        goto LABEL_65;
      v85 = *(__int64 **)(a3 + 8);
      v86 = *v85;
      v87 = *((int *)v85 + 4);
      if ( *(_QWORD *)(v86 + 440) < v87 )
        sub_23E380(a7);
      if ( !(unsigned __int8)sub_1F0D70((int *)(*(_QWORD *)(v86 + 432) + 104 * v87), v102) )
      {
LABEL_65:
        if ( (get_tinfo_property() & 0xF) != 0xB && (get_tinfo_property() & 0xF) != 9 )
        {
          v88 = *(_DWORD *)(v19 + 8);
          if ( v88 != 61 )
          {
LABEL_67:
            if ( v88 == 49 )
              goto LABEL_25;
            if ( !(unsigned __int8)sub_1EEA60(v101) && !(unsigned __int8)sub_2422F0(v19, *(_DWORD *)(a3 + 4)) )
            {
              tinfo_size = get_tinfo_size();
              v90 = *(_DWORD *)(a3 + 4);
              if ( (v100 & 1) != 0 )
              {
                if ( v90 != tinfo_size )
                  goto LABEL_72;
              }
              else if ( v90 > tinfo_size )
              {
LABEL_72:
                if ( !under_debugger )
                  sub_383060(0xC722u, a7);
                goto LABEL_95;
              }
            }
            goto LABEL_24;
          }
          if ( (get_tinfo_property() & 0x3F) != 0x2D )
          {
            v88 = *(_DWORD *)(v19 + 8);
            goto LABEL_67;
          }
        }
      }
LABEL_24:
      if ( (unsigned int)(*(_DWORD *)(v19 + 8) - 64) <= 1 && *(_DWORD *)(v19 + 40) != *(_DWORD *)(a3 + 4) )
      {
        if ( !under_debugger )
          sub_383060(0xC726u, a7);
        goto LABEL_95;
      }
LABEL_25:
      sub_246B40(v19, *(_QWORD *)(a1 + 328), a4, a7);
      clear_tinfo_t();
      return v19;
    case 0xF:
      if ( !(unsigned __int8)sub_1C3110(*(_QWORD *)(a3 + 8), 0, 0, a7) || !(unsigned __int8)sub_32F330(a3, &v107) )
        goto LABEL_77;
      v108 = 0;
      copy_tinfo_t();
      v19 = sub_249970(v101, v107, *(_DWORD *)(a3 + 4), &v108, a7);
      clear_tinfo_t();
      v34 = *(_DWORD *)(a3 + 4);
      goto LABEL_21;
    default:
LABEL_77:
      if ( !under_debugger )
        sub_383060(0xC4DBu, a7);
      goto LABEL_95;
  }
}

