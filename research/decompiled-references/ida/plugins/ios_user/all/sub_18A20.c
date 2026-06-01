int __fastcall sub_18A20(__int64 a1, __int64 a2, const char *a3)
{
  __int64 v4; // rax

  if ( !strcmp(a3, "__dyld_start") )
  {
    v4 = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(v4 + 1792) = a2;
  }
  else
  {
    LODWORD(v4) = strcmp(a3, "_dyld_shared_cache_ranges");
    if ( !(_DWORD)v4 )
    {
      v4 = *(_QWORD *)(a1 + 88);
      *(_QWORD *)(v4 + 1808) = a2;
    }
  }
  return v4;
}

