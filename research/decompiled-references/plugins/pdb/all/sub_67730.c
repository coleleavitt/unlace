__int64 *__fastcall sub_67730(__int64 *a1, const void **a2)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r14
  __int64 **v7; // rax
  __int64 *v8; // rbp
  __int64 *v10; // rax
  const void *v11; // rax
  unsigned __int64 v12; // rdx
  char *v13; // r13
  __int64 v14; // r14
  char *v15; // rax
  __int64 *v16; // rdx
  unsigned __int64 v17; // r15
  size_t v18; // r14
  _QWORD *v19; // r10
  _QWORD *v20; // rsi
  unsigned __int64 v21; // r9
  _QWORD *v22; // rcx
  unsigned __int64 v23; // rdx
  char *v24; // rax
  __int64 v25; // rdx

  v3 = std::_Hash_bytes(*a2, *((_QWORD *)*a2 - 3), 0xC70F6907);
  v4 = a1[1];
  v5 = v3;
  v6 = v3 % v4;
  v7 = (__int64 **)sub_5F4C0(*a1, v4, v3 % v4, *a2, v3);
  if ( !v7 || (v8 = *v7) == nullptr )
  {
    v10 = (__int64 *)operator new(0x20u);
    *v10 = 0;
    v8 = v10;
    v11 = *a2;
    *((_DWORD *)v8 + 4) = 0;
    v8[1] = (__int64)v11;
    *a2 = &std::string::_Rep::_S_empty_rep_storage[3];
    if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                            (std::__detail::_Prime_rehash_policy *)(a1 + 4),
                            a1[1],
                            a1[3],
                            1u) )
    {
      v17 = v12;
      if ( v12 == 1 )
      {
        v19 = a1 + 6;
        a1[6] = 0;
        v13 = (char *)(a1 + 6);
      }
      else
      {
        if ( v12 >> 60 )
        {
          if ( v12 >> 61 )
            sub_23D63();
          std::__throw_bad_alloc();
        }
        v18 = 8 * v12;
        v13 = (char *)operator new(8 * v12);
        memset(v13, 0, v18);
        v19 = a1 + 6;
      }
      v20 = (_QWORD *)a1[2];
      a1[2] = 0;
      v21 = 0;
      while ( v20 )
      {
        while ( 1 )
        {
          v22 = v20;
          v20 = (_QWORD *)*v20;
          v23 = v22[3] % v17;
          v24 = &v13[8 * v23];
          if ( !*(_QWORD *)v24 )
            break;
          *v22 = **(_QWORD **)v24;
          **(_QWORD **)v24 = v22;
          if ( !v20 )
            goto LABEL_16;
        }
        *v22 = a1[2];
        a1[2] = (__int64)v22;
        *(_QWORD *)v24 = a1 + 2;
        if ( *v22 )
          *(_QWORD *)&v13[8 * v21] = v22;
        v21 = v23;
      }
LABEL_16:
      if ( (_QWORD *)*a1 != v19 )
        operator delete((void *)*a1, 8 * a1[1]);
      a1[1] = v17;
      *a1 = (__int64)v13;
      v6 = v5 % v17;
    }
    else
    {
      v13 = (char *)*a1;
    }
    v14 = 8 * v6;
    v8[3] = v5;
    v15 = &v13[v14];
    v16 = *(__int64 **)&v13[v14];
    if ( v16 )
    {
      *v8 = *v16;
      **(_QWORD **)v15 = v8;
    }
    else
    {
      v25 = a1[2];
      a1[2] = (__int64)v8;
      *v8 = v25;
      if ( v25 )
      {
        *(_QWORD *)&v13[8 * (*(_QWORD *)(v25 + 24) % (unsigned __int64)a1[1])] = v8;
        v15 = (char *)(v14 + *a1);
      }
      *(_QWORD *)v15 = a1 + 2;
    }
    ++a1[3];
  }
  return v8 + 2;
}
