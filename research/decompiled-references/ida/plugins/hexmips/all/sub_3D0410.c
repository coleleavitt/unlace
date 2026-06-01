__int64 __fastcall sub_3D0410(__int64 a1, _DWORD *a2, __int64 a3, int a4, int a5, double a6)
{
  __int64 result; // rax

  result = (unsigned int)(*(_DWORD *)(a3 + 60) - 1);
  LOBYTE(result) = a4 < 0 || (unsigned int)result > 1;
  if ( (_BYTE)result )
    return 0;
  if ( a4 < *(_DWORD *)(*(_QWORD *)(a3 + 64) + 64LL) )
  {
    a2[2] = 0;
    a2[5] = a4;
    a2[6] = a5;
    sub_3CFE30(a1, (__int64)a2, a3, a6);
    return 1;
  }
  return result;
}

