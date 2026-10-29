__int64 *__fastcall sub_54D40(__int64 *a1, int *a2)
{
  __int64 v2; // rax
  unsigned int v3; // ecx
  unsigned __int64 v4; // r9
  _QWORD *v5; // rbx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  _QWORD *v8; // r10
  unsigned __int64 v9; // r14
  _QWORD *v10; // rax
  _QWORD *v11; // r8
  __int64 *v12; // r12
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r14
  _QWORD **v17; // rax
  __int64 v18; // rdx

  v2 = operator new(0x18u);
  v3 = *a2;
  v4 = a1[3];
  *(_QWORD *)v2 = 0;
  v5 = (_QWORD *)v2;
  *(_DWORD *)(v2 + 8) = v3;
  *(_QWORD *)(v2 + 12) = *(_QWORD *)(a2 + 1);
  *(_DWORD *)(v2 + 20) = a2[3];
  if ( v4 )
  {
    v6 = a1[1];
    v7 = v3;
    v8 = *(_QWORD **)(*a1 + 8 * (v3 % v6));
    v9 = v3 % v6;
    if ( v8 )
    {
      v10 = (_QWORD *)*v8;
      if ( v3 != *(_DWORD *)(*v8 + 8LL) )
      {
        do
        {
          v11 = (_QWORD *)*v10;
          if ( !*v10 )
            goto LABEL_14;
          v8 = v10;
          if ( v3 % v6 != *((unsigned int *)v11 + 2) % v6 )
            goto LABEL_14;
          v10 = (_QWORD *)*v10;
        }
        while ( v3 != *((_DWORD *)v11 + 2) );
      }
      if ( v8 )
      {
        v12 = (__int64 *)*v8;
        if ( *v8 )
        {
          if ( !v5 )
            return v12;
LABEL_10:
          operator delete(v5, 0x18u);
          return v12;
        }
      }
    }
  }
  else
  {
    v12 = (__int64 *)a1[2];
    if ( v12 )
    {
      while ( *((_DWORD *)v12 + 2) != v3 )
      {
        v12 = (__int64 *)*v12;
        if ( !v12 )
          goto LABEL_13;
      }
      if ( !v2 )
        return v12;
      goto LABEL_10;
    }
LABEL_13:
    v6 = a1[1];
    v7 = v3;
    v9 = v3 % v6;
  }
LABEL_14:
  if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                          (std::__detail::_Prime_rehash_policy *)(a1 + 4),
                          v6,
                          v4,
                          1u) )
  {
    sub_54940((__int64)a1, v14);
    v9 = v7 % a1[1];
  }
  v15 = *a1;
  v16 = 8 * v9;
  v17 = (_QWORD **)(*a1 + v16);
  if ( *v17 )
  {
    *v5 = **v17;
    **v17 = v5;
  }
  else
  {
    v18 = a1[2];
    a1[2] = (__int64)v5;
    *v5 = v18;
    if ( v18 )
    {
      *(_QWORD *)(v15 + 8 * (*(unsigned int *)(v18 + 8) % (unsigned __int64)a1[1])) = v5;
      v17 = (_QWORD **)(v16 + *a1);
    }
    *v17 = a1 + 2;
  }
  ++a1[3];
  return v5;
}

