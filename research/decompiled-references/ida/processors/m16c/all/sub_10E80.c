__int64 __fastcall sub_10E80(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rbp
  __int64 result; // rax
  _BYTE *v4; // rdx

  v1 = *(_DWORD *)(a1 + 4360);
  v2 = *(_QWORD *)(a1 + 4352);
  result = sub_10E20(a1);
  v4 = (_BYTE *)(v2 + 40LL * v1);
  if ( v4[41] == 5 && (v4[64] & 1) == 0 && v4[45] != 2 )
    return 0;
  return result;
}

