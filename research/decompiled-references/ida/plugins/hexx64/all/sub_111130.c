__int64 __fastcall sub_111130(_QWORD *a1, double a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax

  v2 = a1[8];
  v3 = *(unsigned int *)(a1[7] + 72LL);
  if ( (unsigned int)v3 >= *(_DWORD *)(v2 + 64) )
    sub_111110(a2);
  sub_13B2C0(*(_QWORD *)(*(_QWORD *)(v2 + 528) + 8 * v3));
  return sub_13B2C0(a1[1]);
}

