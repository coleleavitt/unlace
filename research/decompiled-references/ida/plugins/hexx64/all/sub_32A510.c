__int64 __fastcall sub_32A510(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = compare_tinfo();
  if ( !(_BYTE)v1 && (unsigned __int8)compare_tinfo() && (unsigned __int8)*(_QWORD *)(a1 + 256) )
    return compare_tinfo();
  else
    return v1;
}

