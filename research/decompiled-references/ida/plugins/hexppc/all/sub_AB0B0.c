__int64 __fastcall sub_AB0B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  __int64 v8[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v9; // [rsp+10h] [rbp-48h] BYREF
  __int128 v10; // [rsp+18h] [rbp-40h]
  unsigned __int64 v11; // [rsp+28h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v8[0] = 0;
  v8[1] = 0;
  v9 = 0;
  v10 = 0;
  sub_120460(a1, v8, a2, 0, 4294901760LL);
  if ( (unsigned __int8)sub_60D40(v8, (_QWORD *)(a4 + 104)) || (unsigned __int8)sub_3142F0(&v9, a4 + 120) )
  {
    sub_AAF80(a1, v8, *(_QWORD *)(a1 + 48), a3, 0);
    v6 = sub_60E40(v8);
    if ( (_BYTE)v6 )
      LOBYTE(v6) = (_QWORD)v10 == 0;
  }
  else
  {
    v6 = 1;
  }
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  qfree();
  return v6;
}

