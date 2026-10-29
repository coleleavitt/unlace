__int64 __fastcall sub_D1A0(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        double a7)
{
  char v7; // r15
  __int64 v9; // r12
  unsigned __int8 *v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r8
  __int16 v19; // ax
  bool v20; // zf
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r15
  char v34; // al
  unsigned int v35; // r9d
  __int64 v36; // rax
  unsigned __int8 v37; // al
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int16 v41; // ax
  __int64 flags; // rax
  __int16 v43; // ax
  __int64 v44; // rdx
  __int64 v45; // rdx
  int v46; // eax
  int v47; // ecx
  int v48; // r13d
  __int64 func; // rax
  char v50; // al
  __int16 v51; // dx
  __int64 v52; // rdi
  __int64 v53; // r8
  char refinfo; // dl
  __int64 v55; // rcx
  __int64 v56; // rdx
  unsigned int v57; // r9d
  __int64 v58; // rdi
  char v59; // dl
  __int64 v60; // r8
  __int64 v61; // rax
  __int64 v62; // [rsp+0h] [rbp-78h]
  __int64 v63; // [rsp+0h] [rbp-78h]
  int v64; // [rsp+8h] [rbp-70h]
  __int64 v65; // [rsp+8h] [rbp-70h]
  _BYTE v66[8]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v67; // [rsp+18h] [rbp-60h]
  unsigned __int64 v68; // [rsp+38h] [rbp-40h]

  v7 = a4;
  v9 = a2;
  v10 = a3;
  v11 = *(_QWORD *)(a1 + 32);
  v12 = *(_QWORD *)a2;
  v68 = __readfsqword(0x28u);
  v14 = *(_QWORD *)(v11 + 16);
  v15 = *((_QWORD *)a3 + 2) + 16 * v12;
  if ( v14 != v15 )
  {
    v16 = v15 & v14;
    if ( v15 != -1 )
      v15 = v16;
  }
  if ( a3[5] == 12 && (a3[4] & 0x20) != 0 )
    set_op_type(*(_QWORD *)(a2 + 16), 0x22222202200000LL, *a3);
  v17 = v10[1];
  switch ( (char)v17 )
  {
    case 0:
    case 1:
    case 3:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
      return v68 - __readfsqword(0x28u);
    case 2:
      if ( (unsigned __int16)(*(_WORD *)(a2 + 24) - 116) <= 1u )
      {
        if ( v7 )
          return v68 - __readfsqword(0x28u);
        sub_D120(a1, a2, v10, a5);
LABEL_48:
        flags = get_flags_ex(*(_QWORD *)(a2 + 16), 0, a3, a4);
        if ( (unsigned __int8)is_off(flags, *v10)
          && (unsigned __int8)get_refinfo(v66, *(_QWORD *)(a2 + 16), *v10)
          && v67 != -1 )
        {
          v15 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (*((_QWORD *)v10 + 2) + v67);
        }
        v43 = *(_WORD *)(a2 + 24);
        v44 = (unsigned int)(char)v10[2];
        if ( v43 != 117 && v43 != 26 )
          return insn_add_cref(a2, v15, v44, 19);
        insn_add_cref(a2, v15, v44, 17);
        if ( !(unsigned __int8)func_does_return(v15) )
          *(_BYTE *)(a1 + 208) = 0;
      }
      else if ( !v7 )
      {
        sub_D030(a1, a2, v10, v15, a5, (char)v10[2], 0);
      }
      return v68 - __readfsqword(0x28u);
    case 4:
      v19 = *(_WORD *)(a2 + 24);
      HIDWORD(v62) = 19;
      if ( v19 != 116 )
      {
        a3 = nullptr;
        v20 = v19 == 117;
        v21 = 17;
        if ( !v20 )
          v21 = 0;
        HIDWORD(v62) = v21;
      }
      v22 = get_flags_ex(*(_QWORD *)(a2 + 16), 0, a3, a4);
      if ( *((_WORD *)v10 + 3) == 91 && (v22 < 0 || (int)get_auto_state() <= 39) )
        HIDWORD(v62) = 0;
      sub_CB00(a1, a2, v10, v23, v24, v25, v62, v64);
      v28 = get_flags_ex(*(_QWORD *)(a2 + 16), 0, v26, v27);
      v30 = v28;
      if ( v7 )
      {
        v33 = get_flags_ex(*(_QWORD *)(a2 + 16), 0, v29, v28);
        goto LABEL_37;
      }
      if ( !*((_QWORD *)v10 + 2) )
        goto LABEL_20;
      v65 = v28;
      v50 = is_defarg(v28, *v10);
      v30 = v65;
      if ( v50 )
        goto LABEL_20;
      v51 = *((_WORD *)v10 + 3);
      v52 = *(_QWORD *)(a2 + 16);
      if ( v51 == 13 )
      {
        v53 = *(_QWORD *)(a1 + 192);
        if ( v53 != -1 )
        {
LABEL_81:
          op_offset(v52, *v10, 2, -1, v53, 0, v63, v65);
          goto LABEL_21;
        }
      }
      else if ( v51 == 12 )
      {
        v53 = *(_QWORD *)(a1 + 200);
        if ( v53 != -1 )
          goto LABEL_81;
      }
      v61 = sub_B740(a1, v51, *(_QWORD *)(a2 + 16));
      v30 = v65;
      v53 = v61;
      if ( v61 != -1 )
      {
        v52 = *(_QWORD *)(a2 + 16);
        goto LABEL_81;
      }
LABEL_20:
      if ( *((_WORD *)v10 + 3) != 91 || (unsigned __int8)is_defarg(v30, *v10) )
        goto LABEL_21;
      v58 = *(_QWORD *)(a2 + 16);
      v59 = v10[32] & 0xF;
      if ( v59 == 13 )
      {
        v60 = *(_QWORD *)(a1 + 192);
        if ( v60 != -1 )
          goto LABEL_91;
      }
      else if ( v59 == 12 )
      {
        v60 = *(_QWORD *)(a1 + 200);
        if ( v60 != -1 )
          goto LABEL_91;
      }
      v60 = sub_B740(a1, v59, *(_QWORD *)(a2 + 16));
      if ( v60 == -1 )
      {
LABEL_21:
        sub_D120(a1, a2, v10, a5);
        v33 = get_flags_ex(*(_QWORD *)(a2 + 16), 0, v31, v32);
        if ( (unsigned __int8)is_off(v33, *v10) )
        {
          v34 = v10[33];
          if ( v34 >= 0 )
          {
            refinfo = get_refinfo(v66, *(_QWORD *)(a2 + 16), *v10);
            v34 = v10[33];
            if ( refinfo )
            {
              if ( v67 != -1 )
              {
                v55 = *(_QWORD *)(a1 + 32);
                v56 = *((_QWORD *)v10 + 2) + v67;
                v57 = (char)v10[2];
                if ( (v34 & 0x1C) == 0 && HIDWORD(v63) )
                {
                  insn_add_cref(a2, v56 & *(_QWORD *)(v55 + 16), v57, HIDWORD(v63));
                  v37 = v10[33];
                  if ( (v37 & 0x40) == 0 )
                    goto LABEL_40;
LABEL_24:
                  if ( (unsigned __int8)get_refinfo(v66, *(_QWORD *)(a2 + 16), *v10 | 0x80u) && v67 != -1 )
                  {
                    v35 = (char)v10[3];
                    v36 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (*((_QWORD *)v10 + 1) + v67);
                    if ( !HIDWORD(v63) )
                    {
                      sub_D030(a1, a2, v10, v36, a5, v35, 1u);
                      return v68 - __readfsqword(0x28u);
                    }
                    insn_add_cref(a2, v36, v35, HIDWORD(v63));
                    v37 = v10[33];
LABEL_40:
                    if ( (v37 & 0xCC) == 0 && (v37 & 0x10) == 0 && *((_WORD *)v10 + 3) == 91 )
                    {
                      v41 = *(_WORD *)(a2 + 24);
                      if ( (unsigned __int16)(v41 - 116) <= 1u || v41 == 24 )
                        return add_cref(*(_QWORD *)(a2 + 16), v15, HIDWORD(v63));
                    }
                    return v68 - __readfsqword(0x28u);
                  }
LABEL_38:
                  if ( !HIDWORD(v63) )
                    return v68 - __readfsqword(0x28u);
                  v37 = v10[33];
                  goto LABEL_40;
                }
                sub_D030(a1, a2, v10, v56 & *(_QWORD *)(v55 + 16), a5, v57, 0);
                v34 = v10[33];
              }
            }
          }
          if ( (v34 & 0x40) == 0 )
            goto LABEL_38;
          goto LABEL_24;
        }
LABEL_37:
        if ( (unsigned __int8)getinf_flag(10, 512) )
        {
          if ( (unsigned int)get_auto_state() == 40 && !(unsigned __int8)is_defarg(v33, *v10) )
          {
            v48 = *((unsigned __int16 *)v10 + 3);
            if ( ((_WORD)v48 == 15
               || (func = get_func(*(_QWORD *)(a2 + 16))) != 0
               && (*(_BYTE *)(func + 16) & 0x10) != 0
               && v48 == (unsigned int)netnode_altval(*(_QWORD *)(a1 + 128), *(_QWORD *)func, 321) - 1)
              && (v10[33] & 0xE0) == 0
              && (*(_BYTE *)(a2 + 81) != 1 || *(_WORD *)(a2 + 86) != 15)
              && (unsigned __int8)insn_create_stkvar(
                                    a2,
                                    v10,
                                    *((_QWORD *)v10 + 2),
                                    *(_WORD *)(a2 + 24) != 145 && *(_WORD *)(a2 + 24) != 118) )
            {
              op_stkvar(*(_QWORD *)(a2 + 16), *v10);
            }
          }
        }
        goto LABEL_38;
      }
      v58 = *(_QWORD *)(a2 + 16);
LABEL_91:
      op_offset(v58, *v10, 130, -1, v60, 0, v63, v65);
      goto LABEL_21;
    case 5:
      sub_CB00(a1, a2, v10, a4, v17, a6, v62, v64);
      v40 = get_flags_ex(*(_QWORD *)(a2 + 16), 0, v38, v39);
      if ( !v10[32] )
      {
        if ( v7 )
          return v68 - __readfsqword(0x28u);
        if ( (v10[4] & 0x10) == 0
          && (unsigned __int8)is_off(v40, *v10)
          && (unsigned __int8)get_refinfo(v66, *(_QWORD *)(a2 + 16), *v10)
          && v67 != -1 )
        {
          insn_add_dref(
            a2,
            *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (*((_QWORD *)v10 + 1) + v67),
            (unsigned int)(char)v10[2],
            1);
        }
        return sub_D120(a1, a2, v10, a5);
      }
      if ( !v7 )
        return sub_D120(a1, a2, v10, a5);
      return v68 - __readfsqword(0x28u);
    case 7:
      if ( v7 )
        return v68 - __readfsqword(0x28u);
      goto LABEL_48;
    default:
      v45 = *(_QWORD *)(a1 + 16);
      v46 = *(unsigned __int16 *)(a2 + 24);
      LODWORD(a2) = 0;
      v47 = *(_DWORD *)(v45 + 104);
      if ( v46 >= v47 && v46 < *(_DWORD *)(v45 + 108) )
        a2 = *(_QWORD *)(*(_QWORD *)(v45 + 112) + 16LL * (v46 - v47));
      return sub_6C80((__int64)"%a: %s,%d: bad optype %d", a7, *(const char **)(v9 + 16), a2, *v10);
  }
}

