unsigned __int64 __fastcall sub_374360(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  unsigned __int64 v4; // r13
  _QWORD *v5; // rdx
  unsigned __int64 v6; // rbp
  __int64 v7; // r15
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  _QWORD *v10; // rbp
  __int64 v11; // rbx
  void *v12; // rdi
  __int64 v14; // rdx
  char *v15; // rax
  const char *v16; // r14
  __int64 v17; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v18; // [rsp+18h] [rbp-D0h]
  __int64 v19; // [rsp+90h] [rbp-58h] BYREF
  __int128 v20; // [rsp+98h] [rbp-50h]
  unsigned __int64 v21; // [rsp+A8h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  if ( !a2 )
    goto LABEL_10;
  v2 = *(_QWORD *)(a1 + 1136);
  v3 = *(_QWORD *)(v2 + 24);
  v4 = a2[5];
  v17 = v2 + 8;
  if ( v3 != v2 + 8 )
  {
    do
    {
      v5 = *(_QWORD **)(*(_QWORD *)(a1 + 1128) + 8LL);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v3 + 32);
        v7 = 24;
        v8 = *v5 & 0xFFFFFFFFFFFFFFFCLL;
        if ( !v8 )
          goto LABEL_16;
        if ( (*(_BYTE *)(*v5 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
        {
          do
          {
            v9 = *(_QWORD *)(v8 + 24);
            v7 = v8 + 24;
            if ( v6 >= v9 )
            {
              if ( v9 >= v6 )
              {
                if ( v5 != (_QWORD *)v8 )
                {
LABEL_16:
                  sub_369F00(v8 + 32, v4);
                  if ( v14 )
                  {
                    *(_QWORD *)(operator new(0x28u) + 32) = v4;
                    std::_Rb_tree_insert_and_rebalance();
                    ++*(_QWORD *)(v7 + 48);
                  }
                  if ( *(int *)(v7 + 64) > 1 && (*(_BYTE *)(v7 + 56) & 0x3F) != 0x30 )
                  {
                    get_tinfo_property();
                    if ( (get_tinfo_property() & 0x1F) != 0x12 || !(unsigned __int8)is_mapped() )
                    {
                      if ( (unsigned __int8)get_type_by_tid() )
                        get_tinfo_property();
                      v19 = 0;
                      if ( get_udm_by_tid() == -1 )
                      {
                        v18 = v6;
                        v16 = nullptr;
                        if ( get_ea_name() > 0 )
                        {
                          calc_c_cpp_name();
                          v18 = v6;
                          v16 = nullptr;
                        }
                      }
                      else
                      {
                        v15 = strchr(nullptr, 46);
                        if ( !v15 )
                        {
                          if ( !under_debugger )
                            sub_383060(0xC42Cu, 0.0);
                          BUG();
                        }
                        v18 = v4;
                        v16 = v15 + 1;
                      }
                      clear_tinfo_t();
                      if ( !(unsigned __int8)cleanup_name() || !sub_1D3240(nullptr) )
                      {
                        v20 = 0;
                        v19 = 0;
                        sub_32B7F0(&v19, v7 + 56, v16);
                        sub_3311F0(a2, v18, 9u, v19);
                        if ( v19 )
                        {
                          *(_QWORD *)&v20 = 0;
                          qfree(v19);
                        }
                      }
                      clear_tinfo_t();
                    }
                    clear_tinfo_t();
                  }
                }
                break;
              }
              v8 = *(_QWORD *)(v8 + 16);
            }
            else
            {
              v8 = *(_QWORD *)(v8 + 8);
            }
          }
          while ( (*(_BYTE *)v8 & 2) == 0 );
        }
      }
      v3 = std::_Rb_tree_increment();
    }
    while ( v17 != v3 );
LABEL_10:
    v2 = *(_QWORD *)(a1 + 1136);
    if ( !v2 )
      goto LABEL_12;
  }
  sub_36BBD0(*(_QWORD **)(v2 + 16));
  operator delete((void *)v2, 0x30u);
LABEL_12:
  v10 = *(_QWORD **)(a1 + 1128);
  *(_QWORD *)(a1 + 1136) = 0;
  v11 = v10[11];
  while ( v11 )
  {
    sub_36BBD0(*(_QWORD **)(v11 + 24));
    v12 = (void *)v11;
    v11 = *(_QWORD *)(v11 + 16);
    operator delete(v12, 0x28u);
  }
  v10[11] = 0;
  v10[12] = v10 + 10;
  v10[13] = v10 + 10;
  v10[14] = 0;
  return v21 - __readfsqword(0x28u);
}

