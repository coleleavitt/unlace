void __fastcall sub_C6FC0(__int64 a1, __int64 a2, int a3)
{
  int v3; // r14d
  __int64 v6; // rdi
  int v7; // ebp
  int v8; // edx
  bool v9; // zf

  if ( a3 > 0 && !*(_DWORD *)a1 )
  {
    v3 = a3;
    do
    {
      v6 = *(int *)(a1 + 24);
      v7 = *(_DWORD *)(a1 + 16) - v6;
      if ( v7 > v3 )
        v7 = v3;
      memcpy((void *)(*(_QWORD *)(a1 + 8) + v6), (const void *)(a2 + a3 - v3), v7);
      v8 = v7 + *(_DWORD *)(a1 + 24);
      v9 = v8 == *(_DWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 24) = v8;
      if ( v9 )
      {
        *(_DWORD *)a1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 24LL))(
                          *(_QWORD *)(a1 + 40),
                          *(_QWORD *)(a1 + 8) + *(int *)(a1 + 20),
                          (unsigned int)(v8 - *(_DWORD *)(a1 + 20)),
                          *(int *)(a1 + 20) + *(_QWORD *)(a1 + 32));
        *(_QWORD *)(a1 + 32) += *(int *)(a1 + 16);
        *(_QWORD *)(a1 + 20) = 0;
      }
      v3 -= v7;
    }
    while ( v3 > 0 && !*(_DWORD *)a1 );
  }
}
