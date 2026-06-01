__int64 __fastcall sub_190E0(__int64 a1)
{
  __int64 result; // rax
  int v2; // edx

  *(_QWORD *)a1 = -1;
  LODWORD(result) = 8;
  v2 = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 36) = 4;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  do
  {
    v2 = 2 * v2 + 1;
    result = (unsigned int)(result - 1);
  }
  while ( (_DWORD)result );
  *(_DWORD *)(a1 + 32) = v2;
  return result;
}

