unsigned __int64 __fastcall sub_70B00(_DWORD *a1, unsigned int a2, __int64 *a3, _QWORD *a4, double a5)
{
  bool v7; // zf
  unsigned int *v8; // rsi
  unsigned int i; // ebx
  __int64 (__fastcall *v11)(__int64); // rax
  __int64 v12; // rdx
  unsigned int *v13; // rcx
  unsigned int *v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  char v21; // [rsp+7h] [rbp-61h]
  __int64 v22[3]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v7 = a3[2] == 0;
  v8 = (unsigned int *)*a3;
  v23 = __readfsqword(0x28u);
  a3[1] = 0;
  if ( v7 )
  {
    v17 = qvector_reserve((__int64)a3, (__int64)v8, 1, 4);
    v18 = a3[1];
    *a3 = v17;
    v8 = (unsigned int *)(v17 + 4 * v18);
  }
  *v8 = a2;
  ++a3[1];
  for ( i = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, 0);
        ;
        i = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, i + 1) )
  {
    v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
    if ( v11 != sub_65040 )
      break;
    if ( a1[14] == i )
      return v23 - __readfsqword(0x28u);
LABEL_7:
    if ( (unsigned __int8)sub_6FD70((__int64)a1, a4, i, a2, a5) )
    {
      v22[0] = 0;
      v22[1] = 0;
      v21 = sub_6FC30((__int64)a1, v22, a2, i, a5);
      qfree(v22[0]);
      if ( v21 )
      {
        v12 = a3[1];
        v13 = (unsigned int *)(*a3 + 4 * v12);
        if ( (unsigned int *)*a3 == v13 )
          goto LABEL_14;
        v14 = (unsigned int *)*a3;
        while ( i != *v14 )
        {
          if ( v13 == ++v14 )
            goto LABEL_14;
        }
        if ( v13 == v14 )
        {
LABEL_14:
          v15 = v12 + 1;
          if ( a3[2] < v15 )
          {
            v19 = qvector_reserve((__int64)a3, *a3, v15, 4);
            v20 = a3[1];
            *a3 = v19;
            v13 = (unsigned int *)(v19 + 4 * v20);
          }
          *v13 = i;
          ++a3[1];
        }
      }
    }
  }
  if ( (unsigned int)v11((__int64)a1) != i )
    goto LABEL_7;
  return v23 - __readfsqword(0x28u);
}

