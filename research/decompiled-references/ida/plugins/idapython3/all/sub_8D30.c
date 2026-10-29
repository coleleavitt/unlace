_BOOL8 __fastcall sub_8D30(__int64 a1, __int64 a2)
{
  _BOOL4 v2; // r12d
  __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // eax
  size_t v7; // r13
  _BYTE *v8; // rsi
  void *v9; // r15
  __int64 v10; // rax
  void *src; // [rsp+8h] [rbp-50h] BYREF
  size_t n[9]; // [rsp+10h] [rbp-48h] BYREF

  v2 = 0;
  n[1] = __readfsqword(0x28u);
  v3 = (*(__int64 (__fastcall **)(__int64))(qword_24798 + 944))(a2);
  if ( v3 )
  {
    v4 = v3;
    src = nullptr;
    n[0] = 0;
    v5 = (*(__int64 (__fastcall **)(__int64, void **, size_t *))(qword_24798 + 304))(v3, &src, n);
    v2 = v5 >= 0;
    if ( v5 >= 0 )
    {
      v7 = n[0];
      v8 = *(_BYTE **)a1;
      *(_QWORD *)(a1 + 8) = 0;
      v9 = src;
      if ( *(_QWORD *)(a1 + 16) < v7 + 1 )
      {
        v10 = qvector_reserve();
        *(_QWORD *)a1 = v10;
        v8 = (_BYTE *)v10;
      }
      *(_QWORD *)(a1 + 8) = v7 + 1;
      v8[v7] = 0;
      memmove(*(void **)a1, v9, v7);
    }
    (*(void (__fastcall **)(__int64))(qword_24798 + 984))(v4);
  }
  return v2;
}

