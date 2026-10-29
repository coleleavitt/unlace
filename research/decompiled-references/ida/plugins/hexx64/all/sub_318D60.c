__int64 __fastcall sub_318D60(__int64 a1, __int64 a2, double a3)
{
  void *exception; // rbx
  __int64 v4; // rbp
  int v5; // edx
  int v6; // r13d
  __int128 v7; // rax
  int v8; // esi
  __int64 v9; // r13
  int v10; // edx
  int v11; // ebp
  int v12; // ecx
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rbp
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // rax
  int v19; // edx
  __int64 v20; // rbp
  __int64 v21; // rax
  int v22; // edx
  __int64 v23; // rax
  int v24; // edx
  __int64 v25; // rbp
  __int64 v26; // rax
  int v27; // edx
  __int64 v28; // rax
  int v29; // edx
  __int64 v30; // rbp
  __int64 v31; // rax
  int v32; // edx
  unsigned __int64 v33; // rbp
  unsigned __int64 v34; // rbp
  unsigned __int64 v35; // rbp
  unsigned __int64 v36; // rbp
  __int64 v37; // r13
  int v38; // edx
  int v39; // ebp
  int v40; // ecx
  __int64 v41; // rbp
  int v42; // edx
  int v43; // r13d
  __int64 v44; // rax
  __int64 v45; // rsi
  int v46; // edx
  __int64 v47; // rdx
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rbp
  __int64 v50; // rax
  int v51; // edx
  int v52; // edi
  __int64 v53; // rcx
  __int64 v54; // rax
  int v55; // edx
  int v56; // ebp
  __int64 v57; // r13
  int v58; // ebx
  __int64 v59; // rdi
  __int64 v60; // r13
  int v61; // edx
  int v62; // esi
  int v63; // ecx
  __int64 v64; // rax
  int v65; // edx
  int v66; // ebx
  unsigned __int64 v67; // rbp
  int v68; // edx
  int v69; // r13d
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rbp
  bool v72; // cf
  __int64 v73; // rbp
  int v74; // edx
  __int64 v75; // rbp
  int v76; // edx
  int v77; // r13d
  __int64 v78; // rax
  int v79; // edx
  __int64 v80; // rbp
  int v81; // edx
  int v82; // r13d
  unsigned __int64 v83; // rbp
  int v84; // edx
  int v85; // r13d
  unsigned __int64 v86; // rax
  int v87; // edx
  int v88; // esi
  unsigned int v89; // ecx
  __int64 v90; // r13
  int v91; // edx
  int v92; // ebp
  __int64 v93; // rdx
  __int64 v94; // rbp
  int v95; // edx
  int v96; // r13d
  __int64 v97; // rbp
  int v98; // edx
  int v99; // r13d
  __int64 v100; // rbp
  int v101; // edx
  int v102; // r13d
  int v103; // ecx
  int v104; // edx
  int v105; // edx
  __int64 v106; // rbp
  int v107; // edx
  int v108; // r13d
  int v109; // esi
  __int64 v110; // rax
  int v111; // edx
  __int64 v112; // rbp

  if ( (*(_BYTE *)(a2 + 4) & 0x10) != 0 )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_137330((__int64)exception, -35, *(_QWORD *)(a2 + 24), "no support for floating point");
LABEL_151:
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_7A4C0);
  }
  switch ( *(_DWORD *)a2 )
  {
    case 3:
    case 4:
      *(_QWORD *)&v7 = sub_319A50(a1, a2 + 32);
      return v7;
    case 5:
      *(_QWORD *)&v7 = sub_319A50(a1, a2 + 32);
      v8 = DWORD2(v7);
      *(_QWORD *)&v7 = -(__int64)v7;
      if ( (unsigned int)(DWORD2(v7) - 1) <= 1 )
        goto LABEL_9;
      goto LABEL_5;
    case 6:
      *(_QWORD *)&v7 = sub_319A50(a1, a2 + 32);
      v8 = DWORD2(v7);
      *(_QWORD *)&v7 = v7 == 0;
      if ( (unsigned int)(DWORD2(v7) - 1) <= 1 )
        goto LABEL_9;
      goto LABEL_5;
    case 7:
      v59 = sub_319A50(a1, a2 + 32);
      if ( (unsigned int)(DWORD2(v7) - 1) <= 1 || DWORD2(v7) == 4 )
      {
        *(_QWORD *)&v7 = ~(v59 | (-1LL << (8 * BYTE8(v7))));
        return v7;
      }
      if ( DWORD2(v7) != 8 )
        goto LABEL_139;
      *(_QWORD *)&v7 = ~v59;
      return v7;
    case 8:
      v64 = sub_319A50(a1, a2 + 32);
      v66 = *(_DWORD *)(a2 + 68);
      if ( v66 < v65 )
      {
        if ( !under_debugger )
          sub_383060(0xCEA3u, a3);
        goto LABEL_153;
      }
      *(_QWORD *)&v7 = sub_32ABC0(v64, v65, 1);
      if ( (unsigned int)(v66 - 1) > 1 && v66 != 4 )
      {
        if ( v66 == 8 )
          return v7;
        goto LABEL_139;
      }
      *(_QWORD *)&v7 = ~(-1LL << (8 * (unsigned __int8)v66)) & v7;
      return v7;
    case 9:
      *(_QWORD *)&v7 = sub_319A50(a1, a2 + 32);
      v62 = *(_DWORD *)(a2 + 68);
      v63 = DWORD2(v7);
      *((_QWORD *)&v7 + 1) = v7;
      if ( v62 >= v63 )
        goto LABEL_49;
      if ( !under_debugger )
        sub_383060(0xCEA4u, a3);
      goto LABEL_153;
    case 0xA:
      *(_QWORD *)&v7 = sub_319A50(a1, a2 + 32);
      v62 = *(_DWORD *)(a2 + 68);
      v103 = DWORD2(v7);
      *((_QWORD *)&v7 + 1) = v7;
      if ( v62 <= v103 )
      {
LABEL_49:
        if ( (unsigned int)(v62 - 1) <= 1 || v62 == 4 )
        {
          *((_QWORD *)&v7 + 1) = v7 & ~(-1LL << (8 * (unsigned __int8)v62));
        }
        else if ( v62 != 8 )
        {
          goto LABEL_139;
        }
        *(_QWORD *)&v7 = *((_QWORD *)&v7 + 1);
        return v7;
      }
      if ( !under_debugger )
        sub_383060(0xCEA5u, a3);
      goto LABEL_153;
    case 0xB:
      *(_QWORD *)&v7 = sub_319A50(a1, a2 + 32);
      v109 = *(_DWORD *)(a2 + 68);
      if ( v109 <= SDWORD2(v7) )
      {
        *(_QWORD *)&v7 = (unsigned __int64)v7 >> (8 * (BYTE8(v7) - (unsigned __int8)v109));
        if ( (unsigned __int64)(8 * (DWORD2(v7) - v109)) >= 0x40 )
          *(_QWORD *)&v7 = 0;
        if ( (unsigned int)(v109 - 1) > 1 && v109 != 4 )
        {
          if ( v109 == 8 )
            return v7;
          goto LABEL_139;
        }
        *(_QWORD *)&v7 = ~(-1LL << (8 * (unsigned __int8)v109)) & v7;
        return v7;
      }
      if ( !under_debugger )
        sub_383060(0xCEA6u, a3);
      goto LABEL_153;
    case 0xC:
      v106 = sub_319A50(a1, a2 + 48);
      v108 = v107;
      *(_QWORD *)&v7 = sub_319A50(a1, a2 + 32);
      v8 = DWORD2(v7);
      if ( DWORD2(v7) != v108 )
        goto LABEL_138;
      *(_QWORD *)&v7 = v106 + v7;
      if ( (unsigned int)(DWORD2(v7) - 1) <= 1 )
        goto LABEL_9;
      goto LABEL_5;
    case 0xD:
      v94 = sub_319A50(a1, a2 + 48);
      v96 = v95;
      *(_QWORD *)&v7 = sub_319A50(a1, a2 + 32);
      v8 = DWORD2(v7);
      if ( DWORD2(v7) != v96 )
        goto LABEL_138;
      *(_QWORD *)&v7 = v7 - v94;
      if ( (unsigned int)(DWORD2(v7) - 1) <= 1 )
        goto LABEL_9;
      goto LABEL_5;
    case 0xE:
      v97 = sub_319A50(a1, a2 + 48);
      v99 = v98;
      *(_QWORD *)&v7 = sub_319A50(a1, a2 + 32);
      v8 = DWORD2(v7);
      if ( DWORD2(v7) != v99 )
        goto LABEL_138;
      *(_QWORD *)&v7 = v97 * v7;
      if ( (unsigned int)(DWORD2(v7) - 1) <= 1 )
        goto LABEL_9;
      goto LABEL_5;
    case 0xF:
      v83 = sub_319A50(a1, a2 + 48);
      v85 = v84;
      v86 = sub_319A50(a1, a2 + 32);
      v88 = v87;
      if ( v87 != v85 )
        goto LABEL_138;
      if ( !v83 )
        sub_50DFA();
      v89 = v87 - 1;
      *(_QWORD *)&v7 = v86 / v83;
      *((_QWORD *)&v7 + 1) = v7;
      if ( v89 <= 1 || v88 == 4 )
      {
        *((_QWORD *)&v7 + 1) = v7 & ~(-1LL << (8 * (unsigned __int8)v88));
      }
      else if ( v88 != 8 )
      {
        goto LABEL_139;
      }
      *(_QWORD *)&v7 = *((_QWORD *)&v7 + 1);
      return v7;
    case 0x10:
      v80 = sub_319A50(a1, a2 + 32);
      v82 = v81;
      *(_QWORD *)&v7 = sub_319A50(a1, a2 + 48);
      if ( v82 != DWORD2(v7) )
        goto LABEL_138;
      if ( !(_QWORD)v7 )
        sub_50DFA();
      if ( v82 == 4 )
      {
        *((_QWORD *)&v7 + 1) = (int)v80 / (int)v7;
        goto LABEL_79;
      }
      if ( v82 > 4 )
      {
        if ( v82 == 8 )
        {
          *(_QWORD *)&v7 = v80 / (__int64)v7;
          return v7;
        }
      }
      else
      {
        if ( v82 == 1 )
        {
          *((_QWORD *)&v7 + 1) = (char)v80 / (char)v7;
          goto LABEL_79;
        }
        if ( v82 == 2 )
        {
          *((_QWORD *)&v7 + 1) = (__int16)v80 / (__int16)v7;
LABEL_79:
          *(_QWORD *)&v7 = *((_QWORD *)&v7 + 1) & ~(-1LL << (8 * (unsigned __int8)v82));
          return v7;
        }
      }
      if ( !under_debugger )
        sub_383060(0x77CAu, a3);
      goto LABEL_153;
    case 0x11:
    case 0x14:
      v4 = sub_319A50(a1, a2 + 48);
      v6 = v5;
      *(_QWORD *)&v7 = sub_319A50(a1, a2 + 32);
      v8 = DWORD2(v7);
      if ( DWORD2(v7) != v6 )
        goto LABEL_138;
      *(_QWORD *)&v7 = v4 & v7;
      if ( (unsigned int)(DWORD2(v7) - 1) > 1 )
        goto LABEL_5;
      goto LABEL_9;
    case 0x12:
      v90 = sub_319A50(a1, a2 + 32);
      v92 = v91;
      *(_QWORD *)&v7 = sub_319A50(a1, a2 + 48);
      if ( v92 != DWORD2(v7) )
        goto LABEL_138;
      if ( !(_QWORD)v7 )
        sub_50DFA();
      if ( v92 == 4 )
      {
        v93 = (int)v90 % (int)v7;
        goto LABEL_93;
      }
      if ( v92 > 4 )
      {
        if ( v92 == 8 )
        {
          *((_QWORD *)&v7 + 1) = v90 % (__int64)v7;
          goto LABEL_94;
        }
      }
      else
      {
        if ( v92 == 1 )
        {
          v93 = (char)v90 % (char)v7;
          goto LABEL_93;
        }
        if ( v92 == 2 )
        {
          v93 = (__int16)v90 % (__int16)v7;
LABEL_93:
          *((_QWORD *)&v7 + 1) = ~(-1LL << (8 * (unsigned __int8)v92)) & v93;
LABEL_94:
          *(_QWORD *)&v7 = *((_QWORD *)&v7 + 1);
          return v7;
        }
      }
      if ( !under_debugger )
        sub_383060(0xCEA7u, a3);
LABEL_153:
      BUG();
    case 0x13:
      v100 = sub_319A50(a1, a2 + 48);
      v102 = v101;
      *(_QWORD *)&v7 = sub_319A50(a1, a2 + 32);
      v8 = DWORD2(v7);
      if ( DWORD2(v7) != v102 )
        goto LABEL_138;
      *(_QWORD *)&v7 = v100 | v7;
      if ( (unsigned int)(DWORD2(v7) - 1) <= 1 )
        goto LABEL_9;
      goto LABEL_5;
    case 0x15:
      v75 = sub_319A50(a1, a2 + 48);
      v77 = v76;
      *(_QWORD *)&v7 = sub_319A50(a1, a2 + 32);
      v8 = DWORD2(v7);
      if ( DWORD2(v7) != v77 )
        goto LABEL_138;
      *(_QWORD *)&v7 = v75 ^ v7;
      if ( (unsigned int)(DWORD2(v7) - 1) <= 1 )
        goto LABEL_9;
LABEL_5:
      if ( v8 != 4 )
      {
        if ( v8 == 8 )
          return v7;
LABEL_139:
        sub_318660(a3);
      }
LABEL_9:
      *(_QWORD *)&v7 = ~(-1LL << (8 * (unsigned __int8)v8)) & v7;
      return v7;
    case 0x16:
      v73 = sub_319A50(a1, a2 + 32);
      v69 = v74;
      v70 = (int)sub_319A50(a1, a2 + 48);
      v71 = v73 << v70;
      goto LABEL_61;
    case 0x17:
      v67 = sub_319A50(a1, a2 + 32);
      v69 = v68;
      v70 = (int)sub_319A50(a1, a2 + 48);
      v71 = v67 >> v70;
LABEL_61:
      v72 = v70 < 0x40;
      *(_QWORD *)&v7 = 0;
      if ( v72 )
        *(_QWORD *)&v7 = v71;
      if ( (unsigned int)(v69 - 1) > 1 && v69 != 4 )
      {
        if ( v69 == 8 )
          return v7;
        goto LABEL_139;
      }
      *(_QWORD *)&v7 = ~(-1LL << (8 * (unsigned __int8)v69)) & v7;
      return v7;
    case 0x18:
      v54 = sub_319A50(a1, a2 + 32);
      v56 = v55;
      v57 = v54;
      v58 = sub_319A50(a1, a2 + 48);
      v7 = sub_32ABC0(v57, v56, 1);
      *(_QWORD *)&v7 = (__int64)v7 >> v58;
      if ( (unsigned __int64)v58 >= 0x40 )
        *(_QWORD *)&v7 = *((_QWORD *)&v7 + 1);
      if ( (unsigned int)(v56 - 1) <= 1 || v56 == 4 )
      {
        *(_QWORD *)&v7 = v7 & ~(-1LL << (8 * (unsigned __int8)v56));
        return v7;
      }
      if ( v56 == 8 )
        return v7;
      goto LABEL_139;
    case 0x19:
      v49 = sub_319A50(a1, a2 + 32);
      v50 = sub_319A50(a1, a2 + 48);
      v52 = *(_DWORD *)(a2 + 52);
      if ( (unsigned int)(v52 - 1) <= 1 || v52 == 4 )
      {
        v53 = (1LL << (8 * (unsigned __int8)v52)) - 1;
      }
      else
      {
        if ( v52 != 8 )
          goto LABEL_139;
        v53 = -1;
      }
      if ( v52 != v51 )
LABEL_138:
        sub_318640(a3);
      *(_QWORD *)&v7 = (v53 & (unsigned __int64)(v53 - v50)) < v49;
      return v7;
    case 0x1A:
      v41 = sub_319A50(a1, a2 + 32);
      v43 = v42;
      v44 = sub_319A50(a1, a2 + 48);
      v45 = v44;
      if ( v43 != v46 )
        goto LABEL_138;
      v47 = v41 + v44;
      if ( (unsigned int)(v43 - 1) > 1 )
        goto LABEL_27;
      goto LABEL_109;
    case 0x1B:
      v60 = sub_319A50(a1, a2 + 32);
      *(_QWORD *)&v7 = _bittest64(&v60, 8 * v61 - (unsigned int)sub_319A50(a1, a2 + 48));
      return v7;
    case 0x1C:
      v112 = sub_319A50(a1, a2 + 32);
      *(_QWORD *)&v7 = _bittest64(&v112, (unsigned int)sub_319A50(a1, a2 + 48) - 1);
      return v7;
    case 0x1D:
      v110 = sub_319A50(a1, a2 + 32);
      v48 = sub_32ABC0(v110, v111, 1);
      goto LABEL_30;
    case 0x1E:
      v41 = sub_319A50(a1, a2 + 32);
      v43 = v104;
      v45 = sub_319A50(a1, a2 + 48);
      if ( v43 != v105 )
        goto LABEL_138;
      v47 = v41 - v45;
      if ( (unsigned int)(v43 - 1) <= 1 )
        goto LABEL_109;
LABEL_27:
      if ( v43 == 4 )
      {
LABEL_109:
        v47 &= ~(-1LL << (8 * (unsigned __int8)v43));
      }
      else if ( v43 != 8 )
      {
        goto LABEL_139;
      }
      v48 = (v47 ^ v45) & (v47 ^ v41);
LABEL_30:
      *(_QWORD *)&v7 = v48 >> 63;
      return v7;
    case 0x20:
    case 0x2B:
      v9 = sub_319A50(a1, a2 + 48);
      v11 = v10;
      *(_QWORD *)&v7 = sub_319A50(a1, a2 + 32);
      v12 = DWORD2(v7);
      *((_QWORD *)&v7 + 1) = 1;
      if ( v12 == v11 )
        *((_QWORD *)&v7 + 1) = v7 != v9;
      goto LABEL_12;
    case 0x21:
    case 0x2C:
      v37 = sub_319A50(a1, a2 + 48);
      v39 = v38;
      *(_QWORD *)&v7 = sub_319A50(a1, a2 + 32);
      v40 = DWORD2(v7);
      *((_QWORD *)&v7 + 1) = 0;
      if ( v40 == v39 )
        *((_QWORD *)&v7 + 1) = v7 == v37;
LABEL_12:
      *(_QWORD *)&v7 = *((_QWORD *)&v7 + 1);
      return v7;
    case 0x22:
    case 0x2D:
      v36 = sub_319A50(a1, a2 + 32);
      *(_QWORD *)&v7 = v36 >= sub_319A50(a1, a2 + 48);
      return v7;
    case 0x23:
    case 0x2E:
      v35 = sub_319A50(a1, a2 + 32);
      *(_QWORD *)&v7 = v35 < sub_319A50(a1, a2 + 48);
      return v7;
    case 0x24:
    case 0x2F:
      v34 = sub_319A50(a1, a2 + 32);
      *(_QWORD *)&v7 = sub_319A50(a1, a2 + 48) < v34;
      return v7;
    case 0x25:
    case 0x30:
      v33 = sub_319A50(a1, a2 + 32);
      *(_QWORD *)&v7 = sub_319A50(a1, a2 + 48) >= v33;
      return v7;
    case 0x26:
    case 0x31:
      v28 = sub_319A50(a1, a2 + 32);
      v30 = sub_32ABC0(v28, v29, 1);
      v31 = sub_319A50(a1, a2 + 48);
      *(_QWORD *)&v7 = v30 > sub_32ABC0(v31, v32, 1);
      return v7;
    case 0x27:
    case 0x32:
      v23 = sub_319A50(a1, a2 + 32);
      v25 = sub_32ABC0(v23, v24, 1);
      v26 = sub_319A50(a1, a2 + 48);
      *(_QWORD *)&v7 = v25 >= sub_32ABC0(v26, v27, 1);
      return v7;
    case 0x28:
    case 0x33:
      v18 = sub_319A50(a1, a2 + 32);
      v20 = sub_32ABC0(v18, v19, 1);
      v21 = sub_319A50(a1, a2 + 48);
      *(_QWORD *)&v7 = v20 < sub_32ABC0(v21, v22, 1);
      return v7;
    case 0x29:
    case 0x34:
      v13 = sub_319A50(a1, a2 + 32);
      v15 = sub_32ABC0(v13, v14, 1);
      v16 = sub_319A50(a1, a2 + 48);
      *(_QWORD *)&v7 = v15 <= sub_32ABC0(v16, v17, 1);
      return v7;
    case 0x2A:
      v78 = sub_319A50(a1, a2 + 32);
      *(_QWORD *)&v7 = sub_32ABC0(v78, v79, 1) != 0;
      return v7;
    default:
      exception = __cxa_allocate_exception(0x30u);
      sub_137330((__int64)exception, -35, *(_QWORD *)(a2 + 24), "unhandled opcode");
      goto LABEL_151;
  }
}

