unsigned __int64 *__fastcall sub_380880(__int64 a1, unsigned __int64 a2, int a3, char a4, double a5, __m128 a6)
{
  unsigned __int64 v6; // r15
  _QWORD *v8; // rbx
  __int64 v10; // r14
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 *v13; // r14
  unsigned __int64 *v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 func; // rax
  __int16 flags; // ax
  unsigned __int64 not_tail; // rcx
  __int64 v20; // rdi
  __int64 (*v21)(); // rax
  int v22; // eax
  __int64 v23; // rdx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // [rsp+18h] [rbp-70h] BYREF
  _QWORD v29[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 *v30[11]; // [rsp+30h] [rbp-58h] BYREF

  v6 = a2;
  v8 = *(_QWORD **)(a1 + 8);
  v28 = a2;
  v30[3] = (__int64 *)__readfsqword(0x28u);
  if ( !v8 )
    goto LABEL_7;
  v10 = 24;
  v11 = *v8 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v11 )
  {
LABEL_3:
    if ( (*(_BYTE *)v11 & 2) != 0 )
      goto LABEL_7;
    while ( 1 )
    {
      v12 = *(_QWORD *)(v11 + 24);
      v10 = v11 + 24;
      if ( a2 < v12 )
      {
        v11 = *(_QWORD *)(v11 + 8);
        goto LABEL_3;
      }
      if ( v12 >= a2 )
        break;
      v11 = *(_QWORD *)(v11 + 16);
      if ( (*(_BYTE *)v11 & 2) != 0 )
        goto LABEL_7;
    }
    if ( v8 == (_QWORD *)v11 )
      goto LABEL_7;
  }
  if ( (*(_BYTE *)(v10 + 56) & 0x3F) == 0x30 )
  {
    v8 = (_QWORD *)v11;
  }
  else
  {
    if ( !a4 || sub_32CB80((_BYTE *)(v11 + 80), *(_QWORD *)a1, a5, a6) )
      return (unsigned __int64 *)(v10 + 8);
    v6 = v28;
    v8 = (_QWORD *)v11;
  }
LABEL_7:
  v13 = *(unsigned __int64 **)(a1 + 40);
  if ( !v13 )
    goto LABEL_14;
  v14 = (unsigned __int64 *)(a1 + 32);
  do
  {
    while ( 1 )
    {
      v15 = v13[2];
      v16 = v13[3];
      if ( v13[4] < v6 )
        break;
      v14 = v13;
      v13 = (unsigned __int64 *)v13[2];
      if ( !v15 )
        goto LABEL_12;
    }
    v13 = (unsigned __int64 *)v13[3];
  }
  while ( v16 );
LABEL_12:
  if ( (unsigned __int64 *)(a1 + 32) == v14 || v6 < v14[4] )
  {
LABEL_14:
    v29[0] = 0;
    get_tinfo();
    func = get_func();
    if ( func && *(_QWORD *)func == v28 && *(char *)(func + 16) < 0 )
    {
      v29[1] = -1;
      if ( calc_thunk_func_target() == -1 || !(unsigned __int8)get_tinfo() )
        not_tail = v28;
      else
        not_tail = v28;
    }
    else
    {
      flags = get_flags_ex();
      not_tail = v28;
      if ( (flags & 0x600) == 0x200 )
        not_tail = prev_not_tail();
      if ( v28 != not_tail )
      {
        get_tinfo();
        not_tail = v28;
      }
    }
    v20 = *(_QWORD *)(*(_QWORD *)a1 + 112LL);
    v21 = *(__int64 (**)())(*(_QWORD *)v20 + 152LL);
    if ( v21 != sub_339280 )
    {
      ((void (__fastcall *)(__int64, unsigned __int64, _QWORD *))v21)(v20, not_tail, v29);
      if ( LOBYTE(v29[0]) )
      {
        a3 = 1;
LABEL_42:
        if ( !sub_32CB80(v29, *(_QWORD *)a1, a5, a6) )
        {
          sub_369F00(a1 + 24, v28);
          if ( v27 )
          {
            *(_QWORD *)(operator new(0x28u) + 32) = v28;
            std::_Rb_tree_insert_and_rebalance();
            ++*(_QWORD *)(a1 + 64);
          }
          v30[0] = (_QWORD *)&dword_30;
          copy_tinfo_t();
          clear_tinfo_t();
        }
        v13 = v8 + 4;
        if ( *(_QWORD **)(a1 + 8) == v8 )
        {
          v30[0] = (__int64 *)&v28;
          v13 = sub_37ED50((__m128i *)(a1 + 8), &v28, v30) + 4;
        }
        v25 = v29[0];
        v26 = v13[6];
        *((_DWORD *)v13 + 14) = a3;
        v13[6] = v25;
        v29[0] = v26;
        clear_tinfo_t();
        return v13;
      }
      not_tail = v28;
    }
    sub_338B00(not_tail);
    if ( LOBYTE(v29[0]) )
    {
      a3 = 1;
    }
    else
    {
      if ( a3 == 3 )
        v22 = guess_tinfo();
      else
        v22 = sub_338DC0(*(_QWORD *)a1, v28, v29);
      if ( v22 )
      {
        sub_369F00(a1 + 72, v28);
        if ( v23 )
        {
          *(_QWORD *)(operator new(0x28u) + 32) = v28;
          std::_Rb_tree_insert_and_rebalance();
          ++*(_QWORD *)(a1 + 112);
        }
      }
      else
      {
        v30[0] = (_QWORD *)&dword_30;
        copy_tinfo_t();
        clear_tinfo_t();
      }
      if ( a3 <= 1 )
        a3 = 3;
    }
    goto LABEL_42;
  }
  return v13;
}

