__int64 __fastcall sub_5B3B0(__int64 a1, _BYTE *a2, __int64 a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  _BYTE *v7; // [rsp+0h] [rbp-48h] BYREF
  __int128 v8; // [rsp+8h] [rbp-40h]
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v8 = 0;
  v7 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v8 = 2;
  *v7 = 71;
  v7[1] = 0;
  sub_58A80((__int64 *)&v7, a2, a3);
  LOBYTE(v4) = sub_5B360(a1, &v7);
  v5 = v4;
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree();
  }
  return v5;
}

