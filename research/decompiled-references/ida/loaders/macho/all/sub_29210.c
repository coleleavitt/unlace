__int64 __fastcall sub_29210(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rdi
  bool v6; // zf
  __m128i v8[3]; // [rsp+0h] [rbp-88h] BYREF
  unsigned int v9; // [rsp+30h] [rbp-58h]
  unsigned __int64 v10; // [rsp+58h] [rbp-30h]

  v3 = 0;
  v10 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_290B0(a1, "__PRELINK_DATA", "__data", v8) )
    v3 = v9;
  v4 = operator new(0x38u);
  if ( *(_QWORD *)(a1 + 120) == -1 )
    sub_11CF0();
  v5 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(v4 + 32) = a2;
  v6 = *(_DWORD *)(a1 + 176) == 12;
  *(_QWORD *)v4 = off_642E0;
  *(_QWORD *)(v4 + 24) = v5;
  *(_QWORD *)(v4 + 40) = v3;
  *(_BYTE *)(v4 + 48) = v6;
  *(_QWORD *)(v4 + 8) = qlsize();
  *(_DWORD *)(v4 + 16) = 0;
  return create_generic_linput();
}

