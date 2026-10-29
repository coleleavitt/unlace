__int64 __fastcall sub_1D4BB0(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 64);
  result = 0;
  if ( v1 > 0 )
  {
    result = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * (v1 - 1));
    if ( *(_DWORD *)(result + 76) != 1 )
    {
      result = sub_679D0(a1, -1, 2);
      *(_DWORD *)(result + 24) |= 0x200u;
      *(_DWORD *)(result + 76) = 1;
    }
  }
  return result;
}

