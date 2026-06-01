__int64 __fastcall sub_21B90(__int64 a1, __int64 a2)
{
  unsigned int *v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rbp
  const char *v6; // rsi
  __int64 v7; // rdi
  const char *v9; // [rsp+0h] [rbp-38h] BYREF
  __int128 v10; // [rsp+8h] [rbp-30h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v3 = (unsigned int *)sub_15850();
  v4 = *(_QWORD *)(a1 + 8);
  v9 = nullptr;
  v10 = 0;
  v5 = sub_20A20(v3, v4, &unk_822E0, 0x10u, (__int64 *)&v9);
  if ( v5 == -1 )
  {
    v6 = src;
    if ( (_QWORD)v10 )
      v6 = v9;
    sub_140F0((__int64)"Error: %s\n", v6);
  }
  free_idcv();
  v7 = (__int64)v9;
  *(_BYTE *)a2 = 2;
  *(_QWORD *)(a2 + 8) = v5;
  if ( v7 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  return 0;
}

