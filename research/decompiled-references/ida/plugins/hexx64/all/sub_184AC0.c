__int64 __fastcall sub_184AC0(__int64 a1, char *a2, __int64 a3, __int64 a4, __m128i a5)
{
  int v7; // r15d
  unsigned int v8; // ebp
  _QWORD v10[2]; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v11[24]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  v10[0] = 0xFFFFFFFF00000000LL;
  v10[1] = 0;
  v7 = *(_DWORD *)(a4 + 68);
  sub_123A40((__int64)v11, (unsigned __int8 *)(a4 + 48), a3, a4);
  sub_183610(*(_QWORD *)(a3 + 480), (__int64)v11);
  if ( (unsigned __int8)sub_13C7E0(a3, (__int64)v10, (int *)a4, a4 + 32, (__int64)v11, 0xFFFFFFFF, a5) )
  {
    HIDWORD(v10[0]) = v7;
    sub_11CDA0((__int64)v11);
    v8 = sub_1847D0(a1, a2, a3, (char *)v10, *(double *)a5.m128i_i64);
  }
  else
  {
    v8 = 0;
    sub_11CDA0((__int64)v11);
  }
  sub_11CDA0((__int64)v10);
  return v8;
}

