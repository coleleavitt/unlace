__int16 __fastcall sub_47690(__int64 a1, __int64 a2, unsigned __int8 *a3, unsigned __int8 a4, double a5)
{
  __int64 v6; // rbp
  unsigned __int8 *v7; // rbx
  unsigned __int8 v8; // dl
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 flags; // rax
  bool v20; // cf
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // eax
  int v25; // ecx

  v6 = a2;
  v7 = a3;
  v8 = a3[1];
  LOWORD(v10) = v8;
  switch ( v8 )
  {
    case 0u:
    case 3u:
    case 4u:
    case 8u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
    case 0xDu:
    case 0xEu:
    case 0xFu:
      return v10;
    case 1u:
      if ( v7[5] == 4 )
        goto LABEL_4;
      return v10;
    case 2u:
      v15 = *((_QWORD *)v7 + 2);
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
      if ( v15 != -1 && v15 != v10 )
      {
        v16 = v15 + 16LL * *(_QWORD *)a2;
        if ( v10 != v16 )
        {
          v17 = v16 & v10;
          if ( v16 != -1 )
            v16 = v17;
        }
        v18 = use_mapping(v16);
        insn_create_op_data(a2, v18, (unsigned int)(char)v7[2], v7[5]);
        LOWORD(v10) = insn_add_dref(a2, v18, (unsigned int)(char)v7[2], (unsigned int)a4 + 2);
      }
      return v10;
    case 5u:
      if ( !a4 && !v7[34] )
        goto LABEL_27;
      LODWORD(v7) = *v7;
      set_immd(*(_QWORD *)(a2 + 16));
      flags = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
      LOWORD(v10) = is_defarg(flags, (unsigned int)v7);
      if ( (_BYTE)v10 )
        return v10;
      LOWORD(v10) = *(_WORD *)(a2 + 24);
      if ( (_WORD)v10 == 2188 )
        goto LABEL_35;
      if ( (unsigned __int16)v10 > 0x88Cu )
      {
        if ( (_WORD)v10 == 2190 )
        {
LABEL_35:
          if ( *(__int64 *)(a2 + 40LL * (int)v7 + 48) < 0 )
            toggle_sign(*(_QWORD *)(a2 + 16), (unsigned int)v7);
          goto LABEL_25;
        }
      }
      else
      {
        if ( (unsigned __int16)v10 <= 0xCu )
          goto LABEL_32;
        v20 = (_WORD)v10 == 227;
        LOWORD(v10) = v10 - 227;
        if ( v20 || (_WORD)v10 == 1 )
        {
LABEL_25:
          v21 = *(_QWORD *)(v6 + 16);
          v22 = num_flag();
          LOWORD(v10) = set_op_type(v21, v22, (unsigned int)v7);
        }
      }
      return v10;
    case 7u:
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
      v12 = *((_QWORD *)v7 + 2) + 16LL * *(_QWORD *)a2;
      if ( v12 != v11 )
      {
        v11 &= v12;
        if ( v12 == -1 )
          v11 = -1;
      }
      v13 = use_mapping(v11);
      v14 = v13;
      if ( (*(_BYTE *)(a2 + 28) & 8) != 0 )
      {
        if ( *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26) != v13 )
          sub_47620(a1, a2, v13, (char)v7[2]);
      }
      else
      {
        insn_add_cref(a2, v13, (unsigned int)(char)v7[2], 19);
      }
      LOWORD(v10) = sub_39080(a1, a2, v14);
      return v10;
    case 9u:
LABEL_4:
      LOWORD(v10) = sub_4EA30(a1);
      return v10;
    default:
LABEL_27:
      v23 = *(_QWORD *)(a1 + 16);
      v24 = *(unsigned __int16 *)(a2 + 24);
      LODWORD(a2) = 0;
      v25 = *(_DWORD *)(v23 + 104);
      if ( v24 >= v25 && v24 < *(_DWORD *)(v23 + 108) )
        a2 = *(_QWORD *)(*(_QWORD *)(v23 + 112) + 16LL * (v24 - v25));
      sub_337D0((__int64)"%a: %s,%d: bad optype %d\n", a5, *(const char **)(v6 + 16), a2, *v7);
      if ( under_debugger )
        BUG();
      LOWORD(v10) = interr(10185);
LABEL_32:
      if ( (unsigned __int16)v10 <= 0xAu )
        return v10;
      goto LABEL_25;
  }
}
