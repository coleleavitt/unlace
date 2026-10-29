__int64 __fastcall sub_E300(__int64 a1, __int64 a2, unsigned __int8 *a3, unsigned __int8 a4)
{
  __int64 result; // rax
  __int64 flags; // r14
  unsigned __int16 v10; // ax
  unsigned __int64 v11; // r8
  __int64 v12; // rdi
  unsigned __int16 v13; // ax
  __int64 v14; // rdx
  int v15; // eax
  __int16 v16; // ax
  char v17; // al
  __int64 v18; // rdx
  char v19; // bp
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rbp
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // rcx
  __int64 sreg; // rax
  int v30; // eax

  result = a3[1];
  if ( (_BYTE)result != 5 )
  {
    if ( (unsigned __int8)result <= 5u )
    {
      if ( (_BYTE)result == 2 )
      {
        result = (unsigned int)*(unsigned __int16 *)(a2 + 24) - 2;
        if ( ((*(_WORD *)(a2 + 24) - 2) & 0xFFFD) != 0 )
        {
          v26 = *((_QWORD *)a3 + 2) + 16LL * *(_QWORD *)a2;
          v27 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
          if ( v26 != v27 )
          {
            v27 &= v26;
            if ( v26 == -1 )
              v27 = -1;
          }
          insn_create_op_data(a2, v27, (unsigned int)(char)a3[2], a3[5]);
          result = insn_add_dref(a2, v27, (unsigned int)(char)a3[2], (unsigned int)a4 + 2);
          if ( (*(_BYTE *)(a1 + 5288) & 2) != 0 && *(_WORD *)(a2 + 24) == 1 )
            return sub_DE80(a1, (_QWORD *)a2, a3, v27, nullptr, 0);
        }
        return result;
      }
      if ( (_BYTE)result != 4 )
        return result;
      set_immd(*(_QWORD *)(a2 + 16));
      flags = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
      if ( (unsigned __int8)is_defarg(flags, *a3) )
        goto LABEL_20;
      v10 = *((_WORD *)a3 + 3);
      if ( v10 == 63 )
      {
        v12 = *(_QWORD *)(a2 + 16);
        v11 = v12 & 0xFFFFFFFFFFFFFFFCLL;
      }
      else
      {
        if ( v10 == 68 )
        {
          v11 = *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26);
        }
        else
        {
          if ( v10 != 26 && (unsigned int)v10 - 69 > 3 )
          {
LABEL_20:
            if ( (unsigned __int8)op_adds_xrefs(flags, *a3) )
            {
              v16 = *(_WORD *)(a2 + 24);
              if ( v16 == 308 )
              {
                sreg = get_sreg(*(_QWORD *)(a2 + 16));
                v28 = 16;
                v20 = sreg + 4LL * *((_QWORD *)a3 + 2);
                v18 = 0;
              }
              else
              {
                if ( (unsigned __int16)(v16 - 138) > 1u )
                {
                  result = insn_add_off_drefs(a2, a3, (unsigned int)a4 + 2, 196);
                  if ( result != -1 )
                    return insn_create_op_data(a2, result, (unsigned int)(char)a3[2], a3[5]);
                  return result;
                }
                v28 = 19;
                v20 = *(_QWORD *)(a2 + 16)
                    + *(unsigned __int16 *)(a2 + 26)
                    + *((_QWORD *)a3 + 2) * (2LL * (v16 == 138) + 2);
                v18 = 0;
              }
              return insn_add_cref(a2, v20, v18, v28);
            }
            result = *((unsigned __int16 *)a3 + 3);
            if ( (_DWORD)result == 28
              || (_DWORD)result == 27
              && (result = get_func(*(_QWORD *)(a2 + 16))) != 0
              && (*(_BYTE *)(result + 16) & 0x10) != 0 )
            {
              result = getinf_flag(10, 512);
              if ( (_BYTE)result )
              {
                result = get_auto_state();
                if ( (_DWORD)result == 40 )
                {
                  result = is_defarg(flags, *a3);
                  if ( !(_BYTE)result )
                  {
                    result = get_func(*(_QWORD *)(a2 + 16));
                    if ( result )
                    {
                      v24 = *((_QWORD *)a3 + 2);
                      v25 = 1;
LABEL_45:
                      result = insn_create_stkvar(a2, a3, v24, v25);
                      if ( (_BYTE)result )
                        return op_stkvar(*(_QWORD *)(a2 + 16), *a3);
                      return result;
                    }
                  }
                }
              }
            }
            return result;
          }
          v11 = get_sreg(*(_QWORD *)(a2 + 16));
        }
        if ( v11 == -1 )
          goto LABEL_20;
        v12 = *(_QWORD *)(a2 + 16);
      }
      v13 = *(_WORD *)(a2 + 24);
      if ( v13 == 139 )
        goto LABEL_73;
      if ( v13 > 0x8Bu )
      {
        if ( v13 != 140 )
        {
          v14 = 130;
          if ( (unsigned __int16)(v13 - 308) > 1u )
            goto LABEL_19;
        }
      }
      else
      {
        if ( v13 == 3 )
          goto LABEL_18;
        if ( v13 != 138 )
        {
          v14 = 130;
          if ( v13 != 1 )
          {
LABEL_19:
            op_offset(v12, *a3, v14, -1, v11, 0);
            goto LABEL_20;
          }
LABEL_18:
          v15 = *(_DWORD *)(a2 + 28);
          v14 = 130;
          if ( (~(_BYTE)v15 & 0x18) != 0 )
            goto LABEL_19;
          v30 = v15 & 6;
          if ( v30 != 4 )
          {
            if ( v30 )
              goto LABEL_19;
            goto LABEL_77;
          }
LABEL_73:
          v14 = *(_BYTE *)(a1 + 5280) | 0xC0u;
          goto LABEL_19;
        }
      }
LABEL_77:
      v14 = *(_BYTE *)(a1 + 5284) | 0xC0u;
      goto LABEL_19;
    }
    if ( (_BYTE)result != 7 )
      return result;
    v17 = has_insn_feature(*(unsigned __int16 *)(a2 + 24), 2);
    v18 = (unsigned int)(char)a3[2];
    v19 = v17;
    v20 = *((_QWORD *)a3 + 2) + 16LL * *(_QWORD *)a2;
    v21 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
    if ( v19 )
    {
      v22 = 17;
      if ( v20 == v21 )
        goto LABEL_30;
      if ( v20 == -1 )
      {
        v21 = -1;
        goto LABEL_30;
      }
    }
    else
    {
      if ( v20 == v21 )
      {
        v28 = 19;
        return insn_add_cref(a2, v20, v18, v28);
      }
      v22 = 19;
      if ( v20 == -1 )
      {
        v28 = 19;
        v20 = -1;
        return insn_add_cref(a2, v20, v18, v28);
      }
    }
    v21 &= v20;
LABEL_30:
    insn_add_cref(a2, v21, v18, v22);
    result = *(unsigned int *)(a1 + 5352);
    if ( !(_DWORD)result )
    {
      if ( v19 )
      {
        result = func_does_return(*((_QWORD *)a3 + 2));
        if ( !(_BYTE)result )
          *(_DWORD *)(a1 + 5352) = 1;
      }
    }
    return result;
  }
  set_immd(*(_QWORD *)(a2 + 16));
  v23 = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
  result = op_adds_xrefs(v23, *a3);
  if ( (_BYTE)result )
    return insn_add_off_drefs(a2, a3, 1, 0);
  if ( *a3 == 2 )
  {
    result = getinf_flag(10, 512);
    if ( (_BYTE)result )
    {
      result = get_auto_state();
      if ( (_DWORD)result == 40 )
      {
        result = is_defarg(v23, *a3);
        if ( !(_BYTE)result && *(_WORD *)(a2 + 24) == 19 )
        {
          if ( *(_BYTE *)(a2 + 41) != 1
            || (result = (unsigned int)*(unsigned __int16 *)(a2 + 46) - 27,
                (unsigned __int16)(*(_WORD *)(a2 + 46) - 27) > 1u) )
          {
            if ( *(_BYTE *)(a2 + 81) == 1 )
            {
              result = (unsigned int)*(unsigned __int16 *)(a2 + 86) - 27;
              if ( (unsigned __int16)(*(_WORD *)(a2 + 86) - 27) <= 1u )
              {
                result = get_func(*(_QWORD *)(a2 + 16));
                if ( result )
                {
                  v24 = *((_QWORD *)a3 + 1);
                  v25 = 0;
                  goto LABEL_45;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

