__int64 __fastcall std::vector<idc_value_t>::_M_realloc_append<idc_value_t const&>(__int64 *a1)
{
  char *v1; // rbp
  char *v2; // r14
  __int64 v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rbx
  char *v11; // r13
  __int64 v12; // rbx
  char *v13; // r12
  __int64 v15; // [rsp+0h] [rbp-48h]
  __int64 v16; // [rsp+8h] [rbp-40h]

  v1 = (char *)a1[1];
  v2 = (char *)*a1;
  v3 = (__int64)&v1[-*a1];
  v4 = v3 >> 5;
  if ( v3 >> 5 == 0x3FFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::_M_realloc_append");
  v5 = 1;
  if ( v4 )
    v5 = (a1[1] - *a1) >> 5;
  v6 = v4 + v5;
  if ( v6 > 0x3FFFFFFFFFFFFFFLL )
    v6 = 0x3FFFFFFFFFFFFFFLL;
  v16 = 32 * v6;
  v7 = operator new(32 * v6);
  v8 = v7 + v3;
  v15 = v7;
  v9 = v7;
  *(_BYTE *)v8 = 2;
  *(_QWORD *)(v8 + 24) = 0;
  *(_OWORD *)(v8 + 8) = 0;
  copy_idcv();
  if ( v1 == v2 )
  {
    v12 = v15 + 32;
  }
  else
  {
    v10 = v9;
    v11 = v2;
    while ( 1 )
    {
      *(_BYTE *)v10 = 2;
      *(_QWORD *)(v10 + 24) = 0;
      *(_OWORD *)(v10 + 8) = 0;
      copy_idcv();
      v11 += 32;
      if ( v1 == v11 )
        break;
      v10 += 32;
    }
    v12 = v10 + 64;
    v13 = v2;
    do
    {
      v13 += 32;
      free_idcv();
    }
    while ( v1 != v13 );
  }
  if ( v2 )
    operator delete(v2, a1[2] - (_QWORD)v2);
  a1[1] = v12;
  *a1 = v15;
  a1[2] = v15 + v16;
  return v15;
}

