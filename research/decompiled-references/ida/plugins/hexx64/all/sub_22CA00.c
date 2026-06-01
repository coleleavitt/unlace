__int64 __fastcall sub_22CA00(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, _QWORD *a5, char a6, double a7)
{
  unsigned int v7; // r12d
  int v9; // ebp
  __int64 v10; // r15
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  char v14; // bl
  __int64 v16; // r13
  __int64 v17; // r12
  unsigned int v18; // r13d
  int v19; // ebx
  unsigned int v20; // ebp
  unsigned int v22; // [rsp+20h] [rbp-68h]
  int v23; // [rsp+24h] [rbp-64h]
  unsigned int v24; // [rsp+28h] [rbp-60h]
  __int64 v25[11]; // [rsp+30h] [rbp-58h] BYREF

  v22 = a4;
  v25[3] = __readfsqword(0x28u);
  if ( (_DWORD)a3 == (_DWORD)a4 )
    return 1;
  v7 = a3;
  v9 = 0;
  v10 = sub_670E0(*(_QWORD **)(a1 + 8), (__int64)a2, a3, a4);
  sub_64190(a2, v7, a7);
  while ( v9 < (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 96LL))(v10, v7) )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 112LL))(v10, v7, (unsigned int)v9);
    if ( sub_64930(a5, v11) == a6 && !sub_64930(a2, v11) )
    {
      if ( a6 )
      {
        v25[0] = 0;
        v25[1] = 0;
        v14 = sub_6FC30(v10, v25, v11, v22, a7);
        qfree(v25[0]);
        if ( v14 )
          return 1;
      }
      else
      {
        if ( v22 == v11 )
          return 1;
        v16 = sub_670E0(*(_QWORD **)(a1 + 8), v11, v12, v13);
        sub_64190(a2, v11, a7);
        v24 = v7;
        v17 = v16;
        v18 = v11;
        v19 = 0;
        v23 = v9;
        while ( v19 < (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 96LL))(v17, v18) )
        {
          v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v17 + 112LL))(
                  v17,
                  v18,
                  (unsigned int)v19);
          if ( !sub_64930(a5, v20) && !sub_64930(a2, v20) && (unsigned __int8)sub_22CA00(a1, a2, v20, v22, a5, 0) )
            return 1;
          ++v19;
        }
        v9 = v23;
        v7 = v24;
        a6 = 0;
      }
    }
    ++v9;
  }
  return 0;
}

