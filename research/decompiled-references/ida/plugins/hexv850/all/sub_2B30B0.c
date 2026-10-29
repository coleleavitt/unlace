unsigned __int64 __fastcall sub_2B30B0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 v4; // rsi
  size_t v5; // r12
  __int64 v6; // rbp
  void *v7; // r15
  size_t v8; // r13
  __int64 v9; // rsi
  __int64 v11; // rax
  void *src; // [rsp+0h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-50h]
  unsigned __int64 v14; // [rsp+18h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 8);
  v14 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 24);
  *(_OWORD *)n = 0;
  src = nullptr;
  sub_2B2EA0((__int64 *)&src, v4, v2);
  v5 = n[0];
  v6 = a2[1];
  v7 = src;
  v8 = n[0];
  if ( v6 )
  {
    --v6;
    v8 = n[0] + v6;
  }
  v9 = *a2;
  if ( a2[2] < v8 + 1 )
  {
    v11 = qvector_reserve();
    *a2 = v11;
    v9 = v11;
  }
  a2[1] = v8 + 1;
  *(_BYTE *)(v9 + v8) = 0;
  memmove((void *)(v6 + *a2), v7, v5);
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  return v14 - __readfsqword(0x28u);
}

