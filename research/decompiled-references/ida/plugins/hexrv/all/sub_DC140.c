__int64 sub_DC140()
{
  int struct_operand; // eax
  int v1; // ebp
  char *v2; // r13
  int v3; // r14d
  char *v4; // r15
  unsigned __int64 udm_by_tid; // rbx
  __int64 tinfo_property4; // [rsp+8h] [rbp-200h]
  __int64 v8; // [rsp+18h] [rbp-1F0h]
  __int64 v9; // [rsp+18h] [rbp-1F0h]
  __int64 v10; // [rsp+20h] [rbp-1E8h]
  char v11; // [rsp+C8h] [rbp-140h] BYREF
  unsigned __int64 v12; // [rsp+1C8h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  get_flags_ex();
  if ( !(unsigned __int8)is_stroff() )
    return -1;
  struct_operand = get_struct_operand();
  if ( !struct_operand )
  {
    struct_operand = get_struct_operand();
    if ( !struct_operand )
      return -1;
  }
  v1 = struct_operand - 2;
  v9 = v10 + v8;
  v2 = &v11;
  while ( 1 )
  {
    if ( !(unsigned __int8)get_type_by_tid() )
      goto LABEL_15;
    if ( (get_tinfo_property() & 0x3F) == 0x1D )
    {
      v3 = v1 - 1;
      if ( !v1 )
        goto LABEL_15;
      v4 = v2 + 8;
      udm_by_tid = get_udm_by_tid();
    }
    else
    {
      if ( !(unsigned __int8)get_tinfo_details() )
        goto LABEL_15;
      udm_by_tid = udt_type_data_t__get_best_fit_member();
      v4 = v2;
      v3 = v1;
    }
    if ( udm_by_tid == -1 )
      goto LABEL_15;
    if ( (int)find_tinfo_udt_member() < 0 || 8 * v9 < udm_by_tid )
      goto LABEL_14;
    v9 -= udm_by_tid >> 3;
    if ( (get_tinfo_property() & 0x2F) != 0xD )
      break;
    get_tinfo_tid();
    clear_tinfo_t();
    v2 = v4;
    v1 = v3;
    clear_tinfo_t();
  }
  if ( v9 )
  {
LABEL_14:
    clear_tinfo_t();
LABEL_15:
    clear_tinfo_t();
    return -1;
  }
  tinfo_property4 = get_tinfo_property4();
  clear_tinfo_t();
  clear_tinfo_t();
  return tinfo_property4;
}

