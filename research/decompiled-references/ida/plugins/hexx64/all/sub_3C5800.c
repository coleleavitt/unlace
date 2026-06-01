__int64 __fastcall sub_3C5800(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax
  unsigned __int64 *v6; // rax
  __int128 v7; // [rsp+0h] [rbp-198h] BYREF
  __int64 v8; // [rsp+10h] [rbp-188h]
  __int64 v9; // [rsp+18h] [rbp-180h]
  __int64 v10; // [rsp+20h] [rbp-178h]
  char v11; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int64 v12; // [rsp+168h] [rbp-30h] BYREF

  v12 = __readfsqword(0x28u);
  result = 1;
  if ( a3 != -1 )
  {
    v7 = -1;
    v6 = (unsigned __int64 *)&v11;
    v8 = -1;
    v9 = 0;
    v10 = 0;
    do
    {
      *(_WORD *)v6 = 0;
      v6 += 5;
      *((_WORD *)v6 - 19) = 0;
      *((_WORD *)v6 - 18) = 0;
      *((_DWORD *)v6 - 2) = 0;
      *((_WORD *)v6 - 17) = 0;
      *((_OWORD *)v6 - 2) = 0;
      *(v6 - 2) = 0;
    }
    while ( &v12 != v6 );
    if ( (int)decode_insn() > 0 )
    {
      return sub_3C55D0(a1, a2, (__int64)&v7, a4);
    }
    else
    {
      if ( !a4 )
        sub_2B4E70((__int64)"AUTOHIDE NONE\nCannot decode instruction at %a", 0.0);
      return 0;
    }
  }
  return result;
}

