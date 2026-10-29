__int64 __fastcall sub_76EE0(__int64 a1, __int64 a2)
{
  __int16 v2; // dx
  unsigned int v3; // eax
  __int64 result; // rax
  unsigned int v5; // eax

  v2 = 0;
  LOWORD(v3) = 0;
  if ( *(_DWORD *)(a1 + 48) > 7u )
  {
    v5 = sub_767A0((_QWORD *)a1);
    v2 = v5;
    v3 = HIWORD(v5);
  }
  *(_WORD *)a2 = v2;
  *(_WORD *)(a2 + 2) = v3;
  if ( *(_QWORD *)a1 >= *(_QWORD *)(a1 + 8)
    || (*(_DWORD *)(a2 + 4) = unpack_dd(), *(_QWORD *)a1 >= *(_QWORD *)(a1 + 8))
    || (*(_DWORD *)(a2 + 8) = unpack_dd(), *(_QWORD *)a1 >= *(_QWORD *)(a1 + 8))
    || (*(_DWORD *)(a2 + 12) = unpack_dd(), *(_QWORD *)a1 >= *(_QWORD *)(a1 + 8)) )
  {
    sub_73F90(a1);
  }
  result = unpack_dd();
  *(_DWORD *)(a2 + 16) = result;
  return result;
}

