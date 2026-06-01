__int64 __fastcall sub_244D70(_QWORD *a1, __int64 a2, unsigned int a3, _BYTE *a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v9; // rsi
  __int64 v10; // [rsp+0h] [rbp-48h] BYREF
  __int128 v11; // [rsp+8h] [rbp-40h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  sub_1CB6D0(a1, a2);
  if ( !*a4 )
  {
    v9 = a1[188];
    if ( a3 == -1 )
      a3 = *(_DWORD *)(v9 + 80);
    sub_327180(&v10, v9, a3, 2);
    copy_tinfo_t();
    clear_tinfo_t();
  }
  v10 = 0;
  v11 = 0;
  sub_674F0(&v10);
  v6 = sub_23DAC0(1);
  *(_DWORD *)(v6 + 56) |= 0x82u;
  v7 = v6;
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree();
  }
  return v7;
}

