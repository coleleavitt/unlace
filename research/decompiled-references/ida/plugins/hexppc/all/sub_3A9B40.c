__int64 __fastcall sub_3A9B40(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 result; // rax
  __int64 v4; // rax

  v1 = a1[1];
  v2 = *a1;
  if ( a1[2] < (unsigned __int64)(v1 + 1) )
  {
    v4 = qvector_reserve();
    v1 = a1[1];
    *a1 = v4;
    v2 = v4;
  }
  result = v2 + 40 * v1;
  *(_QWORD *)result = 0;
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(result + 24) = 0;
  *(_BYTE *)(result + 32) = 0;
  ++a1[1];
  return result;
}

