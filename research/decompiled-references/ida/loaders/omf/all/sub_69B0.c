__int64 __fastcall sub_69B0(_QWORD *a1, char a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v6; // rax

  if ( a2 )
  {
    sub_5890((__int64)a1, a3, 4);
    v3 = a1[6];
    v4 = *(_DWORD *)(*a1 + v3);
    a1[6] = v3 + 4;
  }
  else
  {
    sub_5890((__int64)a1, a3, 2);
    v6 = a1[6];
    v4 = *(unsigned __int16 *)(*a1 + v6);
    a1[6] = v6 + 2;
  }
  return v4;
}

