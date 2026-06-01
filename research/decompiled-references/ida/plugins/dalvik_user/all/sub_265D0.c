__int64 __fastcall sub_265D0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 result; // rax
  __int64 v5; // rdx
  int v6; // [rsp+Ch] [rbp-3Ch] BYREF
  _QWORD v7[7]; // [rsp+10h] [rbp-38h] BYREF

  v7[3] = __readfsqword(0x28u);
  v2 = sub_135E0(a1, a2);
  v7[0] = 0;
  v7[1] = 0;
  if ( !a2 )
    return 0;
  v3 = v2;
  if ( !*(_DWORD *)(v2 + 1076) && (a2 == (int)a2 || (_DWORD)a2 && ((a2 & 7) != 0 || (unsigned int)a2 <= 0x100)) )
    return 0;
  if ( !(unsigned __int8)sub_4EA10(v2 + 864, v7, a2) )
    return 0;
  if ( LOBYTE(v7[0]) != 3 )
    return 0;
  result = sub_26460((_QWORD *)(v3 + 1040), &v6, a2);
  if ( !(_BYTE)result )
    return 0;
  v5 = v6;
  *(_BYTE *)a1 = 2;
  *(_QWORD *)(a1 + 8) = v5;
  return result;
}

