__int64 __fastcall sub_D0F50(__int64 a1, int a2, int a3)
{
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi

  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    result = qfree(v5);
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 24) = 0;
  }
  v7 = *(_QWORD *)(a1 + 32);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    result = qfree(v7);
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 48) = 0;
  }
  v8 = *(_QWORD *)(a1 + 88);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 96) = 0;
    result = qfree(v8);
    *(_QWORD *)(a1 + 88) = 0;
    *(_QWORD *)(a1 + 104) = 0;
  }
  v9 = *(_QWORD *)(a1 + 112);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 120) = 0;
    result = qfree(v9);
    *(_QWORD *)(a1 + 112) = 0;
    *(_QWORD *)(a1 + 128) = 0;
  }
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 72) = a3;
  return result;
}

