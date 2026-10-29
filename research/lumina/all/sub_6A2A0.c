unsigned __int64 __fastcall sub_6A2A0(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r13
  __int64 v3; // rbp
  size_t v4; // rax
  __int64 v5; // r14
  __int64 v6; // r13
  size_t v7; // rdx
  size_t v8; // rax
  size_t v9; // r14
  size_t v10; // rax
  size_t v11; // rax
  const char *v12; // r14
  __int64 v13; // rbp
  const void *v15; // [rsp+10h] [rbp-58h]
  __int64 v16; // [rsp+18h] [rbp-50h]
  _BYTE v17[5]; // [rsp+23h] [rbp-45h] BYREF
  _QWORD v18[8]; // [rsp+28h] [rbp-40h] BYREF

  v2 = 0;
  v18[0] = __readfsqword(0x28u);
  v3 = a1[3];
  sub_69D50(a2);
  if ( v3 )
  {
    do
    {
      v4 = sub_196CD0(v17, v18) - (_QWORD)v17;
      if ( v4 )
        sub_67AC0(a2, v17, v4);
      ++v2;
    }
    while ( v3 != v2 );
  }
  v5 = a1[6];
  v6 = 0;
  v16 = v5;
  sub_69D50(a2);
  if ( v5 )
  {
    do
    {
      v12 = s1;
      v13 = a1[5] + (v6 << 6);
      if ( *(_QWORD *)(v13 + 8) )
        v12 = *(const char **)v13;
      if ( v12 )
      {
        v7 = strlen(v12) + 1;
      }
      else
      {
        v7 = 1;
        v12 = "";
      }
      sub_67AC0(a2, v12, v7);
      v8 = sub_196CD0(v17, v18) - (_QWORD)v17;
      if ( v8 )
        sub_67AC0(a2, v17, v8);
      v9 = *(_QWORD *)(v13 + 40);
      v15 = *(const void **)(v13 + 32);
      if ( v9 > 0xFFFFFFFF )
      {
        if ( !unk_2439A0 )
          sub_198E10(5);
        BUG();
      }
      v10 = sub_196CD0(v17, v18) - (_QWORD)v17;
      if ( v10 )
        sub_67AC0(a2, v17, v10);
      if ( v9 )
        sub_67AC0(a2, v15, v9);
      v11 = sub_196CD0(v17, v18) - (_QWORD)v17;
      if ( v11 )
        sub_67AC0(a2, v17, v11);
      ++v6;
    }
    while ( v6 != v16 );
  }
  return v18[0] - __readfsqword(0x28u);
}
