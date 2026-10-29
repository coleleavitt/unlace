__int64 __fastcall sub_178060(_QWORD *a1, unsigned int a2, unsigned int a3, __int64 a4, int a5)
{
  int v6; // eax
  unsigned __int8 *v8; // rbp
  unsigned __int8 *v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int8 v15[8]; // [rsp+0h] [rbp-68h] BYREF
  __int128 v16; // [rsp+8h] [rbp-60h]
  __int64 v17; // [rsp+18h] [rbp-50h]
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( !a4 )
    return a2;
  v6 = a2 + a5 - a3;
  if ( v6 >= 0 && a5 > v6 )
  {
    v8 = (unsigned __int8 *)(a4 + 32LL * v6);
    v9 = (unsigned __int8 *)(32 * ((int)(a2 + a5 - a3) + (unsigned __int64)(a3 - a2)) + a4);
    do
    {
      v15[0] = 2;
      v17 = 0;
      v16 = 0;
      sub_176730(v15, v8);
      v11 = a1[4];
      v12 = a1[3];
      if ( a1[5] < (unsigned __int64)(v11 + 1) )
      {
        v13 = sub_1987B0(a1 + 3, v12, v11 + 1, 32);
        a1[3] = v13;
        v12 = v13;
        v11 = a1[4];
      }
      v10 = v12 + 32 * v11;
      *(_BYTE *)v10 = 2;
      *(_QWORD *)(v10 + 24) = 0;
      *(_OWORD *)(v10 + 8) = 0;
      sub_176730((unsigned __int8 *)v10, v15);
      ++a1[4];
      v8 += 32;
      sub_176520((__int64)v15);
    }
    while ( v8 != v9 );
  }
  return a3;
}
