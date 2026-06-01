__int64 __fastcall sub_A910(_QWORD *a1, int a2)
{
  __int64 (__fastcall *v2)(_QWORD *, const char *, __int64); // rcx
  __int64 v4; // rax

  v2 = *(__int64 (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL);
  if ( (*(_BYTE *)(a1[79] + 4LL) & 2) != 0 )
  {
    switch ( a2 )
    {
      case 9:
        return v2(a1, *(const char **)(*(_QWORD *)(a1[78] + 56LL) + 16LL), 33);
      case 10:
        return v2(a1, *(const char **)(*(_QWORD *)(a1[78] + 56LL) + 32LL), 33);
      case 8:
        return v2(a1, **(const char ***)(a1[78] + 56LL), 33);
    }
  }
  if ( a2 == 11
    && (v4 = a1[77], (*(_BYTE *)(v4 + 224) & 0x3B) != 0)
    && (*(_BYTE *)(*(_QWORD *)(v4 + 24) + 4LL) & 0x40) == 0 )
  {
    return v2(a1, "af", 33);
  }
  else
  {
    return v2(a1, *(const char **)(*(_QWORD *)(a1[78] + 56LL) + 8LL * a2), 33);
  }
}

