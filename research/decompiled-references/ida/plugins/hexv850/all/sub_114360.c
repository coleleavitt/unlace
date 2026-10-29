__int64 __fastcall sub_114360(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r12d
  __int64 result; // rax

  v5 = *(_DWORD *)(a3 + 4);
  *(_DWORD *)a2 = 18;
  sub_117E50(a2 + 32, a3);
  result = sub_11BE50(a2 + 48, a1, a4, v5, *(_QWORD *)(a2 + 24), 0);
  if ( *(_DWORD *)(a2 + 68) != v5 )
  {
    sub_126B30(a2, a1, 2 * (unsigned int)(*(_DWORD *)(a2 + 68) < (int)v5) + 8, 0xFFFFFFFFLL, 1);
    result = *(_QWORD *)(a2 + 40);
    *(_DWORD *)(a2 + 36) = v5;
    *(_DWORD *)(result + 68) = v5;
  }
  return result;
}

