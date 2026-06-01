__int64 __fastcall sub_10430(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  char v3; // al
  __int64 v4; // rdx
  __int64 result; // rax

  v3 = *(_BYTE *)(a3 + 33);
  if ( (v3 & 0x90) != 0 )
  {
    result = a1[29];
    if ( result != -1 )
      result += *(_QWORD *)(a3 + 16);
  }
  else if ( (v3 & 0x20) != 0 )
  {
    result = a1[30];
    if ( result != -1 )
      result += *(_QWORD *)(a3 + 16);
  }
  else
  {
    v4 = *(_QWORD *)(a3 + 16) + 16LL * *a2;
    result = *(_QWORD *)(a1[4] + 16LL);
    if ( v4 != result )
    {
      result &= v4;
      if ( v4 == -1 )
        return -1;
    }
  }
  return result;
}

