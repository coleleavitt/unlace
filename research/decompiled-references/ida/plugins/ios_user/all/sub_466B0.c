bool __fastcall sub_466B0(__int64 a1, __int64 a2, const void *a3, size_t a4, int a5)
{
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  bool result; // al
  __int64 v10; // rax

  v7 = *(_QWORD *)(a1 + 672) + 32LL * a5;
  if ( (*(_BYTE *)(v7 + 9) & 1) != 0
    || (v8 = *(unsigned __int8 *)(v7 + 13), result = (_BYTE)v8 == 8 || (unsigned __int8)(v8 - 16) <= 1u) )
  {
    if ( *(int *)a2 >= -1 )
    {
      if ( *(_QWORD *)(a2 + 8) )
      {
        *(_QWORD *)(a2 + 16) = 0;
        qfree();
      }
      *(_DWORD *)a2 = -2;
    }
    *(_QWORD *)(a2 + 8) = 0;
    *(_OWORD *)(a2 + 16) = 0;
    if ( a4 )
      sub_3E2B0(a2 + 8, a3, a4);
    *(_DWORD *)a2 = 0;
    return 1;
  }
  if ( (unsigned __int8)v8 <= 0x12u )
  {
    v10 = 294968;
    if ( _bittest64(&v10, v8) )
    {
      if ( *(int *)a2 >= -1 )
      {
        if ( *(_QWORD *)(a2 + 8) )
        {
          *(_QWORD *)(a2 + 16) = 0;
          qfree();
        }
        *(_DWORD *)a2 = -2;
      }
      *(_QWORD *)(a2 + 8) = 0;
      *(_OWORD *)(a2 + 16) = 0;
      if ( a4 )
        sub_3E2B0(a2 + 8, a3, a4);
      *(_DWORD *)a2 = -1;
      return 1;
    }
    result = (_BYTE)v8 == 7 || (unsigned __int8)v8 <= 2u;
    if ( result )
    {
      *(_DWORD *)a2 = -2;
      *(_QWORD *)(a2 + 8) = 0;
      memcpy((void *)(a2 + 8), a3, a4);
      if ( *(int *)(qword_8FB50 + 144LL * *(int *)(a1 + 1176) + 124) > 0 )
        memrev();
      return 1;
    }
  }
  return result;
}

