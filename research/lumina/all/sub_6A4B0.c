unsigned __int64 __fastcall sub_6A4B0(__int64 a1, __int64 *a2)
{
  __int64 v2; // r15
  __int64 v3; // r12
  size_t v4; // rdx
  size_t v5; // rax
  size_t v6; // r15
  size_t v7; // rax
  size_t v8; // rax
  size_t v9; // r15
  size_t v10; // rax
  size_t v11; // rax
  const char *v12; // r15
  __int64 v13; // rbp
  const void *v15; // [rsp+8h] [rbp-60h]
  const void *v16; // [rsp+8h] [rbp-60h]
  __int64 v17; // [rsp+10h] [rbp-58h]
  _BYTE v18[5]; // [rsp+23h] [rbp-45h] BYREF
  _QWORD v19[8]; // [rsp+28h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v19[0] = __readfsqword(0x28u);
  v17 = v2;
  sub_69D50(a2);
  if ( v2 )
  {
    v3 = 0;
    do
    {
      v12 = s1;
      v13 = *(_QWORD *)(a1 + 16) + 96 * v3;
      if ( *(_QWORD *)(v13 + 8) )
        v12 = *(const char **)v13;
      if ( v12 )
      {
        v4 = strlen(v12) + 1;
      }
      else
      {
        v4 = 1;
        v12 = "";
      }
      sub_67AC0(a2, v12, v4);
      v5 = sub_196CD0(v18, v19) - (_QWORD)v18;
      if ( v5 )
        sub_67AC0(a2, v18, v5);
      v6 = *(_QWORD *)(v13 + 40);
      v15 = *(const void **)(v13 + 32);
      if ( v6 > 0xFFFFFFFF )
        goto LABEL_26;
      v7 = sub_196CD0(v18, v19) - (_QWORD)v18;
      if ( v7 )
        sub_67AC0(a2, v18, v7);
      if ( v6 )
        sub_67AC0(a2, v15, v6);
      v8 = sub_196CD0(v18, v19) - (_QWORD)v18;
      if ( v8 )
        sub_67AC0(a2, v18, v8);
      v9 = *(_QWORD *)(v13 + 72);
      v16 = *(const void **)(v13 + 64);
      if ( v9 > 0xFFFFFFFF )
      {
LABEL_26:
        if ( !unk_2439A0 )
          sub_198E10(5);
        BUG();
      }
      v10 = sub_196CD0(v18, v19) - (_QWORD)v18;
      if ( v10 )
        sub_67AC0(a2, v18, v10);
      if ( v9 )
        sub_67AC0(a2, v16, v9);
      v11 = sub_196CD0(v18, v19) - (_QWORD)v18;
      if ( v11 )
        sub_67AC0(a2, v18, v11);
      ++v3;
    }
    while ( v17 != v3 );
  }
  return v19[0] - __readfsqword(0x28u);
}
