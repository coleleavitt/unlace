char __fastcall sub_BC820(_QWORD *a1, __int64 a2, __int64 a3, char a4, double a5)
{
  unsigned __int8 *v5; // r15
  char result; // al

  v5 = (unsigned __int8 *)(a3 + 32);
  if ( !sub_BC350(a1, (unsigned __int8 *)(a2 + 32), (unsigned __int8 *)(a3 + 32), a5)
    || (result = sub_BC350(a1, (unsigned __int8 *)(a2 + 48), (unsigned __int8 *)(a3 + 48), a5)) == 0 )
  {
    if ( a4 && sub_BC350(a1, (unsigned __int8 *)(a2 + 32), (unsigned __int8 *)(a3 + 48), a5) )
      return sub_BC350(a1, (unsigned __int8 *)(a2 + 48), v5, a5);
    else
      return 0;
  }
  return result;
}

