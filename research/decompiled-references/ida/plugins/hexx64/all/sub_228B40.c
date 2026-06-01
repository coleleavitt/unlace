__int64 __fastcall sub_228B40(__int64 a1, unsigned __int64 a2, int a3, unsigned __int8 a4, double a5)
{
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+8h] [rbp-40h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 5) & 0x10) == 0 || *(_QWORD *)(a1 + 144) > (signed __int64)a2 )
    return 0;
  v10 = -1;
  v11 = 0;
  if ( !(unsigned __int8)sub_21E630(a1, (__int64)&v10, a5) )
    return a4 & !(*(_BYTE *)(a1 + 1) >> 7);
  if ( (_BYTE)v11 != 5 )
    return 0;
  if ( !HIDWORD(v11) )
    return 0;
  if ( !a3 )
    return 0;
  v8 = SHIDWORD(v11) + v10 - 1;
  if ( v8 < a2 )
    return 0;
  v9 = a3 + a2 - 1;
  if ( v9 < v10 )
    return 0;
  LOBYTE(v8) = v8 < v9;
  LOBYTE(v9) = a2 < v10;
  return (unsigned int)v9 | (unsigned int)v8;
}

