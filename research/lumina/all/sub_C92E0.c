__int64 __fastcall sub_C92E0(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rsi

  result = *(unsigned __int8 *)(a1 + 29);
  if ( (result & 4) != 0 )
  {
    v2 = *(_QWORD **)(a1 + 8);
    if ( v2 )
    {
      sub_C9250(*(_QWORD *)a1, v2);
      LODWORD(result) = *(unsigned __int8 *)(a1 + 29);
    }
    result = (unsigned int)result & 0xFFFFFFFB;
    *(_BYTE *)(a1 + 29) = result;
  }
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  return result;
}
