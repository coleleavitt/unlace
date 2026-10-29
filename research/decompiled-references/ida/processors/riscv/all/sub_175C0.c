__int64 __fastcall sub_175C0(__int64 a1)
{
  __int16 v1; // ax
  __int64 v3; // rdi
  __int64 not_tail; // rax
  int flags; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 i; // r14
  unsigned __int64 *v10; // rax
  __int64 v11; // rdx
  __int128 v12; // [rsp+0h] [rbp-198h] BYREF
  __int64 v13; // [rsp+10h] [rbp-188h]
  __int64 v14; // [rsp+18h] [rbp-180h]
  __int64 v15; // [rsp+20h] [rbp-178h]
  char v16; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int64 v17; // [rsp+168h] [rbp-30h] BYREF

  v1 = *(_WORD *)(a1 + 24);
  v17 = __readfsqword(0x28u);
  if ( v1 == 19 )
  {
    if ( *(_BYTE *)(a1 + 41) == 1
      && *(_WORD *)(a1 + 46) == 2
      && *(_BYTE *)(a1 + 81) == 1
      && *(_WORD *)(a1 + 86) == 2
      && *(_BYTE *)(a1 + 121) == 5
      && *(__int64 *)(a1 + 128) < 0 )
    {
      return 100;
    }
LABEL_5:
    v3 = *(_QWORD *)(a1 + 16);
    if ( (v3 & 0xF) != 0 || !v3 )
      return 0;
    not_tail = prev_not_tail();
    flags = get_flags_ex(not_tail, 0);
    if ( ((flags & 0x600) != 0x400 || (flags & 0xF0000000) != 0xB0000000LL)
      && ((unsigned int)get_dword(*(_QWORD *)(a1 + 16) - 4LL) || (unsigned __int16)get_word(*(_QWORD *)(a1 + 16) - 6LL)) )
    {
      for ( i = 2; ; i = 4 )
      {
        v13 = -1;
        v10 = (unsigned __int64 *)&v16;
        v14 = 0;
        v15 = 0;
        v12 = -1;
        do
        {
          *(_WORD *)v10 = 0;
          v10 += 5;
          *((_WORD *)v10 - 19) = 0;
          *((_WORD *)v10 - 18) = 0;
          *((_DWORD *)v10 - 2) = 0;
          *((_WORD *)v10 - 17) = 0;
          *((_OWORD *)v10 - 2) = 0;
          *(v10 - 2) = 0;
        }
        while ( &v17 != v10 );
        if ( (unsigned int)decode_insn(&v12, *(_QWORD *)(a1 + 16) - i, 0, 0, v7, v8, 0.0) )
        {
          if ( WORD1(v14) == (_DWORD)i && (unsigned __int16)(v14 - 121) <= 0x15u )
          {
            v11 = 2621441;
            if ( _bittest64(&v11, (unsigned int)(unsigned __int16)v14 - 121) )
              break;
          }
        }
        if ( i == 4 )
          return 0;
      }
    }
    return 100;
  }
  if ( v1 != 13 && v1 != 49 || (unsigned __int16)(*(_WORD *)(a1 + 86) - 10) > 1u )
    goto LABEL_5;
  return 80;
}

