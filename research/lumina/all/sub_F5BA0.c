_QWORD *__fastcall sub_F5BA0(__int64 a1, __int64 a2, __int64 *a3, int a4, int a5, int a6, double a7)
{
  unsigned __int8 *v9; // rbx
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  int v14; // r12d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *result; // rax
  const char *v20; // r9
  _QWORD *v21; // rdi
  __int64 v22; // rsi
  unsigned __int8 *v23; // rdx
  unsigned __int8 v24; // cl
  unsigned __int8 v25; // r8
  char v26; // cl
  _BYTE *v27; // rdx

  v9 = (unsigned __int8 *)sub_EDD90(*a3, a7, a2, (__int64)a3, a4, a5, a6);
  v14 = sub_D9CE0(*a3, 1u, a7, v10, v11, v12, v13);
  result = (_QWORD *)sub_F5B20(a1, 2LL * v14 + 1, v15, v16, v17, v18);
  if ( result )
  {
    if ( v14 <= 0 )
    {
      v27 = result;
    }
    else
    {
      v20 = "0123456789ABCDEF%_";
      v21 = result;
      v22 = (unsigned int)(v14 - 1) + 1LL;
      v23 = &v9[v22];
      do
      {
        v24 = *v9++;
        v21 = (_QWORD *)((char *)v21 + 2);
        v25 = v24;
        v26 = a0123456789abcd_0[v24 & 0xF];
        *((_BYTE *)v21 - 2) = a0123456789abcd_0[v25 >> 4];
        *((_BYTE *)v21 - 1) = v26;
      }
      while ( v9 != v23 );
      v27 = (char *)result + 2 * v22;
    }
    *v27 = 0;
    return (_QWORD *)sub_F48B0(a1, result, 2 * v14, 1u, (__int64 (__fastcall *)(__int64))sub_C91C0, (__int64)v20);
  }
  return result;
}
