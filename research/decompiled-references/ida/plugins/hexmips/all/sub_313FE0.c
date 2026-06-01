__int64 __fastcall sub_313FE0(__int64 a1, __int64 a2)
{
  void *exception; // rbx
  __int64 v3; // r12
  __int64 v4; // rbp
  int v5; // edx
  int v6; // r13d
  __int128 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r13
  int v10; // edx
  int v11; // ebp
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rbp
  __int64 v31; // rax
  __int64 v32; // rdx
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
  __int64 v44; // rdx
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // rbp
  __int64 v48; // rax
  unsigned int v49; // edx
  unsigned int v50; // ebp
  __int64 v51; // r13
  int v52; // ebx
  __int64 v53; // rdi
  __int64 v54; // r13
  int v55; // edx
  int v56; // esi
  int v57; // ecx
  __int64 v58; // rax
  unsigned int v59; // edx
  int v60; // ebx
  unsigned __int64 v61; // rbp
  int v62; // edx
  int v63; // r13d
  int v64; // ecx
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rbp
  bool v67; // cf
  __int64 v68; // rbp
  int v69; // edx
  int v70; // ecx
  __int64 v71; // rbp
  int v72; // edx
  int v73; // r13d
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rax
  __int64 v77; // rbp
  int v78; // edx
  int v79; // r13d
  unsigned __int64 v80; // rbp
  int v81; // edx
  int v82; // r13d
  unsigned int v83; // ecx
  __int64 v84; // rax
  __int64 v85; // r13
  int v86; // edx
  int v87; // ebp
  __int64 v88; // rdx
  __int64 v89; // rbp
  int v90; // edx
  int v91; // r13d
  __int64 v92; // rbp
  int v93; // edx
  int v94; // r13d
  __int64 v95; // rbp
  int v96; // edx
  int v97; // r13d
  int v98; // ecx
  int v99; // edx
  __int64 v100; // rbp
  int v101; // edx
  int v102; // r13d
  int v103; // esi
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rbp

  v3 = a2;
  if ( (*(_BYTE *)(a2 + 4) & 0x10) != 0 )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_133130((__int64)exception, -35, *(_QWORD *)(a2 + 24), "no support for floating point");
LABEL_151:
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_762C0);
  }
  switch ( *(_DWORD *)a2 )
  {
    case 3:
    case 4:
      *(_QWORD *)&v7 = sub_314CD0(a1, a2 + 32);
      return v7;
    case 5:
      *(_QWORD *)&v7 = sub_314CD0(a1, a2 + 32);
      LODWORD(a2) = DWORD2(v7);
      *(_QWORD *)&v7 = -(__int64)v7;
      if ( (unsigned int)(DWORD2(v7) - 1) <= 1 )
        goto LABEL_9;
      goto LABEL_5;
    case 6:
      *(_QWORD *)&v7 = sub_314CD0(a1, a2 + 32);
      LODWORD(a2) = DWORD2(v7);
      *(_QWORD *)&v7 = v7 == 0;
      if ( (unsigned int)(DWORD2(v7) - 1) <= 1 )
        goto LABEL_9;
      goto LABEL_5;
    case 7:
      v53 = sub_314CD0(a1, a2 + 32);
      if ( (unsigned int)(DWORD2(v7) - 1) <= 1 || DWORD2(v7) == 4 )
      {
        *(_QWORD *)&v7 = ~(v53 | (-1LL << (8 * BYTE8(v7))));
        return v7;
      }
      if ( DWORD2(v7) != 8 )
        goto LABEL_139;
      *(_QWORD *)&v7 = ~v53;
      return v7;
    case 8:
      v58 = sub_314CD0(a1, a2 + 32);
      v60 = *(_DWORD *)(a2 + 68);
      if ( v60 < (int)v59 )
      {
        if ( !under_debugger )
          sub_37E160(52899);
        goto LABEL_153;
      }
      *(_QWORD *)&v7 = sub_325C90(v58, v59, 1);
      if ( (unsigned int)(v60 - 1) > 1 && v60 != 4 )
      {
        if ( v60 == 8 )
          return v7;
        goto LABEL_139;
      }
      *(_QWORD *)&v7 = ~(-1LL << (8 * (unsigned __int8)v60)) & v7;
      return v7;
    case 9:
      *(_QWORD *)&v7 = sub_314CD0(a1, a2 + 32);
      v56 = *(_DWORD *)(a2 + 68);
      v57 = DWORD2(v7);
      *((_QWORD *)&v7 + 1) = v7;
      if ( v56 >= v57 )
        goto LABEL_49;
      if ( !under_debugger )
        sub_37E160(52900);
      goto LABEL_153;
    case 0xA:
      *(_QWORD *)&v7 = sub_314CD0(a1, a2 + 32);
      v56 = *(_DWORD *)(a2 + 68);
      v98 = DWORD2(v7);
      *((_QWORD *)&v7 + 1) = v7;
      if ( v56 <= v98 )
      {
LABEL_49:
        if ( (unsigned int)(v56 - 1) <= 1 || v56 == 4 )
        {
          *((_QWORD *)&v7 + 1) = v7 & ~(-1LL << (8 * (unsigned __int8)v56));
        }
        else if ( v56 != 8 )
        {
          goto LABEL_139;
        }
        *(_QWORD *)&v7 = *((_QWORD *)&v7 + 1);
        return v7;
      }
      if ( !under_debugger )
        sub_37E160(52901);
      goto LABEL_153;
    case 0xB:
      *(_QWORD *)&v7 = sub_314CD0(a1, a2 + 32);
      v103 = *(_DWORD *)(a2 + 68);
      if ( v103 <= SDWORD2(v7) )
      {
        *(_QWORD *)&v7 = (unsigned __int64)v7 >> (8 * (BYTE8(v7) - (unsigned __int8)v103));
        if ( (unsigned __int64)(8 * (DWORD2(v7) - v103)) >= 0x40 )
          *(_QWORD *)&v7 = 0;
        if ( (unsigned int)(v103 - 1) > 1 && v103 != 4 )
        {
          if ( v103 == 8 )
            return v7;
          goto LABEL_139;
        }
        *(_QWORD *)&v7 = ~(-1LL << (8 * (unsigned __int8)v103)) & v7;
        return v7;
      }
      if ( !under_debugger )
        sub_37E160(52902);
      goto LABEL_153;
    case 0xC:
      v100 = sub_314CD0(a1, a2 + 48);
      v102 = v101;
      *(_QWORD *)&v7 = sub_314CD0(a1, a2 + 32);
      a2 = *((_QWORD *)&v7 + 1);
      if ( DWORD2(v7) != v102 )
        goto LABEL_138;
      *(_QWORD *)&v7 = v100 + v7;
      if ( (unsigned int)(DWORD2(v7) - 1) <= 1 )
        goto LABEL_9;
      goto LABEL_5;
    case 0xD:
      v89 = sub_314CD0(a1, a2 + 48);
      v91 = v90;
      *(_QWORD *)&v7 = sub_314CD0(a1, a2 + 32);
      a2 = *((_QWORD *)&v7 + 1);
      if ( DWORD2(v7) != v91 )
        goto LABEL_138;
      *(_QWORD *)&v7 = v7 - v89;
      if ( (unsigned int)(DWORD2(v7) - 1) <= 1 )
        goto LABEL_9;
      goto LABEL_5;
    case 0xE:
      v92 = sub_314CD0(a1, a2 + 48);
      v94 = v93;
      *(_QWORD *)&v7 = sub_314CD0(a1, a2 + 32);
      a2 = *((_QWORD *)&v7 + 1);
      if ( DWORD2(v7) != v94 )
        goto LABEL_138;
      *(_QWORD *)&v7 = v92 * v7;
      if ( (unsigned int)(DWORD2(v7) - 1) <= 1 )
        goto LABEL_9;
      goto LABEL_5;
    case 0xF:
      v80 = sub_314CD0(a1, a2 + 48);
      v82 = v81;
      *(_QWORD *)&v7 = sub_314CD0(a1, a2 + 32);
      a2 = *((_QWORD *)&v7 + 1);
      if ( DWORD2(v7) != v82 )
        goto LABEL_138;
      if ( !v80 )
        sub_4FBD2(a1, *((_QWORD *)&v7 + 1), *((_QWORD *)&v7 + 1), v8);
      v83 = DWORD2(v7) - 1;
      *(_QWORD *)&v7 = (unsigned __int64)v7 / v80;
      *((_QWORD *)&v7 + 1) = v7;
      if ( v83 <= 1 || (_DWORD)a2 == 4 )
      {
        *((_QWORD *)&v7 + 1) = v7 & ~(-1LL << (8 * (unsigned __int8)a2));
      }
      else if ( (_DWORD)a2 != 8 )
      {
        goto LABEL_139;
      }
      *(_QWORD *)&v7 = *((_QWORD *)&v7 + 1);
      return v7;
    case 0x10:
      v76 = sub_314CD0(a1, a2 + 32);
      a2 += 48;
      v77 = v76;
      v79 = v78;
      *(_QWORD *)&v7 = sub_314CD0(a1, v3 + 48);
      v8 = v7;
      if ( v79 != DWORD2(v7) )
        goto LABEL_138;
      if ( !(_QWORD)v7 )
        sub_4FBD2(a1, a2, *((_QWORD *)&v7 + 1), 0);
      if ( v79 == 4 )
      {
        *((_QWORD *)&v7 + 1) = (int)v77 / (int)v7;
        goto LABEL_79;
      }
      if ( v79 > 4 )
      {
        if ( v79 == 8 )
        {
          *(_QWORD *)&v7 = v77 / (__int64)v7;
          return v7;
        }
      }
      else
      {
        if ( v79 == 1 )
        {
          *((_QWORD *)&v7 + 1) = (char)v77 / (char)v7;
          goto LABEL_79;
        }
        if ( v79 == 2 )
        {
          *((_QWORD *)&v7 + 1) = (__int16)v77 / (__int16)v7;
LABEL_79:
          *(_QWORD *)&v7 = *((_QWORD *)&v7 + 1) & ~(-1LL << (8 * (unsigned __int8)v79));
          return v7;
        }
      }
      if ( !under_debugger )
        sub_37E160(30666);
      goto LABEL_153;
    case 0x11:
    case 0x14:
      v4 = sub_314CD0(a1, a2 + 48);
      v6 = v5;
      *(_QWORD *)&v7 = sub_314CD0(a1, a2 + 32);
      a2 = *((_QWORD *)&v7 + 1);
      if ( DWORD2(v7) != v6 )
        goto LABEL_138;
      *(_QWORD *)&v7 = v4 & v7;
      if ( (unsigned int)(DWORD2(v7) - 1) > 1 )
        goto LABEL_5;
      goto LABEL_9;
    case 0x12:
      v84 = sub_314CD0(a1, a2 + 32);
      a2 += 48;
      v85 = v84;
      v87 = v86;
      *(_QWORD *)&v7 = sub_314CD0(a1, v3 + 48);
      v8 = v7;
      if ( v87 != DWORD2(v7) )
        goto LABEL_138;
      if ( !(_QWORD)v7 )
        sub_4FBD2(a1, a2, *((_QWORD *)&v7 + 1), 0);
      if ( v87 == 4 )
      {
        v88 = (int)v85 % (int)v7;
        goto LABEL_93;
      }
      if ( v87 > 4 )
      {
        if ( v87 == 8 )
        {
          *((_QWORD *)&v7 + 1) = v85 % (__int64)v7;
          goto LABEL_94;
        }
      }
      else
      {
        if ( v87 == 1 )
        {
          v88 = (char)v85 % (char)v7;
          goto LABEL_93;
        }
        if ( v87 == 2 )
        {
          v88 = (__int16)v85 % (__int16)v7;
LABEL_93:
          *((_QWORD *)&v7 + 1) = ~(-1LL << (8 * (unsigned __int8)v87)) & v88;
LABEL_94:
          *(_QWORD *)&v7 = *((_QWORD *)&v7 + 1);
          return v7;
        }
      }
      if ( !under_debugger )
        sub_37E160(52903);
LABEL_153:
      BUG();
    case 0x13:
      v95 = sub_314CD0(a1, a2 + 48);
      v97 = v96;
      *(_QWORD *)&v7 = sub_314CD0(a1, a2 + 32);
      a2 = *((_QWORD *)&v7 + 1);
      if ( DWORD2(v7) != v97 )
        goto LABEL_138;
      *(_QWORD *)&v7 = v95 | v7;
      if ( (unsigned int)(DWORD2(v7) - 1) <= 1 )
        goto LABEL_9;
      goto LABEL_5;
    case 0x15:
      v71 = sub_314CD0(a1, a2 + 48);
      v73 = v72;
      *(_QWORD *)&v7 = sub_314CD0(a1, a2 + 32);
      a2 = *((_QWORD *)&v7 + 1);
      if ( DWORD2(v7) != v73 )
        goto LABEL_138;
      *(_QWORD *)&v7 = v71 ^ v7;
      if ( (unsigned int)(DWORD2(v7) - 1) <= 1 )
        goto LABEL_9;
LABEL_5:
      if ( (_DWORD)a2 != 4 )
      {
        if ( (_DWORD)a2 == 8 )
          return v7;
LABEL_139:
        sub_3138E0();
      }
LABEL_9:
      *(_QWORD *)&v7 = ~(-1LL << (8 * (unsigned __int8)a2)) & v7;
      return v7;
    case 0x16:
      v68 = sub_314CD0(a1, a2 + 32);
      v63 = v69;
      v70 = sub_314CD0(a1, a2 + 48);
      v65 = v70;
      v66 = v68 << v70;
      goto LABEL_61;
    case 0x17:
      v61 = sub_314CD0(a1, a2 + 32);
      v63 = v62;
      v64 = sub_314CD0(a1, a2 + 48);
      v65 = v64;
      v66 = v61 >> v64;
LABEL_61:
      v67 = v65 < 0x40;
      *(_QWORD *)&v7 = 0;
      if ( v67 )
        *(_QWORD *)&v7 = v66;
      if ( (unsigned int)(v63 - 1) > 1 && v63 != 4 )
      {
        if ( v63 == 8 )
          return v7;
        goto LABEL_139;
      }
      *(_QWORD *)&v7 = ~(-1LL << (8 * (unsigned __int8)v63)) & v7;
      return v7;
    case 0x18:
      v48 = sub_314CD0(a1, a2 + 32);
      v50 = v49;
      v51 = v48;
      v52 = sub_314CD0(a1, a2 + 48);
      v7 = sub_325C90(v51, v50, 1);
      *(_QWORD *)&v7 = (__int64)v7 >> v52;
      if ( (unsigned __int64)v52 >= 0x40 )
        *(_QWORD *)&v7 = *((_QWORD *)&v7 + 1);
      if ( v50 - 1 <= 1 || v50 == 4 )
      {
        *(_QWORD *)&v7 = v7 & ~(-1LL << (8 * (unsigned __int8)v50));
        return v7;
      }
      if ( v50 == 8 )
        return v7;
      goto LABEL_139;
    case 0x19:
      v46 = sub_314CD0(a1, a2 + 32);
      a2 += 48;
      v47 = v46;
      *(_QWORD *)&v7 = sub_314CD0(a1, v3 + 48);
      a1 = *(unsigned int *)(v3 + 52);
      if ( (unsigned int)(a1 - 1) <= 1 || (_DWORD)a1 == 4 )
      {
        a2 = 1LL << (8 * (unsigned __int8)a1);
        v8 = a2 - 1;
      }
      else
      {
        if ( (_DWORD)a1 != 8 )
          goto LABEL_139;
        v8 = -1;
      }
      if ( (_DWORD)a1 != DWORD2(v7) )
LABEL_138:
        sub_3138C0(a1, a2, *((_QWORD *)&v7 + 1), v8);
      *(_QWORD *)&v7 = (v8 & (unsigned __int64)(v8 - v7)) < v47;
      return v7;
    case 0x1A:
      v41 = sub_314CD0(a1, a2 + 32);
      v43 = v42;
      *(_QWORD *)&v7 = sub_314CD0(a1, a2 + 48);
      a2 = v7;
      if ( v43 != DWORD2(v7) )
        goto LABEL_138;
      v44 = v41 + v7;
      if ( (unsigned int)(v43 - 1) > 1 )
        goto LABEL_27;
      goto LABEL_109;
    case 0x1B:
      v54 = sub_314CD0(a1, a2 + 32);
      *(_QWORD *)&v7 = _bittest64(&v54, 8 * v55 - (unsigned int)sub_314CD0(a1, a2 + 48));
      return v7;
    case 0x1C:
      v106 = sub_314CD0(a1, a2 + 32);
      *(_QWORD *)&v7 = _bittest64(&v106, (unsigned int)sub_314CD0(a1, a2 + 48) - 1);
      return v7;
    case 0x1D:
      v104 = sub_314CD0(a1, a2 + 32);
      v45 = sub_325C90(v104, v105, 1);
      goto LABEL_30;
    case 0x1E:
      v41 = sub_314CD0(a1, a2 + 32);
      v43 = v99;
      a2 = sub_314CD0(a1, a2 + 48);
      if ( v43 != DWORD2(v7) )
        goto LABEL_138;
      v44 = v41 - a2;
      if ( (unsigned int)(v43 - 1) <= 1 )
        goto LABEL_109;
LABEL_27:
      if ( v43 == 4 )
      {
LABEL_109:
        v44 &= ~(-1LL << (8 * (unsigned __int8)v43));
      }
      else if ( v43 != 8 )
      {
        goto LABEL_139;
      }
      v45 = (v44 ^ a2) & (v44 ^ v41);
LABEL_30:
      *(_QWORD *)&v7 = v45 >> 63;
      return v7;
    case 0x20:
    case 0x2B:
      v9 = sub_314CD0(a1, a2 + 48);
      v11 = v10;
      *(_QWORD *)&v7 = sub_314CD0(a1, a2 + 32);
      v12 = DWORD2(v7);
      *((_QWORD *)&v7 + 1) = 1;
      if ( v12 == v11 )
        *((_QWORD *)&v7 + 1) = v7 != v9;
      goto LABEL_12;
    case 0x21:
    case 0x2C:
      v37 = sub_314CD0(a1, a2 + 48);
      v39 = v38;
      *(_QWORD *)&v7 = sub_314CD0(a1, a2 + 32);
      v40 = DWORD2(v7);
      *((_QWORD *)&v7 + 1) = 0;
      if ( v40 == v39 )
        *((_QWORD *)&v7 + 1) = v7 == v37;
LABEL_12:
      *(_QWORD *)&v7 = *((_QWORD *)&v7 + 1);
      return v7;
    case 0x22:
    case 0x2D:
      v36 = sub_314CD0(a1, a2 + 32);
      *(_QWORD *)&v7 = v36 >= sub_314CD0(a1, a2 + 48);
      return v7;
    case 0x23:
    case 0x2E:
      v35 = sub_314CD0(a1, a2 + 32);
      *(_QWORD *)&v7 = v35 < sub_314CD0(a1, a2 + 48);
      return v7;
    case 0x24:
    case 0x2F:
      v34 = sub_314CD0(a1, a2 + 32);
      *(_QWORD *)&v7 = sub_314CD0(a1, a2 + 48) < v34;
      return v7;
    case 0x25:
    case 0x30:
      v33 = sub_314CD0(a1, a2 + 32);
      *(_QWORD *)&v7 = sub_314CD0(a1, a2 + 48) >= v33;
      return v7;
    case 0x26:
    case 0x31:
      v28 = sub_314CD0(a1, a2 + 32);
      v30 = sub_325C90(v28, v29, 1);
      v31 = sub_314CD0(a1, a2 + 48);
      *(_QWORD *)&v7 = v30 > sub_325C90(v31, v32, 1);
      return v7;
    case 0x27:
    case 0x32:
      v23 = sub_314CD0(a1, a2 + 32);
      v25 = sub_325C90(v23, v24, 1);
      v26 = sub_314CD0(a1, a2 + 48);
      *(_QWORD *)&v7 = v25 >= sub_325C90(v26, v27, 1);
      return v7;
    case 0x28:
    case 0x33:
      v18 = sub_314CD0(a1, a2 + 32);
      v20 = sub_325C90(v18, v19, 1);
      v21 = sub_314CD0(a1, a2 + 48);
      *(_QWORD *)&v7 = v20 < sub_325C90(v21, v22, 1);
      return v7;
    case 0x29:
    case 0x34:
      v13 = sub_314CD0(a1, a2 + 32);
      v15 = sub_325C90(v13, v14, 1);
      v16 = sub_314CD0(a1, a2 + 48);
      *(_QWORD *)&v7 = v15 <= sub_325C90(v16, v17, 1);
      return v7;
    case 0x2A:
      v74 = sub_314CD0(a1, a2 + 32);
      *(_QWORD *)&v7 = sub_325C90(v74, v75, 1) != 0;
      return v7;
    default:
      exception = __cxa_allocate_exception(0x30u);
      sub_133130((__int64)exception, -35, *(_QWORD *)(a2 + 24), "unhandled opcode");
      goto LABEL_151;
  }
}

