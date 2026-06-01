__int64 __fastcall sub_5F3C0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  char v5; // al

  v2 = *(_QWORD *)(a1 + 104);
  if ( v2 )
  {
    *a2 = v2;
    return 0;
  }
  else
  {
    v4 = 8;
    v5 = *(_BYTE *)(a1 + 92) & 0x1F;
    if ( v5 != 12 )
      v4 = 4LL * (v5 == 10);
    *a2 = v4;
    return 0;
  }
}

