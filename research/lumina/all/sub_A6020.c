void *__fastcall sub_A6020(__int64 a1, __int64 *a2)
{
  size_t v2; // rax
  size_t v3; // r14
  const void *v4; // rbp
  size_t v5; // rax
  _BYTE v7[5]; // [rsp+3h] [rbp-35h] BYREF
  _QWORD v8[6]; // [rsp+8h] [rbp-30h] BYREF

  v8[0] = __readfsqword(0x28u);
  v2 = sub_196CD0(v7, v8) - (_QWORD)v7;
  if ( v2 )
    sub_9E3C0(a2, v7, v2);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(const void **)(a1 + 16);
  if ( HIDWORD(v3) )
    sub_9CB90();
  v5 = sub_196CD0(v7, v8) - (_QWORD)v7;
  if ( v5 )
    sub_9E3C0(a2, v7, v5);
  if ( v3 )
    return sub_9E3C0(a2, v4, v3);
  else
    return (void *)(v8[0] - __readfsqword(0x28u));
}
