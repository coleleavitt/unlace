__int64 __fastcall sub_1F3A0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v4 = sub_15090(a2, a3, a4);
  if ( (_BYTE)v4 )
  {
    if ( *(_QWORD *)(a1 + 2016) > 1u )
    {
      v6 = 0;
      v7 = 0;
      sub_15620(&v6);
      sub_5B360(*(_QWORD *)(a1 + 864), &v6);
      if ( v6 )
      {
        *(_QWORD *)&v7 = 0;
        qfree();
      }
    }
  }
  return v4;
}

