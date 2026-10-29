__int64 __fastcall sub_4E30(__int64 a1, int a2, __int64 a3, int *a4, __int64 *a5)
{
  int *v5; // rax
  __int64 (__fastcall *v6)(int *, __int64, __int64, _QWORD, __int64 *, _QWORD, double, int, _QWORD, _QWORD, __int64); // r9
  unsigned int v7; // ebp
  int v9; // [rsp+0h] [rbp-48h] BYREF
  __int128 v10; // [rsp+8h] [rbp-40h]
  __int64 v11; // [rsp+18h] [rbp-30h]
  unsigned __int64 v12; // [rsp+28h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v5 = a4;
  if ( !qword_8198 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v6 = *(__int64 (__fastcall **)(int *, __int64, __int64, _QWORD, __int64 *, _QWORD, double, int, _QWORD, _QWORD, __int64))(qword_8198 + 80);
  LOBYTE(v9) = 2;
  v11 = 0;
  if ( !a4 )
    v5 = &v9;
  v10 = 0;
  if ( v6 )
  {
    v7 = v6(v5, a1, a3, a2, a5, v6, 0.0, v9, v10, *((_QWORD *)&v10 + 1), v11);
  }
  else
  {
    sub_3800(a5);
    v7 = 0;
  }
  free_idcv();
  return v7;
}

