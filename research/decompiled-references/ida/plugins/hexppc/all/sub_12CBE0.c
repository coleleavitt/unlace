bool __fastcall sub_12CBE0(__int64 a1, const __m128i *a2, __int64 a3, _BYTE *a4, __int64 a5, _BYTE *a6, int a7)
{
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r9d
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rdi
  int v18; // ebp
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // [rsp+0h] [rbp-48h]
  __int64 v23; // [rsp+8h] [rbp-40h]

  if ( *(_DWORD *)a4 == 1 )
    return 0;
  if ( sub_11B9F0(a4, *(_QWORD *)(a1 + 96), 0, (__int64)a4, a5, (int)a6)
    || *(_DWORD *)a6 == 1
    || sub_11B9F0(a6, *(_QWORD *)(a1 + 96), 0, v12, v13, v14) )
  {
    return 0;
  }
  v15 = (__int64)(a6 + 32);
  v16 = (__int64)(a6 + 48);
  v17 = *(unsigned int *)a4;
  v18 = *(_DWORD *)a6;
  if ( (_DWORD)v17 != v18 )
  {
    v23 = v16;
    v22 = v15;
    if ( v18 != (unsigned int)sub_32A6C0(v17) )
      return 0;
    v15 = v23;
    v16 = v22;
  }
  if ( (a7 & 2) == 0 )
  {
    v20 = *(unsigned int *)a4;
    if ( (unsigned int)v20 <= 0x21 )
    {
      v21 = 0x306385000LL;
      a7 |= 2 * _bittest64(&v21, v20);
    }
  }
  return (unsigned int)sub_12CA40(a1, a2, a3, a4, a5, v15, v16, a7) != 0;
}

