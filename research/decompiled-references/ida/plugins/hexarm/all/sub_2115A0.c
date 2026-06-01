__int64 __fastcall sub_2115A0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 *v6; // [rsp+0h] [rbp-48h] BYREF
  __int128 v7; // [rsp+8h] [rbp-40h]
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v6 = nullptr;
  v7 = 0;
  v4 = sub_257040(a2 + 16, &v6, a3);
  if ( (_BYTE)v4 )
    v4 = sub_210F00(a1, a2, a3, &v6, 0xFFFFFFFF);
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  return v4;
}

