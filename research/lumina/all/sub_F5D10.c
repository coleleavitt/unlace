_QWORD *__fastcall sub_F5D10(__int64 a1, double a2, __int64 a3, __int64 *a4, int a5, int a6, int a7)
{
  __int64 v9; // rbp
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  _QWORD *result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r12d
  __int64 v20; // r9
  __int64 v21; // rdi

  v9 = sub_D9DB0(*a4, 1u, a2, (__int64)a4, a5, a6, a7);
  result = (_QWORD *)sub_D9CE0(*a4, 1u, a2, v10, v11, v12, v13);
  if ( v9 )
  {
    v19 = (int)result;
    result = (_QWORD *)sub_F5B20(a1, (int)result + 1LL, v15, v16, v17, v18);
    if ( result )
    {
      if ( v19 > 0 )
      {
        v21 = 0;
        do
        {
          *((_BYTE *)result + v21) = *(_BYTE *)(v9 + v21) & ~(byte_1BEF00[*(unsigned __int8 *)(v9 + v21)] & 0x20);
          ++v21;
        }
        while ( (unsigned int)(v19 - 1) + 1LL != v21 );
      }
      return (_QWORD *)sub_F48B0(a1, result, v19, 1u, (__int64 (__fastcall *)(__int64))sub_C91C0, v20);
    }
  }
  return result;
}
