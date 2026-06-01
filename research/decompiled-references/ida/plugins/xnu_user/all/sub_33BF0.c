unsigned __int64 __fastcall sub_33BF0(__int64 a1, __int64 a2, __int64 (*a3)(), __int64 (*a4)())
{
  int v4; // r13d
  int v5; // r12d
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 (__fastcall **v10)(); // [rsp+0h] [rbp-58h] BYREF
  __int16 v11; // [rsp+8h] [rbp-50h]
  char v12; // [rsp+Ah] [rbp-4Eh]
  __int64 v13; // [rsp+Bh] [rbp-4Dh]
  __int64 v14; // [rsp+13h] [rbp-45h]
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v4 = (int)a3;
  v15 = __readfsqword(0x28u);
  v5 = (int)a4;
  v10 = off_98080;
  v11 = 0;
  v12 = 0;
  sub_32130(a1, (__m128i *)&v10, a3, a4);
  v6 = (_BYTE)v11 == 0;
  *(_DWORD *)a2 = v4;
  *(_DWORD *)(a2 + 4) = v5;
  if ( v6 )
  {
    v7 = 0;
    v8 = 0;
  }
  else
  {
    v7 = v13;
    v8 = v14;
  }
  v6 = HIBYTE(v11) == 0;
  *(_QWORD *)(a2 + 8) = v7;
  *(_QWORD *)(a2 + 16) = v8;
  if ( !v6 )
    *(_DWORD *)(a2 + 24) |= 1u;
  if ( *(_BYTE *)(a1 + 160) )
    *(_DWORD *)(a2 + 24) |= 2u;
  if ( v12 )
    *(_DWORD *)(a2 + 24) |= 4u;
  return v15 - __readfsqword(0x28u);
}

