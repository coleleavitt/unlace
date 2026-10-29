__int64 __fastcall sub_6980(int a1, void (__fastcall ***a2)(__int64, __int64, __int16 *))
{
  void (__fastcall **v2)(__int64, __int64, __int16 *); // rax
  _QWORD *v4; // r12
  void (__fastcall **v5)(__int64, __int64, _QWORD **); // rax
  __int64 *v6; // rdx
  void (__fastcall *v7)(__int64, __int64, __int16 *); // rax
  __int64 *v9; // rsi
  __int16 v10; // [rsp+Eh] [rbp-3Ah] BYREF
  _QWORD *v11; // [rsp+10h] [rbp-38h] BYREF
  __int128 v12; // [rsp+18h] [rbp-30h]
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v2 = *a2;
  v13 = __readfsqword(0x28u);
  v4 = (_QWORD *)((__int64 (__fastcall *)(void (__fastcall ***)(__int64, __int64, __int16 *)))v2[9])(a2);
  (**a2)((__int64)a2, 1, &v10);
  (*a2)[2]((__int64)a2, 10, (__int16 *)(v10 == 0));
  (*a2)[2]((__int64)a2, 11, (__int16 *)(v10 == 0));
  (*a2)[2]((__int64)a2, 20, (__int16 *)(v10 == 1));
  if ( a1 == 1 )
  {
    v9 = v4 + 1089;
    if ( !v10 )
      v9 = v4 + 1095;
    sub_6540(v4, v9);
    ((void (__fastcall *)(void (__fastcall ***)(__int64, __int64, __int16 *), __int64))(*a2)[7])(a2, 30);
  }
  else if ( a1 == 30 )
  {
    v5 = (void (__fastcall **)(__int64, __int64, _QWORD **))*a2;
    v11 = nullptr;
    v12 = 0;
    (*v5)((__int64)a2, 30, &v11);
    if ( (_QWORD)v12 )
    {
      v6 = &qword_1C320;
      if ( *v11 < v4[24] )
        v6 = (__int64 *)(v4[23] + 80LL * *v11);
      v7 = (*a2)[1];
      if ( v10 )
        v7((__int64)a2, 20, (__int16 *)v6);
      else
        v7((__int64)a2, 10, (__int16 *)v6);
    }
    if ( v11 )
    {
      *(_QWORD *)&v12 = 0;
      qfree();
    }
  }
  return 1;
}

