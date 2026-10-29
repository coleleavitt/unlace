__int64 __fastcall sub_28BE0(__int64 *a1, __int64 a2)
{
  __int64 v3; // r13
  unsigned __int64 *first_seg; // r14
  __int64 segm_name; // rax
  char *v6; // rbx
  char *v7; // rax
  unsigned __int64 i; // rbx
  int dword; // eax
  __int64 v10; // rax
  __int64 v11; // [rsp+0h] [rbp-A8h]
  unsigned __int8 v12; // [rsp+17h] [rbp-91h]
  __int64 v13; // [rsp+28h] [rbp-80h] BYREF
  char *haystack; // [rsp+30h] [rbp-78h]
  __int128 v15; // [rsp+38h] [rbp-70h]
  _BYTE v16[24]; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v17; // [rsp+68h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  sub_283D0(a1, a2);
  if ( netnode_supfirst() == -1 )
  {
    sub_EC40();
    return 0;
  }
  v12 = sub_27D30((__int64)a1);
  if ( v12 )
  {
    v3 = 0;
    sub_FAA0();
    first_seg = (unsigned __int64 *)get_first_seg();
    if ( !first_seg )
    {
LABEL_26:
      callui(24);
      *(_OWORD *)v16 = 0;
      sub_28830((__int64)a1, (unsigned __int64 *)v16);
      return v12;
    }
    while ( 1 )
    {
      haystack = 0;
      v15 = 0;
      segm_name = get_segm_name();
      v6 = haystack;
      if ( segm_name )
      {
        if ( (_QWORD)v15 )
        {
          v7 = strstr(haystack, "__const");
          if ( v7 )
          {
            if ( v7 - v6 != -1 )
              break;
          }
        }
      }
      if ( v6 )
        goto LABEL_24;
LABEL_25:
      first_seg = (unsigned __int64 *)get_next_seg();
      if ( !first_seg )
        goto LABEL_26;
    }
    for ( i = *first_seg; i < first_seg[1]; i = get_item_end() )
    {
      if ( (unsigned __int8)callui(27) )
      {
        callui(24);
        if ( haystack )
        {
          *(_QWORD *)&v15 = 0;
          qfree();
        }
        return 0;
      }
      if ( ++v3 == 100000 )
      {
        sub_F9D0();
        v3 = 0;
      }
      sub_EAF0(i);
      if ( netnode_altval() )
      {
        if ( *(_BYTE *)(*a1 + 2216) )
        {
          memset(v16, 0, sizeof(v16));
          get_ea_name();
          sub_EC40();
          if ( *(_QWORD *)v16 )
          {
            *(_QWORD *)&v16[8] = 0;
            qfree();
          }
        }
        sub_EB50(i, a1[6], a1[2]);
        v13 = netnode_altval() | 1;
        netnode_supset();
        v11 = sub_EAF0(i + a1[12]);
        dword = get_dword();
        v13 = 0;
        sub_27980(a1, v11, dword, (__int64)&v13);
        if ( (_BYTE)v13 )
        {
          v10 = sub_EAF0(i + a1[11]);
          sub_EB20(a2, v10);
          apply_tinfo();
          *(_QWORD *)v16 = netnode_altval() | 2;
          netnode_supset();
        }
        clear_tinfo_t();
      }
    }
    if ( !haystack )
      goto LABEL_25;
LABEL_24:
    *(_QWORD *)&v15 = 0;
    qfree();
    goto LABEL_25;
  }
  return 0;
}
