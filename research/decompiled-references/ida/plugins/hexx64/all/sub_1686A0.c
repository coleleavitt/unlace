__int64 __fastcall sub_1686A0(__int64 a1, unsigned int a2, double a3)
{
  __int64 v3; // rdx
  unsigned int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 64);
  v4 = *(_DWORD *)(v3 + 64);
  v5 = *(unsigned int *)(*(_QWORD *)(a1 + 56) + 72LL);
  if ( (unsigned int)v5 >= v4 || (v6 = *(_QWORD *)(v3 + 528), a2 >= v4) )
    sub_167AF0(a3);
  sub_168420(a1, *(_QWORD *)(v6 + 8 * v5), *(_QWORD *)(v6 + 8LL * a2), a3);
  result = *(_QWORD *)(a1 + 56);
  *(_DWORD *)(result + 72) = a2;
  return result;
}

