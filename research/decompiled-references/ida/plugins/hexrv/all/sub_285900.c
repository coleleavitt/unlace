__int64 __fastcall sub_285900(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v3; // rbx
  unsigned int v5; // eax
  __int64 v6[9]; // [rsp+0h] [rbp-48h] BYREF

  v2 = 0;
  v6[3] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v3 + 8) == 16 )
  {
    sub_27F000(v6, a1, a2);
    while ( 1 )
    {
      v5 = sub_2851E0((__int64)a1, v6, *(_QWORD *)(v3 + 24));
      if ( !(_BYTE)v5 )
        break;
      v2 = v5;
      v3 = *(_QWORD *)(v6[1] + 40);
    }
  }
  return v2;
}

