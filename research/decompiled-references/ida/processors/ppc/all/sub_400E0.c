__int64 __fastcall sub_400E0(__int64 a1, _QWORD *a2, unsigned __int8 *a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  unsigned __int8 v8; // al
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 result; // rax
  __int64 v14; // rdi
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // ebx
  __int64 flags; // rax
  __int64 v21; // rbx
  unsigned int v22; // r12d
  unsigned __int8 default_reftype; // al
  __int64 v24; // rdi
  unsigned __int8 v25; // [rsp+8h] [rbp-90h]
  __int64 *func; // [rsp+18h] [rbp-80h]
  char v27; // [rsp+2Bh] [rbp-6Dh] BYREF
  unsigned int v28; // [rsp+2Ch] [rbp-6Ch] BYREF
  _QWORD v29[2]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v30; // [rsp+40h] [rbp-58h]
  __int64 v31; // [rsp+50h] [rbp-48h]
  unsigned __int64 v32; // [rsp+58h] [rbp-40h]

  v8 = a3[1];
  v32 = __readfsqword(0x28u);
  if ( v8 == 4 )
    return apply_tinfo_to_stkarg(a2, a3, *((_QWORD *)a3 + 2), a4, a5);
  if ( v8 > 4u )
  {
    if ( v8 == 5 && (get_tinfo_property(*a4, 2) & 0xF) == 0xA )
    {
      if ( *((_QWORD *)a3 + 1) )
      {
        v19 = *a3;
        flags = get_flags_ex(a2[2], 0);
        if ( !(unsigned __int8)is_defarg(flags, v19) )
        {
          v21 = a2[2];
          v22 = *a3;
          default_reftype = get_default_reftype(v21);
          return op_offset(v21, v22, default_reftype, -1, 0, 0);
        }
      }
    }
    return 0;
  }
  if ( v8 == 1 )
  {
    v14 = a2[2];
    v28 = *((unsigned __int16 *)a3 + 3);
    func = (__int64 *)get_func(v14);
    if ( func )
    {
      v16 = a2[2];
      v29[0] = 0;
      v29[1] = 0xFFFFFFFFLL;
      v31 = -1;
      v17 = v16;
      v30 = 0;
      if ( v16 == -1 )
        v17 = *func;
      v31 = v17;
      if ( (unsigned __int8)func_tail_iterator_set(v29, func, v16, func) )
      {
        while ( (unsigned __int8)func_item_iterator_decode_preceding_insn(v29, a6, &v27, a2) )
        {
          if ( *(_QWORD *)(a6 + 8) > 0x1000u )
            goto LABEL_29;
          if ( !v27 )
          {
            v18 = sub_3F060(a1, (__int64)a2, (int *)&v28, 1);
            if ( v18 == -2 )
              goto LABEL_29;
            if ( v18 >= 0 )
            {
              result = sub_40420(a1, a2, a4, a5, a6);
              if ( v29[0] )
              {
                v25 = result;
                lock_func_range(v29[0], 0);
                return v25;
              }
              return result;
            }
          }
        }
      }
      if ( *func == v31 )
      {
        add_regarg(func, v28, a4, a5);
        v24 = v29[0];
        if ( !v29[0] )
          return 0;
      }
      else
      {
LABEL_29:
        v24 = v29[0];
        if ( !v29[0] )
          return 0;
      }
      lock_func_range(v24, 0);
    }
    return 0;
  }
  if ( v8 != 2 )
    return 0;
  v11 = *((_QWORD *)a3 + 2) + 16LL * *a2;
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
  if ( v11 != v12 )
  {
    v12 &= v11;
    if ( v11 == -1 )
      v12 = -1;
  }
  return apply_once_tinfo_and_name(v12, a4, a5);
}

