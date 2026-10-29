unsigned __int64 __fastcall sub_BDE0(__int64 a1, __int64 *a2, __int64 *a3, char a4)
{
  __int64 v4; // rax
  __int64 v5; // r8
  int v8; // r10d
  __int64 v9; // r15
  __int64 v10; // rbp
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+0h] [rbp-58h]
  __int64 v21; // [rsp+0h] [rbp-58h]
  int v22; // [rsp+8h] [rbp-50h]
  int v23; // [rsp+8h] [rbp-50h]
  int v24; // [rsp+Ch] [rbp-4Ch]
  int v25; // [rsp+Ch] [rbp-4Ch]
  unsigned __int64 v26; // [rsp+18h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 16);
  if ( (int)v4 > 0 )
  {
    v5 = a1;
    v8 = a4 & 1;
    v9 = ((unsigned int)(v4 - 1) + 1LL) << 6;
    v10 = 0;
    v11 = a4 & 2;
    do
    {
      while ( 1 )
      {
        v14 = v10 + *(_QWORD *)(v5 + 8);
        if ( (!v8 || (*(_BYTE *)(v14 + 57) & 2) == 0) && (!v11 || (*(_BYTE *)(v14 + 56) & 1) == 0) )
          break;
        v12 = a3[1];
        v13 = *a3;
        if ( a3[2] < (unsigned __int64)(v12 + 1) )
        {
          v20 = v5;
          v24 = v11;
          v22 = v8;
          v18 = qvector_reserve(a3, v13, v12 + 1, 8);
          v11 = v24;
          v5 = v20;
          *a3 = v18;
          v13 = v18;
          v8 = v22;
          v12 = a3[1];
        }
        v10 += 64;
        *(_QWORD *)(v13 + 8 * v12) = v14;
        ++a3[1];
        if ( v9 == v10 )
          return v26 - __readfsqword(0x28u);
      }
      v15 = a2[1];
      v16 = *a2;
      if ( a2[2] < (unsigned __int64)(v15 + 1) )
      {
        v21 = v5;
        v25 = v11;
        v23 = v8;
        v19 = qvector_reserve(a2, v16, v15 + 1, 8);
        v11 = v25;
        v5 = v21;
        *a2 = v19;
        v16 = v19;
        v8 = v23;
        v15 = a2[1];
      }
      v10 += 64;
      *(_QWORD *)(v16 + 8 * v15) = v14;
      ++a2[1];
    }
    while ( v9 != v10 );
  }
  return v26 - __readfsqword(0x28u);
}

