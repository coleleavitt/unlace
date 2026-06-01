__int64 __fastcall sub_137F0(__int64 a1, __int64 a2, unsigned __int8 *a3, unsigned __int8 a4, double a5)
{
  __int64 v6; // rbp
  __int64 flags; // rax
  unsigned __int8 v9; // dl
  __int64 v10; // r13
  __int64 result; // rax
  unsigned int v12; // r12d
  char v13; // al
  __int64 v14; // r12
  char v15; // r13
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r13
  __int16 v24; // dx
  __int16 v25; // dx
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // eax
  int v29; // ecx
  __int16 v30; // dx

  v6 = a2;
  flags = get_flags_ex(*(_QWORD *)(a2 + 16), 0, a5);
  v9 = a3[1];
  v10 = flags;
  result = v9;
  switch ( v9 )
  {
    case 0u:
    case 1u:
      return result;
    case 2u:
      v19 = *((_QWORD *)a3 + 2);
      v20 = calc_dataseg(a2, *a3, 0xFFFFFFFFLL);
      v21 = (unsigned int)(char)a3[2];
      v22 = 1;
      v23 = 16 * v20 + v19;
      if ( *(_WORD *)(a2 + 24) != 664 )
      {
        insn_create_op_data(a2, v23, v21, a3[5]);
        v21 = (unsigned int)(char)a3[2];
        v22 = (unsigned int)a4 + 2;
      }
      return insn_add_dref(a2, v23, v21, v22);
    case 3u:
    case 4u:
      v12 = a4 + 2;
      goto LABEL_5;
    case 5u:
      v12 = 1;
LABEL_5:
      set_immd(*(_QWORD *)(a2 + 16));
      if ( (unsigned __int8)op_adds_xrefs(v10, *a3) )
        return insn_add_off_drefs(a2, a3, v12, (unsigned __int8)(a3[1] != 5) << 7);
      result = getinf_flag(10, 512);
      if ( !(_BYTE)result )
        return result;
      result = get_auto_state();
      if ( (_DWORD)result != 40 )
        return result;
      result = is_defarg(v10, *a3);
      if ( (_BYTE)result )
        return result;
      result = get_func(*(_QWORD *)(a2 + 16));
      if ( !result )
        return result;
      if ( a3[1] != 4 )
        return result;
      v24 = *((_WORD *)a3 + 3);
      result = *(_QWORD *)(result + 16) & 0x10LL;
      if ( v24 != 15 && (v24 != 11 || !result) )
        return result;
      v25 = *(_WORD *)(a2 + 24);
      if ( ((v25 - 766) & 0xFFFD) == 0 || (unsigned __int16)(v25 - 1360) <= 1u )
      {
        v30 = *(_WORD *)(a2 + 86);
        if ( v30 == 15 || result && v30 == 11 )
          return result;
        goto LABEL_35;
      }
      if ( v25 != 669 )
      {
LABEL_35:
        v26 = 1;
        goto LABEL_26;
      }
      if ( *(_WORD *)(a2 + 46) == 15 )
        return result;
      v26 = 0;
LABEL_26:
      result = insn_create_stkvar(a2, a3, *((_QWORD *)a3 + 2), v26);
      if ( (_BYTE)result )
        return op_stkvar(*(_QWORD *)(a2 + 16), *a3);
      return result;
    case 7u:
      v13 = has_insn_feature(*(unsigned __int16 *)(a2 + 24), 2);
      v14 = *((_QWORD *)a3 + 2);
      v15 = v13;
      v16 = calc_dataseg(a2, *a3, 0xFFFFFFFFLL);
      v17 = (unsigned int)(char)a3[2];
      v18 = 16 * v16 + v14;
      if ( !v15 )
        return insn_add_cref(a2, v18, v17, 19);
      insn_add_cref(a2, v18, v17, 17);
      result = func_does_return(v18);
      *(_BYTE *)(a1 + 124) = result;
      return result;
    default:
      v27 = *(_QWORD *)(a1 + 16);
      v28 = *(unsigned __int16 *)(a2 + 24);
      LODWORD(a2) = 0;
      v29 = *(_DWORD *)(v27 + 104);
      if ( v28 >= v29 && v28 < *(_DWORD *)(v27 + 108) )
        a2 = *(_QWORD *)(*(_QWORD *)(v27 + 112) + 16LL * (v28 - v29));
      sub_11AC0((__int64)"%a: %s,%d: bad optype %d", a5, *(const char **)(v6 + 16), a2, *a3);
  }
}
