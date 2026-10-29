__int64 __fastcall sub_E2080(__int64 *a1, unsigned int a2, unsigned int a3, __int64 a4, char a5, unsigned __int8 a6)
{
  __int64 v9; // rbx
  __int64 *v10; // rax
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 result; // rax
  __int64 *v15; // rax
  unsigned int v16; // [rsp+Ch] [rbp-2Ch]

  v9 = a1[2];
  if ( !v9 )
  {
    v16 = a3;
    v15 = sub_E2050(a1);
    a3 = v16;
    v9 = (__int64)v15;
  }
  if ( a3 == 2 )
  {
    v10 = (__int64 *)a1[20];
    if ( !v10 )
      v10 = a1;
    *((_BYTE *)v10 + 33) = 1;
  }
  v11 = sub_E1710(v9, 70, a2, a3, 0);
  sub_DCC50(v9, v11, a4, (unsigned int)a5, v12, v13);
  result = *(int *)(v9 + 144);
  if ( (int)result > 0 )
  {
    result = *(_QWORD *)(v9 + 136) + 24 * result;
    *(_WORD *)(result - 22) = a6;
  }
  return result;
}
