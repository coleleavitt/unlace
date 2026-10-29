__int64 __fastcall sub_87F0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // ax
  __int64 result; // rax
  __int64 v5; // rdx

  v3 = *(_WORD *)(a2 + 24);
  if ( v3 > 0x77u )
  {
    if ( v3 != 125 )
    {
LABEL_3:
      result = *(_QWORD *)(a1 + 232);
      if ( result != -1 )
        result += *(_QWORD *)(a3 + 16);
      return result;
    }
  }
  else if ( v3 <= 0x6Fu )
  {
    goto LABEL_3;
  }
  v5 = *(_QWORD *)(a3 + 16) + 16LL * *(_QWORD *)a2;
  result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
  if ( v5 != result )
  {
    result &= v5;
    if ( v5 == -1 )
      return -1;
  }
  return result;
}

