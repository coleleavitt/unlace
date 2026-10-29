__int64 __fastcall sub_B2D70(__int64 a1, _QWORD *a2, __int64 a3)
{
  const void *v3; // r14
  unsigned __int64 v4; // rbx
  __int64 v8; // rsi
  unsigned int v9; // eax
  const void *v10; // rbp
  unsigned int v11; // r15d
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // rdi
  __int64 v16; // rbp
  const void *v17[9]; // [rsp+10h] [rbp-48h] BYREF

  v17[1] = (const void *)__readfsqword(0x28u);
  v3 = (const void *)*a2;
  v4 = *a2 + a3;
  if ( __CFADD__(*a2, a3) )
    return 0;
  v8 = *a2 + a3;
  v17[0] = v3;
  v9 = sub_196ED0(v17, v8);
  v10 = v17[0];
  v11 = v9;
  if ( v3 >= v17[0] )
    return 0;
  v12 = v9;
  sub_B29A0((__int64 *)(a1 + 16), v9);
  if ( v11 )
  {
    v13 = 0;
    v14 = 56 * v12;
    do
    {
      v17[0] = v10;
      v15 = *(_QWORD *)(a1 + 16);
      if ( v4 < (unsigned __int64)v10 )
        return 0;
      v16 = v15 + v13;
      if ( !(unsigned __int8)sub_6B1B0((__int64 *)(v15 + v13), v17, v4)
        || !(unsigned __int8)sub_6B1B0((__int64 *)(v16 + 24), v17, v4)
        || !sub_6C650((_DWORD *)(v16 + 48), (unsigned __int64 *)v17, v4) )
      {
        return 0;
      }
      v13 += 56;
      v10 = v17[0];
    }
    while ( v13 != v14 );
  }
  *a2 = v10;
  return 1;
}
