unsigned __int64 __fastcall sub_3F89A0(__int64 a1, int a2)
{
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 segm_base; // rax
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // rax
  _QWORD v9[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+10h] [rbp-38h] BYREF
  int v11; // [rsp+18h] [rbp-30h]
  unsigned __int64 v12; // [rsp+28h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  if ( a2 == 15 )
  {
    v3 = *(_QWORD *)(a1 + 40);
    v4 = -(__int64)(get_sreg() == 0);
    getseg();
    segm_base = get_segm_base();
    v6 = *(_QWORD *)(a1 + 832);
    v7 = *(_QWORD *)(a1 + 40);
    v9[0] = 0xFFFFFFFF00000000LL;
    v9[1] = 0;
    sub_120450((__int64)v9, v6, v3 + (v4 & 4) + 4 - segm_base, 4, v7, 0);
    if ( LOBYTE(v9[0]) == 2 )
      BYTE1(v9[0]) |= 8u;
    v8 = *(_QWORD *)(a1 + 832);
    v10 = 0x400000001LL;
    v11 = *(_DWORD *)(v8 + 660);
    sub_3F86E0(a1, 4u, (unsigned __int8 *)v9, nullptr, (__int64)&v10);
    sub_11C7E0((__int64)&v10);
    sub_11C7E0((__int64)v9);
  }
  return v12 - __readfsqword(0x28u);
}

