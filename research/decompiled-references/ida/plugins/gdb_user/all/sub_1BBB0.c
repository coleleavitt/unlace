__int64 __fastcall sub_1BBB0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rsi

  if ( (_DWORD)a2 == 4 )
    return 0;
  if ( (_DWORD)a2 == 3 )
  {
    v2 = 4;
    return 2 * ((unsigned __int8)sub_38440(*(_QWORD *)(a1 + 864), v2) ^ 1u);
  }
  if ( (int)a2 > 3 )
  {
    if ( (_DWORD)a2 == 8 )
    {
      v2 = 1;
      return 2 * ((unsigned __int8)sub_38440(*(_QWORD *)(a1 + 864), v2) ^ 1u);
    }
  }
  else
  {
    if ( (_DWORD)a2 == 1 )
    {
      v2 = 2;
      return 2 * ((unsigned __int8)sub_38440(*(_QWORD *)(a1 + 864), v2) ^ 1u);
    }
    if ( (_DWORD)a2 == 2 )
    {
      v2 = 3;
      return 2 * ((unsigned __int8)sub_38440(*(_QWORD *)(a1 + 864), v2) ^ 1u);
    }
  }
  sub_1A9E0(a1, a2);
  return sub_1BC30();
}

