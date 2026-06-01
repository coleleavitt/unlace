int __fastcall sub_19450(__int64 a1, __int64 a2, const char *a3)
{
  _QWORD *v4; // rax

  if ( !strcmp(a3, "_gLoadedKextSummaries") )
  {
    v4 = *(_QWORD **)(a1 + 88);
    v4[241] = a2;
  }
  else if ( !strcmp(a3, "_OSKextLoadedKextSummariesUpdated") )
  {
    v4 = *(_QWORD **)(a1 + 88);
    v4[242] = a2;
  }
  else
  {
    LODWORD(v4) = strcmp(a3, "_collection_mach_headers");
    if ( !(_DWORD)v4 )
    {
      v4 = *(_QWORD **)(a1 + 88);
      v4[244] = a2;
    }
  }
  return (int)v4;
}

