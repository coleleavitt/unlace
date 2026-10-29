bool __fastcall sub_130620(
        __int64 a1,
        const __m128i *a2,
        __int64 a3,
        _BYTE *a4,
        __int64 a5,
        _BYTE *a6,
        __m128i a7,
        __m128 a8,
        int a9)
{
  _BYTE *v13; // r9
  _BYTE *v14; // rdx
  int v15; // ebp
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  _BYTE *v19; // [rsp+0h] [rbp-48h]
  _BYTE *v20; // [rsp+8h] [rbp-40h]

  if ( *(_DWORD *)a4 == 1 )
    return 0;
  if ( sub_11F430(a4, *(_QWORD *)(a1 + 96), 0) || *(_DWORD *)a6 == 1 || sub_11F430(a6, *(_QWORD *)(a1 + 96), 0) )
    return 0;
  v13 = a6 + 32;
  v14 = a6 + 48;
  v15 = *(_DWORD *)a6;
  if ( *(_DWORD *)a4 != v15 )
  {
    v20 = v14;
    v19 = v13;
    if ( v15 != (unsigned int)sub_32EA00(*(_DWORD *)a4) )
      return 0;
    v13 = v20;
    v14 = v19;
  }
  if ( (a9 & 2) == 0 )
  {
    v17 = *(unsigned int *)a4;
    if ( (unsigned int)v17 <= 0x21 )
    {
      v18 = 0x306385000LL;
      a9 |= 2 * _bittest64(&v18, v17);
    }
  }
  return (unsigned int)sub_130480(a1, a2, a3, a4, a5, (__int64)v13, a7, a8, (__int64)v14, a9) != 0;
}

