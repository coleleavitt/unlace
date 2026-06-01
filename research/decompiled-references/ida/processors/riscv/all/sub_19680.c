__int64 __fastcall sub_19680(__int64 a1)
{
  char *v1; // rbp
  bool v2; // cf
  unsigned int v3; // r13d
  __int64 *v4; // r15
  __int64 v6; // rbx
  __int64 flags; // rax
  _QWORD v8[2]; // [rsp+10h] [rbp-58h] BYREF
  char v9; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  v1 = (char *)v8;
  v2 = (*(_WORD *)(a1 + 50) & 4) == 0;
  v8[0] = a1 + 896;
  v8[1] = a1 + 928;
  v3 = v2 ? 2 : 9;
  do
  {
    v4 = *(__int64 **)v1;
    if ( *(_BYTE *)(*(_QWORD *)v1 + 24LL) )
    {
      if ( (unsigned __int8)sub_26600(*(_QWORD *)(a1 + 888), *(_QWORD *)v1) )
      {
        v6 = *v4;
        if ( 24 * v4[1] )
        {
          do
          {
            flags = get_flags_ex(*(_QWORD *)(v6 + 8), 0);
            if ( !(unsigned __int8)is_defarg(flags, 0) )
              op_offset(*(_QWORD *)(v6 + 8), 0, (unsigned __int8)v3, -1, 0, 0);
            v6 += 24;
          }
          while ( v6 != *v4 + 24 * v4[1] );
        }
      }
    }
    v1 += 8;
  }
  while ( v1 != &v9 );
  mark_switch_insns_jpt(a1, 5, 0);
  return 1;
}

