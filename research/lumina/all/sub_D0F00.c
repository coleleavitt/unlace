__int64 __fastcall sub_D0F00(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rdx
  __int64 v4; // rdx

  if ( (*(_BYTE *)(a2 + 7) & 1) != 0 )
  {
    v2 = *(_QWORD *)(a2 + 64);
    v3 = *(_QWORD **)(v2 + 56);
    if ( v3 )
    {
      *v3 = *(_QWORD *)(v2 + 64);
      v4 = *(_QWORD *)(v2 + 64);
      if ( v4 )
        *(_QWORD *)(v4 + 56) = *(_QWORD *)(v2 + 56);
      *(_QWORD *)(v2 + 56) = 0;
    }
  }
  return 0;
}
