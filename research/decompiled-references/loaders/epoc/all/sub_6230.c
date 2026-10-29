__int64 __fastcall sub_6230(_QWORD *a1, char *a2, size_t a3)
{
  unsigned int v5; // ebp
  char *v7; // rax
  char *i; // rsi
  int v9; // eax
  __int64 v10; // rdx
  int v11; // ecx
  size_t v12; // r14
  void *v13; // rdi

  v5 = 0;
  v7 = (char *)a1[4];
  for ( i = (char *)a1[3];
        ;
        *(__m128i *)(a1 + 3) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)i, (__m128i)(unsigned __int64)v7) )
  {
    v10 = v7 - i;
    v11 = (_DWORD)v7 - (_DWORD)i;
    if ( a3 < (int)v7 - (int)i )
      break;
    a3 -= v10;
    if ( v10 && a2 )
    {
      v12 = a3;
      a3 = v7 - i;
      goto LABEL_11;
    }
LABEL_4:
    a1[3] = v7;
    v5 += v11;
    if ( !a3 )
      return v5;
    v9 = sub_6060((__int64)a1);
    if ( !v9 )
      return v5;
    i = (char *)a1[6];
    v7 = &i[v9];
  }
  if ( a3 && a2 )
  {
    v12 = 0;
LABEL_11:
    v13 = a2;
    a2 += a3;
    memmove(v13, i, a3);
    v11 = a3;
    v7 = (char *)(a3 + a1[3]);
    a3 = v12;
    goto LABEL_4;
  }
  v5 += a3;
  a1[3] = &i[a3];
  return v5;
}
