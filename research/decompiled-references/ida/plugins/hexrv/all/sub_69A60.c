unsigned __int64 __fastcall sub_69A60(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  int v4; // eax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // r12
  unsigned int i; // ebp
  int v12; // edx
  __int64 v13; // rax
  int j; // ebp
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-20h]

  v2 = *(_QWORD *)a1;
  v19 = __readfsqword(0x28u);
  v4 = (*(__int64 (__fastcall **)(__int64))(v2 + 56))(a1);
  v9 = v4;
  if ( !v4 )
    return v19 - __readfsqword(0x28u);
  if ( *a2 )
  {
    a2[1] = 0;
    qfree();
    *a2 = 0;
    a2[2] = 0;
  }
  if ( a2[3] )
  {
    a2[4] = 0;
    qfree();
    a2[3] = 0;
    a2[5] = 0;
  }
  if ( (v9 & 0x80000000) == 0LL )
  {
    v5 = a2[1];
    LODWORD(v18) = -1;
    if ( v9 >= v5 )
    {
      if ( v5 >= v9 )
        goto LABEL_8;
      v15 = *a2;
      v6 = a2[2];
      if ( (unsigned __int64)&v18 < *a2 || (unsigned __int64)&v18 >= v15 + 4 * v6 )
      {
        if ( v6 >= v9 || (v16 = qvector_reserve(), v5 = a2[1], *a2 = v16, v15 = v16, v5 < v9) )
        {
          while ( 1 )
          {
            *(_DWORD *)(v15 + 4 * v5++) = -1;
            if ( v9 == v5 )
              break;
            v15 = *a2;
          }
        }
      }
      else if ( v6 >= v9 || (v17 = qvector_reserve(), v5 = a2[1], *a2 = v17, v15 = v17, v5 < v9) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v15 + 4 * v5++) = -1;
          if ( v9 == v5 )
            break;
          v15 = *a2;
        }
      }
    }
    a2[1] = v9;
  }
LABEL_8:
  for ( i = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, unsigned __int64, __int64, __int64, _QWORD, _QWORD, _DWORD, __int64 *))(*(_QWORD *)a1 + 160LL))(
              a1,
              0,
              v5,
              v6,
              v7,
              v8,
              0,
              0,
              0,
              a2); ; i = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, i + 1) )
  {
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
    v13 = *(_QWORD *)a1;
    if ( v12 == i )
      break;
    if ( !(*(unsigned int (__fastcall **)(__int64, _QWORD))(v13 + 104))(a1, i) )
      sub_68740(&v18, a1, i, (__int64)&v18);
  }
  for ( j = (*(__int64 (__fastcall **)(__int64, _QWORD))(v13 + 160))(a1, 0);
        j != (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
        j = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, (unsigned int)(j + 1)) )
  {
    if ( !sub_605B0(&v18, j) )
      sub_68740(&v18, a1, j, (__int64)&v18);
  }
  qfree();
  return v19 - __readfsqword(0x28u);
}

