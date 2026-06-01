__int64 __fastcall sub_1C100(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rbx

  if ( *(_DWORD *)(a1 + 1360) == 6 || a4 <= 0 )
    return -1;
  v4 = a4;
  if ( (unsigned __int8)sub_3C820(*(_QWORD *)(a1 + 864), a2, a3, a4) )
    return v4;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 864) + 250LL) )
    return -2;
  return 0;
}

