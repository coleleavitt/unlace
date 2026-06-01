__int64 __fastcall sub_57F00(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 v6; // rax

  v3 = *(_QWORD *)(a1 + 72);
  if ( (unsigned __int64)a2 >= *(_QWORD *)(v3 + 32) )
    return 0;
  v4 = (_QWORD *)(*(_QWORD *)(v3 + 24) + 80LL * a2);
  if ( (*v4 & 0xFFFFFFFF000000FFLL) != 0x80000000ALL )
    return 0;
  v6 = v4[1];
  if ( *(_BYTE *)v6 != 6 )
    return 0;
  *a3 = *(_QWORD *)(v6 + 8);
  return 1;
}
