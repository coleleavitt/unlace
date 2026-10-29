__int64 __fastcall sub_7D460(__int64 a1, __int64 a2, double a3)
{
  __int16 v3; // dx
  unsigned int v4; // eax
  __int64 result; // rax
  unsigned int v6; // eax

  v3 = 0;
  LOWORD(v4) = 0;
  if ( *(_DWORD *)(a1 + 48) > 7u )
  {
    v6 = sub_7CD20((_QWORD *)a1, a3);
    v3 = v6;
    v4 = HIWORD(v6);
  }
  *(_WORD *)a2 = v3;
  *(_WORD *)(a2 + 2) = v4;
  if ( *(_QWORD *)a1 >= *(_QWORD *)(a1 + 8)
    || (*(_DWORD *)(a2 + 4) = unpack_dd(), *(_QWORD *)a1 >= *(_QWORD *)(a1 + 8))
    || (*(_DWORD *)(a2 + 8) = unpack_dd(), *(_QWORD *)a1 >= *(_QWORD *)(a1 + 8))
    || (*(_DWORD *)(a2 + 12) = unpack_dd(), *(_QWORD *)a1 >= *(_QWORD *)(a1 + 8)) )
  {
    sub_7A510(a3);
  }
  result = unpack_dd();
  *(_DWORD *)(a2 + 16) = result;
  return result;
}

