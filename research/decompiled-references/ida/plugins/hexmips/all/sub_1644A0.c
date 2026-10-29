__int64 __fastcall sub_1644A0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdx
  unsigned int v3; // ecx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v3 = *(_DWORD *)(v2 + 64);
  v4 = *(unsigned int *)(*(_QWORD *)(a1 + 56) + 72LL);
  if ( (unsigned int)v4 >= v3 || (v5 = *(_QWORD *)(v2 + 528), a2 >= v3) )
    sub_1638F0(a1);
  sub_164220(a1, *(_QWORD *)(v5 + 8 * v4), *(_QWORD *)(v5 + 8LL * a2));
  result = *(_QWORD *)(a1 + 56);
  *(_DWORD *)(result + 72) = a2;
  return result;
}

