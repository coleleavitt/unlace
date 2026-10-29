__int64 __fastcall sub_8E790(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  _QWORD v7[6]; // [rsp+0h] [rbp-68h] BYREF
  int v8; // [rsp+30h] [rbp-38h]
  char v9; // [rsp+34h] [rbp-34h]
  unsigned __int64 v10; // [rsp+38h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v4 = j__qalloc_or_throw();
  sub_337060(v4, a1);
  *(_DWORD *)(v4 + 1512) = 0;
  *(_QWORD *)(v4 + 1520) = -1;
  *(_QWORD *)(v4 + 1528) = 0;
  *(_QWORD *)(v4 + 1536) = 0;
  *(_QWORD *)(v4 + 1544) = 0;
  *(_QWORD *)(v4 + 1568) = 0;
  *(_QWORD *)(v4 + 1592) = 0;
  *(_QWORD *)(v4 + 1600) = 0;
  *(_QWORD *)(v4 + 1608) = 0;
  *(_QWORD *)(v4 + 1616) = 0;
  *(_QWORD *)(v4 + 1624) = 0;
  *(_QWORD *)(v4 + 1632) = 0;
  *(_QWORD *)(v4 + 1656) = 0;
  *(_QWORD *)(v4 + 1664) = 0;
  *(_QWORD *)(v4 + 1672) = 0;
  *(_QWORD *)(v4 + 1696) = 0;
  *(_QWORD *)(v4 + 1704) = 0;
  *(_QWORD *)(v4 + 1712) = 0;
  *(_QWORD *)(v4 + 1736) = 0;
  *(_QWORD *)(v4 + 1760) = 0;
  *(_QWORD *)(v4 + 1768) = 0;
  *(_QWORD *)(v4 + 1776) = 0;
  *(_QWORD *)(v4 + 1800) = 0;
  *(_QWORD *)(v4 + 1808) = 0;
  *(_OWORD *)(v4 + 1552) = 0;
  *(_OWORD *)(v4 + 1576) = 0;
  *(_OWORD *)(v4 + 1640) = 0;
  *(_OWORD *)(v4 + 1680) = 0;
  *(_OWORD *)(v4 + 1720) = 0;
  *(_OWORD *)(v4 + 1744) = 0;
  *(_OWORD *)(v4 + 1784) = 0;
  *(_OWORD *)(v4 + 1816) = 0;
  *(_QWORD *)(v4 + 1832) = 0;
  v5 = *(_QWORD *)(v4 + 1504);
  *(_DWORD *)v4 = 6;
  *(_QWORD *)(v4 + 1856) = 0;
  *(_QWORD *)(v4 + 1864) = 0;
  *(_QWORD *)(v4 + 1872) = 0;
  *(_QWORD *)(v4 + 1896) = 0;
  *(_QWORD *)(v4 + 1920) = 0;
  *(_QWORD *)(v4 + 1928) = 0;
  v7[0] = a2;
  *(_OWORD *)(v4 + 1840) = 0;
  *(_OWORD *)(v4 + 1880) = 0;
  *(_OWORD *)(v4 + 1904) = 0;
  *(_OWORD *)(v4 + 1936) = 0;
  v7[1] = a3 + a2;
  v7[2] = v4;
  v7[3] = v5;
  v7[4] = -1;
  v7[5] = 0;
  v8 = 0;
  v9 = 0;
  if ( !(unsigned __int8)sub_8D990((const __m128i *)v4, (__int64)v7) )
  {
    if ( v4 )
    {
      sub_84480((_QWORD *)v4);
      j__qfree();
    }
    return 0;
  }
  return v4;
}

