__int64 __fastcall sub_35BC10(__int64 a1, int a2)
{
  __int64 v3; // r13
  __int64 v4; // r15
  __int64 v5; // r12
  unsigned __int64 v6; // rbp
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rbp
  void *v11; // rax
  __int64 nsec_stamp; // rbp
  unsigned int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // r15
  __int64 v17; // r13
  __int64 v18; // r12
  _QWORD *v19; // rbp
  time_t v21; // rax
  __int64 v22; // rdi
  const char *v23; // rsi
  const char *v24; // [rsp+10h] [rbp-C8h] BYREF
  __int128 v25; // [rsp+18h] [rbp-C0h]
  __int64 v26; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v27; // [rsp+38h] [rbp-A0h]
  __int64 v28; // [rsp+48h] [rbp-90h]
  __int64 v29; // [rsp+50h] [rbp-88h] BYREF
  __int128 v30; // [rsp+58h] [rbp-80h]
  __int64 v31; // [rsp+68h] [rbp-70h]
  __int128 v32; // [rsp+70h] [rbp-68h]
  __int64 v33; // [rsp+80h] [rbp-58h]
  __int128 v34; // [rsp+88h] [rbp-50h]
  unsigned __int64 v35; // [rsp+98h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 56)
    && ((v3 = *(_QWORD *)(*(_QWORD *)a1 + 800LL), !a2) || time(nullptr) - *(_QWORD *)(a1 + 88) >= a2) )
  {
    v4 = *(_QWORD *)(a1 + 40);
    v5 = a1 + 24;
    v26 = 0;
    v28 = -1;
    v27 = 0;
    if ( v4 == a1 + 24 )
      goto LABEL_34;
    do
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(v4 + 32);
        v7 = sub_35B370(v3 + 8, v6);
        if ( v7 < 0 )
        {
          if ( !under_debugger )
            sub_37DDE0(51837);
          BUG();
        }
        if ( *(_DWORD *)(*(_QWORD *)(v3 + 184) + 120LL * v7 + 100) == 1 )
          break;
        v4 = std::_Rb_tree_increment();
        if ( v4 == v5 )
          goto LABEL_11;
      }
      v8 = v27;
      v9 = v26;
      if ( *((_QWORD *)&v27 + 1) < (unsigned __int64)(v27 + 1) )
      {
        v26 = qvector_reserve();
        v9 = v26;
        v8 = v27;
      }
      *(_QWORD *)(v9 + 8 * v8) = v6;
      *(_QWORD *)&v27 = v27 + 1;
      v10 = std::_Rb_tree_increment();
      v11 = (void *)std::_Rb_tree_rebalance_for_erase();
      v4 = v10;
      operator delete(v11, 0x28u);
      --*(_QWORD *)(a1 + 56);
    }
    while ( v10 != v5 );
LABEL_11:
    if ( !(_QWORD)v27 )
    {
LABEL_34:
      v13 = 1;
    }
    else
    {
      v24 = nullptr;
      v29 = 0;
      v31 = 0;
      v33 = 0;
      v25 = 0;
      v30 = 0;
      v32 = 0;
      v34 = 0;
      nsec_stamp = get_nsec_stamp();
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64 *, const char **, __int64 (__fastcall *)(__int64, unsigned __int64 *), _QWORD))(**(_QWORD **)(a1 + 8) + 80LL))(
              *(_QWORD *)(a1 + 8),
              &v29,
              &v26,
              &v24,
              sub_35B410,
              0);
      if ( (_BYTE)v13 )
      {
        *(_DWORD *)(a1 + 100) += v27;
      }
      else
      {
        v23 = s1;
        if ( (_QWORD)v25 )
          v23 = v24;
        sub_68D20((__int64)"lumina: pushing metadata failed: %s\n", v23);
      }
      v14 = get_nsec_stamp();
      v15 = v33;
      *(_QWORD *)(a1 + 80) = v14 + *(_QWORD *)(a1 + 80) - nsec_stamp;
      if ( v15 )
      {
        v16 = v34;
        if ( (_QWORD)v34 )
        {
          v17 = 0;
          v18 = 0;
          do
          {
            v19 = (_QWORD *)(v15 + v17);
            if ( *(_QWORD *)(v15 + v17 + 64) )
            {
              v19[9] = 0;
              qfree();
            }
            if ( v19[4] )
            {
              v19[5] = 0;
              qfree();
            }
            if ( *v19 )
            {
              v19[1] = 0;
              qfree();
            }
            ++v18;
            v15 = v33;
            v17 += 88;
          }
          while ( v16 != v18 );
        }
        *(_QWORD *)&v34 = 0;
        qfree();
      }
      if ( v31 )
      {
        *(_QWORD *)&v32 = 0;
        qfree();
      }
      if ( v29 )
      {
        *(_QWORD *)&v30 = 0;
        qfree();
      }
      if ( v24 )
      {
        *(_QWORD *)&v25 = 0;
        qfree();
      }
    }
    v21 = time(nullptr);
    v22 = v26;
    *(_QWORD *)(a1 + 88) = v21;
    if ( v22 )
    {
      *(_QWORD *)&v27 = 0;
      qfree();
    }
  }
  else
  {
    return 1;
  }
  return v13;
}

