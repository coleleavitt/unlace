__int64 __fastcall sub_BDBF0(__int64 a1, unsigned __int8 *a2, __int64 *a3, __int64 a4, __m128i a5)
{
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  _BYTE v10[4]; // [rsp+0h] [rbp-48h] BYREF
  int v11; // [rsp+4h] [rbp-44h]
  __int64 v12; // [rsp+8h] [rbp-40h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  sub_123A40((__int64)v10, a2, (__int64)a3, a4);
  v6 = sub_BDAD0(a1, (__int64)v10, 0, a5);
  if ( (_BYTE)v6
    && v10[0] == 2
    && (v8 = sub_32ABC0(*(_QWORD *)(v12 + 16), v11, 0),
        v9 = v8
           & *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 320) + 1504LL) + 96LL) + 24LL) + 16LL),
        v9 == v8) )
  {
    if ( a3 )
      *a3 = v9;
  }
  else
  {
    v6 = 0;
  }
  sub_11CDA0((__int64)v10);
  return v6;
}

