__int64 __fastcall sub_384DD0(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  char v3; // r12
  unsigned __int64 v5; // r13
  __int32 v6; // eax
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned int v10; // edx
  __int32 v11; // eax
  __int64 v12; // rdi
  __int64 v13; // r14
  int v14; // eax
  __m128i v15; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  result = 0;
  if ( a1[9] != a2 )
    return result;
  v3 = 0;
  v5 = 1;
  if ( a1[3] <= 1u )
    return 1;
  do
  {
    v12 = a1[8];
    v13 = *(_QWORD *)(a1[2] + 8 * v5);
    if ( v13 )
    {
      v6 = *(_DWORD *)(v13 + 8);
      v15.m128i_i64[0] = *(_QWORD *)v13;
      v15.m128i_i32[2] = v6;
      v7 = sub_257EA0(v12, (unsigned __int64 *)&v15);
      if ( (v7 & 1) == 0 )
        goto LABEL_7;
      v8 = a1[8];
      v9 = *(_QWORD *)v13;
      v10 = v7 & 0xFFFFFFFE;
      v11 = *(_DWORD *)(v13 + 8);
      goto LABEL_6;
    }
    v15.m128i_i64[0] = -1;
    v15.m128i_i32[2] = 0;
    v14 = sub_257EA0(v12, (unsigned __int64 *)&v15);
    if ( (v14 & 1) != 0 )
    {
      v8 = a1[8];
      v9 = -1;
      v10 = v14 & 0xFFFFFFFE;
      v11 = 0;
LABEL_6:
      v15.m128i_i64[0] = v9;
      v3 = 1;
      v15.m128i_i32[2] = v11;
      sub_25D910(v8, &v15, v10);
    }
LABEL_7:
    ++v5;
  }
  while ( v5 < a1[3] );
  if ( v3 )
  {
    sub_2B6880(*(_QWORD *)(*(_QWORD *)(a1[8] + 216LL) + 112LL), *(_QWORD *)a1[8], *(_QWORD *)(a1[8] + 88LL));
    *(_DWORD *)(a1[8] + 108LL) &= ~2u;
  }
  return 1;
}

