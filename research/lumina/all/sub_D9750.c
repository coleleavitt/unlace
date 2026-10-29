__int64 __fastcall sub_D9750(__int64 a1, __int64 *a2, int a3)
{
  __int64 *v3; // rbp
  int v4; // ebx
  __int64 v6; // r14
  __int64 result; // rax
  __int64 v8; // rdi
  int v9; // r12d
  int v10; // r14d
  __int64 v11; // r15
  int v12; // ebx
  int v13; // r13d
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r8
  int v21; // ebx
  __int64 v22; // rax
  int v24; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v25; // [rsp+18h] [rbp-40h]

  v3 = a2;
  v4 = *(_DWORD *)a2;
  a2[1] = a1;
  v25 = __readfsqword(0x28u);
  if ( v4 > 0 )
  {
    v6 = 0;
    do
    {
      v8 = v3[3];
      if ( a3 == 2 )
      {
        result = sub_D90E0(v8 + 80LL * (unsigned int)v4 - 80, a2);
        if ( (_DWORD)result )
          return result;
      }
      else
      {
        a2 = nullptr;
        result = sub_D9710((_QWORD *)(v6 + v8), 0);
        if ( (_DWORD)result )
          return result;
      }
      v6 += 80;
      --v4;
    }
    while ( v4 );
    v4 = *(_DWORD *)v3;
  }
  v9 = v4 - 1;
  if ( v4 - 1 > 0 )
  {
    v10 = 2 * v9;
    v11 = 4LL * v9;
    while ( 1 )
    {
      v21 = v4 / 2;
      if ( v21 <= v9 )
      {
        v12 = 2 * (v9 - v21);
        v13 = v12 + 1;
      }
      else
      {
        v22 = v3[2];
        v12 = *(_DWORD *)(v22 + 4LL * v10);
        v13 = *(_DWORD *)(v22 + 4LL * v10 + 4);
      }
      v14 = v3[3];
      v15 = v14 + 80LL * v12;
      if ( *(_QWORD *)(v15 + 24) )
      {
        v16 = v14 + 80LL * v13;
        if ( *(_QWORD *)(v16 + 24) )
        {
          v17 = v3[1];
          v18 = *(unsigned int *)(v15 + 20);
          v19 = *(unsigned int *)(v16 + 20);
          v20 = *(_QWORD *)(v16 + 40);
          v24 = 0;
          if ( (*(int (__fastcall **)(__int64, int *, _QWORD, __int64, __int64, __int64))(v17 + 64))(
                 v17,
                 &v24,
                 *(_QWORD *)(v15 + 40),
                 v18,
                 v20,
                 v19) <= 0 )
            v13 = v12;
        }
        else
        {
          v13 = v12;
        }
      }
      v10 -= 2;
      *(_DWORD *)(v3[2] + v11) = v13;
      v11 -= 4;
      if ( !--v9 )
        break;
      v4 = *(_DWORD *)v3;
    }
  }
  return *(unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 31LL);
}
