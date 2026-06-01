__int64 __fastcall sub_1A900(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int i; // r13d
  int v11; // ebp
  __int16 v12; // r14
  __int128 v14; // [rsp+0h] [rbp-198h] BYREF
  unsigned __int64 v15; // [rsp+10h] [rbp-188h]
  __int64 v16; // [rsp+18h] [rbp-180h]
  __int64 v17; // [rsp+20h] [rbp-178h]
  char v18; // [rsp+28h] [rbp-170h] BYREF
  _QWORD v19[6]; // [rsp+168h] [rbp-30h] BYREF

  v19[0] = __readfsqword(0x28u);
  v6 = &v18;
  v14 = -1;
  v15 = -1;
  v16 = 0;
  v17 = 0;
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
  while ( v19 != (_QWORD *)v6 );
  if ( (unsigned int)decode_insn(&v14, a2, v19, 0, 0, a6, 0.0) && (_WORD)v16 == 121 )
  {
    for ( i = 4; i; --i )
    {
      if ( v15 > 0xFFFFFFFFFFFFFFF3LL )
        break;
      v11 = WORD1(v16) + (_DWORD)v15;
      v12 = WORD1(v16);
      if ( !(unsigned int)decode_insn(&v14, WORD1(v16) + v15, v15, v7, v8, v9, 0.0) )
        break;
      if ( (_WORD)v16 != 121 )
      {
        if ( v12 == 2 && (v11 & 3) == 0 || (v11 & 0xF) == 0 )
          return (unsigned int)(v11 - a2);
        return 0;
      }
    }
  }
  return 0;
}
