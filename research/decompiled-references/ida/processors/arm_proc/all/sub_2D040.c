__int64 __fastcall sub_2D040(__int64 a1, _QWORD *a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v4; // r15
  __int64 not_tail; // rbx
  unsigned __int64 v6; // r15
  int v7; // r14d
  unsigned __int64 *v8; // rax
  __int128 v10; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 v11; // [rsp+20h] [rbp-198h]
  __int64 v12; // [rsp+28h] [rbp-190h]
  __int64 v13; // [rsp+30h] [rbp-188h]
  char v14; // [rsp+38h] [rbp-180h] BYREF
  unsigned __int64 v15; // [rsp+178h] [rbp-40h] BYREF

  v15 = __readfsqword(0x28u);
  v4 = a3;
  if ( !a4 )
    v4 = a3 & 0xFFFFFFFFFFFFFFFELL;
  *a2 = v4;
  not_tail = v4 - 1;
  if ( (get_flags_ex() & 0x200) != 0 )
  {
    if ( (get_flags_ex() & 0x600) == 0x200 )
      not_tail = prev_not_tail();
    *a2 = not_tail;
  }
  else
  {
    v6 = v4 - 16;
    v7 = 16;
    while ( 1 )
    {
      v11 = -1;
      v8 = (unsigned __int64 *)&v14;
      v12 = 0;
      v13 = 0;
      v10 = -1;
      do
      {
        *(_WORD *)v8 = 0;
        v8 += 5;
        *((_WORD *)v8 - 19) = 0;
        *((_WORD *)v8 - 18) = 0;
        *((_DWORD *)v8 - 2) = 0;
        *((_WORD *)v8 - 17) = 0;
        *((_OWORD *)v8 - 2) = 0;
        *(v8 - 2) = 0;
      }
      while ( &v15 != v8 );
      if ( (unsigned int)decode_insn() == v7 && sub_2CF00(a1, (__int64)&v10) )
        break;
      ++v6;
      if ( !--v7 )
        return 1;
    }
    *a2 = v6;
    create_insn();
  }
  return 1;
}

