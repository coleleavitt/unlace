__int64 __fastcall sub_20E700(__int64 *a1, __int64 a2)
{
  const char *v2; // r15
  __int64 tinfo_property; // rax
  __int64 v4; // rsi
  unsigned int v5; // ebx
  __int64 v7; // [rsp+8h] [rbp-60h] BYREF
  const char *v8; // [rsp+10h] [rbp-58h] BYREF
  __int128 v9; // [rsp+18h] [rbp-50h]
  unsigned __int64 v10; // [rsp+28h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  v8 = nullptr;
  v9 = 0;
  sub_3767A0(*(_QWORD *)(a2 + 8));
  sub_1D2AB0((__int64 *)&v8, *(_QWORD *)(*(_QWORD *)(a2 + 8) + 40LL), 0);
  v2 = s1;
  if ( (_QWORD)v9 )
    v2 = v8;
  v7 = 0;
  tinfo_property = get_tinfo_property();
  v4 = *(_QWORD *)(a2 + 8);
  v7 = tinfo_property;
  v5 = sub_20D2E0((__int64)a1, v4, &v7, v2, -1);
  clear_tinfo_t();
  if ( !(_BYTE)v5 )
    v5 = sub_20DD40(a1, (__int64)&v8, 0);
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree((__int64)v8);
  }
  clear_tinfo_t();
  return v5;
}

