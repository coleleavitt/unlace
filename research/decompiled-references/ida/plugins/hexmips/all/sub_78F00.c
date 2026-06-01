__int64 __fastcall sub_78F00(__int64 a1)
{
  __int64 v1; // rbp

  v1 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 48) > 3u )
    return v1 + sub_78D00((_QWORD *)a1);
  if ( (unsigned __int8)is_cvt64() )
    return v1 + (int)sub_78B20((_QWORD *)a1);
  return v1 + sub_78B40(a1);
}

