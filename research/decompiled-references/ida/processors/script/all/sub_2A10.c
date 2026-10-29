unsigned __int64 __fastcall sub_2A10(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  __int64 v3; // rdi
  const char *v5; // [rsp+0h] [rbp-98h] BYREF
  __int128 v6; // [rsp+8h] [rbp-90h]
  char v7[8]; // [rsp+20h] [rbp-78h] BYREF
  __int128 v8; // [rsp+28h] [rbp-70h]
  __int64 v9; // [rsp+38h] [rbp-60h]
  char v10; // [rsp+40h] [rbp-58h]
  __int128 v11; // [rsp+48h] [rbp-50h]
  __int64 v12; // [rsp+58h] [rbp-40h]
  unsigned __int64 v13; // [rsp+68h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v6 = 0;
  v7[0] = 2;
  v10 = 2;
  v5 = nullptr;
  v9 = 0;
  v12 = 0;
  v8 = 0;
  v11 = 0;
  if ( !(unsigned __int8)sub_4F10("ida_ua.outctx_t", a1, v7, &v5) )
  {
    sub_26C0(&v5, "asm_out_func_footer");
    free_idcv();
    free_idcv();
    if ( !v5 )
      return v13 - __readfsqword(0x28u);
    goto LABEL_5;
  }
  v2 = *a2;
  free_idcv();
  v3 = *(_QWORD *)(a1 + 616);
  v10 = 2;
  *(_QWORD *)&v11 = v2;
  if ( !(unsigned __int8)sub_4D20(v3 + 792, "asm_out_func_footer", &v5, 2, v7, 0) )
    sub_26C0(&v5, "asm_out_func_footer");
  free_idcv();
  free_idcv();
  if ( v5 )
  {
LABEL_5:
    *(_QWORD *)&v6 = 0;
    qfree();
  }
  return v13 - __readfsqword(0x28u);
}

