__int64 __fastcall sub_183F0(__int64 *a1, __int64 *a2, __int64 *a3, __int64 a4, int a5)
{
  __int64 v7; // r9
  char *v8; // r15
  __int64 v11; // [rsp+8h] [rbp-40h]

  v7 = (((((char *)a2 - (char *)a1) >> 6) + 1) / 2) << 6;
  v11 = v7;
  v8 = (char *)a1 + v7;
  if ( ((((char *)a2 - (char *)a1) >> 6) + 1) / 2 <= a4 )
    return sub_175D0(a1, (__int64 *)((char *)a1 + v7), a2, a3, a5);
  sub_183F0(a1, (char *)a1 + v7, a3);
  sub_183F0(v8, a2, a3);
  return sub_17AD0(a1, v8, (__int64)a2, v11 >> 6, ((char *)a2 - v8) >> 6, a3, a4, a5);
}

