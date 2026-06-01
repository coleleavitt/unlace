__int64 __fastcall sub_8ED50(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  _QWORD v8[6]; // [rsp+0h] [rbp-68h] BYREF
  int v9; // [rsp+30h] [rbp-38h]
  char v10; // [rsp+34h] [rbp-34h]
  unsigned __int64 v11; // [rsp+38h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v5 = j__qalloc_or_throw(1952, a2, a3, a4);
  sub_336F00(v5, a1);
  *(_DWORD *)(v5 + 1512) = 0;
  *(_QWORD *)(v5 + 1520) = -1;
  *(_QWORD *)(v5 + 1528) = 0;
  *(_QWORD *)(v5 + 1536) = 0;
  *(_QWORD *)(v5 + 1544) = 0;
  *(_QWORD *)(v5 + 1568) = 0;
  *(_QWORD *)(v5 + 1592) = 0;
  *(_QWORD *)(v5 + 1600) = 0;
  *(_QWORD *)(v5 + 1608) = 0;
  *(_QWORD *)(v5 + 1616) = 0;
  *(_QWORD *)(v5 + 1624) = 0;
  *(_QWORD *)(v5 + 1632) = 0;
  *(_QWORD *)(v5 + 1656) = 0;
  *(_QWORD *)(v5 + 1664) = 0;
  *(_QWORD *)(v5 + 1672) = 0;
  *(_QWORD *)(v5 + 1696) = 0;
  *(_QWORD *)(v5 + 1704) = 0;
  *(_QWORD *)(v5 + 1712) = 0;
  *(_QWORD *)(v5 + 1736) = 0;
  *(_QWORD *)(v5 + 1760) = 0;
  *(_QWORD *)(v5 + 1768) = 0;
  *(_QWORD *)(v5 + 1776) = 0;
  *(_QWORD *)(v5 + 1800) = 0;
  *(_QWORD *)(v5 + 1808) = 0;
  *(_OWORD *)(v5 + 1552) = 0;
  *(_OWORD *)(v5 + 1576) = 0;
  *(_OWORD *)(v5 + 1640) = 0;
  *(_OWORD *)(v5 + 1680) = 0;
  *(_OWORD *)(v5 + 1720) = 0;
  *(_OWORD *)(v5 + 1744) = 0;
  *(_OWORD *)(v5 + 1784) = 0;
  *(_OWORD *)(v5 + 1816) = 0;
  *(_QWORD *)(v5 + 1832) = 0;
  v6 = *(_QWORD *)(v5 + 1504);
  *(_DWORD *)v5 = 6;
  *(_QWORD *)(v5 + 1856) = 0;
  *(_QWORD *)(v5 + 1864) = 0;
  *(_QWORD *)(v5 + 1872) = 0;
  *(_QWORD *)(v5 + 1896) = 0;
  *(_QWORD *)(v5 + 1920) = 0;
  *(_QWORD *)(v5 + 1928) = 0;
  v8[0] = a2;
  *(_OWORD *)(v5 + 1840) = 0;
  *(_OWORD *)(v5 + 1880) = 0;
  *(_OWORD *)(v5 + 1904) = 0;
  *(_OWORD *)(v5 + 1936) = 0;
  v8[1] = a3 + a2;
  v8[2] = v5;
  v8[3] = v6;
  v8[4] = -1;
  v8[5] = 0;
  v9 = 0;
  v10 = 0;
  if ( !(unsigned __int8)sub_8DF50((const __m128i *)v5, (__int64)v8, (__m128)0LL) )
  {
    if ( v5 )
    {
      sub_84A40((_QWORD *)v5);
      j__qfree(v5);
    }
    return 0;
  }
  return v5;
}

