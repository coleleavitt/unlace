__int64 __fastcall sub_2F090(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v5; // rsi
  int v6; // ecx
  unsigned int v7; // ebx
  int v8; // r8d
  int v9; // r9d
  _BYTE *v11; // [rsp+0h] [rbp-48h] BYREF
  __int128 v12; // [rsp+8h] [rbp-40h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v12 = 0;
  v11 = (_BYTE *)qvector_reserve();
  v5 = v11;
  *(_QWORD *)&v12 = 1;
  *v11 = 7;
  v7 = sub_2F010((_QWORD *)(a1 + 1040), (__int64)(v5 + 8), a3);
  if ( (_BYTE)v7 )
  {
    sub_58110(a1, (unsigned int)"dalvik_debmod_t::set_jevent_breakpoint(%a)\n", a3, v6, v8, v9);
    v7 = sub_50D40(a1 + 864, a2, 2, 2, &v11);
  }
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  return v7;
}

