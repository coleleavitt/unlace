__int64 __fastcall sub_17E400(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  int v6; // r15d
  unsigned int v7; // ebp
  _QWORD v9[2]; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v10[24]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  v9[0] = 0xFFFFFFFF00000000LL;
  v9[1] = 0;
  v6 = *(_DWORD *)(a4 + 68);
  sub_11D380((__int64)v10, (unsigned __int8 *)(a4 + 48));
  sub_17CF50(*(_QWORD *)(a3 + 480), (__int64)v10);
  if ( (unsigned __int8)sub_136120(a3, (__int64)v9, (int *)a4, a4 + 32, (__int64)v10, 0xFFFFFFFF) )
  {
    HIDWORD(v9[0]) = v6;
    sub_1166E0((__int64)v10);
    v7 = sub_17E110(a1, a2, a3, (char *)v9);
  }
  else
  {
    v7 = 0;
    sub_1166E0((__int64)v10);
  }
  sub_1166E0((__int64)v9);
  return v7;
}

