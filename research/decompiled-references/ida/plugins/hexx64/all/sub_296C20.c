__int64 __fastcall sub_296C20(__int64 a1, __int64 a2, double a3)
{
  int v3; // edx
  __int64 v4; // rbp
  __int64 result; // rax
  __int64 v6; // rax

  v3 = *(_DWORD *)(a2 + 28);
  v4 = *(_QWORD *)(a1 + 24);
  if ( v3 == -1 )
  {
    v6 = *(_QWORD *)a2;
    **(_QWORD **)(a2 + 8) = *(_QWORD *)a2;
    *(_QWORD *)(v6 + 8) = *(_QWORD *)(a2 + 8);
    sub_255050(a2 + 16, a3);
    result = qfree(a2);
    --*(_QWORD *)(v4 + 16);
  }
  else
  {
    if ( *(_QWORD *)(v4 + 8) == a2 )
      sub_296B50(a1, 79, v3);
    return sub_255050(a2 + 16, a3);
  }
  return result;
}

