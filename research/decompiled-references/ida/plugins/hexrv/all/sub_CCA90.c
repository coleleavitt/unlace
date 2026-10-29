__int64 __fastcall sub_CCA90(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
  {
    *(_QWORD *)(a1 + 16) = 0;
    result = qfree();
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 24) = 0;
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    *(_QWORD *)(a1 + 40) = 0;
    result = qfree();
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 48) = 0;
  }
  if ( *(_QWORD *)(a1 + 88) )
  {
    *(_QWORD *)(a1 + 96) = 0;
    result = qfree();
    *(_QWORD *)(a1 + 88) = 0;
    *(_QWORD *)(a1 + 104) = 0;
  }
  if ( *(_QWORD *)(a1 + 112) )
  {
    *(_QWORD *)(a1 + 120) = 0;
    result = qfree();
    *(_QWORD *)(a1 + 112) = 0;
    *(_QWORD *)(a1 + 128) = 0;
  }
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 72) = a3;
  return result;
}

