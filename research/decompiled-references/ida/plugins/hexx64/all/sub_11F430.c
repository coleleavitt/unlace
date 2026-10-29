bool __fastcall sub_11F430(_BYTE *a1, __int64 a2, char a3)
{
  int v3; // eax
  _BYTE *v4; // rdx
  _QWORD v6[4]; // [rsp+0h] [rbp-88h] BYREF
  _DWORD *v7; // [rsp+20h] [rbp-68h]
  __int64 v8; // [rsp+28h] [rbp-60h]
  char v9; // [rsp+30h] [rbp-58h]
  _QWORD v10[5]; // [rsp+40h] [rbp-48h] BYREF
  char v11; // [rsp+68h] [rbp-20h]
  _QWORD *v12; // [rsp+70h] [rbp-18h]
  unsigned __int64 v13; // [rsp+78h] [rbp-10h]

  v13 = __readfsqword(0x28u);
  v6[0] = &off_4DD818;
  memset(&v6[1], 0, 24);
  v8 = a2;
  v9 = a3;
  v7 = a1;
  if ( a3 )
  {
    if ( sub_11A5E0(a2, nullptr, 0, (__int64)a1) )
      return 1;
    v4 = v7;
    v3 = *v7;
    if ( *v7 == 2 )
      return 1;
  }
  else
  {
    v3 = *(_DWORD *)a1;
    v4 = a1;
  }
  if ( (unsigned int)(v3 - 56) <= 1 && (v4[64] != 8 || (*(_BYTE *)(*((_QWORD *)v4 + 9) + 280LL) & 0x30) == 0) )
    return 1;
  memset(&v10[1], 0, 32);
  v11 = 0;
  v10[0] = &off_4DD6D8;
  v12 = v6;
  return (unsigned int)sub_11E900(a1, (__int64)v10) != 0;
}

