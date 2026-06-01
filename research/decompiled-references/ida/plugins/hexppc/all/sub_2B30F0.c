unsigned __int64 __fastcall sub_2B30F0(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // r14
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // [rsp+40h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  serialize_tinfo();
  sub_32DD20(a1, 0);
  v1 = a1[1];
  v2 = 0;
  if ( v1 )
    v2 = --v1;
  v3 = *a1;
  if ( a1[2] < (unsigned __int64)(v2 + 1) )
  {
    v8 = qvector_reserve();
    *a1 = v8;
    v3 = v8;
  }
  a1[1] = v2 + 1;
  *(_BYTE *)(v3 + v2) = 0;
  memmove((void *)(v1 + *a1), nullptr, 0);
  sub_32DD20(a1, 0);
  v4 = a1[1];
  v5 = 0;
  if ( v4 )
    v5 = --v4;
  v6 = *a1;
  if ( a1[2] < (unsigned __int64)(v5 + 1) )
  {
    v9 = qvector_reserve();
    *a1 = v9;
    v6 = v9;
  }
  a1[1] = v5 + 1;
  *(_BYTE *)(v6 + v5) = 0;
  memmove((void *)(v4 + *a1), nullptr, 0);
  return v10 - __readfsqword(0x28u);
}

