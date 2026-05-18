unsigned __int64 __fastcall sub_61240(__int64 a1, __int64 *a2)
{
  size_t v2; // rax
  __int64 v3; // r13
  size_t v4; // rax
  __int64 v5; // rbx
  size_t v6; // rdx
  const char *v7; // r15
  __int64 v8; // rax
  _BYTE v10[5]; // [rsp+3h] [rbp-45h] BYREF
  _QWORD v11[8]; // [rsp+8h] [rbp-40h] BYREF

  v11[0] = __readfsqword(0x28u);
  v2 = sub_196CD0(v10, v11) - (_QWORD)v10;
  if ( v2 )
    sub_5F5C0(a2, v10, v2);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = sub_196CD0(v10, v11) - (_QWORD)v10;
  if ( v4 )
    sub_5F5C0(a2, v10, v4);
  v5 = 0;
  if ( v3 )
  {
    do
    {
      v7 = s1;
      v8 = *(_QWORD *)(a1 + 16) + 24 * v5;
      if ( *(_QWORD *)(v8 + 8) )
        v7 = *(const char **)v8;
      if ( v7 )
      {
        v6 = strlen(v7) + 1;
      }
      else
      {
        v6 = 1;
        v7 = "";
      }
      ++v5;
      sub_5F5C0(a2, v7, v6);
    }
    while ( v3 != v5 );
  }
  return v11[0] - __readfsqword(0x28u);
}
