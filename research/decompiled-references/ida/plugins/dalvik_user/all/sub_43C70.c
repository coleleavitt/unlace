unsigned __int64 __fastcall sub_43C70(__int64 *a1, char a2, __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v5; // rdi
  _BYTE *v6; // rdx
  _BYTE *v7; // rcx
  _BYTE *v8; // r12
  _BYTE *v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rax

  result = a1[1];
  if ( a3 + 1 < result )
  {
    v5 = *a1;
    v6 = (_BYTE *)(v5 + a3);
    v7 = (_BYTE *)(v5 + result - 1);
    if ( v6 < v7 )
    {
      while ( *(v7 - 1) == a2 )
      {
        if ( v6 == --v7 )
          goto LABEL_3;
      }
      v8 = &v7[-v5];
      if ( v7 == (_BYTE *)v5 )
        goto LABEL_4;
    }
    else
    {
LABEL_3:
      v8 = &v7[-v5];
      if ( v7 == (_BYTE *)v5 )
      {
LABEL_4:
        if ( v5 )
        {
          a1[1] = 0;
          result = qfree();
          *a1 = 0;
          a1[2] = 0;
        }
        return result;
      }
    }
    v9 = v8 + 1;
    if ( result < (unsigned __int64)(v8 + 1) )
    {
      if ( a1[2] < (unsigned __int64)v9 )
      {
        v11 = qvector_reserve();
        *a1 = v11;
        v5 = v11;
        result = a1[1];
      }
      result = (unsigned __int64)memset((void *)(result + v5), 0, (size_t)&v9[-result]);
      v10 = *a1;
      a1[1] = (__int64)v9;
      v7 = &v8[v10];
    }
    else if ( (_BYTE *)result != v8 + 1 )
    {
      a1[1] = (__int64)v9;
    }
    *v7 = 0;
  }
  return result;
}

