__int64 __fastcall sub_EA00(unsigned __int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rbp
  unsigned int v3; // r13d
  __int64 flags; // rax
  __int64 v6; // r12
  _QWORD *func; // rax
  __int64 not_tail; // rbp
  int v9; // eax
  char *v10; // r14
  __int64 strid; // rax
  __int64 v12; // rbx
  __int64 v13; // [rsp+8h] [rbp-60h] BYREF
  __int64 v14; // [rsp+10h] [rbp-58h] BYREF
  __int64 v15; // [rsp+18h] [rbp-50h] BYREF
  char *s1; // [rsp+20h] [rbp-48h] BYREF
  __int128 v17; // [rsp+28h] [rbp-40h]
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  if ( a1 == -1 )
    return 0;
  v2 = getseg(a1);
  if ( !v2 )
    return 0;
  v3 = is_mapped(a1);
  if ( !(_BYTE)v3 || ((a1 <= 0xFFFF) & (a2 ^ 1)) != 0 )
    return 0;
  flags = get_flags_ex(a1, 4);
  v6 = flags & 0x600;
  if ( v6 == 1536 )
  {
    if ( (flags & 0x10000) == 0 )
      return v3;
    func = (_QWORD *)get_func(a1);
    if ( func )
    {
      LOBYTE(v3) = *func == a1;
      return v3;
    }
    return 0;
  }
  s1 = nullptr;
  v17 = 0;
  get_segm_name(&s1, v2, 0);
  if ( v6 != 1024 )
  {
    if ( *(_BYTE *)(v2 + 184) != 3 && *(_BYTE *)(v2 + 184) != 9 )
    {
      if ( !(_QWORD)v17 )
      {
        if ( a1 != *(_QWORD *)v2 )
        {
          v10 = s1;
LABEL_25:
          v3 = 0;
          goto LABEL_19;
        }
LABEL_14:
        if ( v6 == 512 )
        {
          not_tail = a1;
          if ( (get_flags_ex(a1, 4) & 0x600) == 0x200 )
            not_tail = prev_not_tail(a1);
          v9 = get_flags_ex(not_tail, 4);
          if ( (v9 & 0x600) != 0x400 || (v9 & 0xF0000000) != 0x60000000 )
            goto LABEL_18;
          v13 = 0;
          strid = get_strid(not_tail);
          get_type_by_tid(&v13, strid);
          if ( (get_tinfo_property(v13, 2) & 0x2F) != 0xD )
            goto LABEL_38;
          v15 = 0;
          v14 = 8 * (a1 - not_tail);
          tinfo_get_innermost_udm(&v15, &v13, v14, 0, &v14, 1);
          if ( !(_BYTE)v15 )
          {
            clear_tinfo_t(&v15);
            goto LABEL_38;
          }
          v12 = v14;
          clear_tinfo_t(&v15);
          if ( v12 )
          {
LABEL_38:
            clear_tinfo_t(&v13);
LABEL_18:
            v10 = s1;
            v3 = 0;
            goto LABEL_19;
          }
          clear_tinfo_t(&v13);
        }
        goto LABEL_30;
      }
      v10 = s1;
      if ( strcmp(s1, "ROM") && *(_QWORD *)v2 != a1 )
        goto LABEL_25;
LABEL_23:
      if ( !strcmp(v10, "HEADER") || !strcmp(v10, "LOAD") )
        goto LABEL_25;
      goto LABEL_14;
    }
    if ( !(_QWORD)v17 )
      goto LABEL_14;
LABEL_22:
    v10 = s1;
    goto LABEL_23;
  }
  if ( (_QWORD)v17 )
    goto LABEL_22;
LABEL_30:
  v10 = s1;
LABEL_19:
  if ( v10 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v10);
  }
  return v3;
}

