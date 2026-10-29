char __fastcall sub_13CF0(__int64 a1, __int64 *a2)
{
  bool v2; // zf
  int v3; // eax
  __int16 v5; // dx
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(__int64, __int64, __int64); // rax
  __int64 v8; // rdx
  char v9; // al
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r9d
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  char result; // al
  char v16; // dl
  __int64 v17; // [rsp+10h] [rbp-48h] BYREF
  __int128 v18; // [rsp+18h] [rbp-40h]
  __int64 v19; // [rsp+28h] [rbp-30h]
  int v20; // [rsp+30h] [rbp-28h]
  unsigned __int64 v21; // [rsp+38h] [rbp-20h]

  v2 = *(_BYTE *)(a1 + 793) == 0;
  v3 = *(unsigned __int16 *)(a1 + 40);
  v21 = __readfsqword(0x28u);
  if ( !v2 )
  {
    if ( *(_BYTE *)(a1 + 904) )
    {
      v17 = 0;
      v20 = 0;
      v18 = 0;
      v19 = 0;
      if ( (unsigned __int16)(v3 - 131) <= 1u
        || (unsigned __int16)(v3 - 4) <= 1u
        || (HIBYTE(v5) = BYTE1(v3), LOBYTE(v5) = v3 & 0x7F, v5 == 8) )
      {
        v6 = a1 + 56;
        v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL);
        v8 = *a2;
        if ( v7 == sub_10470 )
          v9 = sub_10470(a1, v6, v8);
        else
          v9 = v7(a1, v6, v8);
        if ( v9 && (unsigned __int8)sub_13B20(a1, (__int64 *)(a1 + 896), (__m128i *)&v17, v10, v11, v12) )
        {
          *(_BYTE *)(a1 + 904) = 0;
          return set_moved_jpt();
        }
        v3 = *(unsigned __int16 *)(a1 + 40);
      }
    }
  }
  v13 = (unsigned int)(v3 - 78);
  if ( (unsigned __int16)v13 > 6u )
    return 0;
  v14 = -74;
  if ( _bittest64(&v14, v13) )
    return 0;
  result = *(_BYTE *)(a1 + 57) == 4 || *(_BYTE *)(a1 + 57) == 1;
  if ( result )
  {
    v16 = *(_BYTE *)(a1 + 97);
    result = v16 == 4 || v16 == 1;
    if ( result )
    {
      if ( v16 != 1 || (*(_BYTE *)(a1 + 131) & 0xEF) == 0 )
        return set_moved_jpt();
      return 0;
    }
  }
  return result;
}

