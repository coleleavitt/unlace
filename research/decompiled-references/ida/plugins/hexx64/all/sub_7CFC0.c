__int64 __fastcall sub_7CFC0(__int64 a1, unsigned __int8 a2, double a3)
{
  __int64 v3; // rax
  __int64 v5; // rbp

  if ( *(_DWORD *)(a1 + 48) > 3u )
  {
    v5 = *(_QWORD *)(a1 + 32);
    return v5 + sub_7CF00((_QWORD *)a1, a3);
  }
  else
  {
    if ( (unsigned __int8)is_cvt64() )
      v3 = (int)sub_7CD20((_QWORD *)a1, a3);
    else
      v3 = sub_7CD40(a1, a3);
    return v3 - a2;
  }
}

