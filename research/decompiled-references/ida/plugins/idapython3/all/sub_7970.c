__int64 __fastcall sub_7970(__int64 *a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  int v5; // edx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  size_t v15; // r12
  __int64 v16; // rsi
  void *v17; // r14
  __int64 v18; // rax
  void *src; // [rsp+8h] [rbp-40h] BYREF
  size_t n[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = *a1;
  n[1] = __readfsqword(0x28u);
  v5 = (*(__int64 (__fastcall **)(_QWORD))(qword_24798 + 928))(*(_QWORD *)(v3 + 8));
  result = 0xFFFFFFFFLL;
  if ( (v5 & 0x10000000) != 0 )
  {
    v7 = a3[1];
    v8 = *a1;
    v9 = *a3;
    if ( a3[2] < (unsigned __int64)(v7 + 1) )
    {
      v14 = qvector_reserve();
      v7 = a3[1];
      *a3 = v14;
      v9 = v14;
    }
    v10 = v9 + 24 * v7;
    *(_QWORD *)v10 = 0;
    v11 = qword_24798;
    *(_OWORD *)(v10 + 8) = 0;
    ++a3[1];
    v12 = (*(__int64 (__fastcall **)(__int64))(v11 + 944))(v8);
    v13 = v12;
    if ( v12 )
    {
      src = nullptr;
      n[0] = 0;
      if ( (*(int (__fastcall **)(__int64, void **, size_t *))(qword_24798 + 304))(v12, &src, n) >= 0 )
      {
        v15 = n[0];
        v16 = *(_QWORD *)v10;
        *(_QWORD *)(v10 + 8) = 0;
        v17 = src;
        if ( *(_QWORD *)(v10 + 16) < v15 + 1 )
        {
          v18 = qvector_reserve();
          *(_QWORD *)v10 = v18;
          v16 = v18;
        }
        *(_QWORD *)(v10 + 8) = v15 + 1;
        *(_BYTE *)(v16 + v15) = 0;
        memmove(*(void **)v10, v17, v15);
      }
      (*(void (__fastcall **)(__int64))(qword_24798 + 984))(v13);
    }
    return 1;
  }
  return result;
}

