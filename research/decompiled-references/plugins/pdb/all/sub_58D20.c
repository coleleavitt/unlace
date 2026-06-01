_QWORD *__fastcall sub_58D20(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4, unsigned __int64 a5)
{
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r12
  size_t v11; // r15
  char *v12; // r14
  __int64 v13; // r10
  _QWORD *v14; // rsi
  unsigned __int64 v15; // r9
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rdx
  char *v18; // rdi
  _QWORD *v19; // rax

  if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                          (std::__detail::_Prime_rehash_policy *)(a1 + 32),
                          *(_QWORD *)(a1 + 8),
                          *(_QWORD *)(a1 + 24),
                          a5) )
  {
    v10 = v9;
    if ( v9 == 1 )
    {
      v13 = a1 + 48;
      *(_QWORD *)(a1 + 48) = 0;
      v12 = (char *)(a1 + 48);
    }
    else
    {
      if ( v9 >> 60 )
      {
        if ( v9 >> 61 )
          sub_23D63();
        std::__throw_bad_alloc();
      }
      v11 = 8 * v9;
      v12 = (char *)operator new(8 * v9);
      memset(v12, 0, v11);
      v13 = a1 + 48;
    }
    v14 = *(_QWORD **)(a1 + 16);
    *(_QWORD *)(a1 + 16) = 0;
    v15 = 0;
    while ( v14 )
    {
      while ( 1 )
      {
        v16 = v14;
        v14 = (_QWORD *)*v14;
        v17 = v16[3] % v10;
        v18 = &v12[8 * v17];
        if ( !*(_QWORD *)v18 )
          break;
        *v16 = **(_QWORD **)v18;
        **(_QWORD **)v18 = v16;
        if ( !v14 )
          goto LABEL_9;
      }
      *v16 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = v16;
      *(_QWORD *)v18 = a1 + 16;
      if ( *v16 )
        *(_QWORD *)&v12[8 * v15] = v16;
      v15 = v17;
    }
LABEL_9:
    if ( *(_QWORD *)a1 != v13 )
      operator delete(*(void **)a1, 8LL * *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 8) = v10;
    *(_QWORD *)a1 = v12;
    a2 = a3 % v10;
  }
  a4[3] = a3;
  v19 = *(_QWORD **)(*(_QWORD *)a1 + 8 * a2);
  if ( v19 )
  {
    *a4 = *v19;
    **(_QWORD **)(*(_QWORD *)a1 + 8 * a2) = a4;
  }
  else
  {
    *a4 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 16) = a4;
    if ( *a4 )
      *(_QWORD *)(*(_QWORD *)a1 + 8LL * (*(_QWORD *)(*a4 + 24LL) % *(_QWORD *)(a1 + 8))) = a4;
    *(_QWORD *)(*(_QWORD *)a1 + 8 * a2) = a1 + 16;
  }
  ++*(_QWORD *)(a1 + 24);
  return a4;
}
