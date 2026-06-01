__int64 __fastcall sub_280A80(__int64 a1)
{
  if ( (unsigned __int8)sub_2808E0(a1, 1, 1)
    || (unsigned __int8)sub_2808E0(a1, 66, 1)
    || (unsigned __int8)sub_2809B0(a1) )
  {
    return 0;
  }
  else
  {
    return (unsigned int)sub_2808E0(a1, 16, 1) ^ 1;
  }
}

