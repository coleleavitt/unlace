__int64 __fastcall sub_B100(__int64 a1, _QWORD *a2, __int64 *a3, __int64 a4, int a5, double a6)
{
  int v7; // ebp
  __int128 *v8; // rsi
  __int64 flags; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 *v15; // rax
  __int64 v16; // r12
  __int64 v18; // [rsp+0h] [rbp-1D8h]
  __int64 v19; // [rsp+8h] [rbp-1D0h]
  _QWORD *v20; // [rsp+10h] [rbp-1C8h]
  __int64 not_tail; // [rsp+28h] [rbp-1B0h] BYREF
  __int128 v23; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v24; // [rsp+40h] [rbp-198h]
  __int64 v25; // [rsp+48h] [rbp-190h]
  __int64 v26; // [rsp+50h] [rbp-188h]
  char v27; // [rsp+58h] [rbp-180h] BYREF
  __int64 v28; // [rsp+60h] [rbp-178h]
  unsigned __int16 v29; // [rsp+86h] [rbp-152h]
  unsigned __int64 v30; // [rsp+198h] [rbp-40h] BYREF

  v7 = 0;
  v19 = a1;
  v20 = a2;
  v8 = (_OWORD *)&byte_4;
  v30 = __readfsqword(0x28u);
  not_tail = a4;
  flags = get_flags_ex(a4, 4);
  if ( (int)((__int64 (*)(void))get_lookback)() > 0 )
  {
    while ( (flags & 0x1000) == 0 )
    {
      if ( (flags & 0x10000) == 0 )
        break;
      not_tail = prev_not_tail(not_tail, v8, v11, v12, v13, v14, a6, v18, v19, v20);
      if ( not_tail == -1 )
        break;
      flags = get_flags_ex(not_tail, 4);
      if ( (~BYTE1(flags) & 6) != 0 )
        break;
      sub_AF00(&not_tail, 0);
      v15 = (unsigned __int64 *)&v27;
      v24 = -1;
      v25 = 0;
      a6 = 0.0;
      v26 = 0;
      v23 = -1;
      do
      {
        *(_WORD *)v15 = 0;
        v15 += 5;
        *((_WORD *)v15 - 19) = 0;
        *((_WORD *)v15 - 18) = 0;
        *((_DWORD *)v15 - 2) = 0;
        *((_WORD *)v15 - 17) = 0;
        *((_OWORD *)v15 - 2) = 0;
        *(v15 - 2) = 0;
      }
      while ( &v30 != v15 );
      v16 = not_tail;
      if ( !(unsigned int)decode_insn(&v23, not_tail) )
        break;
      if ( (_WORD)v25 == 106 && v29 == a5 )
      {
        *v20 = v28;
        *a3 = v16;
        return 1;
      }
      v8 = &v23;
      if ( !(unsigned __int8)sub_ABE0(v19, (__int64)&v23, a5, a4) && ++v7 < (int)get_lookback(0.0) )
        continue;
      return 0;
    }
  }
  return 0;
}
