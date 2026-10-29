__int64 __fastcall sub_B5E0(__int64 a1, __int64 a2, unsigned __int8 *a3, unsigned __int8 a4)
{
  unsigned __int16 v8; // dx
  __int64 result; // rax
  unsigned int v10; // r13d
  __int64 v11; // r12
  __int64 flags; // r12
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r12
  bool v19; // r13
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rax

  v8 = *(_WORD *)(a2 + 24);
  result = a3[1];
  if ( v8 == 88 )
  {
    switch ( a3[1] )
    {
      case 2u:
        v10 = 1;
LABEL_10:
        v16 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
        v17 = *((_QWORD *)a3 + 2) + 16LL * *(_QWORD *)a2;
        if ( v17 != v16 )
        {
          v16 &= v17;
          if ( v17 == -1 )
            v16 = -1;
        }
        v18 = use_mapping(v16);
        if ( (debug & 8) != 0 )
          sub_9320((__int64)"EMU: iswrite = %d\n", a4);
        result = insn_add_dref(a2, v18, (unsigned int)(char)a3[2], v10);
        if ( *(_WORD *)(a2 + 24) != 88 )
          return insn_create_op_data(a2, v18, (unsigned int)(char)a3[2], a3[5]);
        return result;
      case 4u:
        v10 = 1;
LABEL_6:
        flags = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
        result = op_adds_xrefs(flags, *a3);
        if ( (_BYTE)result )
        {
          if ( (a3[32] & 4) == 0 )
          {
            v13 = sub_EF60(a3, flags);
            v14 = v10;
            v15 = v13;
LABEL_36:
            result = insn_add_off_drefs(a2, a3, v14, v15);
          }
        }
        else
        {
          result = getinf_flag(10, 512);
          if ( (_BYTE)result )
          {
            result = get_auto_state();
            if ( (_DWORD)result == 40 )
            {
              result = is_defarg(flags, *a3);
              if ( !(_BYTE)result && *((_WORD *)a3 + 3) == 26 )
              {
                result = get_func(*(_QWORD *)(a2 + 16));
                if ( result )
                {
                  v25 = 0;
                  if ( (a3[32] & 4) == 0 )
                    v25 = *((_QWORD *)a3 + 2);
                  result = insn_create_stkvar(a2, a3, v25, *(_WORD *)(a2 + 24) != 88);
                  if ( (_BYTE)result )
                    result = op_stkvar(*(_QWORD *)(a2 + 16), *a3);
                }
              }
            }
          }
        }
        break;
      case 5u:
      case 9u:
LABEL_3:
        v11 = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
        result = op_adds_xrefs(v11, *a3);
        if ( !(_BYTE)result )
          return result;
        v26 = sub_EF60(a3, v11);
        v14 = 1;
        v15 = v26;
        goto LABEL_36;
      case 7u:
        v19 = 0;
LABEL_21:
        v20 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
        v21 = *((_QWORD *)a3 + 2) + 16LL * *(_QWORD *)a2;
        if ( v21 != v20 )
        {
          v20 &= v21;
          if ( v21 == -1 )
            v20 = -1;
        }
        v22 = use_mapping(v20);
        v23 = (unsigned int)(char)a3[2];
        v24 = v22;
        if ( !v19 )
          return insn_add_cref(a2, v24, v23, 19);
        goto LABEL_45;
      default:
        return result;
    }
  }
  else
  {
    v10 = 3 - a4;
    switch ( a3[1] )
    {
      case 2u:
        goto LABEL_10;
      case 4u:
        goto LABEL_6;
      case 5u:
      case 9u:
        goto LABEL_3;
      case 7u:
        if ( v8 > 0x4Au )
        {
          if ( v8 > 0xCFu )
          {
            if ( v8 != 251 )
              goto LABEL_49;
          }
          else if ( v8 <= 0xCCu && v8 != 76 )
          {
            goto LABEL_49;
          }
        }
        else
        {
          if ( v8 > 0x48u )
          {
            v19 = *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26) != *(_QWORD *)(a2 + 56);
            goto LABEL_21;
          }
          if ( (unsigned __int16)(v8 - 30) > 2u )
          {
LABEL_49:
            v30 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
            v31 = *((_QWORD *)a3 + 2) + 16LL * *(_QWORD *)a2;
            if ( v31 != v30 && v31 != -1 )
              v31 &= v30;
            v32 = use_mapping(v31);
            v23 = (unsigned int)(char)a3[2];
            v24 = v32;
            return insn_add_cref(a2, v24, v23, 19);
          }
        }
        v27 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
        v28 = *((_QWORD *)a3 + 2) + 16LL * *(_QWORD *)a2;
        if ( v28 == v27 )
          goto LABEL_44;
        if ( v28 != -1 )
        {
          v28 &= v27;
LABEL_44:
          v29 = use_mapping(v28);
          v23 = (unsigned int)(char)a3[2];
          v24 = v29;
          goto LABEL_45;
        }
        v33 = use_mapping(-1);
        v23 = (unsigned int)(char)a3[2];
        v24 = v33;
LABEL_45:
        result = insn_add_cref(a2, v24, v23, 17);
        if ( *(_BYTE *)(a1 + 362) )
        {
          result = func_does_return(*((_QWORD *)a3 + 2));
          if ( !(_BYTE)result )
            *(_BYTE *)(a1 + 362) = 0;
        }
        break;
      default:
        return result;
    }
  }
  return result;
}

