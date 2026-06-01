unsigned __int64 __fastcall sub_1BC60(_QWORD *a1)
{
  __int64 *v2; // rdi
  __int64 v3; // rax
  void (*v4)(); // rdx
  __int64 *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 i; // rbx
  _QWORD *v9; // rdi
  __int64 v10; // rdi
  void (*v11)(); // rax
  __int64 v12; // rdi
  char **v13; // rbx
  __int64 v15; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  v2 = (__int64 *)a1[134];
  if ( v2 )
  {
    v3 = *v2;
    v4 = *(void (**)())(*v2 + 152);
    if ( v4 != nullsub_10 )
    {
      ((void (__fastcall *)(__int64 *, __int64))v4)(v2, 1);
      v2 = (__int64 *)a1[134];
      v3 = *v2;
    }
    v5 = &v15;
    if ( (*(unsigned int (__fastcall **)(__int64 *, __int64 *, unsigned __int64 *))(v3 + 32))(v2, &v15, &v16) )
    {
      for ( i = 0; i < v16; ++i )
      {
        while ( 1 )
        {
          v9 = (_QWORD *)a1[130];
          v5 = (__int64 *)(v15 + 72 * i);
          if ( v9 == (_QWORD *)(a1[132] - 72LL) )
            break;
          *v9 = 0xFFFFFFFFLL;
          ++i;
          v9[1] = -1;
          v9[2] = 0;
          copy_debug_event();
          a1[130] += 72LL;
          if ( i >= v16 )
            goto LABEL_10;
        }
        sub_1B9A0((__int64)(a1 + 124));
      }
LABEL_10:
      qfree();
    }
    v10 = a1[134];
    v11 = *(void (**)())(*(_QWORD *)v10 + 152LL);
    if ( v11 != nullsub_10 )
    {
      v5 = nullptr;
      ((void (__fastcall *)(__int64, _QWORD))v11)(v10, 0);
    }
    sub_15EB0(0, (__int64)v5, v6, v7);
    v12 = a1[134];
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    a1[134] = 0;
  }
  a1[1951] = 0;
  v13 = &off_71060;
  do
  {
    if ( *((_BYTE *)v13 + 9) != 0xFF )
      sub_12D00((__int64)a1, (__int64)v13);
    v13 += 4;
  }
  while ( v13 != &off_711C0 );
  return v17 - __readfsqword(0x28u);
}

