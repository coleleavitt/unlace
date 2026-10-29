__int64 __fastcall sub_216DF(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  int v5; // ebp
  __int64 v6; // rcx
  unsigned int *v7; // rax
  __int64 v8; // rdx
  __int64 v10; // [rsp+0h] [rbp-28h]

  v5 = 0;
  while ( v5 < *a3 )
  {
    v6 = 0;
    v7 = *(unsigned int **)(*(_QWORD *)a2 + 32LL);
    if ( v7 )
      v6 = *v7;
    v8 = a2[4];
    ++v5;
    a2 += 8;
    sub_E1710(a1, 165, v8, v6, 0);
    sub_D04B0(a1, *((_QWORD *)a2 - 3), 4294967289LL);
  }
  return v10;
}
