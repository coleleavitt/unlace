__int64 __fastcall sub_291860(__int64 a1, __int64 *a2)
{
  int v2; // edx
  __int64 v3; // rbp
  __int64 result; // rax
  __int64 v5; // rax

  v2 = *((_DWORD *)a2 + 7);
  v3 = *(_QWORD *)(a1 + 24);
  if ( v2 == -1 )
  {
    v5 = *a2;
    *(_QWORD *)a2[1] = *a2;
    *(_QWORD *)(v5 + 8) = a2[1];
    sub_24FC90((__int64)(a2 + 2));
    result = qfree();
    --*(_QWORD *)(v3 + 16);
  }
  else
  {
    if ( *(__int64 **)(v3 + 8) == a2 )
      sub_291790(a1, 79, v2);
    return sub_24FC90((__int64)(a2 + 2));
  }
  return result;
}

