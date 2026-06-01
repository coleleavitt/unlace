unsigned __int64 __fastcall sub_54A20(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // r13
  char *v9; // rax
  signed __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v14; // [rsp+0h] [rbp-48h] BYREF
  __int128 v15; // [rsp+8h] [rbp-40h]
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v14 = 0;
  v15 = 0;
  *(_QWORD *)(a1 + 72) = a3;
  *(_QWORD *)a1 = off_C8488;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_BYTE *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  sub_9D820(a1 + 24, a2, &qword_D0910, &v14);
  v4 = src;
  if ( *(_QWORD *)(a1 + 32) )
    v4 = *(const char **)(a1 + 24);
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(a1 + 56);
      v6 = *(_QWORD *)(a1 + 48);
      v7 = v5 + 1;
      if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)(v5 + 1) )
      {
        v11 = qvector_reserve(a1 + 48, v6, v5 + 1, 24);
        v5 = *(_QWORD *)(a1 + 56);
        *(_QWORD *)(a1 + 48) = v11;
        v6 = v11;
        v7 = v5 + 1;
      }
      *(_QWORD *)(a1 + 56) = v7;
      v8 = v6 + 24 * v5;
      *(_QWORD *)v8 = v4;
      *(_BYTE *)(v8 + 8) = *v4 == 36;
      v9 = strstr(v4, "::");
      if ( !v9 )
        break;
      v10 = v9 - v4;
      v4 = v9 + 2;
      *(_QWORD *)(v8 + 16) = v10;
    }
    *(_QWORD *)(v8 + 16) = strlen(v4);
  }
  v12 = *(_QWORD *)(a1 + 56);
  if ( v12 && !*(_BYTE *)(*(_QWORD *)(a1 + 48) + 24 * v12 - 16) )
    *(_BYTE *)(a1 + 80) = 1;
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14);
  }
  return v16 - __readfsqword(0x28u);
}
