__int64 __fastcall sub_1CF5C0(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, double a5, __m128 a6)
{
  char j; // bp
  __int64 *func; // rax
  __int64 *v9; // r12
  int v10; // eax
  char i; // al
  int v12; // ebp
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // rdi
  __int64 v19; // r12
  __int64 v20; // r14
  __int64 v21; // r12
  int v22; // r13d
  __int64 v23; // rdx
  _DWORD *v24; // r14
  __int64 v25; // rdi
  __int64 v26; // r13
  __int64 v27; // r12
  __int64 v29; // rdi
  __int64 v30; // rbp
  __int64 v31; // rbx
  int v32; // [rsp+0h] [rbp-C8h]
  __int64 v33; // [rsp+0h] [rbp-C8h]
  int v36; // [rsp+24h] [rbp-A4h]
  __int64 v37; // [rsp+28h] [rbp-A0h]
  _QWORD v38[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v39; // [rsp+40h] [rbp-88h] BYREF
  __int128 v40; // [rsp+48h] [rbp-80h]
  __int64 v41; // [rsp+60h] [rbp-68h]
  __int64 v42; // [rsp+68h] [rbp-60h]
  __int128 v43; // [rsp+70h] [rbp-58h]
  __int64 v44; // [rsp+80h] [rbp-48h]
  unsigned __int64 v45; // [rsp+88h] [rbp-40h]

  j = 1;
  v45 = __readfsqword(0x28u);
  *a2 = 0;
LABEL_2:
  if ( *(_QWORD *)(a3 + 8) )
  {
LABEL_3:
    func = (__int64 *)get_func();
    *(_QWORD *)(a3 + 8) = func;
    v9 = func;
    if ( !func )
      goto LABEL_45;
    if ( func[1] - *func != 1 )
      goto LABEL_5;
LABEL_50:
    *a2 = 0;
  }
  else
  {
    while ( 1 )
    {
LABEL_45:
      v9 = nullptr;
LABEL_5:
      v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 16LL))(a1, a3);
      *a2 = v10;
      if ( !v10 )
        return 1;
      if ( !*(_QWORD *)(a3 + 8) )
        goto LABEL_50;
      if ( j != 1 || !v9 )
        return 0;
      v44 = -1;
      v41 = 0;
      v42 = 0xFFFFFFFFLL;
      v43 = 0;
      v44 = *v9;
      for ( i = func_tail_iterator_set(); i; i = func_item_iterator_next() )
        sub_373080();
      v12 = v9[2] & 0x10;
      del_frame();
      if ( v12 )
        v9[2] |= 0x10uLL;
      sub_CFF70();
      reanalyze_function();
      if ( !(unsigned __int8)sub_1CF3F0((_QWORD *)(a3 + 8)) )
        goto LABEL_46;
      v44 = *v9;
      for ( j = func_tail_iterator_set(); j; j = func_item_iterator_next() )
        generate_disasm_line();
      if ( !(unsigned __int8)sub_1CF3F0((_QWORD *)(a3 + 8)) )
      {
LABEL_46:
        *a2 = -18;
        goto LABEL_47;
      }
      if ( !*(_QWORD *)(a3 + 8) )
        goto LABEL_47;
      v13 = get_func();
      *(_QWORD *)(a3 + 8) = v13;
      if ( !v13 )
        goto LABEL_47;
      v14 = *(_QWORD *)(a3 + 440);
      v39 = 0;
      v40 = 0;
      v15 = (int)v14;
      v32 = v14;
      if ( (_DWORD)v14 )
      {
        v38[0] = 0;
        v38[1] = 0;
        v16 = qvector_reserve((__int64)&v39, 0, (int)v14, 16);
        v17 = v40;
        v39 = v16;
        v18 = v16;
        if ( (unsigned __int64)v40 < v15 )
        {
          while ( 1 )
          {
            *(_DWORD *)(16 * v17 + v18) = 0;
            copy_argloc();
            if ( v15 == ++v17 )
              break;
            v18 = v39;
          }
        }
        *(_QWORD *)&v40 = v15;
        cleanup_argloc();
        v36 = *(_DWORD *)(a3 + 116);
        v37 = *(_QWORD *)(a3 + 136);
        if ( v32 > 0 )
        {
          v19 = 0;
          v20 = 0;
          v33 = 16 * ((unsigned int)(v32 - 1) + 1LL);
          do
          {
            sub_1C7740(v38, a3, v20 + *(_QWORD *)(a3 + 432), *(unsigned int *)(v20 + *(_QWORD *)(a3 + 432) + 88), 0.0);
            copy_argloc();
            v20 += 104;
            v19 += 16;
            cleanup_argloc();
          }
          while ( v33 != v19 );
        }
        v21 = v37 + v36;
      }
      else
      {
        v21 = *(_QWORD *)(a3 + 136) + *(int *)(a3 + 116);
      }
      v22 = sub_1CF000(a3, a4, 0, nullptr, 0.0, a6);
      *a2 = v22;
      if ( v22 )
        break;
      if ( *(_QWORD *)(a3 + 136) + *(int *)(a3 + 116) != v21 && *(_QWORD *)(a3 + 440) )
      {
        v23 = 0;
        do
        {
          while ( 1 )
          {
            v24 = (_DWORD *)(*(_QWORD *)(a3 + 432) + 104 * v23);
            if ( (unsigned int)(*v24 - 3) > 1 )
              break;
            v23 = ++v22;
            if ( (unsigned __int64)v22 >= *(_QWORD *)(a3 + 440) )
              goto LABEL_38;
          }
          sub_1C6010((__int64)v38, a3, v39 + 16 * v23, (unsigned int)v24[22], 0.0);
          copy_argloc();
          ++v22;
          cleanup_argloc();
          v23 = v22;
        }
        while ( (unsigned __int64)v22 < *(_QWORD *)(a3 + 440) );
      }
LABEL_38:
      v25 = v39;
      if ( v39 )
      {
        v26 = v40;
        if ( (_QWORD)v40 )
        {
          v27 = 0;
          do
          {
            ++v27;
            cleanup_argloc();
            v25 = v39;
          }
          while ( v26 != v27 );
        }
        *(_QWORD *)&v40 = 0;
        qfree(v25);
      }
      if ( !v41 )
        goto LABEL_2;
      lock_func_range();
      if ( *(_QWORD *)(a3 + 8) )
        goto LABEL_3;
    }
    v29 = v39;
    if ( v39 )
    {
      v30 = v40;
      v31 = 0;
      if ( (_QWORD)v40 )
      {
        do
        {
          ++v31;
          cleanup_argloc();
          v29 = v39;
        }
        while ( v30 != v31 );
      }
      *(_QWORD *)&v40 = 0;
      qfree(v29);
    }
LABEL_47:
    if ( v41 )
      lock_func_range();
  }
  return 0;
}

