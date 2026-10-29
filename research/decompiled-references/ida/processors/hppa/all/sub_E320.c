__int64 __fastcall sub_E320(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  __int64 v3; // rax

  v1 = *a1;
  if ( (unsigned __int64)a1[2] <= 9 )
  {
    v3 = qvector_reserve();
    *a1 = v3;
    v1 = v3;
  }
  a1[1] = 10;
  *(_QWORD *)v1 = 0x273252525722001LL;
  *(_BYTE *)(v1 + 8) = 32;
  result = *a1;
  *(_BYTE *)(*a1 + 9) = 0;
  return result;
}

