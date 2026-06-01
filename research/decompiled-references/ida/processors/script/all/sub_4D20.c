__int64 __fastcall sub_4D20(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, int *a6)
{
  int *v7; // rdi
  unsigned int v8; // eax
  unsigned int v9; // ebp
  int v11; // [rsp+0h] [rbp-48h] BYREF
  __int128 v12; // [rsp+8h] [rbp-40h]
  __int64 v13; // [rsp+18h] [rbp-30h]
  unsigned __int64 v14; // [rsp+28h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  if ( !qword_8198 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v7 = a6;
  LOBYTE(v11) = 2;
  if ( !a6 )
    v7 = &v11;
  v13 = 0;
  v12 = 0;
  if ( a1 )
    v8 = (*(__int64 (__fastcall **)(int *, __int64, __int64, __int64, _QWORD, __int64, double, int, _QWORD, _QWORD, __int64))(qword_8198 + 104))(
           v7,
           a1,
           a2,
           a5,
           a4,
           a3,
           0.0,
           v11,
           v12,
           *((_QWORD *)&v12 + 1),
           v13);
  else
    v8 = (*(__int64 (__fastcall **)(int *, __int64, __int64, _QWORD, __int64, int *, double, int, _QWORD, _QWORD, __int64))(qword_8198 + 56))(
           v7,
           a2,
           a5,
           a4,
           a3,
           a6,
           0.0,
           v11,
           v12,
           *((_QWORD *)&v12 + 1),
           v13);
  v9 = v8;
  free_idcv();
  return v9;
}

