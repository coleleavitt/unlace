__int64 __fastcall sub_3FF40(__int64 a1, _DWORD *a2)
{
  __int64 **v3; // rdi
  __int64 (__fastcall *v4)(__int64, int *); // rax
  int *v5; // rax
  _DWORD *v6; // rdi
  __int64 (*v7)(void); // rax
  unsigned int v8; // r12d
  __int64 **v9; // rdi
  __int64 (__fastcall *v10)(__int64, signed int *); // rax
  unsigned int *v11; // rax
  unsigned int v12; // r8d
  unsigned int v13; // ebx
  int v14; // r12d
  __int64 **v15; // rdi
  __int64 (__fastcall *v16)(__int64, unsigned int *); // rax
  unsigned int *v17; // rax
  __int64 **v18; // rdi
  __int64 (__fastcall *v19)(__int64, signed int *); // rax
  signed int *v20; // rax
  __int64 v21; // r12
  int v23; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v24; // [rsp+4h] [rbp-34h] BYREF
  signed int v25; // [rsp+8h] [rbp-30h] BYREF
  int v26; // [rsp+Ch] [rbp-2Ch] BYREF
  __int64 v27[5]; // [rsp+10h] [rbp-28h] BYREF

  v3 = *(__int64 ***)(a1 + 24);
  v27[1] = __readfsqword(0x28u);
  v23 = 0;
  v4 = (__int64 (__fastcall *)(__int64, int *))(*v3)[16];
  if ( v4 == sub_2DD20 )
  {
    v5 = (int *)sub_2CEC0(v3[2], (__int64)&stru_10000, 0x400u, 0x4000000);
    if ( v5 )
      v23 = *v5;
  }
  else if ( (int)v4((__int64)v3, &v23) < 0 )
  {
    return 0;
  }
  v6 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 104LL);
  v7 = *(__int64 (**)(void))(*(_QWORD *)v6 + 112LL);
  if ( (char *)v7 == (char *)sub_23F30 )
    v8 = v6[4];
  else
    v8 = v7();
  if ( v23 != 3 )
  {
    if ( v23 == 5 )
    {
      v9 = *(__int64 ***)(a1 + 24);
      v25 = 0;
      v10 = (__int64 (__fastcall *)(__int64, signed int *))(*v9)[20];
      if ( v10 == sub_2DD50 )
      {
        v11 = (unsigned int *)sub_2CEC0(v9[2], 0x20000, 0x400u, 0x4000000);
        if ( v11 )
        {
          v12 = *v11;
          v25 = *v11;
          goto LABEL_11;
        }
      }
      else if ( !(unsigned int)v10((__int64)v9, &v25) )
      {
        v12 = v25;
LABEL_11:
        v13 = sub_3FE60(**(_QWORD **)(a1 + 16), &v26, v27, v8, v12);
        if ( (_BYTE)v13 )
        {
          v14 = v26;
          cleanup_argloc(a2);
          *a2 = 3;
          a2[2] = v14;
        }
        return v13;
      }
    }
    return 0;
  }
  v15 = *(__int64 ***)(a1 + 24);
  v24 = 0;
  v16 = (__int64 (__fastcall *)(__int64, unsigned int *))(*v15)[20];
  if ( v16 == sub_2DD50 )
  {
    v17 = (unsigned int *)sub_2CEC0(v15[2], 0x20000, 0x400u, 0x4000000);
    if ( !v17 )
      return 0;
    v24 = *v17;
  }
  else if ( (unsigned int)v16((__int64)v15, &v24) )
  {
    return 0;
  }
  v18 = *(__int64 ***)(a1 + 24);
  v19 = (__int64 (__fastcall *)(__int64, signed int *))(*v18)[19];
  if ( v19 == sub_2D130 )
  {
    v20 = (signed int *)sub_2CEC0(v18[2], 0x20000000, 0x20000000u, 0x20000000);
    if ( !v20 )
      return 0;
    v25 = *v20;
  }
  else if ( (unsigned int)v19((__int64)v18, &v25) )
  {
    return 0;
  }
  v13 = sub_3FE60(**(_QWORD **)(a1 + 16), &v26, v27, v8, v24);
  if ( (_BYTE)v13 )
  {
    v21 = operator new(0x10u);
    *(_DWORD *)(v21 + 8) = v26;
    *(_QWORD *)v21 = v25;
    cleanup_argloc(a2);
    if ( v21 )
    {
      *a2 = 5;
      *((_QWORD *)a2 + 1) = v21;
    }
  }
  return v13;
}
