__int64 __fastcall sub_5740(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  unsigned __int64 *v4; // rax
  char v5; // [rsp+D8h] [rbp-180h] BYREF
  unsigned __int64 v6; // [rsp+218h] [rbp-40h] BYREF

  v6 = __readfsqword(0x28u);
  v1 = getinf_flag();
  if ( (_BYTE)v1 && ((int)get_flags_ex() >= 0 || get_switch_info() <= 0) )
  {
    v3 = sub_5650();
    if ( v3 != -1 )
    {
      if ( v3 == 1 )
      {
        set_switch_info();
        create_switch_table();
        return v1;
      }
      if ( *(_WORD *)(a1 + 24) == 14
        && *(_QWORD *)(a1 + 16) + *(unsigned __int16 *)(a1 + 26) == *(_QWORD *)(a1 + 56) + 16LL * *(_QWORD *)a1 )
      {
        v4 = (unsigned __int64 *)&v5;
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
        while ( &v6 != v4 );
        decode_insn();
      }
    }
    return 0;
  }
  return v1;
}

