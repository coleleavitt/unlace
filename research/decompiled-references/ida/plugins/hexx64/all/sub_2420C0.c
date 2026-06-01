__int64 __fastcall sub_2420C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  char v8; // bp
  unsigned __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 i; // r8
  unsigned __int64 *v12; // rdx
  unsigned __int64 *j; // rsi
  __int64 v14; // rcx
  int tinfo_size; // r15d
  int tinfo_property; // eax
  __int64 result; // rax
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rbx
  const void *v20; // rbp
  void *v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax

  v8 = 0;
  v9 = 0;
  v10 = *(_QWORD *)(a1 + 112);
  for ( i = v10 + 56LL * *(_QWORD *)(a1 + 120); i != v10; v10 += 56 )
  {
    v12 = *(unsigned __int64 **)(v10 + 32);
    for ( j = &v12[*(_QWORD *)(v10 + 40)]; j != v12; v8 |= (unsigned __int8)(v14 - 32) > 0x5Fu )
    {
      while ( 1 )
      {
        v14 = (char)*v12;
        if ( v9 < *v12 )
          v9 = *v12;
        if ( v14 == *v12 )
          break;
        ++v12;
        v8 = 1;
        if ( j == v12 )
          goto LABEL_9;
      }
      ++v12;
    }
LABEL_9:
    ;
  }
  tinfo_size = get_tinfo_size();
  tinfo_property = get_tinfo_property();
  sub_2400B0(a1 + 64, *(_QWORD *)(*(_QWORD *)(a2 + 216) + 112LL), v9, tinfo_size, tinfo_property, a5);
  result = sub_240140(a1 + 72, a2, a3, v9);
  if ( !(_BYTE)result )
  {
    if ( !a4 || (*(_BYTE *)(a4 + 5) & 1) == 0 )
    {
      if ( v8 )
        return result;
      v18 = 0x33333303300000LL;
      return sub_329C80(a1 + 72, v18);
    }
    *(_DWORD *)(a1 + 72) = *(_DWORD *)a4;
    result = *(unsigned __int8 *)(a4 + 4);
    *(_BYTE *)(a1 + 76) = result;
    *(_BYTE *)(a1 + 77) = *(_BYTE *)(a4 + 5);
    *(_BYTE *)(a1 + 78) = *(_BYTE *)(a4 + 6);
    *(_BYTE *)(a1 + 79) = *(_BYTE *)(a4 + 7);
    if ( a1 + 80 != a4 + 8 )
    {
      v19 = *(_QWORD *)(a4 + 16);
      if ( v19 < 2 )
      {
        *(_QWORD *)(a1 + 88) = 0;
      }
      else
      {
        v20 = *(const void **)(a4 + 8);
        v21 = *(void **)(a1 + 80);
        if ( *(_QWORD *)(a1 + 96) < v19 )
        {
          v24 = qvector_reserve(a1 + 80, *(_QWORD *)(a1 + 80), *(_QWORD *)(a4 + 16), 1);
          *(_QWORD *)(a1 + 80) = v24;
          v21 = (void *)v24;
        }
        *(_QWORD *)(a1 + 88) = v19;
        memmove(v21, v20, v19 - 1);
        *(_BYTE *)(*(_QWORD *)(a1 + 80) + v19 - 1) = 0;
        result = *(unsigned __int8 *)(a1 + 76);
      }
    }
    v22 = *(_QWORD *)(a4 + 32);
    *(_QWORD *)(a1 + 104) = v22;
    if ( (_BYTE)result )
    {
      v23 = sub_329C10(v22, *(char *)(a4 + 4), 0);
      *(_BYTE *)(a1 + 76) = 0;
      v18 = v23;
      return sub_329C80(a1 + 72, v18);
    }
  }
  return result;
}

