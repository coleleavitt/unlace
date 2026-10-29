__int64 __fastcall sub_AEAF0(__int128 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  unsigned int v6; // ebx
  __int64 v8[2]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 *v9; // [rsp+10h] [rbp-48h] BYREF
  __int128 v10; // [rsp+18h] [rbp-40h]
  unsigned __int64 v11; // [rsp+28h] [rbp-30h]

  v4 = *((_QWORD *)&a1 + 1);
  v11 = __readfsqword(0x28u);
  *((_QWORD *)&a1 + 1) = v8;
  v8[0] = 0;
  v8[1] = 0;
  v9 = nullptr;
  v10 = 0;
  sub_123EA0(a1, v4, 0, 0xFFFF0000);
  if ( (unsigned __int8)sub_64780(v8, (_QWORD *)(a3 + 104)) || (unsigned __int8)sub_318470(&v9, a3 + 120) )
  {
    sub_AE9C0(a1, v8, *(_QWORD *)(a1 + 48), a2, 0, 0.0);
    v6 = sub_64880(v8);
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
    qfree((__int64)v9);
  }
  qfree(v8[0]);
  return v6;
}

