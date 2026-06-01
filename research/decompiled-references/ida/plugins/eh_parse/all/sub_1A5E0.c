__int64 __fastcall sub_1A5E0(__int64 a1)
{
  __int64 fchunk; // rax
  __int64 v3; // rdi
  bool v4; // dl
  __int64 v5; // rax
  _QWORD *v6; // rsi
  __int64 v7; // r13
  _QWORD *v8; // r12
  _QWORD *v9; // rbx
  __int64 func; // rax
  __int64 v12; // [rsp+10h] [rbp-58h] BYREF
  int v13; // [rsp+18h] [rbp-50h]
  __int64 v14; // [rsp+20h] [rbp-48h] BYREF
  __int128 v15; // [rsp+28h] [rbp-40h]
  unsigned __int64 v16; // [rsp+38h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  fchunk = get_fchunk(a1);
  if ( !fchunk )
    return 1;
  if ( *(char *)(fchunk + 17) < 0 )
  {
    v14 = 0;
    v12 = 0;
    v15 = 0;
    func_parent_iterator_set(&v12, fchunk);
    v3 = v12;
    v13 = 0;
    v4 = 0;
    if ( v12 && *(char *)(v12 + 17) < 0 )
      v4 = *(_DWORD *)(v12 + 32) > 0;
    v5 = v15;
    v6 = (_QWORD *)v14;
    if ( v4 )
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(*(_QWORD *)(v3 + 40) + 8LL * v13);
        if ( *((_QWORD *)&v15 + 1) < (unsigned __int64)(v5 + 1) )
        {
          v14 = qvector_reserve(&v14, v6, v5 + 1, 8);
          v6 = (_QWORD *)v14;
          v5 = v15;
        }
        v6[v5] = v7;
        v3 = v12;
        v5 = v15 + 1;
        *(_QWORD *)&v15 = v15 + 1;
        if ( v13 + 1 >= *(_DWORD *)(v12 + 32) )
          break;
        ++v13;
        v6 = (_QWORD *)v14;
      }
      v6 = (_QWORD *)v14;
    }
    v8 = &v6[v5];
    v9 = v6;
    if ( v8 != v6 )
    {
      do
      {
        func = get_func(*v9);
        if ( func )
          remove_func_tail(func, a1);
        ++v9;
      }
      while ( v8 != v9 );
      v3 = v12;
    }
    if ( v3 )
      lock_func_range(v3, 0);
    if ( v14 )
    {
      *(_QWORD *)&v15 = 0;
      qfree(v14);
    }
    return 1;
  }
  return 0;
}

