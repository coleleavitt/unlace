unsigned __int64 __fastcall sub_8FDF0(__int64 a1)
{
  __int64 (**v1)(); // rbp
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  char v6; // al
  __int64 (**v7)(); // rcx
  __int64 (**v8)(); // rdx
  __int64 v9; // r12
  __int64 v10; // rbp
  __int64 j; // rdx
  unsigned __int64 v12; // rax
  __int64 v14; // r12
  __int64 i; // r14
  __int64 (**v16[6])(); // [rsp+0h] [rbp-68h] BYREF
  char v17; // [rsp+30h] [rbp-38h]
  int v18; // [rsp+34h] [rbp-34h]
  unsigned __int64 v19; // [rsp+38h] [rbp-30h]

  v1 = (__int64 (**)())(a1 + 248);
  v19 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 248);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 256) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 248) = 0;
    *(_QWORD *)(a1 + 264) = 0;
  }
  v4 = *(_QWORD *)(a1 + 224);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 232) = 0;
    qfree(v4);
    *(_QWORD *)(a1 + 224) = 0;
    *(_QWORD *)(a1 + 240) = 0;
  }
  v5 = *(_QWORD *)(a1 + 272);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 280) = 0;
    qfree(v5);
    *(_QWORD *)(a1 + 272) = 0;
    *(_QWORD *)(a1 + 288) = 0;
  }
  v6 = *(_BYTE *)(a1 + 161);
  v7 = *(__int64 (***)())(a1 + 8);
  v8 = *(__int64 (***)())(a1 + 472);
  v16[0] = off_C8ED0;
  v16[3] = (__int64 (**)())(a1 + 224);
  v16[1] = v7;
  v16[2] = v1;
  v16[4] = (__int64 (**)())(a1 + 272);
  v16[5] = v8;
  v17 = v6;
  v18 = 0;
  sub_8E7C0(a1, v16);
  *(_BYTE *)(a1 + 440) = 1;
  v9 = *(_QWORD *)(a1 + 232);
  if ( (*(_BYTE *)(a1 + 480) & 2) != 0 )
  {
    if ( !v9 )
      return v19 - __readfsqword(0x28u);
    v10 = *(_QWORD *)(a1 + 224);
    if ( !strcmp((const char *)(v10 + 8), "__TEXT") && *(_QWORD *)(v10 + 40) )
    {
      v14 = *(_QWORD *)(a1 + 248);
      for ( i = v14 + 80LL * *(_QWORD *)(a1 + 256); i != v14; v14 += 80 )
      {
        if ( !strcmp((const char *)(v14 + 16), "__TEXT") )
          *(_DWORD *)(v14 + 48) -= *(_QWORD *)(v10 + 40);
      }
      *(_QWORD *)(v10 + 40) = 0;
      v10 = *(_QWORD *)(a1 + 224);
      v9 = *(_QWORD *)(a1 + 232);
    }
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 224);
  }
  for ( j = v10 + 72 * v9; j != v10; v10 += 72 )
  {
    if ( *(_QWORD *)(a1 + 448) == -1 && !*(_QWORD *)(v10 + 40) && *(_QWORD *)(v10 + 48) )
      *(_QWORD *)(a1 + 448) = *(_QWORD *)(v10 + 24);
    v12 = *(_QWORD *)(v10 + 24);
    if ( v12 < *(_QWORD *)(a1 + 456) )
      *(_QWORD *)(a1 + 456) = v12;
  }
  return v19 - __readfsqword(0x28u);
}

