__int64 __fastcall sub_76B80(__int64 a1)
{
  __int64 v1; // rbp

  v1 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 48) > 3u )
    return v1 + sub_76980((_QWORD *)a1);
  if ( (unsigned __int8)is_cvt64() )
    return v1 + (int)sub_767A0((_QWORD *)a1);
  return v1 + sub_767C0(a1);
}

