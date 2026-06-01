__int64 __fastcall sub_46960(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  __int64 v3; // rax

  v1 = *a1;
  if ( (unsigned __int64)a1[2] <= 0xC )
  {
    v3 = qvector_reserve(a1, v1, 13, 1);
    *a1 = v3;
    v1 = v3;
  }
  a1[1] = 13;
  *(_QWORD *)v1 = 0x2002696825252001LL;
  *(_DWORD *)(v1 + 8) = 695412008;
  result = *a1;
  *(_BYTE *)(*a1 + 12) = 0;
  return result;
}

