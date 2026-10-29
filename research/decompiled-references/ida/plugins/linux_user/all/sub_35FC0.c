__int64 __fastcall sub_35FC0(_QWORD *a1, __int64 a2)
{
  const char *v3; // rsi
  __int64 v4; // rbp
  int v5; // r14d
  unsigned int v6; // r12d
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64, _QWORD, _QWORD, int *, _QWORD); // rbx
  unsigned int v10; // eax
  int v11; // eax
  bool v12; // cc
  int v13; // [rsp+0h] [rbp-58h] BYREF
  __int64 v14; // [rsp+8h] [rbp-50h]
  __int128 v15; // [rsp+10h] [rbp-48h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v3 = s;
  v4 = sub_BD20();
  if ( a1[6] )
    v3 = (const char *)a1[5];
  v5 = (*(__int64 (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)v4 + 488LL))(v4, v3, 0);
  if ( v5 < 0 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v6 = idcv_int64();
  if ( !v6 )
  {
    v8 = a1[1];
    v13 = -2;
    v15 = 0;
    v14 = v8;
    v9 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, int *, _QWORD))(*(_QWORD *)v4 + 232LL);
    v10 = sub_BD70(a1);
    v11 = v9(v4, v10, (unsigned int)v5, &v13, 0);
    v12 = v13 < -1;
    *(_QWORD *)(a2 + 8) = v11;
    if ( !v12 )
    {
      if ( v14 )
      {
        *(_QWORD *)&v15 = 0;
        qfree();
      }
    }
  }
  return v6;
}

