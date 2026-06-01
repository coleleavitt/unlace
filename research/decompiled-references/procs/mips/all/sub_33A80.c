unsigned __int64 __fastcall sub_33A80(__int64 a1, __int64 a2, unsigned __int8 *a3, _QWORD *a4, __int64 a5, __int64 *a6)
{
  __int64 *v8; // r15
  unsigned __int8 v9; // al
  bool v10; // al
  int v12; // eax
  unsigned int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // r14
  unsigned int v16; // r12d
  unsigned __int8 default_reftype; // al
  __int64 func; // rax
  int v19; // edx
  unsigned int v20; // ebp
  __int64 v21; // rax
  bool v22; // al
  __int64 *v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int64 *v26; // rax
  unsigned int v27; // ebp
  __int64 flags; // rax
  bool v29; // al
  __int64 v30; // r8
  unsigned __int16 v31; // [rsp+Ah] [rbp-226h]
  __int64 v32; // [rsp+20h] [rbp-210h] BYREF
  __int64 v33; // [rsp+28h] [rbp-208h] BYREF
  unsigned __int64 v34; // [rsp+30h] [rbp-200h] BYREF
  __int64 v35; // [rsp+38h] [rbp-1F8h] BYREF
  __int128 v36; // [rsp+40h] [rbp-1F0h]
  _QWORD v37[2]; // [rsp+58h] [rbp-1D8h] BYREF
  __int128 v38; // [rsp+68h] [rbp-1C8h]
  __int64 v39; // [rsp+78h] [rbp-1B8h]
  __int128 v40; // [rsp+88h] [rbp-1A8h] BYREF
  __int64 v41; // [rsp+98h] [rbp-198h]
  __int64 v42; // [rsp+A0h] [rbp-190h]
  __int64 v43; // [rsp+A8h] [rbp-188h]
  char v44; // [rsp+B0h] [rbp-180h] BYREF
  unsigned __int64 v45; // [rsp+1F0h] [rbp-40h] BYREF

  v32 = a5;
  v45 = __readfsqword(0x28u);
  v8 = a6;
  v36 = 0;
  v35 = 0;
  if ( !a6 )
    v8 = &v35;
  v9 = a3[1];
  if ( v9 == 4 )
  {
    func = get_func(*(_QWORD *)(a2 + 16));
    v19 = *((unsigned __int16 *)a3 + 3);
    if ( v19 == 29 || func && (*(_BYTE *)(func + 16) & 0x10) != 0 && v19 == ((*(_BYTE *)(a2 + 33) & 4) == 0 ? 30 : 17) )
    {
      v27 = *a3;
      flags = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
      if ( (unsigned __int8)is_stkvar(flags, v27) )
      {
        v29 = sub_29A40(a2, (__int64)a3, a4);
        v30 = v32;
        v37[0] = 0;
        if ( v29 )
        {
          copy_tinfo_t(v37, a4);
          v30 = v32;
        }
        apply_tinfo_to_stkarg(a2, a3, *((_QWORD *)a3 + 2), v37, v30);
        clear_tinfo_t(v37);
      }
    }
    else
    {
      v20 = *a3;
      v21 = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
      if ( (unsigned __int8)is_off(v21, v20)
        && (unsigned __int8)get_refinfo(v37, *(_QWORD *)(a2 + 16), *a3)
        && (unsigned __int8)calc_reference_data(&v33, 0, *(_QWORD *)(a2 + 16) + (char)a3[2], v37, *((_QWORD *)a3 + 2)) )
      {
        v22 = sub_29A40(a2, (__int64)a3, a4);
        v34 = 0;
        if ( v22 )
          copy_tinfo_t(&v34, a4);
        apply_once_tinfo_and_name(v33, &v34, v32);
        clear_tinfo_t(&v34);
      }
    }
  }
  else if ( v9 > 4u )
  {
    if ( v9 != 5 )
      return v45 - __readfsqword(0x28u);
    if ( (get_tinfo_property(*a4, 2) & 0xF) == 0xA )
    {
      if ( *((_QWORD *)a3 + 1) )
      {
        v12 = *(unsigned __int16 *)(a2 + 24);
        if ( (_WORD)v12 == 204 || (unsigned int)(v12 - 30) <= 3 && *(_BYTE *)(a2 + 81) == 1 && !*(_WORD *)(a2 + 86) )
        {
          v13 = *a3;
          v14 = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
          if ( !(unsigned __int8)is_defarg(v14, v13) )
          {
            v15 = *(_QWORD *)(a2 + 16);
            v16 = *a3;
            default_reftype = get_default_reftype(v15);
            op_offset(v15, v16, default_reftype, -1, 0, 0);
          }
          v37[0] = 0;
          copy_tinfo_t(v37, a4);
          if ( (unsigned __int8)remove_tinfo_pointer(v37, &v32, 0) )
            apply_once_tinfo_and_name(*((_QWORD *)a3 + 1) & *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL), v37, v32);
          clear_tinfo_t(v37);
        }
      }
    }
  }
  else if ( v9 == 1 )
  {
    v31 = *((_WORD *)a3 + 3);
    v23 = (__int64 *)get_func(*(_QWORD *)(a2 + 16));
    if ( v23 )
    {
      v24 = *(_QWORD *)(a2 + 16);
      v37[0] = 0;
      v37[1] = 0xFFFFFFFFLL;
      v39 = -1;
      v25 = v24;
      v38 = 0;
      if ( v24 == -1 )
        v25 = *v23;
      v39 = v25;
      if ( (unsigned __int8)func_tail_iterator_set(v37, v23) )
      {
        v41 = -1;
        v26 = (unsigned __int64 *)&v44;
        v42 = 0;
        v43 = 0;
        v40 = -1;
        do
        {
          *(_WORD *)v26 = 0;
          v26 += 5;
          *((_WORD *)v26 - 19) = 0;
          *((_WORD *)v26 - 18) = 0;
          *((_DWORD *)v26 - 2) = 0;
          *((_WORD *)v26 - 17) = 0;
          *((_OWORD *)v26 - 2) = 0;
          *(v26 - 2) = 0;
        }
        while ( &v45 != v26 );
        while ( (unsigned __int8)func_item_iterator_decode_preceding_insn(v37, v8, &v33, &v40, 0.0) )
        {
          if ( (unsigned __int64)v8[1] > 0x1000 )
            goto LABEL_46;
          if ( !(_BYTE)v33 )
          {
            v34 = 0;
            sub_2AAE0(a1, &v34, (__int64)&v40, -1);
            if ( v31 <= 0x3Fu && (v34 & (1LL << v31)) != 0 )
            {
              sub_337D0(a1, (__int64)&v40, (__int64)a4, v32, v8);
LABEL_46:
              if ( v37[0] )
                lock_func_range(v37[0], 0);
              if ( v35 )
              {
                *(_QWORD *)&v36 = 0;
                qfree(v35);
              }
              return v45 - __readfsqword(0x28u);
            }
          }
        }
        if ( *v23 == v39 )
        {
          add_regarg(v23, v31, a4, v32);
          goto LABEL_46;
        }
        if ( v37[0] )
          lock_func_range(v37[0], 0);
      }
      else if ( v37[0] )
      {
        lock_func_range(v37[0], 0);
      }
    }
  }
  else
  {
    if ( v9 != 2 )
      return v45 - __readfsqword(0x28u);
    v10 = sub_29A40(a2, (__int64)a3, a4);
    v37[0] = 0;
    if ( v10 )
      copy_tinfo_t(v37, a4);
    apply_once_tinfo_and_name(*((_QWORD *)a3 + 2), v37, v32);
    clear_tinfo_t(v37);
  }
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35);
  }
  return v45 - __readfsqword(0x28u);
}
