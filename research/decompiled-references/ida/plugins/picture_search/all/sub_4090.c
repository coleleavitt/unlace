__int64 __fastcall sub_4090(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  void *v4; // rax
  const void *v5; // rsi
  void *v6; // [rsp+0h] [rbp-48h] BYREF
  __int128 v7; // [rsp+8h] [rbp-40h]
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 56);
  v8 = __readfsqword(0x28u);
  v6 = nullptr;
  v7 = 0;
  if ( v2 )
  {
    v4 = (void *)qalloc_or_throw();
    v5 = *(const void **)(a2 + 48);
    *((_QWORD *)&v7 + 1) = v2;
    v6 = v4;
    memcpy(v4, v5, 8 * v2);
    *(_QWORD *)&v7 = v2;
  }
  callui(165, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 144LL), &v6, &callui);
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  return 1;
}

