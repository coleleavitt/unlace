__int64 __fastcall sub_129C0(unsigned __int64 *a1)
{
  unsigned __int64 *v2; // rax
  unsigned __int64 v3; // rbx
  char v4; // [rsp+28h] [rbp-180h] BYREF
  unsigned __int64 v5; // [rsp+168h] [rbp-40h] BYREF

  v5 = __readfsqword(0x28u);
  if ( a1 && a1[3] == -1 )
  {
    v2 = (unsigned __int64 *)&v4;
    do
    {
      *(_WORD *)v2 = 0;
      v2 += 5;
      *((_WORD *)v2 - 19) = 0;
      *((_WORD *)v2 - 18) = 0;
      *((_DWORD *)v2 - 2) = 0;
      *((_WORD *)v2 - 17) = 0;
      *((_OWORD *)v2 - 2) = 0;
      *(v2 - 2) = 0;
    }
    while ( &v5 != v2 );
    v3 = *a1;
    if ( *a1 < a1[1] )
    {
      decode_insn();
      if ( v3 < a1[1] )
      {
        while ( (int)decode_insn() > 0 && v3 < a1[1] )
          ;
      }
    }
    add_frame();
  }
  return 0;
}

