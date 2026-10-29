__int64 __fastcall sub_119560(__int64 a1, __int64 a2)
{
  int v3; // r12d
  int v4; // r13d

  if ( (unsigned __int8)sub_60E40((_QWORD *)a2) )
    return 0;
  v3 = sub_60F20((_QWORD *)a2, 0);
  v4 = sub_61160((_QWORD *)a2, v3);
  if ( (unsigned int)sub_60F20((_QWORD *)a2, v4 + v3) != *(_DWORD *)(a2 + 8) )
    return 0;
  sub_119360(a1);
  *(_BYTE *)a1 = 1;
  *(_DWORD *)(a1 + 8) = v3;
  *(_DWORD *)(a1 + 4) = v4;
  return 1;
}

