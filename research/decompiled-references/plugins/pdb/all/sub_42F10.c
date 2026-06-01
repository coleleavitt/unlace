__int64 *__fastcall sub_42F10(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 (__fastcall *v5)(__int64); // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 **v9; // rdi
  __int64 (__fastcall *v10)(__int64, unsigned int *); // rax
  unsigned int *v11; // rax
  unsigned int v12; // esi
  __int64 v13; // r12
  __int64 v14; // rdi
  __int64 v15; // r14
  __int64 v16; // rbx
  void (**v17)(void); // rax
  void (****v18)(void); // rcx
  void (***v19)(void); // rdx
  unsigned int v22; // [rsp+Ch] [rbp-6Ch] BYREF
  _QWORD v23[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v24; // [rsp+20h] [rbp-58h]
  __int128 v25; // [rsp+28h] [rbp-50h]
  __int64 v26; // [rsp+38h] [rbp-40h]
  unsigned __int64 v27; // [rsp+48h] [rbp-30h]

  v3 = *(_QWORD *)a2;
  v27 = __readfsqword(0x28u);
  v5 = *(__int64 (__fastcall **)(__int64))(v3 + 56);
  if ( v5 == sub_24300 )
    v6 = **(_QWORD **)(a2 + 24);
  else
    v6 = v5(a2);
  if ( v6 == -1 )
  {
    v13 = 0;
    goto LABEL_23;
  }
  v7 = *(_QWORD *)(a2 + 16);
  v23[1] = 0;
  v23[0] = off_AA248;
  v8 = *(_QWORD *)(v7 + 104);
  v26 = v7;
  v24 = 0;
  v25 = 0;
  if ( !(*(unsigned int (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD *))(*(_QWORD *)v8 + 56LL))(
          v8,
          v6,
          1,
          5,
          v23)
    && (_QWORD)v25 )
  {
    v22 = 0;
    v9 = *(__int64 ***)(*(_QWORD *)v24 + 24LL);
    v10 = (__int64 (__fastcall *)(__int64, unsigned int *))(*v9)[22];
    if ( v10 == sub_2DEA0 )
    {
      v11 = (unsigned int *)sub_2CEC0(v9[2], 0x80000, 0x400u, 0x4000000);
      if ( v11 )
      {
        v12 = *v11;
        v22 = *v11;
LABEL_9:
        v13 = sub_42E60(*(_QWORD *)(a2 + 16), v12);
        goto LABEL_11;
      }
    }
    else if ( !(unsigned int)v10((__int64)v9, &v22) )
    {
      v12 = v22;
      goto LABEL_9;
    }
  }
  v13 = 0;
LABEL_11:
  v14 = v24;
  v23[0] = off_AA248;
  if ( v24 )
  {
    v15 = v25;
    if ( (_QWORD)v25 )
    {
      v16 = 0;
      while ( 1 )
      {
        v18 = (void (****)(void))(v14 + 8 * v16);
        v19 = *v18;
        if ( !*v18 )
          goto LABEL_17;
        if ( (*((_DWORD *)v19 + 2))-- != 1 )
          goto LABEL_20;
        v17 = **v18;
        if ( (char *)*v17 != (char *)sub_241E0 )
        {
          (*v17)();
          v14 = v24;
          goto LABEL_21;
        }
        if ( *v18 )
        {
          v17[20]();
          v14 = v24;
LABEL_17:
          if ( v15 == ++v16 )
            break;
        }
        else
        {
LABEL_20:
          v14 = v24;
LABEL_21:
          if ( v15 == ++v16 )
            break;
        }
      }
    }
    *(_QWORD *)&v25 = 0;
    qfree(v14);
  }
LABEL_23:
  *a1 = v13;
  return a1;
}
