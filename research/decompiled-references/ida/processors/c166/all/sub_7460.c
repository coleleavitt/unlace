__int64 __fastcall sub_7460(__int64 a1, __int64 a2, unsigned __int8 *a3, char a4, char a5, double a6)
{
  __int64 v7; // rbp
  unsigned __int8 v9; // r8
  __int64 result; // rax
  int v11; // r14d
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // r15
  unsigned __int16 v18; // r14
  __int64 v19; // rdx
  int v20; // eax
  int v21; // ecx

  v7 = a2;
  v9 = a3[1];
  result = v9;
  switch ( v9 )
  {
    case 1u:
    case 3u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
    case 0xDu:
      return result;
    case 2u:
      v12 = sub_7290(a1, *(_QWORD *)(a2 + 16));
      v13 = use_mapping();
      goto LABEL_5;
    case 4u:
      sub_70A0(a2, *a3);
      result = get_flags_ex();
      if ( !a4 )
      {
        result = op_adds_xrefs();
        if ( (_BYTE)result )
        {
          result = insn_add_off_drefs();
          if ( result != -1 )
            return insn_create_op_data();
        }
      }
      return result;
    case 5u:
      if ( a5 )
      {
        sub_70A0(a2, *a3);
        get_flags_ex();
        result = op_adds_xrefs();
        if ( (_BYTE)result )
          return insn_add_off_drefs();
      }
      else
      {
        if ( under_debugger )
          BUG();
        interr();
        return sub_7800(10100);
      }
      return result;
    case 7u:
      sub_73F0(a1, a2, *((_QWORD *)a3 + 2));
      if ( (unsigned __int8)has_insn_feature() && !(unsigned __int8)func_does_return() )
        *(_BYTE *)(a1 + 281) = 0;
      return insn_add_cref();
    case 8u:
      v11 = *((unsigned __int16 *)a3 + 3);
      result = (unsigned int)(v11 - 240);
      if ( (unsigned __int16)(v11 - 240) <= 0xFu )
        return result;
      v17 = *(_QWORD *)(a1 + 232);
      if ( (unsigned __int16)v11 > 0xEFu )
        goto LABEL_18;
      v18 = (!sub_7170(a2) ? 0xE00 : 0) + 2 * v11 - 4096;
      break;
    case 9u:
      v11 = *((unsigned __int16 *)a3 + 3);
      result = (unsigned int)(v11 - 240);
      if ( (unsigned __int16)(v11 - 240) <= 0xFu )
        return result;
      v17 = *(_QWORD *)(a1 + 232);
      if ( (unsigned __int16)v11 <= 0x7Fu )
      {
        v18 = 2 * v11 - 768;
      }
      else if ( (unsigned __int16)v11 > 0xEFu )
      {
LABEL_18:
        v18 = 2 * (v11 & 0xF) - 32;
      }
      else
      {
        v18 = (!sub_7170(a2) ? 0xE00 : 0) + 2 * (v11 & 0x7F) - 3840;
      }
      break;
    default:
      v19 = *(_QWORD *)(a1 + 16);
      v20 = *(unsigned __int16 *)(a2 + 24);
      LODWORD(a2) = 0;
      v21 = *(_DWORD *)(v19 + 104);
      if ( v20 >= v21 && v20 < *(_DWORD *)(v19 + 108) )
        a2 = *(_QWORD *)(*(_QWORD *)(v19 + 112) + 16LL * (v20 - v21));
      return sub_5B90((__int64)"%a: %s,%d: bad optype %d", a6, *(const char **)(v7 + 16), a2, *a3);
  }
  v12 = v17 + v18;
  v13 = use_mapping();
LABEL_5:
  insn_add_dref();
  result = insn_create_op_data();
  if ( !a5 )
  {
    v14 = *(_QWORD *)(a1 + 232);
    v15 = v12 - v14;
    if ( (unsigned __int64)(v15 - 65024) <= 6 )
    {
      sub_7040(a2, v15);
      v14 = *(_QWORD *)(a1 + 232);
    }
    v16 = v13 - v14;
    result = v16 - 65024;
    if ( (unsigned __int64)(v16 - 65024) <= 6 )
      return sub_7040(a2, v16);
  }
  return result;
}

