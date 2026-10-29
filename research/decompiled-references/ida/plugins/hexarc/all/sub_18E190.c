unsigned __int64 __fastcall sub_18E190(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  unsigned __int64 v4; // rbp
  _QWORD v6[3]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-40h]

  v7 = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)a1 = off_4AA998;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 160) = -1;
  *(_OWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 144) = 0;
  *(_BYTE *)(a1 + 168) = 0;
  v2 = *(int *)(a2 + 64);
  *(_QWORD *)(a1 + 8) = a2;
  if ( v2 )
  {
    v6[0] = 0;
    v6[1] = 0;
    v3 = qvector_reserve();
    v4 = *(_QWORD *)(a1 + 144);
    *(_QWORD *)(a1 + 136) = v3;
    if ( v4 < v2 )
    {
      while ( 1 )
      {
        if ( 16 * v4 + v3 )
          sub_18DF80((__int64 *)(16 * v4 + v3), (__int64)v6);
        if ( v2 == ++v4 )
          break;
        v3 = *(_QWORD *)(a1 + 136);
      }
    }
    *(_QWORD *)(a1 + 144) = v2;
  }
  return v7 - __readfsqword(0x28u);
}

