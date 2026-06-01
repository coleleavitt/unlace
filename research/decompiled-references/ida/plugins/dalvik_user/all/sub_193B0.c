__int64 __fastcall sub_193B0(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  char v6; // bl
  _QWORD *v9; // rdi
  _QWORD *v10; // rdi
  char v11; // [rsp-8h] [rbp-8h]

  if ( !a2 )
    return 0xFFFFFFFFLL;
  v11 = v6;
  if ( *(_QWORD *)(a1 + 136) != *(_QWORD *)(a1 + 168) )
  {
    sub_58110(a1, (unsigned int)"not resuming yet because more events are pending.\n", a3, a4, a5, a6, v11);
    return 1;
  }
  if ( *(_DWORD *)(a1 + 1820) != 1 )
    return 1;
  if ( (unsigned __int8)sub_4A5E0(a1 + 864) )
  {
    sub_190F0(*(_QWORD **)(a1 + 1480));
    *(_QWORD *)(a1 + 1480) = 0;
    v9 = *(_QWORD **)(a1 + 1528);
    *(_QWORD *)(a1 + 1488) = a1 + 1472;
    *(_QWORD *)(a1 + 1496) = a1 + 1472;
    *(_QWORD *)(a1 + 1504) = 0;
    sub_18E30(v9);
    *(_QWORD *)(a1 + 1528) = 0;
    v10 = *(_QWORD **)(a1 + 1576);
    *(_QWORD *)(a1 + 1536) = a1 + 1520;
    *(_QWORD *)(a1 + 1544) = a1 + 1520;
    *(_QWORD *)(a1 + 1552) = 0;
    sub_18B70(v10);
    *(_QWORD *)(a1 + 1576) = 0;
    *(_QWORD *)(a1 + 1584) = a1 + 1568;
    *(_QWORD *)(a1 + 1592) = a1 + 1568;
    *(_QWORD *)(a1 + 1600) = 0;
    *(_DWORD *)(a1 + 1820) = 2;
    return 1;
  }
  return 4294967294LL;
}

