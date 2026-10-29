__int64 __fastcall sub_152760(unsigned __int64 *a1, __int64 a2, __int64 a3, _DWORD *a4, __m128i a5)
{
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v10; // rax
  _DWORD *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  _DWORD *v14; // rdx
  __int64 v15; // rcx
  unsigned __int8 v16; // [rsp+7h] [rbp-51h]
  __int64 v17; // [rsp+8h] [rbp-50h] BYREF
  __int64 v18; // [rsp+10h] [rbp-48h] BYREF
  __int64 v19; // [rsp+18h] [rbp-40h] BYREF
  _QWORD v20[7]; // [rsp+20h] [rbp-38h] BYREF

  v17 = a3;
  v20[1] = __readfsqword(0x28u);
  v7 = sub_11C8E0((__int64)a4, &v18, 65);
  if ( !v7 )
    return 0;
  v8 = v7;
  if ( *(_BYTE *)v18 != 4 )
    return 0;
  v10 = *(_QWORD *)(v18 + 8);
  if ( *(_DWORD *)v10 != 2 )
    return 0;
  if ( *(_BYTE *)(v10 + 48) != 4 )
    return 0;
  v11 = *(_DWORD **)(v10 + 56);
  if ( *v11 != 12 )
    return 0;
  v12 = sub_11C8E0((__int64)v11, &v19, 14);
  if ( !v12 )
    return 0;
  if ( *(_BYTE *)v19 != 10 )
    return 0;
  if ( **(_BYTE **)(v19 + 8) != 6 )
    return 0;
  v13 = sub_11C8A0(v12, v20);
  if ( !v13 )
    return 0;
  if ( sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 16LL), *(_DWORD *)(v13 + 4), 0) != 8 )
    return 0;
  if ( *(_BYTE *)v20[0] != 4 )
    return 0;
  v14 = sub_30D340((__int64)a1, a2, &v17, *(int **)(v20[0] + 8LL));
  if ( !v14 )
    return 0;
  if ( !sub_152650(v8 + 32, a1, (__int64)v14, v15, a5) )
    return 0;
  v16 = equal_bytes();
  if ( !v16 )
    return 0;
  *a4 = 66;
  sub_11CDA0((__int64)(a4 + 12));
  return v16;
}

