__int64 __fastcall sub_C590(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // edx
  __int16 v5; // dx
  char *v6[45]; // [rsp-170h] [rbp-188h] BYREF
  _QWORD v7[3]; // [rsp+0h] [rbp-18h] BYREF

  v7[1] = __readfsqword(0x28u);
  if ( (unsigned __int16)(*(_WORD *)(a1 + 40) - 20) > 1u )
    return 0;
  if ( *(_BYTE *)(a1 + 57) != 1 )
    return 0;
  if ( !(unsigned __int8)same_value_jpt(a1, a1 + 96, 0) )
    return 0;
  v4 = *(unsigned __int16 *)(a1 + 62);
  qmemcpy(v6, (const void *)(a1 + 16), sizeof(v6));
  result = sub_AD00(
             *(_QWORD *)(a1 + 888),
             (char *)v7,
             v4,
             nullptr,
             v2,
             v3,
             (char)v6[0],
             (int)v6[1],
             v6[2],
             (unsigned __int16)v6[3],
             (int)v6[4],
             (__int64)v6[5],
             (__int64)v6[6],
             (__int64)v6[7],
             (int)v6[8],
             (int)v6[9],
             (__int64)v6[10]);
  if ( !(_BYTE)result )
    return 0;
  v5 = v7[0];
  if ( *(_WORD *)(a1 + 40) == 20 )
    v5 = LOWORD(v7[0]) + 1;
  *(_WORD *)(*(_QWORD *)(a1 + 376) + 4LL) = v5;
  return result;
}

