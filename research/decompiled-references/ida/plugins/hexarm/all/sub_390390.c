__int64 __fastcall sub_390390(__int64 a1, char a2)
{
  _QWORD *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int32 v6; // eax
  __int64 v7; // rdi
  int v8; // edx
  unsigned int v9; // eax
  int v10; // edx
  __int64 v11; // rdx
  __m128i v13; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  sub_38B9D0(a1, 0);
  if ( *(_DWORD *)(a1 + 80) != 1 )
    return 0;
  v3 = *(_QWORD **)(a1 + 88);
  if ( *v3 == -1 || !(unsigned int)sub_263450((__int64)v3) )
    return 0;
  v4 = *(_QWORD *)(a1 + 88);
  if ( v4 )
  {
    v5 = *(_QWORD *)v4;
    v6 = *(_DWORD *)(v4 + 8);
  }
  else
  {
    v5 = -1;
    v6 = 0;
  }
  v7 = *(_QWORD *)(a1 + 32);
  v13.m128i_i64[0] = v5;
  v13.m128i_i32[2] = v6;
  v8 = sub_258260(v7, (unsigned __int64 *)&v13);
  v9 = v8 & 0xFFFFFFFE;
  v10 = v8 | 1;
  if ( !a2 )
    v10 = v9;
  sub_25DCD0(*(_QWORD *)(a1 + 32), &v13, v10);
  sub_2B6C40(
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 216LL) + 112LL),
    **(_QWORD **)(a1 + 32),
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 88LL));
  sub_38FB60(a1, 1u, v11);
  return 1;
}

