__int64 __fastcall sub_2217C0(__int64 a1, unsigned __int64 a2, int a3, unsigned __int8 a4)
{
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // [rsp+0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 5) & 0x10) == 0 || *(_QWORD *)(a1 + 144) > (signed __int64)a2 )
    return 0;
  v9 = -1;
  v10 = 0;
  if ( !(unsigned __int8)sub_2172B0(a1, (__int64)&v9) )
    return a4 & !(*(_BYTE *)(a1 + 1) >> 7);
  if ( (_BYTE)v10 != 5 )
    return 0;
  if ( !HIDWORD(v10) )
    return 0;
  if ( !a3 )
    return 0;
  v7 = SHIDWORD(v10) + v9 - 1;
  if ( v7 < a2 )
    return 0;
  v8 = a3 + a2 - 1;
  if ( v8 < v9 )
    return 0;
  LOBYTE(v7) = v7 < v8;
  LOBYTE(v8) = a2 < v9;
  return (unsigned int)v8 | (unsigned int)v7;
}

