__int64 __fastcall sub_6B550(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // eax
  int i; // ebx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v12; // rax
  __int64 (__fastcall **v13)(); // [rsp+0h] [rbp-58h] BYREF
  __int64 v14; // [rsp+8h] [rbp-50h] BYREF
  int v15; // [rsp+18h] [rbp-40h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  LOBYTE(v15) = 0;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64, __int64, __int64, __int64, __int64 (__fastcall **)(), _QWORD, _QWORD, int))(*a2 + 80))(
         a2,
         a2,
         a3,
         a4,
         a5,
         a6,
         off_4AE598,
         0,
         0,
         v15);
  sub_6B210((__int64 *)&v13, a2, v7, 0);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  for ( i = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a2 + 160))(a2, 0);
        (*(unsigned int (__fastcall **)(__int64 *))(*a2 + 56))(a2) != i;
        i = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a2 + 160))(a2, (unsigned int)(i + 1)) )
  {
    if ( !sub_605B0(&v14, i) )
    {
      v9 = *(_QWORD *)(a1 + 8);
      v10 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v9 + 1) )
      {
        v12 = qvector_reserve();
        *(_QWORD *)a1 = v12;
        v10 = v12;
        v9 = *(_QWORD *)(a1 + 8);
      }
      *(_DWORD *)(v10 + 4 * v9) = i;
      ++*(_QWORD *)(a1 + 8);
    }
  }
  v13 = off_4AE598;
  qfree();
  return a1;
}

