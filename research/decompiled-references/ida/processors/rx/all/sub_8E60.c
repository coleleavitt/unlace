__int64 __fastcall sub_8E60(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rax
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rcx

  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 16);
  v4 = v2 + 32 * v1;
  if ( v2 != v4 )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = v5;
      v5 = *(_QWORD *)(v2 + 8);
      if ( v5 + *(_QWORD *)(v2 + 16) != v6 )
        break;
      v2 += 32;
      if ( v2 == v4 )
        goto LABEL_6;
    }
    v1 -= (v4 - v2) >> 5;
  }
LABEL_6:
  *(_QWORD *)(a1 + 24) = v1;
  return set_frame_size();
}

