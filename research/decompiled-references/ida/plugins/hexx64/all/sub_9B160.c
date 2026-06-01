__int64 __fastcall sub_9B160(__int128 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r12
  __int64 result; // rax
  _DWORD *v4; // rax
  __int64 v5; // r14
  unsigned __int8 v6; // al
  unsigned __int8 v7; // [rsp+Fh] [rbp-99h]
  _QWORD v8[4]; // [rsp+10h] [rbp-98h] BYREF
  _QWORD v9[2]; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v10; // [rsp+40h] [rbp-68h] BYREF
  __int128 v11; // [rsp+48h] [rbp-60h]
  __int64 v12; // [rsp+58h] [rbp-50h]
  unsigned __int64 v13; // [rsp+68h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  if ( **((_DWORD **)&a1 + 1) != 10 )
    return 0;
  v1 = *((_QWORD *)&a1 + 1);
  if ( *(_BYTE *)(*((_QWORD *)&a1 + 1) + 32LL) != 4 )
    return 0;
  v2 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 40LL);
  if ( !v2 )
    return 0;
  result = 0;
  if ( (unsigned int)(*(_DWORD *)v2 - 23) <= 1 )
  {
    v8[1] = a1;
    v11 = 0;
    v8[0] = &off_4DBDF0;
    v9[0] = 0xFFFFFFFF00000000LL;
    v10 = 0xFFFFFFFF00000000LL;
    v8[2] = 0;
    v8[3] = 0;
    v9[1] = 0;
    v12 = 0xFFFFFFFFLL;
    v4 = (_DWORD *)sub_954F0((__int64)v8, *((__int64 *)&a1 + 1), 1);
    v5 = (__int64)v4;
    if ( v4
      && (unsigned __int8)sub_130320((const __m128i *)a1, *((__int64 *)&a1 + 1), *((__int64 *)&a1 + 1), (__int64)v4, v4) )
    {
      *((_QWORD *)&a1 + 1) = v8;
      v6 = sub_9AD50(a1, v5, v1, (unsigned __int8 *)(v2 + 32), (unsigned __int8 *)(v5 + 48));
    }
    else
    {
      v6 = 0;
    }
    v7 = v6;
    v8[0] = &off_4DBDF0;
    sub_11CDA0((__int64)&v10);
    sub_11CDA0((__int64)v9);
    return v7;
  }
  return result;
}

