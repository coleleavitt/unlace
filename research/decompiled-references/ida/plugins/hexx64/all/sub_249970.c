__int64 __fastcall sub_249970(_QWORD *a1, __int64 a2, unsigned int a3, _BYTE *a4, double a5)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v10; // rsi
  __int64 v11; // [rsp+0h] [rbp-48h] BYREF
  __int128 v12; // [rsp+8h] [rbp-40h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  sub_1CFD50(a1, a2, a5);
  if ( !*a4 )
  {
    v10 = a1[188];
    if ( a3 == -1 )
      a3 = *(_DWORD *)(v10 + 80);
    sub_32C430(&v11, v10, a3, 2);
    copy_tinfo_t();
    clear_tinfo_t();
  }
  v11 = 0;
  v12 = 0;
  sub_6B870(&v11);
  v7 = sub_2426C0(1);
  *(_DWORD *)(v7 + 56) |= 0x82u;
  v8 = v7;
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(v11);
  }
  return v8;
}

