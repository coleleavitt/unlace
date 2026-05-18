__int64 __fastcall sub_54F60(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 (*v3)(void); // rax
  _QWORD *v4; // rbp
  __int64 *v5; // rbx
  __int64 *v6; // r12
  __int64 v7; // rdi
  void (*v8)(); // rax
  __int64 v10; // rax

  v2 = *(_QWORD **)(a1 + 24);
  v3 = *(__int64 (**)(void))(*v2 + 40LL);
  if ( (char *)v3 == (char *)sub_464D0 )
  {
    v4 = v2 + 5;
  }
  else
  {
    v10 = v3();
    v2 = *(_QWORD **)(a1 + 24);
    v4 = (_QWORD *)v10;
  }
  v5 = (__int64 *)v2[48];
  v6 = &v5[2 * v2[49]];
  while ( v6 != v5 )
  {
    while ( 1 )
    {
      v7 = *v5;
      v8 = *(void (**)())(*(_QWORD *)*v5 + 32LL);
      if ( v8 != nullsub_14 )
        break;
      v5 += 2;
      if ( v6 == v5 )
        return 1;
    }
    v5 += 2;
    ((void (__fastcall *)(__int64, _QWORD *, _QWORD, _QWORD, _QWORD))v8)(
      v7,
      v4,
      *(_QWORD *)(a1 + 32),
      *(_QWORD *)(a1 + 40),
      *(unsigned __int8 *)(a1 + 48));
  }
  return 1;
}
