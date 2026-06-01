__int64 __fastcall sub_B7FF0(__int64 a1, __int64 a2, double a3)
{
  __int64 result; // rax
  __int64 v4; // rax

  result = 0;
  if ( *(_BYTE *)a2 == 7 && !*(_DWORD *)(a2 + 8) )
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( !*(_DWORD *)(v4 + 64) )
      sub_B7BA0(a3);
    *(_DWORD *)(**(_QWORD **)(v4 + 528) + 24LL) |= 1u;
    return 1;
  }
  return result;
}

