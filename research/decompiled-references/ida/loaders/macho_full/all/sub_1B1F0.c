__int64 __fastcall sub_1B1F0(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        __int64 a5,
        int a6,
        unsigned __int64 a7,
        __int64 a8,
        int a9)
{
  int v9; // ebx
  unsigned __int64 v11; // rax
  __int64 v12; // r9
  unsigned __int8 *v13; // rax
  int v14; // r14d
  unsigned int v16; // ebx
  __int64 v18; // rdx
  unsigned __int8 *v19; // r15
  int v20; // r10d
  unsigned __int8 v22; // r8
  unsigned __int64 v23; // rsi
  __int64 v24; // rax
  int v25; // eax
  int v26; // esi
  unsigned __int8 *v27; // rax
  int v28; // r15d
  int v29; // ebx
  unsigned __int8 v30; // cl
  unsigned __int8 *v31; // rdx
  int v32; // r9d
  int v33; // eax
  int v34; // [rsp+0h] [rbp-88h]
  unsigned __int8 v35; // [rsp+8h] [rbp-80h]
  int v36; // [rsp+10h] [rbp-78h]
  __int64 v37; // [rsp+18h] [rbp-70h]
  unsigned __int8 *v38; // [rsp+28h] [rbp-60h]
  __int64 v39; // [rsp+38h] [rbp-50h]
  unsigned __int8 *v40; // [rsp+38h] [rbp-50h]
  unsigned __int64 v41; // [rsp+40h] [rbp-48h]

  v11 = a6;
  v12 = a8;
  if ( v11 >= a7 )
    return 0;
  v13 = a3;
  v14 = a2;
  LOBYTE(v9) = (unsigned __int64)a3 < a2;
  LOBYTE(a3) = a9 > 1023;
  v16 = (unsigned int)a3 | v9;
  LOBYTE(v16) = (v13 >= a4) | v16;
  if ( (_BYTE)v16 )
    return 0;
  v18 = *v13;
  v38 = v13 + 1;
  v19 = &v13[v18 + 1];
  if ( v19 >= a4 )
    return 0;
  v20 = a1;
  if ( (_BYTE)v18 )
  {
    if ( !a6 )
      return v16;
    if ( !(unsigned __int8)unpack_xleb128() || (v22 = unpack_xleb128()) == 0 )
    {
      if ( (debug & 0x10) != 0 )
        sub_191F0(
          (__int64)"wrong uleb128/sleb128 encoding: %02X %02X %02X %02X %02X\n",
          *v38,
          v38[1],
          v38[2],
          v38[3],
          v38[4]);
      return v16;
    }
    v23 = v41;
    v24 = *(_QWORD *)(a1 + 448);
    if ( v24 != -1 && (v39 & 8) == 0 )
    {
      v23 = v24 + v41;
      v41 += v24;
    }
    v35 = v22;
    v25 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64, __int64))(*(_QWORD *)a8 + 16LL))(
            a8,
            v23,
            v39,
            a5);
    v16 = v35;
    v12 = a8;
    v20 = a1;
    if ( v25 )
      return v16;
  }
  v26 = *v19;
  v27 = v19 + 1;
  if ( (_BYTE)v26 )
  {
    v36 = v20;
    v28 = a7 - a6;
    v37 = v12;
    v29 = 0;
    while ( v27 < a4 )
    {
      v30 = *v27;
      v31 = v27 + 1;
      v32 = 0;
      v40 = v27 + 1;
      if ( *v27 && (int)a7 - a6 > 0 )
      {
        while ( 1 )
        {
          v33 = v32 + a6;
          ++v32;
          *(_BYTE *)(a5 + v33) = v30;
          if ( a4 == v31 )
            break;
          v30 = *v31++;
          v40 = v31;
          if ( !v30 )
            break;
          if ( v28 <= v32 )
            return 0;
        }
      }
      if ( v28 <= v32 || !(v32 | a6) )
        return 0;
      v34 = a6 + v32;
      *(_BYTE *)(a5 + a6 + v32) = 0;
      if ( !(unsigned __int8)unpack_xleb128() )
      {
        if ( (debug & 0x10) != 0 )
          sub_191F0(
            (__int64)"wrong uleb128/sleb128 encoding: %02X %02X %02X %02X %02X\n",
            *v40,
            v40[1],
            v40[2],
            v40[3],
            v40[4]);
        return 0;
      }
      if ( !(_DWORD)v41
        || v41 > 0xFFFFFFFF
        || !(unsigned __int8)sub_1B1F0(v36, v14, v14 + (int)v41, (_DWORD)a4, a5, v34, a7, v37, a9 + 1) )
      {
        return 0;
      }
      if ( ++v29 == v26 )
        return 1;
      v27 = v40;
    }
  }
  return 1;
}

