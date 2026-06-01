__int64 __fastcall sub_5EF0(__int64 a1)
{
  __int64 v1; // r11
  __int64 v2; // rax
  __int64 v3; // r8
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rsi

  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 16);
  v3 = v2 + 32 * v1;
  if ( v2 != v3 )
  {
    v4 = 8;
    v5 = 0;
    while ( 1 )
    {
      v6 = v5;
      if ( *(_DWORD *)(v2 + 24) != v4 )
        break;
      v5 = *(_QWORD *)(v2 + 8);
      if ( v5 + *(_QWORD *)(v2 + 16) != v6 )
        break;
      v2 += 32;
      ++v4;
      if ( v2 == v3 )
        goto LABEL_7;
    }
    v1 -= (v3 - v2) >> 5;
  }
LABEL_7:
  *(_QWORD *)(a1 + 24) = v1;
  return set_frame_size();
}

