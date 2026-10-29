__int64 __fastcall sub_4AB00(__int64 a1, unsigned __int64 a2, int a3, unsigned __int64 *a4)
{
  unsigned __int64 *v7; // rax
  __int128 v8; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v9; // [rsp+10h] [rbp-198h]
  __int64 v10; // [rsp+18h] [rbp-190h]
  __int64 v11; // [rsp+20h] [rbp-188h]
  char v12; // [rsp+28h] [rbp-180h] BYREF
  unsigned __int64 v13; // [rsp+168h] [rbp-40h] BYREF

  v13 = __readfsqword(0x28u);
  if ( a2 <= 4 )
    return 0;
  if ( (unsigned __int16)get_word() != ((a3 << 8) | 0xC081) )
    return 0;
  if ( (unsigned __int8)get_byte() != 0xE8 )
    return 0;
  v9 = -1;
  v7 = (unsigned __int64 *)&v12;
  v10 = 0;
  v11 = 0;
  v8 = -1;
  do
  {
    *(_WORD *)v7 = 0;
    v7 += 5;
    *((_WORD *)v7 - 19) = 0;
    *((_WORD *)v7 - 18) = 0;
    *((_DWORD *)v7 - 2) = 0;
    *((_WORD *)v7 - 17) = 0;
    *((_OWORD *)v7 - 2) = 0;
    *(v7 - 2) = 0;
  }
  while ( &v13 != v7 );
  if ( !(unsigned int)decode_insn() || a3 != (unsigned int)sub_6F480(a1, &v8, 0) )
    return 0;
  if ( a4 )
    *a4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (a2 + (unsigned int)get_dword());
  return 1;
}

