unsigned __int64 __fastcall sub_70E40(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // rax
  size_t v7; // rax
  __int64 v8; // rbp
  __int64 v9; // r14
  size_t v10; // rdx
  const char *v11; // r15
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // r13
  __int64 v15; // rbp
  _QWORD *v16; // rdi
  _BYTE v18[10]; // [rsp+1Eh] [rbp-4Ah] BYREF
  unsigned __int64 v19[8]; // [rsp+28h] [rbp-40h] BYREF

  v19[0] = __readfsqword(0x28u);
  v3 = a1[1];
  sub_69D50(a2);
  if ( v3 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v6 = v5;
      v5 = *(_QWORD *)(*a1 + 8 * v4);
      v7 = sub_196E10(v18, v19, v5 - v6) - (_QWORD)v18;
      if ( v7 )
        sub_67AC0(a2, v18, v7);
      ++v4;
    }
    while ( v3 != v4 );
  }
  v8 = a1[4];
  v9 = 0;
  sub_69D50(a2);
  if ( v8 )
  {
    do
    {
      v11 = s1;
      v12 = a1[3] + 24 * v9;
      if ( *(_QWORD *)(v12 + 8) )
        v11 = *(const char **)v12;
      if ( v11 )
      {
        v10 = strlen(v11) + 1;
      }
      else
      {
        v10 = 1;
        v11 = "";
      }
      ++v9;
      sub_67AC0(a2, v11, v10);
    }
    while ( v9 != v8 );
  }
  v13 = a1[7];
  v14 = 0;
  v15 = 0;
  sub_69D50(a2);
  if ( v13 )
  {
    do
    {
      ++v15;
      v16 = (_QWORD *)(v14 + a1[6]);
      v14 += 56;
      sub_70D30(v16, a2);
    }
    while ( v15 != v13 );
  }
  return v19[0] - __readfsqword(0x28u);
}
