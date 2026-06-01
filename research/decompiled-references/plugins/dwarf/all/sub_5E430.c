char __fastcall sub_5E430(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        const __m128i *a4,
        _QWORD *a5,
        __int64 a6,
        unsigned __int8 a7,
        unsigned __int8 a8)
{
  _QWORD *v9; // r11
  __int64 v10; // r8
  __int64 v11; // r12
  __m128i v13; // xmm0
  __int32 v14; // r13d
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rax
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  int v21; // esi
  __m128i v22; // xmm0
  __int64 v23; // r15
  __int64 v24; // r13
  int v25; // eax
  __int64 tinfo_size; // rbx
  char v27; // al
  unsigned __int8 v28; // r15
  __int64 v29; // r15
  char result; // al
  unsigned __int8 v31; // al
  __int64 v32; // rbx
  char v33; // al
  int v34; // r15d
  __int64 v35; // rdi
  __int64 v36; // r12
  __int64 v37; // r15
  _QWORD *v38; // rbx
  __int64 v39; // rdi
  __int64 v40; // rdi
  int v41; // edx
  __int64 v42; // rax
  unsigned int v43; // r15d
  char v44; // cl
  int v45; // r9d
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  __int64 v48; // r8
  char tinfo_details; // al
  unsigned int tinfo_property; // eax
  __int64 v51; // rdi
  __int64 v52; // rdx
  __int64 v53; // rcx
  bool v54; // r8
  char v55; // r9
  __int64 v56; // rax
  char v57; // al
  char v58; // r15
  bool v59; // r8
  __int64 v60; // r14
  __int64 v61; // rax
  char v62; // al
  __int64 idati; // rax
  char v64; // al
  unsigned int v65; // r15d
  __m128i v66; // xmm0
  char v67; // al
  unsigned int v68; // edx
  char v69; // al
  __int64 v70; // rsi
  unsigned __int64 v71; // rax
  int v72; // [rsp+Ch] [rbp-144h]
  unsigned int v73; // [rsp+10h] [rbp-140h]
  char v74; // [rsp+14h] [rbp-13Ch]
  char v75; // [rsp+14h] [rbp-13Ch]
  unsigned __int8 v76; // [rsp+14h] [rbp-13Ch]
  int v77; // [rsp+18h] [rbp-138h]
  int v78; // [rsp+18h] [rbp-138h]
  _QWORD *v79; // [rsp+18h] [rbp-138h]
  char v80; // [rsp+18h] [rbp-138h]
  unsigned int v81; // [rsp+20h] [rbp-130h]
  __int64 v82; // [rsp+20h] [rbp-130h]
  __int32 v83; // [rsp+20h] [rbp-130h]
  bool v84; // [rsp+20h] [rbp-130h]
  __int64 v85; // [rsp+28h] [rbp-128h]
  _QWORD *v86; // [rsp+28h] [rbp-128h]
  __int64 v87; // [rsp+28h] [rbp-128h]
  unsigned __int8 v88; // [rsp+30h] [rbp-120h]
  char v90; // [rsp+38h] [rbp-118h]
  char v91; // [rsp+38h] [rbp-118h]
  char v92; // [rsp+38h] [rbp-118h]
  char v93; // [rsp+38h] [rbp-118h]
  char v94; // [rsp+38h] [rbp-118h]
  char v95; // [rsp+38h] [rbp-118h]
  _QWORD *v96; // [rsp+38h] [rbp-118h]
  char v97; // [rsp+38h] [rbp-118h]
  char v98; // [rsp+38h] [rbp-118h]
  _QWORD *v99; // [rsp+38h] [rbp-118h]
  __m128i v100; // [rsp+40h] [rbp-110h] BYREF
  __int64 v101; // [rsp+50h] [rbp-100h]
  __int64 v102; // [rsp+60h] [rbp-F0h] BYREF
  __int64 v103; // [rsp+68h] [rbp-E8h] BYREF
  __m128i v104; // [rsp+70h] [rbp-E0h] BYREF
  __int64 v105; // [rsp+80h] [rbp-D0h]
  __m128i v106; // [rsp+90h] [rbp-C0h] BYREF
  __int64 v107; // [rsp+A0h] [rbp-B0h]
  _BYTE v108[24]; // [rsp+B0h] [rbp-A0h] BYREF
  __int64 v109; // [rsp+C8h] [rbp-88h]
  __int64 v110; // [rsp+D0h] [rbp-80h] BYREF
  __int64 v111; // [rsp+D8h] [rbp-78h] BYREF
  __int128 v112; // [rsp+E0h] [rbp-70h]
  __int64 v113; // [rsp+F0h] [rbp-60h]
  __int128 v114; // [rsp+F8h] [rbp-58h]
  char v115; // [rsp+108h] [rbp-48h]
  unsigned __int64 v116; // [rsp+118h] [rbp-38h]

  v9 = a5;
  v10 = (unsigned int)a6;
  v11 = a2;
  v13 = _mm_loadu_si128(a4);
  v14 = a4->m128i_i32[0];
  v15 = a7;
  v16 = 0;
  v116 = __readfsqword(0x28u);
  v17 = a4[1].m128i_i64[0];
  v104 = v13;
  v107 = 0;
  v18 = a4->m128i_i64[1];
  v105 = v17;
  v106 = 0;
  if ( v14 != 1 )
    goto LABEL_14;
  while ( *(_DWORD *)(v18 + 272) == 1 )
  {
    v17 = *(unsigned int *)(v18 + 384);
    a2 = (unsigned int)(v17 - 3);
    if ( (unsigned int)a2 > 1 )
    {
      if ( (_DWORD)v17 != 6 )
      {
        v14 = 1;
        break;
      }
      if ( !(_DWORD)v16 )
      {
        v104.m128i_i64[1] = v18;
        v104.m128i_i32[0] = 1;
        v19 = _mm_load_si128(&v104);
        v107 = v105;
        v106 = v19;
      }
      v16 = 1;
    }
    else
    {
      v21 = v15;
      v15 = (unsigned int)v15 | 0xFFFFFF80;
      a2 = v21 | 0x40u;
      if ( (_DWORD)v17 != 4 )
        v15 = (unsigned int)a2;
    }
    v20 = _mm_loadu_si128((const __m128i *)(v18 + 392));
    v105 = *(_QWORD *)(v18 + 408);
    v17 = *(unsigned int *)(v18 + 392);
    v104 = v20;
    v18 = *(_QWORD *)(v18 + 400);
    if ( (_DWORD)v17 != 1 )
    {
      v14 = v17;
      break;
    }
  }
  if ( !(_DWORD)v16 )
  {
LABEL_14:
    v104.m128i_i64[1] = v18;
    v104.m128i_i32[0] = v14;
    v22 = _mm_load_si128(&v104);
    v107 = v105;
    v106 = v22;
  }
  v23 = *v9;
  v24 = *v9 & 0xFLL;
  switch ( (char)v24 )
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      v86 = v9;
      if ( v106.m128i_i32[0] == 1 )
        return 0;
      v103 = 0;
      memset(v108, 0, sizeof(v108));
      if ( !(unsigned __int8)sub_5D750(v106.m128i_i32, &v103, a1, a3, (__int64)v108, v15) )
        goto LABEL_86;
      v25 = lexcompare_tinfo(v103, *v86, 0);
      if ( v25 && a8 )
      {
        if ( (((unsigned __int8)v103 ^ (unsigned __int8)v23) & 0x30) == 0 && ((v103 & 0xF) == 7 || (_BYTE)v24 == 7) )
        {
          tinfo_size = get_tinfo_size(0, v103, 0);
          v27 = get_tinfo_size(0, *v86, 0) == tinfo_size;
        }
        else
        {
LABEL_86:
          v27 = 0;
        }
      }
      else
      {
        v27 = v25 == 0;
      }
      if ( *(_QWORD *)v108 )
      {
        v94 = v27;
        *(_QWORD *)&v108[8] = 0;
        qfree(*(_QWORD *)v108);
        v27 = v94;
      }
      goto LABEL_124;
    case 10:
      if ( v106.m128i_i32[0] != 1
        || *(_DWORD *)(v106.m128i_i64[1] + 272) != 1
        || (unsigned int)(*(_DWORD *)(v106.m128i_i64[1] + 384) - 1) > 1 )
      {
        return 0;
      }
      result = 0;
      if ( (_BYTE)v15 == (v23 & 0xC0) )
      {
        v76 = a6;
        v79 = v9;
        v83 = v106.m128i_i32[2];
        v103 = 0;
        v102 = 0;
        *(_OWORD *)v108 = 0;
        copy_tinfo_t(&v108[8], &v102);
        *(_QWORD *)&v108[16] = 0;
        copy_tinfo_t(&v108[16], &v103);
        LODWORD(v109) = 0;
        WORD2(v109) = 0;
        clear_tinfo_t(&v102);
        clear_tinfo_t(&v103);
        tinfo_details = get_tinfo_details(*v79, 10, v108);
        if ( tinfo_details )
          tinfo_details = sub_5E430(a1, v11, (_DWORD)a3, v83 + 392, (unsigned int)v108, v76, 0, a8);
        v93 = tinfo_details;
        clear_tinfo_t(&v108[16]);
        clear_tinfo_t(&v108[8]);
        clear_tinfo_t(v108);
        return v93;
      }
      return result;
    case 11:
      if ( v106.m128i_i32[0] == 2 )
      {
        idati = v106.m128i_i64[1];
        v103 = 0;
        *(_WORD *)&v108[16] = 257;
        *(_QWORD *)&v108[8] = (unsigned int)v107;
        if ( !v106.m128i_i64[1] )
        {
          v99 = v9;
          idati = get_idati(v16, a2, (unsigned int)v107, v15, (unsigned int)a6, a6);
          v9 = v99;
        }
        *(_QWORD *)v108 = idati;
        v96 = v9;
        if ( (unsigned __int8)create_tinfo(&v103, 61, 189, v108) && get_tinfo_property(v103, 5) )
        {
          *(_OWORD *)v108 = 0u;
          v64 = get_tinfo_details(*v96, 11, v108);
          if ( v64 )
          {
            v64 = 0;
            if ( *(_DWORD *)&v108[12] == 1 )
              v64 = (unsigned __int8)get_tinfo_property(*(_QWORD *)v108, 2) == 2;
          }
          v97 = v64;
          clear_tinfo_t(v108);
          v27 = v97;
        }
        else
        {
          v27 = 0;
        }
        goto LABEL_124;
      }
      if ( v106.m128i_i32[0] != 1 )
        return 0;
      v87 = v106.m128i_i64[1];
      if ( *(_DWORD *)(v106.m128i_i64[1] + 272) != 1 || *(_DWORD *)(v106.m128i_i64[1] + 384) != 6 )
        return 0;
      result = 0;
      if ( (_BYTE)v15 != (v23 & 0xC0) )
        return result;
      v41 = 1;
      v74 = v15;
      v77 = a6;
      v42 = *(_QWORD *)(v106.m128i_i64[1] + 424);
      v103 = 0;
      v73 = v42;
      if ( (_DWORD)v42 )
        v41 = v42;
      v43 = 0;
      v72 = v41;
      copy_tinfo_t(&v103, v9);
      v44 = v74;
      v82 = 0;
      v45 = v77;
      while ( 1 )
      {
        v75 = v44;
        v78 = v45;
        *(_OWORD *)v108 = 0u;
        if ( !(unsigned __int8)get_tinfo_details(v103, 11, v108) )
          break;
        if ( v43 < v73 )
        {
          v46 = *(_QWORD *)(v87 + 416) + v82;
          v47 = *(_QWORD *)(v46 + 8);
          if ( v47 < *(_QWORD *)v46 )
            goto LABEL_156;
          v48 = 0;
          if ( !*(_BYTE *)(v46 + 16) )
            v48 = v47 + 1 - *(_QWORD *)v46;
          if ( *(unsigned int *)&v108[12] != v48 )
            break;
        }
        copy_tinfo_t(&v103, v108);
        ++v43;
        clear_tinfo_t(v108);
        v82 += 24;
        v45 = v78;
        v44 = v75;
        if ( v72 == v43 )
        {
          v27 = sub_5E430(a1, v11, (_DWORD)a3, (int)v87 + 392, (unsigned int)&v103, (unsigned __int8)v78, v75, a8);
LABEL_124:
          v98 = v27;
          clear_tinfo_t(&v103);
          return v98;
        }
      }
      clear_tinfo_t(v108);
      v27 = 0;
      goto LABEL_124;
    case 12:
      goto LABEL_38;
    case 13:
      v31 = v23 & 0x30;
      if ( (v23 & 0x30) == 0x20 )
      {
        if ( v106.m128i_i32[0] == 1 )
        {
          if ( !*(_DWORD *)(v106.m128i_i64[1] + 272) && v106.m128i_i64[1] )
            return (unsigned int)lexcompare_tinfo(*v9, *(_QWORD *)(v106.m128i_i64[1] + 384), 0) == 0;
          return 0;
        }
        if ( v106.m128i_i32[0] == 2 )
          return sub_59120(v9, (__int64)&v106.m128i_i64[1], v17, v15, v10, a6);
        if ( under_debugger )
          goto LABEL_160;
        v51 = 30533;
        interr(30533);
        goto LABEL_94;
      }
      if ( v31 > 0x20u )
      {
        if ( v31 != 48 )
        {
          if ( !under_debugger )
            interr(779);
          goto LABEL_160;
        }
        v81 = a6;
        v88 = a6;
        v24 = *(_QWORD *)(*(_QWORD *)(v11 + 144) + 8LL);
        v85 = *(_QWORD *)(v11 + 144);
        tinfo_property = get_tinfo_property(*v9, 7);
        v51 = v24;
        LODWORD(v23) = get_alias_target(v24, tinfo_property);
        if ( !(_DWORD)v23 )
          return 0;
LABEL_94:
        if ( v106.m128i_i32[0] == 2 )
          return (_DWORD)v23 == (unsigned int)get_alias_target(v24, (unsigned int)v107);
        if ( v106.m128i_i32[0] == 3 )
          return 0;
        v54 = v88;
        v55 = v81;
        if ( v106.m128i_i32[0] != 1 )
        {
LABEL_154:
          if ( !under_debugger )
          {
            interr(778);
LABEL_156:
            if ( !under_debugger )
              interr(30369);
          }
LABEL_160:
          BUG();
        }
        v56 = v24;
        v103 = 0;
        *(_WORD *)&v108[16] = 257;
        *(_QWORD *)&v108[8] = (unsigned int)v23;
        if ( !v24 )
        {
          v56 = get_idati(v51, 257, v52, v53, v88, v81);
          v55 = v81;
          v54 = v88;
        }
        *(_QWORD *)v108 = v56;
        v80 = v55;
        v84 = v54;
        v57 = create_tinfo(&v103, 61, 189, v108);
        v58 = v57;
        if ( v80 )
        {
          if ( v57 )
          {
            v65 = get_tinfo_property(v103, 8);
            sub_55760(&v100, &v106);
            v66 = _mm_loadu_si128(&v100);
            v107 = v101;
            v106 = v66;
            if ( _mm_cvtsi128_si32(v66) )
            {
              v67 = get_tinfo_property(v103, 2);
              v68 = v65;
              if ( (v67 & 0xF) == 0xC || (v69 = get_tinfo_property(v103, 2), v68 = v65, (v69 & 0xF) == 0xA) )
              {
                sub_53580((__int64)&v103, v11, v68);
                v62 = sub_5E430(a1, v11, (_DWORD)a3, (unsigned int)&v106, (unsigned int)&v103, 1, 0, a8);
                goto LABEL_108;
              }
              if ( v106.m128i_i32[0] == 1 )
              {
                v70 = *(unsigned int *)(v106.m128i_i64[1] + 276);
                if ( *(_DWORD *)(v106.m128i_i64[1] + 336) == 2 )
                  v70 = *(unsigned int *)(v106.m128i_i64[1] + 280);
                v62 = (unsigned int)get_alias_target(v24, v70) == v65;
                goto LABEL_108;
              }
            }
          }
          v62 = 0;
LABEL_108:
          v95 = v62;
          clear_tinfo_t(&v103);
          return v95;
        }
        v59 = v84;
        if ( *(_DWORD *)(v106.m128i_i64[1] + 272) == 2 )
        {
          if ( (*(_BYTE *)(v106.m128i_i64[1] + 412) & 1) != 0 )
          {
            v60 = *(_QWORD *)(v106.m128i_i64[1] + 416) >> 3;
LABEL_103:
            if ( v58 != 1 || v59 )
              goto LABEL_107;
            v61 = get_tinfo_size(0, v103, 1);
            if ( v61 == -1 )
            {
              if ( (get_tinfo_property(v103, 2) & 0xF) != 0xC )
                goto LABEL_145;
              v61 = *(unsigned int *)(a3[10] + 192LL);
            }
            if ( v60 == v61 )
            {
LABEL_107:
              v62 = 1;
              goto LABEL_108;
            }
LABEL_145:
            v62 = sub_57FF0(v85, &v103);
            goto LABEL_108;
          }
          v60 = *(_QWORD *)(v106.m128i_i64[1] + 368);
          if ( v60 != -1 )
            goto LABEL_103;
        }
        else
        {
          v71 = sub_97AE0(v106.m128i_i64[1] + 8);
          if ( v71 != -1 )
          {
            v59 = v84;
            v60 = v71 >> 3;
            goto LABEL_103;
          }
        }
        v60 = sub_5E020(&v106, 0, a3);
        v59 = v60 == -1;
        goto LABEL_103;
      }
      if ( v106.m128i_i32[0] == 1 )
      {
        if ( *(_DWORD *)(v106.m128i_i64[1] + 272) == 2 && v106.m128i_i64[1] )
          return (v23 & 0xC0) == (_BYTE)v15;
        return 0;
      }
      if ( v106.m128i_i32[0] == 2 )
        return sub_59120(v9, (__int64)&v106.m128i_i64[1], v17, v15, v10, a6);
      if ( under_debugger )
        goto LABEL_160;
      interr(776);
LABEL_38:
      if ( v106.m128i_i32[0] == 2 )
        return sub_59120(v9, (__int64)&v106.m128i_i64[1], v17, v15, v10, a6);
      if ( v106.m128i_i32[0] == 3 )
        return 0;
      if ( v106.m128i_i32[0] != 1 )
      {
        if ( under_debugger )
          goto LABEL_160;
        interr(775);
        goto LABEL_154;
      }
      v32 = v106.m128i_i64[1];
      if ( *(_DWORD *)(v106.m128i_i64[1] + 272) != 3 || !v106.m128i_i64[1] )
        return 0;
      v115 = 16;
      v110 = 0;
      v111 = 0;
      memset(v108, 0, sizeof(v108));
      v109 = 0;
      v113 = 0;
      v112 = 0;
      v114 = 0;
      v33 = get_tinfo_details(v23, 140, v108);
      if ( v33 )
      {
        v34 = v115 & 0xF0;
        if ( (v115 & 0xF0) == 0xC0 )
          v34 = HIDWORD(v109);
        v33 = (unsigned int)sub_30990(v32) == v34;
      }
      if ( v113 )
      {
        v90 = v33;
        *(_QWORD *)&v114 = 0;
        qfree(v113);
        v33 = v90;
      }
      v91 = v33;
      cleanup_argloc(&v111);
      clear_tinfo_t(&v110);
      v35 = *(_QWORD *)v108;
      result = v91;
      if ( *(_QWORD *)v108 )
      {
        v36 = *(_QWORD *)&v108[8];
        if ( *(_QWORD *)&v108[8] )
        {
          v37 = 0;
          do
          {
            v38 = (_QWORD *)(v35 + 80 * v37);
            clear_tinfo_t(v38 + 8);
            v39 = v38[5];
            if ( v39 )
            {
              v38[6] = 0;
              qfree(v39);
            }
            v40 = v38[2];
            if ( v40 )
            {
              v38[3] = 0;
              qfree(v40);
            }
            cleanup_argloc(v38);
            v35 = *(_QWORD *)v108;
            ++v37;
          }
          while ( v36 != v37 );
          result = v91;
        }
        v92 = result;
        *(_QWORD *)&v108[8] = 0;
        qfree(v35);
        return v92;
      }
      return result;
    case 14:
      if ( (unsigned int)(v106.m128i_i32[0] - 2) > 1 )
        return 0;
      v28 = v23 & 0x30;
      if ( v28 == 32 )
      {
        v29 = 4;
      }
      else if ( v28 > 0x20u )
      {
        if ( v28 != 48 )
        {
          if ( !under_debugger )
          {
            interr(30402);
LABEL_150:
            if ( !under_debugger )
              interr(780);
          }
          goto LABEL_160;
        }
        v29 = 8;
      }
      else
      {
        v29 = 1 - ((v28 == 0) - 1LL);
      }
      return v29 == sub_5E020(&v106, 1u, a3);
    default:
      goto LABEL_150;
  }
}
