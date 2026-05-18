__int64 *__fastcall sub_C8FE0(__int64 *a1)
{
  __int64 *v1; // rdx
  __int64 *result; // rax
  __int64 v3; // rcx
  __int64 *v4; // r10
  __int64 v5; // rdi
  __int64 *v6; // rcx
  __int64 **i; // rdi
  __int64 *v8; // rcx
  __int64 v9; // [rsp+0h] [rbp-178h] BYREF
  __int64 *v10; // [rsp+8h] [rbp-170h]
  _QWORD v11[40]; // [rsp+20h] [rbp-158h] BYREF
  _QWORD v12[3]; // [rsp+160h] [rbp-18h] BYREF

  v1 = a1;
  v12[1] = __readfsqword(0x28u);
  result = nullptr;
  memset(v11, 0, sizeof(v11));
  if ( a1 )
  {
    while ( 1 )
    {
      v3 = 0;
      v4 = (__int64 *)v1[1];
      v5 = 1;
      for ( v1[1] = 0; result; v1 = v10 )
      {
        v6 = &v9;
        while ( 1 )
        {
          while ( *result <= *v1 )
          {
            if ( *result < *v1 )
            {
              v6[1] = (__int64)result;
              v6 = result;
            }
            result = (__int64 *)result[1];
            if ( !result )
            {
              v6[1] = (__int64)v1;
              goto LABEL_9;
            }
          }
          v6[1] = (__int64)v1;
          if ( !v1[1] )
            break;
          v6 = v1;
          v1 = (__int64 *)v1[1];
        }
        v1[1] = (__int64)result;
LABEL_9:
        v11[v5 - 1] = 0;
        v3 = (unsigned int)v5++;
        result = (__int64 *)v11[v5 - 1];
      }
      v11[v3] = v1;
      result = (__int64 *)v11[0];
      if ( !v4 )
        break;
      v1 = v4;
    }
    v1 = (__int64 *)v11[1];
  }
  else
  {
    result = nullptr;
  }
  for ( i = (__int64 **)&v11[2]; ; ++i )
  {
    if ( !v1 )
      goto LABEL_25;
    v8 = &v9;
    if ( !result )
      break;
    while ( 1 )
    {
      while ( *result <= *v1 )
      {
        if ( *result < *v1 )
        {
          v8[1] = (__int64)result;
          v8 = result;
        }
        result = (__int64 *)result[1];
        if ( !result )
        {
          v8[1] = (__int64)v1;
          goto LABEL_24;
        }
      }
      v8[1] = (__int64)v1;
      if ( !v1[1] )
        break;
      v8 = v1;
      v1 = (__int64 *)v1[1];
    }
    v1[1] = (__int64)result;
LABEL_24:
    result = v10;
LABEL_25:
    if ( i == v12 )
      return result;
LABEL_26:
    v1 = *i;
  }
  result = v1;
  if ( i != v12 )
    goto LABEL_26;
  return result;
}
