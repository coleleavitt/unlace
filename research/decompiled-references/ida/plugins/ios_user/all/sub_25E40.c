__int64 __fastcall sub_25E40(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  *(_WORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 20) = 8;
  sub_25D90(*(void ***)(a1 + 48));
  v2 = *(_QWORD *)(a1 + 168);
  result = a1 + 40;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = a1 + 40;
  *(_QWORD *)(a1 + 64) = a1 + 40;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_OWORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  if ( v2 )
  {
    *(_QWORD *)(a1 + 176) = 0;
    result = qfree();
    *(_QWORD *)(a1 + 168) = 0;
    *(_QWORD *)(a1 + 184) = 0;
  }
  *(_QWORD *)(a1 + 192) = 0;
  *(_OWORD *)(a1 + 80) = -1;
  *(_OWORD *)(a1 + 96) = -1;
  return result;
}

