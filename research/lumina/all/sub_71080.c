unsigned __int64 __fastcall sub_71080(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  size_t v4; // rdx
  const char *v5; // r15
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // r12
  _QWORD *v9; // r15
  size_t v10; // rax
  size_t v11; // rax
  __int64 v12; // r15
  __int64 v13; // r12
  _QWORD *v14; // r15
  size_t v15; // rax
  size_t v16; // rax
  __int64 v18; // [rsp+8h] [rbp-60h]
  __int64 v19; // [rsp+8h] [rbp-60h]
  _BYTE v20[10]; // [rsp+1Eh] [rbp-4Ah] BYREF
  _QWORD v21[8]; // [rsp+28h] [rbp-40h] BYREF

  v2 = 0;
  v21[0] = __readfsqword(0x28u);
  sub_69D50(a2);
  v3 = a1[2];
  sub_69D50(a2);
  if ( v3 )
  {
    do
    {
      v5 = s1;
      v6 = a1[1] + 24 * v2;
      if ( *(_QWORD *)(v6 + 8) )
        v5 = *(const char **)v6;
      if ( v5 )
      {
        v4 = strlen(v5) + 1;
      }
      else
      {
        v4 = 1;
        v5 = "";
      }
      ++v2;
      sub_67AC0(a2, v5, v4);
    }
    while ( v3 != v2 );
  }
  v7 = a1[5];
  v8 = 0;
  v18 = v7;
  sub_69D50(a2);
  if ( v7 )
  {
    do
    {
      v9 = (_QWORD *)(a1[4] + 16 * v8);
      v10 = sub_196E10(v20, v21, *v9) - (_QWORD)v20;
      if ( v10 )
        sub_67AC0(a2, v20, v10);
      v11 = sub_196E10(v20, v21, v9[1]) - (_QWORD)v20;
      if ( v11 )
        sub_67AC0(a2, v20, v11);
      ++v8;
    }
    while ( v8 != v18 );
  }
  v12 = a1[8];
  v13 = 0;
  v19 = v12;
  sub_69D50(a2);
  if ( v12 )
  {
    do
    {
      v14 = (_QWORD *)(a1[7] + 16 * v13);
      v15 = sub_196E10(v20, v21, *v14) - (_QWORD)v20;
      if ( v15 )
        sub_67AC0(a2, v20, v15);
      v16 = sub_196E10(v20, v21, v14[1]) - (_QWORD)v20;
      if ( v16 )
        sub_67AC0(a2, v20, v16);
      ++v13;
    }
    while ( v13 != v19 );
  }
  return sub_6A9B0(a2, a1[10]);
}
