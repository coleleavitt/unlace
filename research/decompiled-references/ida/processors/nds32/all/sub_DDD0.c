__int64 __fastcall sub_DDD0(__int64 a1, __int64 a2, unsigned __int8 *a3, __int64 a4, __int64 a5)
{
  unsigned __int8 v8; // r13
  __int16 v9; // ax
  unsigned __int64 v11; // rbp
  char v12; // al
  __int64 v13; // rdi
  char v14; // al
  __int64 v15; // rdx
  char v16; // al
  unsigned __int64 v17; // rsi
  __int64 v18; // rdx
  unsigned __int16 v19; // cx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdi
  unsigned int v23; // ebp
  __int64 v24; // rax
  __int64 v25; // rbp
  __int64 v26; // rdx
  unsigned int v27; // r15d
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned int v30; // r12d
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 *v34; // rdi
  _QWORD *v35; // rax
  int v36; // eax
  unsigned __int64 v37; // rsi
  __int64 v38; // rdx
  char v39; // al
  __int64 *v40; // rdx
  __int64 v41; // rcx
  __int64 **v42; // rdi
  const char *v43; // rdx
  __int64 v44; // rdi
  char v45; // al
  _QWORD *func; // rax
  int v47; // eax
  __int64 v48; // r8
  int v49; // ecx
  __int64 v50; // rsi
  char v51; // al
  __int64 *v52; // rdx
  __int64 v53; // rcx
  __int64 **v54; // rdi
  __int64 *v55; // r12
  __int64 *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rsi
  char v59; // al
  __int64 *v60; // rdx
  __int64 v61; // rcx
  __int64 **v62; // rdi
  __int64 sreg; // rax
  __int64 **v64; // r12
  __int64 v65; // rsi
  __int64 v66; // rdx
  char v67; // al
  char v68; // al
  __int64 *v69; // rax
  unsigned __int64 v70; // r15
  unsigned __int16 v71; // cx
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rsi
  __int64 v75; // rdi
  unsigned int v76; // ebp
  __int64 v77; // rax
  char v78; // al
  __int64 *v79; // rax
  __int64 v80; // r12
  unsigned __int8 v81; // al
  unsigned int v82; // ebp
  __int64 flags; // rax
  __int64 *v84; // r12
  __int64 *v85; // rax
  unsigned __int64 v86; // r15
  unsigned __int8 v87; // al
  unsigned int v88; // ebp
  __int64 v89; // rax
  const char *v90; // rdx
  unsigned __int64 v91; // r12
  unsigned __int8 v92; // al
  unsigned __int64 v93; // r12
  unsigned __int8 v94; // al
  __int64 *v95; // rax
  unsigned __int64 v96; // r12
  unsigned __int8 v97; // al
  const char *v98; // rdx
  const char *v99; // rdx
  const char *v100; // rdx
  const char *v101; // rdx
  const char *v102; // rdx
  unsigned __int8 v103; // [rsp+4h] [rbp-A4h]
  __int64 v104; // [rsp+10h] [rbp-98h] BYREF
  __int64 v105; // [rsp+18h] [rbp-90h] BYREF
  __int64 *v106; // [rsp+20h] [rbp-88h] BYREF
  __int128 v107; // [rsp+28h] [rbp-80h]
  char v108; // [rsp+38h] [rbp-70h]
  __int64 **v109; // [rsp+40h] [rbp-68h] BYREF
  __int128 v110; // [rsp+48h] [rbp-60h]
  char v111; // [rsp+58h] [rbp-50h]
  unsigned __int64 v112; // [rsp+68h] [rbp-40h]

  v112 = __readfsqword(0x28u);
  v8 = a4;
  switch ( a3[1] )
  {
    case 2u:
      v16 = is_mapped(*((_QWORD *)a3 + 2));
      v17 = *((_QWORD *)a3 + 2);
      if ( !v16 )
      {
        v43 = "Data write to";
        if ( v8 )
          v43 = "Data read from";
        v44 = *(_QWORD *)(a2 + 16);
        return sub_DCF0(v44, v17, v43);
      }
      v18 = (unsigned int)(char)a3[2];
      if ( *(_WORD *)(a2 + 24) == 114 && *(_BYTE *)(a2 + 33) == 5 )
      {
        insn_add_dref(a2, v17, v18, 1);
        v65 = *(_QWORD *)(a2 + 16);
        v109 = *((__int64 ***)a3 + 2);
        goto LABEL_78;
      }
      insn_add_dref(a2, v17, v18, (unsigned int)v8 + 2);
      v19 = *(_WORD *)(a2 + 24);
      if ( v19 > 0x14u )
      {
        v21 = 2;
      }
      else
      {
        v20 = 1LL << v19;
        v21 = 0;
        if ( (v20 & 0x70706) == 0 )
          v21 = (unsigned int)((v20 & 0x181818) == 0) + 1;
      }
      return insn_create_op_data(a2, *((_QWORD *)a3 + 2), (unsigned int)(char)a3[2], v21);
    case 3u:
      v26 = *(unsigned __int8 *)(a2 + 33);
      if ( (unsigned __int16)(*(_WORD *)(a2 + 24) - 25) <= 3u )
      {
        v26 = (unsigned int)(v26 - 6);
        if ( (unsigned __int8)v26 <= 0xFu )
          return v112 - __readfsqword(0x28u);
      }
      v27 = *((unsigned __int16 *)a3 + 3);
      if ( a3[32] )
      {
        v28 = *((_QWORD *)a3 + 1);
        v29 = *(_QWORD *)(a2 + 16);
        v103 = a3[33];
        v30 = v28;
        if ( (*(_BYTE *)(a1 + 168) & 8) == 0 )
          goto LABEL_60;
        if ( v27 != 29 )
        {
          if ( (_DWORD)v28 == 29 )
          {
            v31 = *((unsigned __int16 *)a3 + 3);
            v108 = 0;
            v106 = nullptr;
            v109 = nullptr;
            v111 = 0;
            v107 = 0;
            v110 = 0;
            if ( (unsigned __int8)sub_1D1E0(&v106, v27, v29, a1, 0) )
            {
              v31 = 29;
              if ( (unsigned __int8)sub_1D1E0(&v109, 29, *(_QWORD *)(a2 + 16), a1, 0) )
              {
                v31 = (__int64)&v104;
                if ( (unsigned __int8)sub_CF40(&v106, &v104) )
                {
                  v31 = (__int64)&v105;
                  if ( (unsigned __int8)sub_CF40((__int64 **)&v109, &v105) )
                  {
                    v91 = (unsigned int)(v105 + v104);
                    if ( (unsigned __int8)is_mapped(v91) )
                    {
                      insn_add_dref(a2, v91, (unsigned int)(char)a3[2], (unsigned int)v8 + 2);
                      v92 = sub_CFB0(*(_WORD *)(a2 + 24));
                      insn_create_op_data(a2, v91, (unsigned int)(char)a3[2], v92);
                      v31 = *(_QWORD *)(a2 + 16);
                      sub_CFF0(a1, v31, v91);
                    }
                    else
                    {
                      v102 = "Data write to";
                      if ( v8 )
                        v102 = "Data read from";
                      v31 = v91;
                      sub_DCF0(*(_QWORD *)(a2 + 16), v91, v102);
                    }
                  }
                }
              }
            }
            if ( v109 )
            {
              *(_QWORD *)&v110 = 0;
              qfree(v109, v31, v32, v33);
            }
            v34 = v106;
            if ( v106 )
            {
LABEL_33:
              *(_QWORD *)&v107 = 0;
              qfree(v34, v31, v32, v33);
              return v112 - __readfsqword(0x28u);
            }
            return v112 - __readfsqword(0x28u);
          }
LABEL_60:
          v50 = *((unsigned __int16 *)a3 + 3);
          v108 = 0;
          v106 = nullptr;
          v109 = nullptr;
          v111 = 0;
          v107 = 0;
          v110 = 0;
          v51 = sub_1D1E0(&v106, v27, v29, a1, 0);
          v54 = v109;
          if ( !v51 )
            goto LABEL_61;
          v50 = v30;
          v68 = sub_1D1E0(&v109, v30, *(_QWORD *)(a2 + 16), a1, 0);
          v54 = v109;
          if ( !v68 || (unsigned __int8)(v108 - 10) > 1u )
            goto LABEL_61;
          v52 = v106;
          v53 = v107;
          v50 = *v106;
          if ( (_QWORD)v107 == 1 || (v69 = v106 + 3, v53 = 24 * v107, v52 = &v106[3 * v107], 24LL * (_QWORD)v107 == 24) )
          {
LABEL_137:
            v54 = v109;
            if ( (unsigned __int8)(v111 - 10) > 1u )
              goto LABEL_61;
            v52 = *v109;
            if ( (_QWORD)v110 != 1 )
            {
              v53 = 24 * v110;
              v95 = (__int64 *)(v109 + 3);
              if ( 24LL * (_QWORD)v110 != 24 )
              {
                while ( (__int64 *)*v95 == v52 )
                {
                  v95 += 3;
                  if ( &v109[3 * (_QWORD)v110] == (__int64 **)v95 )
                    goto LABEL_142;
                }
                goto LABEL_61;
              }
            }
LABEL_142:
            v96 = (unsigned int)(((_DWORD)v52 << v103) + v50);
            if ( (unsigned __int8)is_mapped(v96) )
            {
              insn_add_dref(a2, v96, (unsigned int)(char)a3[2], (unsigned int)v8 + 2);
              v97 = sub_CFB0(*(_WORD *)(a2 + 24));
              insn_create_op_data(a2, v96, (unsigned int)(char)a3[2], v97);
              v50 = *(_QWORD *)(a2 + 16);
              sub_CFF0(a1, v50, v96);
            }
            else
            {
              v100 = "Data write to";
              if ( v8 )
                v100 = "Data read from";
              v50 = v96;
              sub_DCF0(*(_QWORD *)(a2 + 16), v96, v100);
            }
          }
          else
          {
            while ( *v69 == v50 )
            {
              v69 += 3;
              if ( v52 == v69 )
                goto LABEL_137;
            }
          }
          v54 = v109;
LABEL_61:
          if ( v54 )
          {
            *(_QWORD *)&v110 = 0;
            qfree(v54, v50, v52, v53);
          }
          if ( v106 )
          {
            *(_QWORD *)&v107 = 0;
            qfree(v106, v50, v52, v53);
          }
          return v112 - __readfsqword(0x28u);
        }
        v31 = 29;
        v108 = 0;
        v106 = nullptr;
        v109 = nullptr;
        v111 = 0;
        v107 = 0;
        v110 = 0;
        if ( (unsigned __int8)sub_1D1E0(&v106, 29, v29, a1, 0) )
        {
          v31 = v30;
          if ( (unsigned __int8)sub_1D1E0(&v109, v30, *(_QWORD *)(a2 + 16), a1, 0) )
          {
            v31 = (__int64)&v104;
            if ( (unsigned __int8)sub_CF40(&v106, &v104) )
            {
              v31 = (__int64)&v105;
              if ( (unsigned __int8)sub_CF40((__int64 **)&v109, &v105) )
              {
                v93 = (unsigned int)(v104 + ((_DWORD)v105 << v103));
                if ( (unsigned __int8)is_mapped(v93) )
                {
                  insn_add_dref(a2, v93, (unsigned int)(char)a3[2], (unsigned int)v8 + 2);
                  v94 = sub_CFB0(*(_WORD *)(a2 + 24));
                  insn_create_op_data(a2, v93, (unsigned int)(char)a3[2], v94);
                  v31 = *(_QWORD *)(a2 + 16);
                  sub_CFF0(a1, v31, v93);
                }
                else
                {
                  v101 = "Data write to";
                  if ( v8 )
                    v101 = "Data read from";
                  v31 = v93;
                  sub_DCF0(*(_QWORD *)(a2 + 16), v93, v101);
                }
              }
            }
          }
        }
        if ( v109 )
        {
          *(_QWORD *)&v110 = 0;
          qfree(v109, v31, v32, v33);
        }
        v34 = v106;
        if ( v106 )
          goto LABEL_33;
        return v112 - __readfsqword(0x28u);
      }
      if ( v27 != 31 && v27 != 28 )
      {
        func = (_QWORD *)get_func(*(_QWORD *)(a2 + 16));
        if ( !func || (v47 = sub_13410(a1, *func), v47 < 0) || v27 != v47 )
        {
          v66 = *(_QWORD *)(a2 + 16);
          v58 = v27;
          v111 = 0;
          v109 = nullptr;
          v110 = 0;
          v67 = sub_1D1E0(&v109, v27, v66, a1, 0);
          v62 = v109;
          if ( v67 && (unsigned __int8)(v111 - 10) <= 1u )
          {
            v58 = (__int64)*v109;
            if ( (_QWORD)v110 == 1
              || (v79 = (__int64 *)(v109 + 3),
                  v61 = 24 * v110,
                  v60 = (__int64 *)&v109[3 * v110],
                  24LL * (_QWORD)v110 == 24) )
            {
LABEL_106:
              v80 = (unsigned int)v58;
              if ( (unsigned __int8)is_mapped((unsigned int)v58) )
              {
                insn_add_dref(a2, (unsigned int)v58, (unsigned int)(char)a3[2], (unsigned int)v8 + 2);
                v81 = sub_CFB0(*(_WORD *)(a2 + 24));
                insn_create_op_data(a2, (unsigned int)v58, (unsigned int)(char)a3[2], v81);
                sub_CFF0(a1, *(_QWORD *)(a2 + 16), (unsigned int)v58);
                v82 = *a3;
                flags = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
                v58 = v82;
                if ( !(unsigned __int8)is_defarg(flags, v82) )
                {
                  v58 = *a3;
                  op_offset(*(_QWORD *)(a2 + 16), v58, 130, -1, v80, 0);
                }
              }
              else
              {
                v98 = "Data write to";
                if ( v8 )
                  v98 = "Data read from";
                v58 = (unsigned int)v58;
                sub_DCF0(*(_QWORD *)(a2 + 16), (unsigned int)v58, v98);
              }
              v62 = v109;
            }
            else
            {
              while ( v58 == *v79 )
              {
                v79 += 3;
                if ( v60 == v79 )
                  goto LABEL_106;
              }
            }
          }
          if ( !v62 )
            return v112 - __readfsqword(0x28u);
          goto LABEL_74;
        }
      }
      if ( !(unsigned __int8)getinf_flag(10, 512, v26, a4, a5) || (unsigned int)get_auto_state() != 40 )
        return v112 - __readfsqword(0x28u);
      v48 = 0;
      v49 = v27;
      return sub_D040(a1, a2, a3, v49, v48);
    case 4u:
      v9 = *((_WORD *)a3 + 3);
      if ( v9 == 29 )
      {
        if ( *(_BYTE *)(a2 + 33) == 5 )
        {
          v57 = *(_QWORD *)(a2 + 16);
          v58 = 29;
          v111 = 0;
          v109 = nullptr;
          v110 = 0;
          v59 = sub_1D1E0(&v109, 29, v57, a1, 0);
          v62 = v109;
          if ( v59 && (unsigned __int8)(v111 - 10) <= 1u )
          {
            v84 = *v109;
            if ( (_QWORD)v110 == 1
              || (v85 = (__int64 *)(v109 + 3),
                  v61 = 24 * v110,
                  v60 = (__int64 *)&v109[3 * v110],
                  24LL * (_QWORD)v110 == 24) )
            {
LABEL_120:
              v86 = (unsigned int)(*((_DWORD *)a3 + 4) + (_DWORD)v84);
              if ( (unsigned __int8)is_mapped(v86) )
              {
                insn_add_dref(a2, v86, (unsigned int)(char)a3[2], (unsigned int)v8 + 2);
                v87 = sub_CFB0(*(_WORD *)(a2 + 24));
                insn_create_op_data(a2, v86, (unsigned int)(char)a3[2], v87);
                sub_CFF0(a1, *(_QWORD *)(a2 + 16), v86);
                v88 = *a3;
                v89 = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
                v58 = v88;
                if ( !(unsigned __int8)is_defarg(v89, v88) )
                {
                  v58 = *a3;
                  op_offset(*(_QWORD *)(a2 + 16), v58, 130, -1, v84, 0);
                }
              }
              else
              {
                v99 = "Data write to";
                if ( v8 )
                  v99 = "Data read from";
                v58 = v86;
                sub_DCF0(*(_QWORD *)(a2 + 16), v86, v99);
              }
              v62 = v109;
            }
            else
            {
              while ( v84 == (__int64 *)*v85 )
              {
                v85 += 3;
                if ( v60 == v85 )
                  goto LABEL_120;
              }
            }
          }
          if ( !v62 )
            return v112 - __readfsqword(0x28u);
LABEL_74:
          *(_QWORD *)&v110 = 0;
          qfree(v62, v58, v60, v61);
          return v112 - __readfsqword(0x28u);
        }
      }
      else if ( v9 == 31 || v9 == 28 )
      {
LABEL_5:
        if ( (unsigned __int8)getinf_flag(10, 512, a3, a4, a5) && (unsigned int)get_auto_state() == 40 )
        {
          v49 = *((unsigned __int16 *)a3 + 3);
          v48 = *((_QWORD *)a3 + 2);
          return sub_D040(a1, a2, a3, v49, v48);
        }
        return v112 - __readfsqword(0x28u);
      }
      v35 = (_QWORD *)get_func(*(_QWORD *)(a2 + 16));
      if ( v35 )
      {
        v36 = sub_13410(a1, *v35);
        v37 = *((unsigned __int16 *)a3 + 3);
        if ( v36 >= 0 && v36 == (_DWORD)v37 )
          goto LABEL_5;
      }
      else
      {
        v37 = *((unsigned __int16 *)a3 + 3);
      }
      v38 = *(_QWORD *)(a2 + 16);
      v111 = 0;
      v109 = nullptr;
      v110 = 0;
      v39 = sub_1D1E0(&v109, v37, v38, a1, 0);
      v42 = v109;
      if ( !v39 || (unsigned __int8)(v111 - 10) > 1u )
        goto LABEL_39;
      v55 = *v109;
      if ( (_QWORD)v110 == 1
        || (v56 = (__int64 *)(v109 + 3), v41 = 24 * v110, v40 = (__int64 *)&v109[3 * v110], 24LL * (_QWORD)v110 == 24) )
      {
LABEL_94:
        v70 = (unsigned int)(*((_DWORD *)a3 + 4) + (_DWORD)v55);
        if ( (unsigned __int8)is_mapped(v70) )
        {
          insn_add_dref(a2, v70, (unsigned int)(char)a3[2], (unsigned int)v8 + 2);
          v71 = *(_WORD *)(a2 + 24);
          if ( v71 > 0x14u )
          {
            v73 = 2;
          }
          else
          {
            v72 = 1LL << v71;
            v73 = 0;
            if ( (v72 & 0x70706) == 0 )
              v73 = (unsigned int)((v72 & 0x181818) == 0) + 1;
          }
          insn_create_op_data(a2, v70, (unsigned int)(char)a3[2], v73);
          v74 = *(_QWORD *)(a2 + 16);
          v75 = *(_QWORD *)(a1 + 120);
          v106 = (__int64 *)v70;
          netnode_supset(v75, v74, &v106, 8, 868);
          v76 = *a3;
          v77 = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
          v37 = v76;
          v78 = is_defarg(v77, v76);
          v42 = v109;
          if ( v78 )
            goto LABEL_39;
          v37 = *a3;
          op_offset(*(_QWORD *)(a2 + 16), v37, 130, -1, v55, 0);
        }
        else
        {
          v90 = "Data write to";
          v37 = v70;
          if ( v8 )
            v90 = "Data read from";
          sub_DCF0(*(_QWORD *)(a2 + 16), v70, v90);
        }
        v42 = v109;
      }
      else
      {
        while ( v55 == (__int64 *)*v56 )
        {
          v56 += 3;
          if ( v40 == v56 )
            goto LABEL_94;
        }
      }
LABEL_39:
      if ( v42 )
      {
        *(_QWORD *)&v110 = 0;
        qfree(v42, v37, v40, v41);
      }
      return v112 - __readfsqword(0x28u);
    case 5u:
      if ( !(_BYTE)a4 )
        return v112 - __readfsqword(0x28u);
      v22 = *(_QWORD *)(a2 + 16);
      if ( *(_WORD *)(a2 + 24) == 114 && *(_BYTE *)(a2 + 33) == 5 )
      {
        sreg = get_sreg(v22, 34);
        if ( sreg != -1 )
        {
          v64 = (__int64 **)(unsigned int)(*((_DWORD *)a3 + 2) + sreg);
          if ( (unsigned __int8)is_mapped(v64) )
          {
            insn_add_dref(a2, v64, (unsigned int)(char)a3[2], 1);
            v109 = v64;
            v65 = *(_QWORD *)(a2 + 16);
LABEL_78:
            netnode_supset(*(_QWORD *)(a1 + 120), v65, &v109, 8, 868);
          }
        }
      }
      else
      {
        v23 = *a3;
        v24 = get_flags_ex(v22, 0);
        if ( (unsigned __int8)is_off(v24, v23) )
        {
          v25 = *((_QWORD *)a3 + 2);
          if ( v25 )
          {
            if ( (unsigned __int8)is_mapped(*((_QWORD *)a3 + 2)) )
              return insn_add_dref(a2, v25, (unsigned int)(char)a3[2], 1);
          }
        }
      }
      return v112 - __readfsqword(0x28u);
    case 7u:
      v11 = *((_QWORD *)a3 + 2);
      v12 = is_mapped(v11);
      v13 = *(unsigned __int16 *)(a2 + 24);
      if ( v12 )
      {
        v14 = has_insn_feature(v13, 2);
        v15 = (unsigned int)(char)a3[2];
        if ( v14 )
        {
          insn_add_cref(a2, v11, v15, 17);
          auto_mark_range(v11, v11 + 1, 20);
          return auto_mark_range(v11, v11 + 1, 30);
        }
        else
        {
          return insn_add_cref(a2, v11, v15, 19);
        }
      }
      else
      {
        v45 = has_insn_feature(v13, 2);
        v43 = "Jump near";
        if ( v45 )
          v43 = "Call near";
        v44 = *(_QWORD *)(a2 + 16);
        v17 = v11;
        return sub_DCF0(v44, v17, v43);
      }
    default:
      return v112 - __readfsqword(0x28u);
  }
}

