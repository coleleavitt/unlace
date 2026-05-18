void *__fastcall sub_62F60(_QWORD *a1, __int64 *a2, int a3)
{
  size_t v5; // rax
  size_t v6; // rax
  size_t v7; // rax
  size_t v8; // rax
  const char *v9; // r14
  size_t v10; // rdx
  __int64 v11; // r14
  size_t v12; // rax
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // r13
  size_t v16; // rax
  __int64 v17; // r15
  size_t v18; // rdx
  const char *v19; // rsi
  __int64 v20; // rax
  size_t v21; // rax
  size_t v22; // rax
  size_t v23; // rax
  const char *v24; // rbx
  size_t v25; // rdx
  size_t v27; // rax
  _BYTE v28[5]; // [rsp+1Eh] [rbp-4Ah] BYREF
  _BYTE v29[5]; // [rsp+23h] [rbp-45h] BYREF
  _QWORD v30[8]; // [rsp+28h] [rbp-40h] BYREF

  v30[0] = __readfsqword(0x28u);
  sub_5F5C0(a2, a1, 6u);
  v5 = sub_196CD0(v28, v29) - (_QWORD)v28;
  if ( v5 )
    sub_5F5C0(a2, v28, v5);
  v6 = sub_196CD0(v28, v29) - (_QWORD)v28;
  if ( v6 )
    sub_5F5C0(a2, v28, v6);
  v7 = sub_196CD0(v28, v29) - (_QWORD)v28;
  if ( v7 )
    sub_5F5C0(a2, v28, v7);
  if ( a3 > 1 )
  {
    v27 = sub_196CD0(v28, v29) - (_QWORD)v28;
    if ( v27 )
      sub_5F5C0(a2, v28, v27);
  }
  v8 = sub_196E10(v28, v30, a1[3]) - (_QWORD)v28;
  if ( v8 )
    sub_5F5C0(a2, v28, v8);
  v9 = s1;
  if ( a1[5] )
    v9 = (const char *)a1[4];
  if ( v9 )
  {
    v10 = strlen(v9) + 1;
  }
  else
  {
    v10 = 1;
    v9 = "";
  }
  sub_5F5C0(a2, v9, v10);
  v11 = a1[8];
  v12 = sub_196CD0(v28, v29) - (_QWORD)v28;
  if ( v12 )
    sub_5F5C0(a2, v28, v12);
  v13 = 0;
  if ( v11 )
  {
    do
    {
      v14 = 5 * v13++;
      sub_62A60((_QWORD *)(a1[7] + 8 * v14), a2);
    }
    while ( v11 != v13 );
  }
  v15 = a1[11];
  v16 = sub_196CD0(v28, v29) - (_QWORD)v28;
  if ( v16 )
    sub_5F5C0(a2, v28, v16);
  v17 = 0;
  if ( v15 )
  {
    do
    {
      v19 = s1;
      v20 = a1[10] + 24 * v17;
      if ( *(_QWORD *)(v20 + 8) )
        v19 = *(const char **)v20;
      if ( v19 )
      {
        v18 = strlen(v19) + 1;
      }
      else
      {
        v18 = 1;
        v19 = "";
      }
      ++v17;
      sub_5F5C0(a2, v19, v18);
    }
    while ( v17 != v15 );
  }
  v21 = sub_196E10(v28, v30, a1[13]) - (_QWORD)v28;
  if ( v21 )
    sub_5F5C0(a2, v28, v21);
  v22 = sub_196E10(v28, v30, a1[14]) - (_QWORD)v28;
  if ( v22 )
    sub_5F5C0(a2, v28, v22);
  v23 = sub_196E10(v28, v30, a1[15]) - (_QWORD)v28;
  if ( v23 )
    sub_5F5C0(a2, v28, v23);
  v24 = s1;
  if ( a1[17] )
    v24 = (const char *)a1[16];
  if ( v24 )
  {
    v25 = strlen(v24) + 1;
  }
  else
  {
    v25 = 1;
    v24 = "";
  }
  return sub_5F5C0(a2, v24, v25);
}
