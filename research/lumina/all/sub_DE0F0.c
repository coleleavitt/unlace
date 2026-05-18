unsigned __int64 __fastcall sub_DE0F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 *v4; // rbp
  __int64 v5; // r14
  int i; // ebx
  int *v7; // rsi
  __int64 *v8; // rdx
  __int64 *v10; // rax
  __int64 v11; // [rsp+8h] [rbp-80h]
  __int64 *v12; // [rsp+10h] [rbp-78h] BYREF
  __int128 v13; // [rsp+18h] [rbp-70h]
  __int128 v14; // [rsp+28h] [rbp-60h]
  __int128 v15; // [rsp+38h] [rbp-50h]
  unsigned __int64 v16; // [rsp+48h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  if ( !a2 )
    return __readfsqword(0x28u) ^ v16;
  v2 = *(_QWORD *)(a2 + 32);
  v4 = *(__int64 **)a1;
  if ( (*(_BYTE *)(v2 + 4) & 0x40) != 0 )
  {
    v5 = 0;
    if ( *(int *)a2 <= 0 )
      return __readfsqword(0x28u) ^ v16;
  }
  else
  {
    v10 = sub_DD390(*v4, (_DWORD *)a2);
    v5 = sub_DC9A0((__int64)v4, (__int64)v10, 1);
    if ( *(int *)a2 <= 0 )
    {
LABEL_18:
      if ( v5 && v4[49] == v5 )
        v4[49] = *(_QWORD *)(v5 + 8);
      return __readfsqword(0x28u) ^ v16;
    }
    v2 = *(_QWORD *)(a2 + 32);
  }
  for ( i = 0; ; v2 = *(_QWORD *)(a2 + 48LL * i + 32) )
  {
    v12 = v4;
    v8 = v4;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    if ( v5 )
    {
      v11 = v2;
      sub_CFDC0((__int64)v4, v2, (__int64)&v12);
      v8 = v12;
      v2 = v11;
    }
    if ( *(_BYTE *)(*v8 + 103) )
      break;
    if ( v2 && *(_QWORD *)(a1 + 16) )
      sub_CDAF0(a1, (_QWORD *)v2);
    v7 = *(int **)(a2 + 48LL * i + 24);
    if ( v7 )
      sub_CF080((__int64)v4, v7);
    if ( ++i >= *(_DWORD *)a2 )
      goto LABEL_18;
  }
  return __readfsqword(0x28u) ^ v16;
}
