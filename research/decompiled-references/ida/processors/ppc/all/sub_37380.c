__int64 __fastcall sub_37380(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  unsigned __int64 v3; // r12
  char *v4; // rax
  unsigned __int64 v5; // rsi
  __int64 result; // rax
  int flags; // ecx
  __int64 v8; // rbx
  __int64 v9[2]; // [rsp+0h] [rbp-1D8h] BYREF
  _QWORD v10[2]; // [rsp+10h] [rbp-1C8h] BYREF
  __int128 v11; // [rsp+20h] [rbp-1B8h]
  __int64 v12; // [rsp+30h] [rbp-1A8h]
  __int64 v13; // [rsp+38h] [rbp-1A0h]
  __int64 v14; // [rsp+40h] [rbp-198h]
  char v15; // [rsp+48h] [rbp-190h] BYREF
  char v16; // [rsp+188h] [rbp-50h] BYREF
  unsigned __int64 v17; // [rsp+190h] [rbp-48h]
  int v18; // [rsp+198h] [rbp-40h]
  __int64 v19; // [rsp+1A0h] [rbp-38h]
  __int64 v20; // [rsp+1A8h] [rbp-30h]
  unsigned __int64 v21; // [rsp+1B8h] [rbp-20h]

  v21 = __readfsqword(0x28u);
  v2 = *(_WORD *)(a2 + 24);
  if ( v2 == 279 )
    return 0;
  if ( v2 == 1178 )
    return 0;
  v3 = *(_QWORD *)(a2 + 16);
  if ( (unsigned int)get_dword(v3) - 1 > 0xFFFFFFFD || v3 > 3 && (unsigned int)get_dword(v3 - 4) == 1117716485 )
    return 0;
  if ( sub_36930(a1, *(_QWORD *)(a2 + 16)) )
    return 100;
  v10[1] = a1;
  v4 = &v15;
  v12 = -1;
  v13 = 0;
  v14 = 0;
  v11 = -1;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 40;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *((_QWORD *)v4 - 2) = 0;
  }
  while ( &v16 != v4 );
  v5 = *(_QWORD *)(a2 + 16);
  v16 = 0;
  v10[0] = &off_846B0;
  v17 = -1;
  v18 = -2;
  v19 = 0;
  v20 = 0;
  if ( !(unsigned __int8)sub_36BC0((__int64)v10, v5, 0.0) )
    return 0;
  result = (unsigned int)v20;
  if ( (int)v20 > 0 )
  {
    if ( (unsigned int)sub_4E2D0(a1) == 9 )
    {
      v9[1] = v3;
      v9[0] = -1;
      if ( (unsigned __int8)sub_31740(v9, (__int64)&unk_7A0B8, 8u)
        || (unsigned __int8)sub_31740(v9, (__int64)&unk_7A0B0, 8u) )
      {
        v8 = v9[0];
        if ( v9[0] != -1 )
        {
          auto_mark_range(v9[0], v9[0] + 1, 20);
          auto_mark_range(v8, v8 + 1, 30);
          return 100;
        }
      }
    }
    flags = get_flags_ex(v3, 4);
    result = (unsigned int)v20;
    if ( (flags & 0x10000) != 0 )
      result = (unsigned int)(v20 - 20);
    if ( v3 < v17 )
      return (unsigned int)(result - 5);
  }
  return result;
}

