__int64 __fastcall sub_6130(__int64 a1, __int64 a2, unsigned __int8 *a3, char a4, double a5)
{
  __int64 v6; // rbp
  unsigned __int8 v7; // r8
  __int64 v9; // rsi
  __int64 v11; // rdx
  int v12; // eax
  int v13; // ecx
  __int64 v14; // r14
  int v15; // eax
  __int64 v16; // rdx
  __int16 v17; // ax
  __int64 v18; // rax
  __int16 v19; // di
  __int64 v20; // r14
  char v21; // al
  char v22; // dl
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int16 flags; // ax
  __int64 v27; // rdx
  __int64 v28; // rdx
  char v29; // [rsp+Fh] [rbp-49h]
  __int64 v30; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v31; // [rsp+18h] [rbp-40h]

  v6 = a2;
  v7 = a3[1];
  v31 = __readfsqword(0x28u);
  switch ( v7 )
  {
    case 1u:
    case 8u:
    case 0xAu:
      return v31 - __readfsqword(0x28u);
    case 2u:
      v14 = *((_QWORD *)a3 + 2);
      v30 = 16 * calc_dataseg() + v14;
      goto LABEL_11;
    case 3u:
      v17 = *(_WORD *)(a2 + 24);
      if ( v17 != 67 && v17 != 204 && (unsigned int)sub_5FC0(a1, a2, &v30) )
        goto LABEL_11;
      return v31 - __readfsqword(0x28u);
    case 5u:
      if ( !a4 )
        goto LABEL_6;
      set_immd();
      if ( (get_flags_ex() & 0xF00000) != 0 )
        goto LABEL_4;
      v23 = *(unsigned __int16 *)(a2 + 24);
      if ( (unsigned __int16)v23 > 0x62u )
      {
        if ( (unsigned __int16)v23 > 0xB7u )
        {
          LOWORD(v23) = v23 - 214;
          if ( (unsigned __int16)v23 <= 0x36u )
          {
            v28 = 0x40000000008003LL;
            if ( _bittest64(&v28, v23) )
              goto LABEL_34;
          }
        }
        else if ( (unsigned __int16)v23 > 0x82u )
        {
          v25 = 0x10000020040013LL;
          LOWORD(v23) = v23 - 131;
          if ( _bittest64(&v25, v23) )
            goto LABEL_34;
        }
      }
      else if ( (unsigned __int16)v23 > 0x23u )
      {
        v27 = 0x5000060000000C01LL;
        if ( _bittest64(&v27, (unsigned int)(v23 - 36)) )
        {
LABEL_34:
          num_flag();
          set_op_type();
        }
      }
      else if ( (unsigned __int16)(v23 - 9) <= 0x12u )
      {
        v24 = 146809344;
        if ( _bittest64(&v24, v23) )
          goto LABEL_34;
      }
LABEL_4:
      get_flags_ex();
      v9 = *a3;
      if ( !(unsigned __int8)op_adds_xrefs() )
        return v31 - __readfsqword(0x28u);
      sub_6BC0(v6, v9);
      return insn_add_off_drefs();
    case 7u:
      v18 = map_code_ea();
      v19 = *(_WORD *)(a2 + 24);
      v30 = v18;
      v20 = v18;
      if ( (unsigned __int16)(v19 - 63) <= 1u || v19 == 26 || v19 == 164 || (unsigned __int16)(v19 - 202) <= 1u )
      {
LABEL_11:
        insn_create_op_data();
        insn_add_dref();
        if ( a3[1] != 2 )
          return v31 - __readfsqword(0x28u);
        v15 = *(unsigned __int16 *)(a2 + 24);
        if ( (unsigned __int16)v15 > 0x41u )
        {
          if ( (_WORD)v15 == 179 || (_WORD)v15 == 203 )
            return insn_add_dref();
        }
        else if ( (unsigned __int16)v15 > 0x28u )
        {
          v16 = 25690113;
          if ( _bittest64(&v16, (unsigned int)(v15 - 41)) )
            return insn_add_dref();
        }
        return v31 - __readfsqword(0x28u);
      }
      v21 = has_insn_feature();
      v22 = v21;
      if ( *(_WORD *)(a2 + 24) == 97 )
      {
        v29 = v21;
        flags = get_flags_ex();
        v22 = v29;
        if ( (flags & 0x600) == 0x200 )
          v30 = v20 + 1;
      }
      if ( v22 )
      {
        insn_add_cref();
        if ( !(unsigned __int8)func_does_return() )
          *(_BYTE *)(a1 + 132) = 0;
        return v31 - __readfsqword(0x28u);
      }
      return insn_add_cref();
    default:
LABEL_6:
      v11 = *(_QWORD *)(a1 + 16);
      v12 = *(unsigned __int16 *)(a2 + 24);
      LODWORD(a2) = 0;
      v13 = *(_DWORD *)(v11 + 104);
      if ( v12 >= v13 && v12 < *(_DWORD *)(v11 + 108) )
        a2 = *(_QWORD *)(*(_QWORD *)(v11 + 112) + 16LL * (v12 - v13));
      return sub_5EF0((__int64)"%a: %s,%d: bad optype %d", a5, *(const char **)(v6 + 16), a2, *a3);
  }
}

