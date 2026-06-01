__int64 __fastcall sub_2C5C0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 *v4; // rax
  __int64 result; // rax
  __int128 v6; // [rsp+0h] [rbp-198h] BYREF
  __int64 v7; // [rsp+10h] [rbp-188h]
  __int64 v8; // [rsp+18h] [rbp-180h]
  __int64 v9; // [rsp+20h] [rbp-178h]
  char v10; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int64 v11; // [rsp+168h] [rbp-30h] BYREF

  v11 = __readfsqword(0x28u);
  v4 = (unsigned __int64 *)&v10;
  v6 = -1;
  v7 = -1;
  v8 = 0;
  v9 = 0;
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
  while ( &v11 != v4 );
  if ( a2 < a3 )
  {
    do
    {
      if ( !(unsigned int)decode_insn() )
        break;
      result = sub_25FA0(a1, (__int64)&v6, 14);
      if ( (_BYTE)result )
        return result;
    }
    while ( !sub_2C410(a1, (__int64)&v6, 14, 1u) && next_that() < a3 );
  }
  return 0;
}
