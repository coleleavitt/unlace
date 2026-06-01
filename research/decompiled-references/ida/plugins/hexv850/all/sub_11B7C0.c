_BYTE *__fastcall sub_11B7C0(_BYTE *a1, char a2)
{
  int v2; // eax
  _QWORD v4[5]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v5; // [rsp+28h] [rbp-60h]
  char v6; // [rsp+30h] [rbp-58h]
  _QWORD v7[5]; // [rsp+40h] [rbp-48h] BYREF
  char v8; // [rsp+68h] [rbp-20h]
  _QWORD *v9; // [rsp+70h] [rbp-18h]
  unsigned __int64 v10; // [rsp+78h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v6 = a2;
  v4[0] = off_4B11A8;
  v2 = *(_DWORD *)a1;
  memset(&v4[1], 0, 24);
  v4[4] = a1;
  v5 = 0;
  if ( (unsigned int)(v2 - 56) <= 1 && (a1[32] != 11 || a2) )
    return a1;
  memset(&v7[1], 0, 32);
  v8 = 0;
  v7[0] = off_4B10B8;
  v9 = v4;
  sub_119D40(a1, (__int64)v7);
  return (_BYTE *)v5;
}

