__int64 __fastcall sub_7CE0(_QWORD *a1, const __m128i *a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 v7; // rcx
  const __m128i *v9; // rdi
  unsigned int *v10; // r13
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx

  v7 = 18 * a4;
  v9 = (const __m128i *)((char *)a2 + a3);
  v10 = (unsigned __int32 *)((char *)a2->m128i_u32 + v7);
  if ( a4 > 0xE38E38E
    || a2 >= v9
    || a2 >= (const __m128i *)v10
    || (v11 = a3 - v7, v12 = v11, v10 >= (unsigned int *)v9)
    || v11 <= 3 )
  {
    __printf_chk(1, "Bad file (integer overflow)\n");
    a1[2] = 0;
    return 0;
  }
  sub_6020(a1, a2, a4, a5);
  v14 = a1[8];
  if ( !v14 )
    return 0;
  v15 = 0;
  while ( 1 )
  {
    v16 = a1[7] + 24 * v15;
    if ( !*(_DWORD *)v16 )
      break;
    v15 += *(unsigned __int8 *)(v16 + 23) + 1LL;
    if ( v15 >= v14 )
      return 1;
  }
  a1[2] = 0;
  if ( v12 == 4 )
    return 0;
  return sub_5580(a1, v10, v12, a5);
}

