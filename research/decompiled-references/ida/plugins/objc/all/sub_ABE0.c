__int64 __fastcall sub_ABE0(__int64 a1, int a2, int *a3)
{
  unsigned int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rbp
  int *v8; // rax
  int v9; // eax
  unsigned int (__fastcall *v10)(__int64, __int64 (__fastcall ***)(), __int64, _QWORD); // rax
  void (__fastcall *v11)(__int64, __int64, __int64, _QWORD); // rax
  _QWORD *v12; // rcx
  void (__fastcall *hexdsp)(__int64, __int64 (__fastcall ***)(), __int64, _QWORD); // rax
  void (__fastcall *v14)(__int64, __int64, _QWORD, _QWORD); // rax
  __int64 (__fastcall **v15)(); // [rsp+0h] [rbp-98h] BYREF
  int v16; // [rsp+8h] [rbp-90h]
  __int64 v17; // [rsp+10h] [rbp-88h]
  __int128 v18; // [rsp+18h] [rbp-80h]
  __int64 v19; // [rsp+28h] [rbp-70h]
  __int128 v20; // [rsp+30h] [rbp-68h]
  __int64 v21; // [rsp+40h] [rbp-58h]
  char v22; // [rsp+48h] [rbp-50h]
  char v23; // [rsp+60h] [rbp-38h]
  unsigned __int64 v24; // [rsp+68h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  if ( a2 != 10 || !*(_QWORD *)(a1 + 1808) || (*(_BYTE *)(a1 + 1824) & 4) == 0 )
    return 0;
  v4 = *a3;
  if ( (unsigned int)*a3 > 0x2F )
  {
    v12 = (_QWORD *)*((_QWORD *)a3 + 1);
    v8 = (int *)(v12 + 1);
    *((_QWORD *)a3 + 1) = v12 + 1;
    v7 = *v12;
  }
  else
  {
    v5 = *((_QWORD *)a3 + 2);
    v6 = v4 + 8;
    *a3 = v6;
    v7 = *(_QWORD *)(v5 + v4);
    if ( (unsigned int)v6 <= 0x2F )
    {
      v8 = (int *)(v6 + v5);
      *a3 = v4 + 16;
      goto LABEL_8;
    }
    v8 = (int *)*((_QWORD *)a3 + 1);
  }
  *((_QWORD *)a3 + 1) = v8 + 2;
LABEL_8:
  v9 = *v8;
  if ( v9 > 7 )
  {
    if ( v9 == 8 )
    {
      v21 = a1;
      v22 = 0;
      v16 = 0;
      v18 = 0;
      v17 = 0;
      v19 = 0;
      v15 = off_3C920;
      v20 = 0;
      hexdsp = (void (__fastcall *)(__int64, __int64 (__fastcall ***)(), __int64, _QWORD))get_hexdsp();
      hexdsp(456, &v15, v7 + 16, 0);
      if ( v22 )
      {
        v14 = (void (__fastcall *)(__int64, __int64, _QWORD, _QWORD))get_hexdsp();
        v14(535, v7, 0, 0);
      }
      v15 = off_3BCB8;
      if ( v19 )
      {
        *(_QWORD *)&v20 = 0;
        qfree();
      }
      if ( v17 )
        goto LABEL_17;
    }
  }
  else if ( v9 > 5 )
  {
    sub_2BCE0(&v15, a1);
    do
      v10 = (unsigned int (__fastcall *)(__int64, __int64 (__fastcall ***)(), __int64, _QWORD))get_hexdsp();
    while ( v10(456, &v15, v7 + 16, 0) );
    if ( v23 )
    {
      v11 = (void (__fastcall *)(__int64, __int64, __int64, _QWORD))get_hexdsp();
      v11(535, v7, 1, 0);
    }
    v15 = (__int64 (__fastcall **)())&off_3C8E0;
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
    v15 = off_3BCB8;
    if ( v19 )
    {
      *(_QWORD *)&v20 = 0;
      qfree();
    }
    if ( v17 )
    {
LABEL_17:
      *(_QWORD *)&v18 = 0;
      qfree();
    }
  }
  return 0;
}
