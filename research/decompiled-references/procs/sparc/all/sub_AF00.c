unsigned __int64 __fastcall sub_AF00(__int64 *a1, char a2)
{
  __int64 v3; // rdi
  __int64 flags; // rax
  char *v6; // rdx
  __int64 not_tail; // rax
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int128 v11; // [rsp+0h] [rbp-188h] BYREF
  __int64 v12; // [rsp+10h] [rbp-178h]
  __int64 v13; // [rsp+18h] [rbp-170h]
  __int64 v14; // [rsp+20h] [rbp-168h]
  char v15; // [rsp+28h] [rbp-160h] BYREF
  _QWORD v16[4]; // [rsp+168h] [rbp-20h] BYREF

  v3 = *a1;
  v16[0] = __readfsqword(0x28u);
  flags = get_flags_ex(v3, 4);
  if ( (~(_WORD)flags & 0x600) == 0 )
  {
    v12 = -1;
    v6 = &v15;
    v13 = 0;
    v14 = 0;
    v11 = -1;
    do
    {
      *(_WORD *)v6 = 0;
      v6 += 40;
      *((_WORD *)v6 - 19) = 0;
      *((_WORD *)v6 - 18) = 0;
      *((_DWORD *)v6 - 2) = 0;
      *((_WORD *)v6 - 17) = 0;
      *((_OWORD *)v6 - 2) = 0;
      *((_QWORD *)v6 - 2) = 0;
    }
    while ( v16 != (_QWORD *)v6 );
    if ( a2 )
    {
      if ( !(unsigned int)decode_insn(&v11, *a1) )
        return v16[0] - __readfsqword(0x28u);
      if ( (unsigned __int16)v13 > 0x37u )
      {
        if ( (unsigned __int16)(v13 - 100) > 0x3Eu )
          return v16[0] - __readfsqword(0x28u);
        v10 = 0x6C00000000000001LL;
        if ( !_bittest64(&v10, (unsigned int)(unsigned __int16)v13 - 100) )
          return v16[0] - __readfsqword(0x28u);
      }
      else
      {
        if ( (unsigned __int16)v13 <= 8u )
          return v16[0] - __readfsqword(0x28u);
        v9 = 0x800000000C1E00LL;
        if ( !_bittest64(&v9, (unsigned __int16)v13) )
          return v16[0] - __readfsqword(0x28u);
      }
      *a1 += WORD1(v13);
      return v16[0] - __readfsqword(0x28u);
    }
    if ( (flags & 0x10000) != 0 )
    {
      not_tail = prev_not_tail(*a1, 0, v6, v16, 0, 0, 0.0, v11, *((_QWORD *)&v11 + 1), v12);
      v8 = not_tail;
      if ( not_tail != -1 && (unsigned int)decode_insn(&v11, not_tail) && (v13 & 0x10000000000LL) != 0 )
        *a1 = v8;
    }
  }
  return v16[0] - __readfsqword(0x28u);
}
