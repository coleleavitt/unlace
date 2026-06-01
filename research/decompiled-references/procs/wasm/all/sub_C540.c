__int64 __fastcall sub_C540(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  __int64 v6; // rbp
  unsigned int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned int v13; // [rsp+0h] [rbp-38h] BYREF
  int v14; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v3 = sub_10180(a1, &v13);
  if ( !v3 )
    sub_9BC0((__int64)"ana: couldn't read vector size");
  v4 = v13;
  v5 = a2[1];
  v6 = v3;
  v7 = v13;
  if ( v5 < v13 )
  {
    v11 = *a2;
    if ( a2[2] < (unsigned __int64)v13 )
    {
      v12 = qvector_reserve(a2, v11, v13, 4);
      v5 = a2[1];
      *a2 = v12;
      v11 = v12;
    }
    memset((void *)(v11 + 4 * v5), 0, 4 * (v4 - v5));
    a2[1] = v4;
    v7 = v13;
  }
  else if ( v13 != v5 )
  {
    a2[1] = v13;
  }
  v8 = 0;
  if ( v7 )
  {
    do
    {
      v9 = sub_10180(a1, &v14);
      if ( !v9 )
        sub_9BC0((__int64)"ana: couldn't read vector elem %u", v8);
      v6 += v9;
      *(_DWORD *)(*a2 + 4 * v8++) = v14;
    }
    while ( (unsigned int)v8 < v13 );
  }
  return v6;
}
