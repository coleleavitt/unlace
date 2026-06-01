__int64 __fastcall sub_28A500(_QWORD *a1, __int64 a2, double a3)
{
  unsigned int v3; // r12d
  __int64 v4; // rbx
  unsigned int v6; // eax
  __int64 v7[9]; // [rsp+0h] [rbp-48h] BYREF

  v3 = 0;
  v7[3] = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v4 + 8) == 16 )
  {
    sub_283C00(v7, a1, a2, a3);
    while ( 1 )
    {
      v6 = sub_289DE0((__int64)a1, v7, *(_QWORD *)(v4 + 24), a3);
      if ( !(_BYTE)v6 )
        break;
      v3 = v6;
      v4 = *(_QWORD *)(v7[1] + 40);
    }
  }
  return v3;
}

