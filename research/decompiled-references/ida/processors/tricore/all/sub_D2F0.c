__int64 __fastcall sub_D2F0(__int64 a1, __int64 a2)
{
  int v3; // ebp
  __int64 v4; // r12
  __int16 v5; // ax
  __int64 v6; // rdx
  int v7; // [rsp+0h] [rbp-48h] BYREF
  int v8; // [rsp+4h] [rbp-44h] BYREF
  __int64 v9; // [rsp+8h] [rbp-40h] BYREF
  __int64 v10; // [rsp+10h] [rbp-38h] BYREF
  __int64 v11; // [rsp+18h] [rbp-30h] BYREF
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 344) & 1) == 0 )
    return v13 - __readfsqword(0x28u);
  if ( *(_BYTE *)(a2 + 41) != 1 )
    return v13 - __readfsqword(0x28u);
  v3 = sub_BE80(a1, (__int64)&v9, &v10, &v7, &v11, &v8, &v12, *(_QWORD *)(a2 + 16), *(unsigned __int16 *)(a2 + 46), 0);
  if ( !v3 )
    return v13 - __readfsqword(0x28u);
  v4 = use_mapping(v9);
  if ( !(unsigned __int8)is_mapped(v4) )
    return v13 - __readfsqword(0x28u);
  if ( (v11 == -1 || v10 == -1) && v12 == -1 && v3 != -1 )
    return v13 - __readfsqword(0x28u);
  if ( !v4 )
    return v13 - __readfsqword(0x28u);
  v5 = *(_WORD *)(a2 + 24);
  if ( v5 == 32 || (v6 = 18, v5 == 207) )
    v6 = 16;
  return add_cref(*(_QWORD *)(a2 + 16), v4, v6);
}

