__int64 __fastcall sub_393C0(__int64 a1, __int64 a2)
{
  char *v3; // rax
  __int64 v4; // r13
  int v5; // ebp
  __int64 not_tail; // r12
  __int64 v7; // rax
  __int64 *fchunk; // rax
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // [rsp+8h] [rbp-1A0h] BYREF
  __int128 v12; // [rsp+10h] [rbp-198h] BYREF
  __int64 v13; // [rsp+20h] [rbp-188h]
  __int64 v14; // [rsp+28h] [rbp-180h]
  __int64 v15; // [rsp+30h] [rbp-178h]
  char v16; // [rsp+38h] [rbp-170h] BYREF
  _QWORD v17[6]; // [rsp+178h] [rbp-30h] BYREF

  v17[0] = __readfsqword(0x28u);
  if ( (a2 & 3) != 0 )
    return 0;
  if ( (unsigned int)get_dword(a2) - 1 > 0xFFFFFFFD )
    return 0;
  v13 = -1;
  v3 = &v16;
  v14 = 0;
  v15 = 0;
  v12 = -1;
  do
  {
    *(_WORD *)v3 = 0;
    v3 += 40;
    *((_WORD *)v3 - 19) = 0;
    *((_WORD *)v3 - 18) = 0;
    *((_DWORD *)v3 - 2) = 0;
    *((_WORD *)v3 - 17) = 0;
    *((_OWORD *)v3 - 2) = 0;
    *((_QWORD *)v3 - 2) = 0;
  }
  while ( v17 != (_QWORD *)v3 );
  if ( !(unsigned int)decode_insn(&v12, a2, v17, 0.0) || (unsigned int)sub_39180(a1, (__int64)&v12) )
    return 0;
  v4 = get_flags_ex(a2, 4) & 0x600;
  if ( v4 == 1536 )
  {
    v7 = ea2node(a2);
    if ( (netnode_supval(v7, 1, &v11, 8, 65) <= 0 || !v11)
      && (int)sub_37380(a1, (__int64)&v12) > 90
      && (get_aflags(a2) & 0x20000000) == 0 )
    {
      fchunk = (__int64 *)get_fchunk(a2);
      v9 = (__int64)fchunk;
      if ( fchunk )
      {
        v10 = *fchunk;
        if ( *fchunk != a2 && (!(unsigned __int8)set_func_end(*fchunk, a2) || (v9 = get_fchunk(v10)) != 0) )
        {
          if ( (unsigned __int8)sub_35950(a1, v10, nullptr) )
          {
            *(_QWORD *)(v9 + 16) |= 0x80uLL;
            update_func(v9);
          }
        }
      }
      auto_mark_range(a2, a2 + 1, 30);
      return 1;
    }
    return 0;
  }
  if ( (unsigned __int8)segtype(a2) != 2 )
    return 0;
  v5 = sub_37380(a1, (__int64)&v12);
  if ( v5 <= 50 )
    return 0;
  not_tail = a2;
  if ( v4 == 512 )
    not_tail = prev_not_tail(a2);
  if ( (get_flags_ex(not_tail, 4) & 0x600) == 0x400 && (unsigned __int8)is_problem_present(13, not_tail) )
    revert_ida_decisions(not_tail, a2);
  if ( (get_flags_ex(a2, 4) & 0x600) != 0 )
    return 0;
  auto_mark_range(a2, a2 + 1, 20);
  if ( v5 > 90 )
    auto_mark_range(a2, a2 + 1, 30);
  return 1;
}

