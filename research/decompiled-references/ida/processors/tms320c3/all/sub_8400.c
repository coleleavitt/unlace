__int64 __fastcall sub_8400(unsigned __int64 *a1)
{
  unsigned __int64 *v2; // rax
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbx
  _QWORD v6[40]; // [rsp+28h] [rbp-180h] BYREF
  unsigned __int64 v7; // [rsp+168h] [rbp-40h] BYREF

  v7 = __readfsqword(0x28u);
  if ( a1 && a1[3] == -1 )
  {
    v2 = v6;
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
    while ( &v7 != v2 );
    v3 = *a1;
    if ( *a1 < a1[1] )
    {
      while ( 1 )
      {
        decode_insn();
        if ( (v6[0] & 0xFFFF00000000FF00LL) != 0x13000000000100LL
          && (v6[5] & 0xFFFF00000000FF00LL) != 0x13000000000100LL )
        {
          break;
        }
        v4 = a1[1];
        if ( v3 >= v4 )
          goto LABEL_10;
      }
      v4 = a1[1];
LABEL_10:
      v5 = *a1;
      if ( *a1 < v4 )
      {
        do
          decode_insn();
        while ( v5 < a1[1] );
      }
    }
    add_frame();
  }
  return 0;
}

