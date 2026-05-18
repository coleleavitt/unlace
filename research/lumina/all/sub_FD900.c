__int64 __fastcall sub_FD900(__int64 **a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // eax
  const __m128i *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  v6 = *((unsigned __int8 *)*a1 + 41);
  if ( v6 > (int)a3 )
  {
    v8 = (const __m128i *)sub_D43F0(a1[1], (unsigned int)a3, a3, a4, a5, a6);
    sub_FD650(a2, v8, v9, v10, v11, v12);
  }
  else
  {
    sub_F48B0(a2, a1[(int)a3 - v6 + 3], -1, 1u, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL, a6);
  }
  return 0;
}
