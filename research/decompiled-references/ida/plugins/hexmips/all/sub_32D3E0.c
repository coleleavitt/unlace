unsigned __int64 __fastcall sub_32D3E0(__int64 *a1)
{
  __int64 v1; // rax
  size_t v2; // r12
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v7; // rax
  _BYTE src[10]; // [rsp+Eh] [rbp-4Ah] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-40h]

  v9 = __readfsqword(0x28u);
  v1 = pack_dq() - (_QWORD)src;
  v2 = v1;
  v3 = v1;
  v4 = a1[1];
  if ( v4 )
  {
    --v4;
    v3 = v1 + v4;
  }
  v5 = *a1;
  if ( a1[2] < (unsigned __int64)(v3 + 1) )
  {
    v7 = qvector_reserve();
    *a1 = v7;
    v5 = v7;
  }
  a1[1] = v3 + 1;
  *(_BYTE *)(v5 + v3) = 0;
  memmove((void *)(v4 + *a1), src, v2);
  return v9 - __readfsqword(0x28u);
}

