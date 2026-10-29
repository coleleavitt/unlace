__int64 __fastcall sub_796C0(__int64 a1)
{
  __int64 v1; // rbp

  v1 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 48) > 3u )
    return v1 + sub_794C0((_QWORD *)a1);
  if ( (unsigned __int8)is_cvt64() )
    return v1 + (int)sub_792E0((_QWORD *)a1);
  return v1 + sub_79300(a1);
}

