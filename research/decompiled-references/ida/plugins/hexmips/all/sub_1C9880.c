__int64 __fastcall sub_1C9880(__int64 a1, unsigned __int64 that, unsigned __int64 a3)
{
  unsigned __int64 *v5; // rax
  __int64 result; // rax
  char v7; // [rsp+40h] [rbp-180h] BYREF
  unsigned __int64 v8; // [rsp+180h] [rbp-40h] BYREF

  v8 = __readfsqword(0x28u);
  v5 = (unsigned __int64 *)&v7;
  do
  {
    *(_WORD *)v5 = 0;
    v5 += 5;
    *((_WORD *)v5 - 19) = 0;
    *((_WORD *)v5 - 18) = 0;
    *((_DWORD *)v5 - 2) = 0;
    *((_WORD *)v5 - 17) = 0;
    *((_OWORD *)v5 - 2) = 0;
    *(v5 - 2) = 0;
  }
  while ( &v8 != v5 );
  if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
    goto LABEL_5;
  while ( 1 )
  {
    that = next_that();
LABEL_5:
    if ( that >= a3 )
      break;
    if ( (int)decode_insn() > 0 && (get_flags_ex() & 0x10000) != 0 )
    {
      result = sub_CBD70();
      if ( !result )
        return result;
    }
  }
  return 1;
}

