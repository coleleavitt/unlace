unsigned __int8 *__fastcall std::string::operator=(__int64 a1, unsigned __int8 **a2)
{
  unsigned __int8 *v3; // rdi
  size_t v5; // rdx
  unsigned __int8 *v6; // rsi
  unsigned __int8 *result; // rax
  unsigned __int8 *v8; // r9
  unsigned __int8 *v9; // rdi
  unsigned __int8 *v10; // rdx
  __int64 v11; // rdi
  unsigned __int8 *v12; // rdi
  __int64 *v13; // [rsp+0h] [rbp-18h]
  unsigned __int8 **v14; // [rsp+8h] [rbp-10h]

  v3 = *(unsigned __int8 **)a1;
  v5 = (size_t)a2[1];
  v6 = *a2;
  result = (unsigned __int8 *)(a2 + 2);
  if ( v3 == (unsigned __int8 *)(a1 + 16) )
  {
    if ( result != v6 )
    {
      *(_QWORD *)a1 = v6;
      v9 = (unsigned __int8 *)(a2 + 2);
      *(_QWORD *)(a1 + 8) = v5;
      *(_QWORD *)(a1 + 16) = a2[2];
LABEL_8:
      *a2 = v9;
      a2[1] = nullptr;
      *v9 = 0;
      return result;
    }
  }
  else if ( result != v6 )
  {
    *(_QWORD *)a1 = v6;
    v8 = *(unsigned __int8 **)(a1 + 16);
    *(_QWORD *)(a1 + 8) = v5;
    *(_QWORD *)(a1 + 16) = a2[2];
    if ( v3 )
    {
      *a2 = v3;
      a2[2] = v8;
LABEL_5:
      a2[1] = nullptr;
      *v3 = 0;
      return result;
    }
    v9 = (unsigned __int8 *)(a2 + 2);
    goto LABEL_8;
  }
  if ( (unsigned __int8 **)a1 == a2 )
  {
    v3 = v6;
    goto LABEL_5;
  }
  if ( !v5 )
  {
LABEL_11:
    *(_QWORD *)(a1 + 8) = v5;
    v3[v5] = 0;
    v3 = *a2;
    goto LABEL_5;
  }
  if ( v5 == 1 )
  {
    result = (unsigned __int8 *)*v6;
    *v3 = (unsigned __int8)result;
    v5 = (size_t)a2[1];
    v3 = *(unsigned __int8 **)a1;
    goto LABEL_11;
  }
  v14 = a2;
  v13 = (__int64 *)a1;
  result = (unsigned __int8 *)memcpy(v3, v6, v5);
  v10 = v14[1];
  v11 = *v13;
  v13[1] = (__int64)v10;
  v10[v11] = 0;
  v12 = *v14;
  v14[1] = nullptr;
  *v12 = 0;
  return result;
}

