unsigned __int64 __fastcall sub_3F10F0(__int64 a1, __int64 *a2, int a3, int a4, int a5)
{
  int v5; // r15d
  int i; // ebp
  __int64 v11[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 *v12; // [rsp+20h] [rbp-58h] BYREF
  __int128 v13; // [rsp+28h] [rbp-50h]
  unsigned __int64 v14; // [rsp+38h] [rbp-40h]

  v5 = a5;
  v14 = __readfsqword(0x28u);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
    v5 = -a5;
  if ( a4 > 0 )
  {
    for ( i = 0; i != a4; ++i )
    {
      v11[0] = 0;
      v11[1] = 0;
      sub_63880(v11, a3, a5);
      v12 = nullptr;
      v13 = 0;
      sub_63C80(a2, v11);
      sub_317070(a2 + 2, &v12);
      if ( v12 )
      {
        *(_QWORD *)&v13 = 0;
        qfree();
      }
      a3 += v5;
      qfree();
    }
  }
  return v14 - __readfsqword(0x28u);
}

