unsigned __int64 __fastcall sub_315A0(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  __int64 v9; // rbp
  _DWORD *v10; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  unsigned __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 frame_var; // [rsp+0h] [rbp-68h]
  __int64 v18; // [rsp+18h] [rbp-50h] BYREF
  __int64 v19; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v18 = 0;
  frame_var = get_frame_var(&v18, 0, a1, a2, a4);
  if ( (unsigned __int8)insn_create_stkvar(a1, a2, a4, a5) )
  {
    op_stkvar(*(_QWORD *)(a1 + 16), *a2);
    v9 = get_frame_var(&v18, &v19, a1, a2, a4);
    if ( v9 != -1 && frame_var == -1 )
    {
      v10 = (_DWORD *)*a6;
      if ( *(_DWORD *)*a6 != v19 )
      {
        if ( get_spd(a3, *(_QWORD *)(a1 + 16)) && (v11 = a6[1], v11 > 1) )
        {
          v12 = 1;
          v10 = (_DWORD *)(*a6 + 16);
          while ( *v10 != v19 )
          {
            ++v12;
            v10 += 4;
            if ( v12 == v11 )
              goto LABEL_12;
          }
        }
        else
        {
LABEL_12:
          v14 = a6[3];
          if ( !v14 )
            goto LABEL_11;
          v15 = 0;
          v10 = (_DWORD *)a6[2];
          while ( v19 - *(_QWORD *)(a3 + 32) != *v10 )
          {
            ++v15;
            v10 += 4;
            if ( v15 == v14 )
              goto LABEL_11;
          }
        }
      }
      set_tinfo_property4(&v18, 11, v9, *((_QWORD *)v10 + 1), 0, 0);
    }
  }
LABEL_11:
  clear_tinfo_t(&v18);
  return v20 - __readfsqword(0x28u);
}

