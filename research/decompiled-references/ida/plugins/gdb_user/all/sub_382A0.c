unsigned __int64 __fastcall sub_382A0(__int64 a1, __int64 *a2)
{
  size_t v2; // rbp
  const void *v3; // r14
  __int64 v4; // r13
  void *v6; // rdi
  __int64 v7; // [rsp+0h] [rbp-48h]
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  if ( !a2 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(const void **)(a1 + 24);
  v7 = 0;
  v4 = 0;
  if ( v2 )
  {
    v6 = nullptr;
    if ( v2 != -1 )
    {
      v7 = qvector_reserve();
      v6 = (void *)v7;
    }
    memmove(v6, v3, v2);
    *(_BYTE *)(v7 + v2) = 0;
    v4 = v7;
    ++v2;
  }
  if ( *a2 )
  {
    a2[1] = 0;
    qfree();
  }
  *a2 = v4;
  a2[1] = v2;
  a2[2] = 0;
  return v8 - __readfsqword(0x28u);
}

