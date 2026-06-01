__int64 __fastcall sub_2414F0(_QWORD *a1, int a2, double a3)
{
  __int64 v3; // rbx
  unsigned int v4; // eax
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax

  v3 = *(_QWORD *)(a1[22] + 8LL);
  v4 = sub_311E90(a1, a2);
  v5 = *(int *)(v3 + 64);
  if ( (int)v4 >= v5 )
    return -1;
  if ( v4 >= (unsigned int)v5 )
    sub_23E340(a3);
  v6 = *(_QWORD *)(*(_QWORD *)(v3 + 528) + 8LL * v4);
  v7 = *(_QWORD *)(v6 + 56);
  if ( v7 )
    return *(_QWORD *)(v7 + 24);
  else
    return *(_QWORD *)(v6 + 32);
}

