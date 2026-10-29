void __fastcall std::__adjust_heap<__gnu_cxx::__normal_iterator<char *,std::vector<char>>,long,char,__gnu_cxx::__ops::_Iter_less_iter>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4)
{
  __int64 v4; // r8
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r9
  _BYTE *v10; // rdx
  char v11; // cl
  __int64 v12; // rcx
  char v13; // si

  v4 = a2;
  v7 = (__int64)(((unsigned __int64)(a3 - 1) >> 63) + a3 - 1) >> 1;
  if ( a2 >= v7 )
  {
    v10 = (_BYTE *)(a1 + a2);
    if ( (a3 & 1) != 0 || a2 != (a3 - 2) >> 1 )
      goto LABEL_13;
    v8 = a2;
    goto LABEL_15;
  }
  while ( 1 )
  {
    v8 = 2 * a2 + 2;
    v9 = 2 * a2 + 1;
    v10 = (_BYTE *)(a1 + v8);
    v11 = *(_BYTE *)(a1 + v8);
    if ( *(char *)(a1 + v9) > v11 )
    {
      v11 = *(_BYTE *)(a1 + v9);
      v8 = 2 * a2 + 1;
      v10 = (_BYTE *)(a1 + v9);
    }
    *(_BYTE *)(a1 + a2) = v11;
    if ( v7 <= v8 )
      break;
    a2 = v8;
  }
  if ( (a3 & 1) == 0 && (a3 - 2) >> 1 == v8 )
  {
LABEL_15:
    v8 = 2 * v8 + 1;
    *v10 = *(_BYTE *)(a1 + v8);
    v10 = (_BYTE *)(a1 + v8);
  }
  v12 = (__int64)(v8 + ((unsigned __int64)(v8 - 1) >> 63) - 1) >> 1;
  if ( v8 > v4 )
  {
    while ( 1 )
    {
      v10 = (_BYTE *)(a1 + v8);
      v13 = *(_BYTE *)(a1 + v12);
      if ( v13 >= a4 )
        break;
      *v10 = v13;
      v8 = v12;
      if ( v4 >= v12 )
      {
        *(_BYTE *)(a1 + v12) = a4;
        return;
      }
      v12 = (__int64)(((unsigned __int64)(v12 - 1) >> 63) + v12 - 1) >> 1;
    }
  }
LABEL_13:
  *v10 = a4;
}

