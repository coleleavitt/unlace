__int64 __fastcall sub_118E50(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbp
  _QWORD v4[7]; // [rsp+0h] [rbp-38h] BYREF

  v4[1] = __readfsqword(0x28u);
  if ( *(_BYTE *)a1 != 4 )
    return 0;
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)v3 != 20 )
    return 0;
  if ( (unsigned __int8)sub_11FD80((char *)(v3 + 48), v4, 0) && v4[0] == 0x3FFFFFFF )
  {
    *a2 = v3 + 32;
    return 1;
  }
  if ( !(unsigned __int8)sub_11FD80((char *)(v3 + 32), v4, 0) || v4[0] != 0x3FFFFFFF )
    return 0;
  *a2 = v3 + 48;
  return 1;
}

