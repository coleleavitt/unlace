__int64 __fastcall sub_17800(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // dl
  __int64 result; // rax
  int flags; // eax
  __int64 v5; // rbp
  __int64 v6; // r9
  char *v7; // rax
  __int128 v8; // [rsp+0h] [rbp-188h] BYREF
  __int64 v9; // [rsp+10h] [rbp-178h]
  __int64 v10; // [rsp+18h] [rbp-170h]
  __int64 v11; // [rsp+20h] [rbp-168h]
  char v12; // [rsp+28h] [rbp-160h] BYREF
  _QWORD v13[4]; // [rsp+168h] [rbp-20h] BYREF

  v13[0] = __readfsqword(0x28u);
  if ( *(_WORD *)(a1 + 24) != 140 )
    return sub_175C0(a1);
  v1 = *(_QWORD *)(a1 + 56);
  if ( *(_QWORD *)(a1 + 16) == v1 )
    return 100;
  v2 = has_jump_or_flow_xref();
  result = 0;
  if ( !v2 )
  {
    flags = get_flags_ex(v1, 4);
    v5 = flags & 0x600;
    if ( v5 != 1536 )
    {
      get_auto_state();
      if ( (unsigned int)get_auto_state() != 200 || v5 )
        return 1;
      goto LABEL_11;
    }
    if ( (flags & 0x10000000) == 0 )
    {
      if ( (unsigned int)get_auto_state() != 40 )
      {
        get_auto_state();
        return 1;
      }
LABEL_11:
      v9 = -1;
      v7 = &v12;
      v10 = 0;
      v11 = 0;
      v8 = -1;
      do
      {
        *(_WORD *)v7 = 0;
        v7 += 40;
        *((_WORD *)v7 - 19) = 0;
        *((_WORD *)v7 - 18) = 0;
        *((_DWORD *)v7 - 2) = 0;
        *((_WORD *)v7 - 17) = 0;
        *((_OWORD *)v7 - 2) = 0;
        *((_QWORD *)v7 - 2) = 0;
      }
      while ( v13 != (_QWORD *)v7 );
      if ( (unsigned int)decode_insn(&v8, v1, v13, 0, 0, v6, 0.0) )
        return sub_175C0((__int64)&v8);
      return 1;
    }
    return 100;
  }
  return result;
}

