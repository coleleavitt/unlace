__int64 __fastcall sub_C6370(__int64 a1, int a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 result; // rax

  while ( 1 )
  {
    result = a3[1];
    if ( *(_QWORD *)result )
      break;
    v3 = a3[1];
    *(_QWORD *)(v3 + 64) = 0;
    *(_QWORD *)v3 = a3;
    *(_OWORD *)(v3 + 48) = 0;
    *(_OWORD *)(v3 + 32) = 0;
    v4 = *a3;
    *(_QWORD *)(v3 + 72) = 0;
    *(_QWORD *)(v3 + 24) = a1;
    *(_DWORD *)(v3 + 48) = a2;
    *(_QWORD *)(v3 + 8) = v4;
    *(_QWORD *)(v3 + 16) = v3 + 72;
    *(_WORD *)(v3 + 52) = 1;
  }
  ++*(_DWORD *)(a1 + 24);
  ++*(_WORD *)(result + 54);
  return result;
}
