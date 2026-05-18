_QWORD *__fastcall sub_F5C70(__int64 a1, double a2, __int64 a3, __int64 *a4, int a5, int a6, int a7)
{
  __int64 v8; // rbx
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  _QWORD *result; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // r12d
  __int64 v19; // r9
  __int64 v20; // rcx

  v8 = sub_D9DB0(*a4, 1u, a2, (__int64)a4, a5, a6, a7);
  result = (_QWORD *)sub_D9CE0(*a4, 1u, a2, v9, v10, v11, v12);
  if ( v8 )
  {
    v18 = (int)result;
    result = (_QWORD *)sub_F5B20(a1, (int)result + 1LL, v14, v15, v16, v17);
    if ( result )
    {
      if ( v18 > 0 )
      {
        v20 = 0;
        do
        {
          *((_BYTE *)result + v20) = byte_1BF000[*(unsigned __int8 *)(v8 + v20)];
          ++v20;
        }
        while ( (unsigned int)(v18 - 1) + 1LL != v20 );
      }
      return (_QWORD *)sub_F48B0(a1, result, v18, 1u, (__int64 (__fastcall *)(__int64))sub_C91C0, v19);
    }
  }
  return result;
}
