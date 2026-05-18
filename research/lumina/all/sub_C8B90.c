__int64 __fastcall sub_C8B90(__int64 a1)
{
  __int64 v1; // rax
  double v2; // xmm0_8
  int v3; // ecx
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 40) )
    sub_C88C0(a1);
  v1 = *(_QWORD *)a1;
  *(_BYTE *)(a1 + 41) = 0;
  *(_BYTE *)(a1 + 43) = 1;
  v2 = (double)(((int)v1 + 43200000) % 86400000) / 1000.0;
  *(_DWORD *)(a1 + 20) = (int)v2 / 3600;
  v3 = (int)v2 % 3600;
  *(_DWORD *)(a1 + 24) = v3 / 60;
  result = (unsigned int)(v3 % 60);
  *(double *)(a1 + 32) = v2 - (double)(int)v2 + (double)(int)result;
  return result;
}
