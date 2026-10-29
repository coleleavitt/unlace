unsigned __int64 __fastcall sub_1FE40(__int64 a1, __int64 *a2)
{
  unsigned int *v2; // rax
  __int64 v3; // r12
  unsigned int v4; // eax
  unsigned int v6; // ecx
  __int64 v7; // r13
  __int64 v8; // rax
  bool v9; // zf
  unsigned int v10; // ecx
  __int64 v11; // r12
  __int64 v12; // rax
  char v13; // [rsp+Eh] [rbp-5Ah] BYREF
  char v14; // [rsp+Fh] [rbp-59h] BYREF
  __int64 v15; // [rsp+10h] [rbp-58h] BYREF
  __int64 v16; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v17; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]
  unsigned __int64 v19; // [rsp+38h] [rbp-30h]

  v2 = *(unsigned int **)a1;
  v3 = *a2;
  v19 = __readfsqword(0x28u);
  v4 = *v2;
  if ( (v4 & 1) == 0 )
  {
    if ( (v4 & 2) == 0 )
      return v19 - __readfsqword(0x28u);
    goto LABEL_12;
  }
  if ( (unsigned __int8)xrefblk_t_first_to(&v17, v3, 1) )
  {
    do
    {
      while ( !(unsigned __int8)sub_1FD30((__int64)&v17, **(_DWORD **)a1) || !sub_1FD90(v17, v6) )
      {
        if ( !(unsigned __int8)xrefblk_t_next_to(&v17) )
          goto LABEL_11;
      }
      v7 = *(_QWORD *)(a1 + 8);
      v8 = sub_1AB20(v17);
      v9 = *(_QWORD *)(v7 + 16) == 0;
      v13 = 1;
      v15 = v8;
      if ( v9 )
LABEL_19:
        std::__throw_bad_function_call();
      (*(void (__fastcall **)(__int64, __int64 *, unsigned __int64 *, char *))(v7 + 24))(v7, &v15, &v17, &v13);
    }
    while ( (unsigned __int8)xrefblk_t_next_to(&v17) );
  }
LABEL_11:
  if ( (**(_DWORD **)a1 & 2) != 0 )
  {
LABEL_12:
    if ( (unsigned __int8)xrefblk_t_first_from(&v17, v3, 1) )
    {
      while ( 1 )
      {
        if ( (unsigned __int8)sub_1FD30((__int64)&v17, **(_DWORD **)a1) && sub_1FD90(v18, v10) )
        {
          v11 = *(_QWORD *)(a1 + 8);
          v12 = sub_1AB20(v18);
          v9 = *(_QWORD *)(v11 + 16) == 0;
          v14 = 0;
          v16 = v12;
          if ( v9 )
            goto LABEL_19;
          (*(void (__fastcall **)(__int64, __int64 *, unsigned __int64 *, char *))(v11 + 24))(v11, &v16, &v17, &v14);
        }
        if ( !(unsigned __int8)xrefblk_t_next_from(&v17) )
          return v19 - __readfsqword(0x28u);
      }
    }
  }
  return v19 - __readfsqword(0x28u);
}
