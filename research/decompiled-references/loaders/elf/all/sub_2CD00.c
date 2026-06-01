__int64 __fastcall sub_2CD00(__int64 a1, _QWORD *a2, double a3, double a4)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  __int64 result; // rax
  int v8; // esi

  if ( *(_BYTE *)(a1 + 24) )
    return sub_EAA0((__int64)"Multiple TLS definitions in PHT, ignoring the one at 0x%a\n", a3);
  if ( a2[5] )
  {
    *(_QWORD *)(a1 + 136) = a2[1];
    *(_QWORD *)a1 = a2[2];
    v5 = a2[5];
    *(_QWORD *)(a1 + 8) = v5;
    v6 = a2[4];
    *(_QWORD *)(a1 + 144) = v6;
    if ( v5 < v6 )
    {
      sub_EAA0(
        (__int64)"The total size 0x%a of the TLS template is less than the size 0x%a of the TLS initialization image, red"
                 "ucing the latter\n",
        a3,
        a4);
      *(_QWORD *)(a1 + 144) = *(_QWORD *)(a1 + 8);
    }
    result = a2[6];
    if ( (unsigned __int64)(result - 2) > 0xFFE || (result & (result - 1)) != 0 )
    {
      *(_DWORD *)(a1 + 16) = 1;
    }
    else
    {
      *(_DWORD *)(a1 + 16) = result;
      v8 = result;
      result = (int)result - 1;
      if ( (*(_QWORD *)a1 & result) != 0 )
      {
        result = sub_EAA0((__int64)"Illegal allignment %d of the TLS template address 0x%a\n", v8, a3);
        *(_BYTE *)(a1 + 24) = 1;
        return result;
      }
    }
    *(_BYTE *)(a1 + 24) = 1;
    return result;
  }
  return sub_EAA0((__int64)"Illegal total size of the TLS template, ignoring it\n");
}
