unsigned __int64 __fastcall sub_7CA60(__int64 a1, unsigned __int8 a2)
{
  if ( *(_DWORD *)(a1 + 48) > 3u )
    return sub_7C940((_QWORD *)a1);
  if ( (unsigned __int8)is_cvt64() )
    return (int)sub_7C760((_QWORD *)a1) - (unsigned __int64)a2;
  return sub_7C780(a1) - a2;
}

