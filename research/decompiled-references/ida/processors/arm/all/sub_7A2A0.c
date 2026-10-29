__int64 __fastcall sub_7A2A0(__int64 a1, unsigned __int64 a2, int a3, int a4, unsigned __int8 a5)
{
  unsigned __int16 v6; // dx
  __int64 v8; // rdx
  __int64 v9; // rcx

  if ( 4 * a3 - 4 >= a4 )
  {
    if ( under_debugger )
      goto LABEL_8;
    interr(10249);
  }
  else
  {
    v6 = a2;
    a2 = a3 + (unsigned __int16)a2;
    if ( a2 <= 4 )
      return sub_79AD0(a1, (__int64)&unk_8FEB0, v6, a3, (unsigned int)a4, a5, 4);
  }
  if ( under_debugger )
LABEL_8:
    BUG();
  interr(10250);
  return sub_7A320(10250, a2, v8, v9);
}
