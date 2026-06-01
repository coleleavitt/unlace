unsigned __int64 __fastcall sub_32CE60(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  size_t v3; // rax
  size_t v4; // r12
  size_t v5; // r14
  __int64 v6; // rsi
  __int64 v8; // rax
  _BYTE src[10]; // [rsp+Eh] [rbp-4Ah] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  v1 = pack_dq();
  v2 = a1[1];
  v3 = v1 - (_QWORD)src;
  v4 = v3;
  v5 = v3;
  if ( v2 )
  {
    --v2;
    v5 = v3 + v2;
  }
  v6 = *a1;
  if ( a1[2] < v5 + 1 )
  {
    v8 = qvector_reserve();
    *a1 = v8;
    v6 = v8;
  }
  a1[1] = v5 + 1;
  *(_BYTE *)(v6 + v5) = 0;
  memmove((void *)(v2 + *a1), src, v4);
  return v10 - __readfsqword(0x28u);
}

