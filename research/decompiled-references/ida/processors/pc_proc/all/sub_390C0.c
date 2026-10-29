__int64 __fastcall sub_390C0(__int64 a1)
{
  __int64 flags; // rax
  unsigned int v2; // edx
  unsigned __int64 *v4; // rax
  __int64 insn; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int128 *v9; // rsi
  __int16 v10; // ax
  __int64 v11; // r13
  _QWORD *func; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int128 v18; // [rsp+0h] [rbp-198h] BYREF
  __int64 v19; // [rsp+10h] [rbp-188h]
  __int64 v20; // [rsp+18h] [rbp-180h]
  __int64 v21; // [rsp+20h] [rbp-178h]
  char v22; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int64 v23; // [rsp+168h] [rbp-30h] BYREF

  v23 = __readfsqword(0x28u);
  flags = get_flags_ex();
  v2 = 0;
  if ( (~BYTE1(flags) & 6) == 0 )
  {
    v19 = -1;
    v4 = (unsigned __int64 *)&v22;
    v20 = 0;
    v21 = 0;
    v18 = -1;
    do
    {
      *(_WORD *)v4 = 0;
      v4 += 5;
      *((_WORD *)v4 - 19) = 0;
      *((_WORD *)v4 - 18) = 0;
      *((_DWORD *)v4 - 2) = 0;
      *((_WORD *)v4 - 17) = 0;
      *((_OWORD *)v4 - 2) = 0;
      *(v4 - 2) = 0;
    }
    while ( &v23 != v4 );
    insn = decode_prev_insn();
    if ( insn == -1 )
      return 1;
    v8 = *(_QWORD *)(a1 + 16);
    v9 = (__int128 *)*(unsigned int *)(v8 + 104);
    v10 = v20;
    if ( (unsigned __int16)v20 >= (int)v9
      && (unsigned __int16)v20 < *(int *)(v8 + 108)
      && (*(_BYTE *)(*(_QWORD *)(v8 + 112) + 16LL * ((unsigned __int16)v20 - (int)v9) + 8) & 1) != 0 )
    {
      return 1;
    }
    if ( (unsigned __int16)(v20 - 86) <= 2u )
    {
      v9 = &v18;
      v11 = sub_74080(a1, &v18, 0, v8, v6, v7);
      if ( v11 != -1 )
      {
        func = (_QWORD *)get_func();
        if ( func )
        {
          if ( *func == v11 )
            return 1;
        }
        else if ( (unsigned __int8)is_spec_ea() )
        {
          return 1;
        }
      }
      v10 = v20;
    }
    if ( (unsigned __int16)(v10 - 16) > 2u
      || (v9 = &v18, sub_74080(a1, &v18, 0, v8, v6, v7) == -1)
      || (v13 = get_func()) == 0
      || (*(_BYTE *)(v13 + 16) & 1) == 0 )
    {
      if ( (unsigned __int8)get_byte() != 0xCC
        && (unsigned __int8)get_byte() != 0x90
        && ((unsigned __int8)get_byte() != 102 || (unsigned __int8)get_byte() != 0x90) )
      {
        LOBYTE(v2) = (unsigned int)sub_72A80(insn, v9, v14, v15, v16, v17, 0.0, v18, *((_QWORD *)&v18 + 1), v19) != 0;
        return v2;
      }
    }
    return 1;
  }
  return v2;
}

