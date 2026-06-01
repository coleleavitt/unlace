__int64 __fastcall sub_19BB0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned int v4; // r13d
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rbp
  _QWORD *v8; // rbx
  _QWORD v10[36]; // [rsp+0h] [rbp-2A8h] BYREF
  __int64 v11; // [rsp+120h] [rbp-188h]
  __int64 v12; // [rsp+128h] [rbp-180h]
  bool (__fastcall *v13)(__int64, int); // [rsp+1F0h] [rbp-B8h]
  __int64 v14; // [rsp+218h] [rbp-90h]
  __int64 v15; // [rsp+240h] [rbp-68h]
  __int64 v16; // [rsp+248h] [rbp-60h]
  __int64 v17; // [rsp+258h] [rbp-50h]
  unsigned __int64 v18; // [rsp+278h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  sub_18230((__int64)v10, a1, 0);
  v13 = sub_173F0;
  if ( (unsigned __int8)sub_183F0((__int64)v10)
    && (unsigned __int8)sub_187D0((__int64)v10)
    && (v4 = sub_197B0((__int64)v10), (_BYTE)v4) )
  {
    *a2 = v10[7];
    *a3 = v14;
  }
  else
  {
    v4 = 0;
  }
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
  if ( v15 )
  {
    v16 = 0;
    qfree();
  }
  v5 = v11;
  if ( v11 )
  {
    v6 = v12;
    if ( v12 )
    {
      v7 = 0;
      do
      {
        v8 = (_QWORD *)(v5 + 96 * v7);
        if ( v8[3] )
        {
          v8[4] = 0;
          qfree();
        }
        if ( *v8 )
        {
          v8[1] = 0;
          qfree();
        }
        ++v7;
        v5 = v11;
      }
      while ( v6 != v7 );
    }
    v12 = 0;
    qfree();
  }
  if ( v10[14] )
  {
    v10[15] = 0;
    qfree();
  }
  if ( v10[4] )
  {
    v10[5] = 0;
    qfree();
  }
  return v4;
}

