__int64 __fastcall sub_9B2C0(const __m128i *a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 result; // rax
  __int64 v6; // rax
  _DWORD *v7; // r12
  unsigned __int8 *v8; // r9
  __int64 v9; // rax
  char v10; // al
  unsigned __int8 *v11; // r8
  __int64 v12; // rdi
  __int128 v13; // rdi
  unsigned __int8 v14; // al
  unsigned __int8 *v15; // [rsp+8h] [rbp-B0h]
  unsigned __int8 *v16; // [rsp+8h] [rbp-B0h]
  unsigned __int8 v17; // [rsp+8h] [rbp-B0h]
  char *v18; // [rsp+18h] [rbp-A0h] BYREF
  _QWORD v19[4]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v21; // [rsp+50h] [rbp-68h] BYREF
  __int128 v22; // [rsp+58h] [rbp-60h]
  __int64 v23; // [rsp+68h] [rbp-50h]
  unsigned __int64 v24; // [rsp+78h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( *(_DWORD *)a2 != 10 )
    return 0;
  if ( *(_BYTE *)(a2 + 32) != 4 )
    return 0;
  v3 = *(_QWORD *)(a2 + 40);
  if ( !v3 )
    return 0;
  result = 0;
  if ( (unsigned int)(*(_DWORD *)v3 - 23) <= 1 )
  {
    v19[1] = a1;
    v20[0] = 0xFFFFFFFF00000000LL;
    v21 = 0xFFFFFFFF00000000LL;
    v19[0] = &off_4DBDF0;
    v19[2] = 0;
    v19[3] = 0;
    v20[1] = 0;
    v23 = 0x4FFFFFFFFLL;
    v22 = 0;
    v6 = sub_954F0((__int64)v19, a2, 0);
    v7 = (_DWORD *)v6;
    if ( !v6
      || !(unsigned __int8)sub_130320(a1, v6, v6, a2, (_DWORD *)a2)
      && !(unsigned __int8)sub_1307A0(a1, (__int64)v7, (__int64)v7, a2, (int *)a2) )
    {
      goto LABEL_20;
    }
    v8 = (unsigned __int8 *)(v7 + 12);
    if ( *v7 == 22 )
      goto LABEL_10;
    v9 = sub_11C8A0((__int64)v7, &v18);
    if ( !v9 )
    {
      if ( !under_debugger )
        sub_383060(0xC9EEu, 0.0);
      BUG();
    }
    v15 = (unsigned __int8 *)v9;
    v10 = sub_11FD80(v18, nullptr, 1u);
    v8 = v15;
    if ( !v10 )
    {
LABEL_10:
      v11 = (unsigned __int8 *)(v3 + 32);
      v18 = (char *)(v3 + 32);
      if ( *v7 == 14 && *(_BYTE *)(v3 + 32) == 4 )
      {
        v12 = *(_QWORD *)(v3 + 40);
        if ( *(_DWORD *)v12 == 5 )
        {
          v11 = (unsigned __int8 *)(v12 + 32);
          v18 = (char *)(v12 + 32);
        }
        else if ( *(_DWORD *)v12 == 14 )
        {
          v16 = v8;
          sub_11C8A0(v12, &v18);
          v11 = (unsigned __int8 *)v18;
          v8 = v16;
        }
      }
      *((_QWORD *)&v13 + 1) = v19;
      *(_QWORD *)&v13 = a1;
      v14 = sub_9AD50(v13, (__int64)v7, a2, v11, v8);
    }
    else
    {
LABEL_20:
      v14 = 0;
    }
    v17 = v14;
    v19[0] = &off_4DBDF0;
    sub_11CDA0((__int64)&v21);
    sub_11CDA0((__int64)v20);
    return v17;
  }
  return result;
}

