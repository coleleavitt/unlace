void __fastcall std::__introsort_loop<__gnu_cxx::__normal_iterator<char *,std::vector<char>>,long,__gnu_cxx::__ops::_Iter_less_iter>(
        __int64 a1,
        char *a2,
        __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r13
  char *v5; // r12
  __int64 v7; // rsi
  char *v8; // rsi
  char v9; // dl
  char v10; // di
  char v11; // r8
  char *v12; // rbx
  char v13; // cl
  __int16 v14; // ax
  char *v15; // rdi
  char v16; // si
  char *v17; // rax
  __int64 i; // rbx
  char *v19; // rbx
  char v20; // cl
  __int64 v21; // r12

  v3 = (__int64)&a2[-a1];
  v4 = a3;
  v5 = a2;
  if ( (__int64)&a2[-a1] <= 16 )
    return;
  v7 = v3 >> 1;
  if ( !a3 )
    goto LABEL_18;
  do
  {
    v8 = (char *)(a1 + v7);
    v9 = *(_BYTE *)(a1 + 1);
    --v4;
    v10 = *v8;
    v11 = *(v5 - 1);
    v12 = (char *)(a1 + 1);
    v13 = *(_BYTE *)a1;
    v14 = __ROL2__(*(_WORD *)a1, 8);
    if ( v9 >= *v8 )
    {
      if ( v11 > v9 )
      {
        *(_WORD *)a1 = v14;
        goto LABEL_7;
      }
      if ( v11 <= v10 )
      {
LABEL_27:
        *(_BYTE *)a1 = v10;
        *v8 = v13;
        v13 = *(_BYTE *)(a1 + 1);
        v9 = *(_BYTE *)a1;
        goto LABEL_7;
      }
    }
    else
    {
      if ( v11 > v10 )
        goto LABEL_27;
      if ( v11 <= v9 )
      {
        *(_WORD *)a1 = v14;
        goto LABEL_7;
      }
    }
    *(_BYTE *)a1 = v11;
    *(v5 - 1) = v13;
    v13 = *(_BYTE *)(a1 + 1);
    v9 = *(_BYTE *)a1;
LABEL_7:
    v15 = v5;
    while ( 1 )
    {
      for ( ; v13 < v9; ++v12 )
        v13 = v12[1];
      v16 = *(v15 - 1);
      if ( v9 < v16 )
        break;
      if ( v12 >= --v15 )
        goto LABEL_16;
LABEL_14:
      *v12++ = v16;
      *v15 = v13;
      v13 = *v12;
      v9 = *(_BYTE *)a1;
    }
    v17 = v15 - 2;
    do
    {
      v15 = v17;
      v16 = *v17--;
    }
    while ( v16 > v9 );
    if ( v12 < v15 )
      goto LABEL_14;
LABEL_16:
    std::__introsort_loop<__gnu_cxx::__normal_iterator<char *,std::vector<char>>,long,__gnu_cxx::__ops::_Iter_less_iter>(
      v12,
      v5,
      v4);
    v3 = (__int64)&v12[-a1];
    if ( (__int64)&v12[-a1] <= 16 )
      return;
    v5 = v12;
    v7 = v3 >> 1;
  }
  while ( v4 );
LABEL_18:
  for ( i = v7 - 1; ; --i )
  {
    std::__adjust_heap<__gnu_cxx::__normal_iterator<char *,std::vector<char>>,long,char,__gnu_cxx::__ops::_Iter_less_iter>(
      a1,
      i,
      v3,
      *(_BYTE *)(a1 + i));
    if ( !i )
      break;
  }
  v19 = v5 - 1;
  if ( (__int64)&v5[-a1] > 1 )
  {
    do
    {
      v20 = *v19;
      v21 = (__int64)&v19[-a1];
      *v19-- = *(_BYTE *)a1;
      std::__adjust_heap<__gnu_cxx::__normal_iterator<char *,std::vector<char>>,long,char,__gnu_cxx::__ops::_Iter_less_iter>(
        a1,
        0,
        v21,
        v20);
    }
    while ( v21 > 1 );
  }
}

