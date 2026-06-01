__int64 __fastcall sub_EB40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  bool v4; // al
  __int64 v6; // rdx
  char *v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // eax
  __int128 v10; // [rsp+0h] [rbp-188h] BYREF
  __int64 v11; // [rsp+10h] [rbp-178h]
  __int64 v12; // [rsp+18h] [rbp-170h]
  __int64 v13; // [rsp+20h] [rbp-168h]
  char v14; // [rsp+28h] [rbp-160h] BYREF
  _QWORD v15[4]; // [rsp+168h] [rbp-20h] BYREF

  v15[0] = __readfsqword(0x28u);
  v3 = a3;
  v4 = a3 == -1;
  LOBYTE(a3) = a2 == 0;
  if ( a2 != 0 && !v4 )
  {
    if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) - 12) <= 1 )
    {
      v9 = getinf_flag(3, 4);
      a3 = v9;
      if ( !(_BYTE)v9 )
        v3 = (unsigned int)v3 & 0xFFFFFFFE;
    }
    do
    {
      if ( (~((unsigned __int16)get_flags_ex(v3, 4, a3) >> 8) & 6) != 0 )
      {
        create_insn(v3, 0);
        if ( (~((unsigned __int16)get_flags_ex(v3, 4, v6) >> 8) & 6) != 0 )
          break;
      }
      if ( (int)get_func_chunknum(a2, v3) < 0 )
        return sub_E6A0(a1, a1, a2, v3);
      v7 = &v14;
      v11 = -1;
      v12 = 0;
      v13 = 0;
      v10 = -1;
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
      while ( v15 != (_QWORD *)v7 );
      if ( (int)decode_insn(&v10, v3, v15, 0.0) > 0 )
        v3 += WORD1(v12);
    }
    while ( *(_QWORD *)(a2 + 8) == v3 && (get_flags_ex(v3, 4, v8) & 0x10000) != 0 );
  }
  return 0;
}

